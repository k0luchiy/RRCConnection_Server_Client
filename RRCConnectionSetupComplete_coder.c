#include <arpa/inet.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>


#include "UL-DCCH-Message.h"
#include "RRCConnectionSetupComplete.h"

#include "RRCConnectionSetupComplete_coder.h"


void RRCConnectionSetupComplete_coder(uint8_t **buffer, ssize_t *len) {

    UL_DCCH_Message_t ul_dcch_msg;
    RRCConnectionSetupComplete_t* setupComplete = NULL; 
    const char *nas = "hello";

    memset((void *)&ul_dcch_msg,0,sizeof(UL_DCCH_Message_t));
    ul_dcch_msg.message.present = UL_DCCH_MessageType_PR_c1;
    ul_dcch_msg.message.choice.c1.present = UL_DCCH_MessageType__c1_PR_rrcConnectionSetupComplete;

    setupComplete = &ul_dcch_msg.message.choice.c1.choice.rrcConnectionSetupComplete;
    setupComplete->criticalExtensions.present = RRCConnectionSetupComplete__criticalExtensions_PR_c1;
    setupComplete->criticalExtensions.choice.c1.present = RRCConnectionSetupComplete__criticalExtensions__c1_PR_rrcConnectionSetupComplete_r8;
    setupComplete->criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.selectedPLMN_Identity = 1;
    
    OCTET_STRING_fromBuf(&setupComplete->criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.dedicatedInfoNAS, 
            nas, strlen(nas));

    asn_enc_rval_t enc_rval = uper_encode_to_buffer(&asn_DEF_UL_DCCH_Message,
                                    NULL,
                                    (void *)&ul_dcch_msg,
                                    buffer,
                                    1000);


    if(enc_rval.encoded == NULL){
       printf("Failed to encode setup complete data, %d bytes was encoded\n", enc_rval.encoded);
       exit(-1);
    }
}

asn_dec_rval_t RRCConnectionSetupComplete_decoder(UL_DCCH_Message_t* ul_dcch_msg, uint8_t **buffer, ssize_t *len){
    return uper_decode(0, &asn_DEF_UL_DCCH_Message, (void **)&ul_dcch_msg, buffer, sizeof(UL_DCCH_Message_t), 0,0);
}

