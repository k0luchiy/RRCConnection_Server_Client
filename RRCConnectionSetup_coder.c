#include <arpa/inet.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include "SRB-ToAddModList.h"
#include "DRB-ToAddModList.h"
#include "DRB-ToReleaseList.h"
#include "SPS-Config.h"
#include "PhysicalConfigDedicated.h"


#include "DL-CCCH-Message.h"
#include "RRCConnectionSetup.h"
#include "RRCConnectionSetup-r8-IEs.h"
#include "RadioResourceConfigDedicated.h"
#include "MAC-MainConfig.h"

#include "RRCConnectionSetup_coder.h"

#define PAYLOAD_MAX 100

#define asn1cSeqAdd(VaR, PtR) \
    if (asn_sequence_add(VaR, PtR) != 0) assert(0)


void RRCConnectionSetup_coder(uint8_t **buffer, ssize_t *len) {
    DL_CCCH_Message_t dl_ccch_msg;
    RRCConnectionSetup_t* out = NULL; 
    RRCConnectionSetup_r8_IEs_t* ie = NULL;
    RadioResourceConfigDedicated_t* radio_config = NULL; 


    memset((void *)&dl_ccch_msg,0,sizeof(DL_CCCH_Message_t));
    dl_ccch_msg.message.present = DL_CCCH_MessageType_PR_c1;
    dl_ccch_msg.message.choice.c1.present = DL_CCCH_MessageType__c1_PR_rrcConnectionSetup;
    out = &dl_ccch_msg.message.choice.c1.choice.rrcConnectionSetup;
    
    out->rrc_TransactionIdentifier = 2;
    out->criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1; 
    out->criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8;
    
    ie = &out->criticalExtensions.choice.c1.choice.rrcConnectionSetup_r8;
    radio_config = &ie->radioResourceConfigDedicated;

    
    radio_config->mac_MainConfig = (struct RadioResourceConfigDedicated__mac_MainConfig*)calloc(1, sizeof(struct RadioResourceConfigDedicated__mac_MainConfig));
    radio_config->mac_MainConfig->present = RadioResourceConfigDedicated__mac_MainConfig_PR_defaultValue; 
    
    radio_config->srb_ToAddModList = NULL;
    radio_config->drb_ToAddModList = NULL;
    radio_config->drb_ToReleaseList = NULL;
    radio_config->sps_Config = NULL;
    radio_config->physicalConfigDedicated = NULL;
    


    asn_enc_rval_t enc_rval = uper_encode_to_buffer(&asn_DEF_DL_CCCH_Message,
                                   NULL,
                                   (void **)&dl_ccch_msg,
                                   buffer,
                                   1000);

    if(enc_rval.encoded == NULL){
       printf("Failed to encode setup complete data, %d bytes was encoded\n", enc_rval.encoded);
       exit(-1);
    }
}

asn_dec_rval_t RRCConnectionSetup_decoder(DL_CCCH_Message_t* dl_ccch_msg, uint8_t **buffer, ssize_t *len){
    return uper_decode(0, &asn_DEF_DL_CCCH_Message, (void *)&dl_ccch_msg, buffer, sizeof(DL_CCCH_Message_t), 0, 0);
}

