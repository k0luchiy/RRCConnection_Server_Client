#ifndef _RRCCONNECTIONREQUESTCODER_H
#define _RRCCONNECTIONREQUESTCODER_H

#include <stdio.h>
#include <sys/types.h>

#include "UL-CCCH-Message.h"
#include "RRCConnectionRequest.h"

asn_enc_rval_t RRCConnectionRequest_coder(uint8_t **buffer, ssize_t *len);
asn_dec_rval_t RRCConnectionRequest_decoder(UL_CCCH_Message_t** ul_ccch_msg, uint8_t **buffer, size_t len);

#endif