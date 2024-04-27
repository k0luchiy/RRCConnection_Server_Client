#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include "asn_codecs.h"
#include "RRCConnectionRequest_coder.h"
#include "RRCConnectionSetup_coder.h"
#include "RRCConnectionSetupComplete_coder.h"


#define PORT 8080
#define BUFFER_SIZE 1024


int main(int argc, char const* argv[])
{
    int status, valread, client_fd;
    struct sockaddr_in serv_addr;
    char req_buffer[BUFFER_SIZE] = { 0 };
    char buffer[BUFFER_SIZE] = { 0 };
    size_t buffer_size = 1024; 

    if ((client_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP)) < 0) {
        printf("\n Socket creation error \n");
        return -1;
    }
 
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
 
    // Convert IPv4 and IPv6 addresses from text to binary
    // form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)
        <= 0) {
        printf(
            "\nInvalid address/ Address not supported \n");
        return -1;
    }
if ((status
         = connect(client_fd, (struct sockaddr*)&serv_addr,
                   sizeof(serv_addr)))
        < 0) {
        printf("\nConnection Failed \n");
        return -1;
    }
    
    
   //RRCConnectionRequest_coder(&req_buffer, &buffer_size);
   asn_enc_rval_t enc_req_rval = RRCConnectionSetup_coder(&req_buffer, BUFFER_SIZE);
   if(enc_req_rval.encoded == NULL){
       printf("Failed to encode request data, %d bytes was encoded\n", enc_req_rval.encoded);
       return -1;
   }

   send(client_fd, req_buffer, strlen(req_buffer), 0);

    //ssize_t valread;
    while ((valread = read(client_fd, buffer, BUFFER_SIZE)) > 0) {
        DL_CCCH_Message_t* dl_ccch_msg = 0; 
        asn_dec_rval_t dec_rval = RRCConnectionSetup_decoder(&dl_ccch_msg, buffer, strlen(buffer));
        if(dec_rval.code != RC_OK){
            printf("Failed to decode request data, %d bytes was consumed\n", dec_rval.consumed);
            continue; // yeee should have send reject
        }
        printf("Received data:\n");
        xer_fprint(stdout, &asn_DEF_DL_CCCH_Message, dl_ccch_msg);

        memset(buffer, 0, sizeof(buffer));
        break;
    }

    memset(req_buffer, 0, sizeof(req_buffer));

    //RRCConnectionSetupComplete_coder(&req_buffer, &buffer_size);
    asn_enc_rval_t enc_cont_rval = RRCConnectionSetupComplete_coder(&req_buffer, BUFFER_SIZE);
    if(enc_cont_rval.encoded == NULL){
       printf("Failed to encode setup complete data, %d bytes was encoded\n", enc_cont_rval.encoded);
       return -1;
    }

    send(client_fd, req_buffer, strlen(req_buffer), 0);
    
 
    // closing the connected socket
    close(client_fd);
    return 0;
}
