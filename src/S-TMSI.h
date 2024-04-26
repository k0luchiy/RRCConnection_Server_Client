/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_S_TMSI_H_
#define	_S_TMSI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MMEC.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S-TMSI */
typedef struct S_TMSI {
	MMEC_t	 mmec;
	BIT_STRING_t	 m_TMSI;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S_TMSI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_TMSI;
extern asn_SEQUENCE_specifics_t asn_SPC_S_TMSI_specs_1;
extern asn_TYPE_member_t asn_MBR_S_TMSI_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _S_TMSI_H_ */
#include <asn_internal.h>
