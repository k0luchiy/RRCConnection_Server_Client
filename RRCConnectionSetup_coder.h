#ifndef _RRCCONNECTIONSETUPCODER_H
#define _RRCCONNECTIONSETUPCODER_H

#include <stdio.h>
#include <sys/types.h>

#include "DL-CCCH-Message.h"
#include "RRCConnectionSetup.h"


void RRCConnectionSetup_coder(uint8_t **buffer, ssize_t *len);
asn_dec_rval_t RRCConnectionSetup_decoder(DL_CCCH_Message_t* dl_ccch_msg, uint8_t **buffer, ssize_t *len);

#endif