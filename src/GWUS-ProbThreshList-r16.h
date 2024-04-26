/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_GWUS_ProbThreshList_r16_H_
#define	_GWUS_ProbThreshList_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GWUS-PagingProbThresh-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GWUS-ProbThreshList-r16 */
typedef struct GWUS_ProbThreshList_r16 {
	A_SEQUENCE_OF(GWUS_PagingProbThresh_r16_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GWUS_ProbThreshList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GWUS_ProbThreshList_r16;
extern asn_SET_OF_specifics_t asn_SPC_GWUS_ProbThreshList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_GWUS_ProbThreshList_r16_1[1];
extern asn_per_constraints_t asn_PER_type_GWUS_ProbThreshList_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GWUS_ProbThreshList_r16_H_ */
#include <asn_internal.h>
