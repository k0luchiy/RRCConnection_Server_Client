/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DL_CCCH_Message_H_
#define	_DL_CCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-CCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-CCCH-Message */
typedef struct DL_CCCH_Message {
	DL_CCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CCCH_Message_H_ */
#include <asn_internal.h>
