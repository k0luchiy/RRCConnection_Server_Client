#ifndef _RRCCONNECTIONSETUPCOMPLETECODER_H
#define _RRCCONNECTIONSETUPCOMPLETECODER_H

#include <stdio.h>
#include <sys/types.h>
#include "RRCConnectionSetupComplete.h"
#include "UL-DCCH-Message.h"


asn_enc_rval_t RRCConnectionSetupComplete_coder(uint8_t **buffer, ssize_t *len);
asn_dec_rval_t RRCConnectionSetupComplete_decoder(UL_DCCH_Message_t** ul_dcch_msg, uint8_t **buffer, size_t len);

#endif