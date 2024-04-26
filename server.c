#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#define _GNU_SOURCE
#include <sys/socket.h>
#include <netinet/in.h>

#include "asn_codecs.h"
#include "RRCConnectionRequest_coder.h"
#include "RRCConnectionSetup_coder.h"
#include "RRCConnectionSetupComplete_coder.h"

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    uint8_t buffer[BUFFER_SIZE] = {0};
    uint8_t setup_msg[BUFFER_SIZE] = { 0 };

    // create a socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP)) == 0) {
        perror("socket failed!");
        exit(EXIT_FAILURE);
    }

    // set socket options
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }

    // setup the server address
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind fails");
        exit(EXIT_FAILURE);
    }

    // start listening for incoming connections
    if (listen(server_fd, 3) < 0) {
        perror("listening failed");
        exit(EXIT_FAILURE);
    }

    // print a message showing that the server is listening on a port
    printf("Server listening on port %d\n", PORT);

    // accept incoming connections
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0) {
        perror("accept failed");
        exit(EXIT_FAILURE);
    }

    // accepting the connection
    printf("Connection accepted\n");

    // read data from the client and print it
    ssize_t valread;
    while ((valread = read(new_socket, buffer, BUFFER_SIZE)) > 0) {

        UL_CCCH_Message_t* ul_ccch_msg = 0; 
        asn_dec_rval_t dec_rval = RRCConnectionRequest_decoder(ul_ccch_msg, buffer, BUFFER_SIZE);
        if(dec_rval.code != RC_OK){
            printf("Failed to decode request data, %d bytes was consumed\n", dec_rval.consumed);
            continue; // yeee should have send reject
        }
        printf("Received data:\n");
        xer_fprint(stdout, &asn_DEF_UL_CCCH_Message, ul_ccch_msg);

        memset(buffer, 0, sizeof(buffer));
        break;
    }

    RCConnectionSetup_coder(&setup_msg, BUFFER_SIZE);
    // if(enc_rval.encoded == NULL){
    //     printf("Failed to encode setup data, %d bytes was encoded\n", enc_rval.encoded);
    // }

    send(new_socket, setup_msg, strlen(setup_msg), 0);

    valread = 0;
    while ((valread = read(new_socket, buffer, BUFFER_SIZE)) > 0) {
        UL_DCCH_Message_t* ul_dcch_msg = 0; 
        asn_dec_rval_t dec_rval = RRCConnectionSetupComplete_decoder(ul_dcch_msg, buffer, BUFFER_SIZE);

        if(dec_rval.code != RC_OK){
            printf("Failed to decode complete data, %d bytes was consumed\n", dec_rval.consumed);
            continue; 
        }
        printf("Received data:\n");
        xer_fprint(stdout, &asn_DEF_UL_DCCH_Message, ul_dcch_msg);

        memset(buffer, 0, sizeof(buffer));
        break;
    }

    // close the socket
    close(server_fd);
    return 0;
}
