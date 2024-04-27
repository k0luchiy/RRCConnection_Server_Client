#include <arpa/inet.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include "UL-CCCH-Message.h"
#include "RRCConnectionRequest.h"

#include "RRCConnectionRequest_coder.h"

#define PAYLOAD_MAX 100

#define asn1cSeqAdd(VaR, PtR) \
    if (asn_sequence_add(VaR, PtR) != 0) assert(0)


asn_enc_rval_t RRCConnectionRequest_coder(uint8_t **buffer, ssize_t *len) {

    UL_CCCH_Message_t ul_ccch_msg;

    RRCConnectionRequest_t* setup = NULL; 
    RRCConnectionRequest_r8_IEs_t* ie = NULL;

    memset((void *)&ul_ccch_msg,0,sizeof(UL_CCCH_Message_t));
    ul_ccch_msg.message.present = UL_CCCH_MessageType_PR_c1;
    ul_ccch_msg.message.choice.c1.present = UL_CCCH_MessageType__c1_PR_rrcConnectionRequest;

    setup = &ul_ccch_msg.message.choice.c1.choice.rrcConnectionRequest;
    setup->criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;

    ie = &setup->criticalExtensions.choice.rrcConnectionRequest_r8;
    
    const char *randValue = "144396392562";
    const char* spare = "a";
    uint8_t buf[5],buf2=0;
    uint8_t *rv = (uint8_t*)calloc(1, sizeof(uint8_t));;
    *rv = 100;

    ie->ue_Identity.present = InitialUE_Identity_PR_randomValue;
    ie->ue_Identity.choice.randomValue.size = 5;
    ie->ue_Identity.choice.randomValue.bits_unused = 0;
    ie->ue_Identity.choice.randomValue.buf = buf;
    ie->ue_Identity.choice.randomValue.buf[0] = rv[0];
    ie->ue_Identity.choice.randomValue.buf[1] = rv[1];
    ie->ue_Identity.choice.randomValue.buf[2] = rv[2];
    ie->ue_Identity.choice.randomValue.buf[3] = rv[3];
    ie->ue_Identity.choice.randomValue.buf[4] = rv[4]; 
    ie->establishmentCause = EstablishmentCause_highPriorityAccess; 
    ie->spare.buf = &buf2;
    ie->spare.size=1;
    ie->spare.bits_unused = 7;


    //xer_fprint(stdout, &asn_DEF_UL_CCCH_Message, (void *)&ul_ccch_msg);

    asn_enc_rval_t enc_rval = uper_encode_to_buffer(&asn_DEF_UL_CCCH_Message,
                                    NULL,
                                    (void *)&ul_ccch_msg,
                                    buffer,
                                    sizeof(UL_CCCH_Message_t));

    
    return enc_rval;
}


asn_dec_rval_t RRCConnectionRequest_decoder(UL_CCCH_Message_t** ul_ccch_msg, uint8_t **buffer, size_t len){
    asn_dec_rval_t rval = uper_decode(0, &asn_DEF_UL_CCCH_Message, (void **)ul_ccch_msg, buffer, sizeof(UL_CCCH_Message_t), 0,0);
    return rval;
}
