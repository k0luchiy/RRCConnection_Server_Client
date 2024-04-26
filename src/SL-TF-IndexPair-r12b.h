/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_TF_IndexPair_r12b_H_
#define	_SL_TF_IndexPair_r12b_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-TF-IndexPair-r12b */
typedef struct SL_TF_IndexPair_r12b {
	long	*discSF_Index_r12b;	/* OPTIONAL */
	long	*discPRB_Index_r12b;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TF_IndexPair_r12b_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TF_IndexPair_r12b;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_TF_IndexPair_r12b_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TF_IndexPair_r12b_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_TF_IndexPair_r12b_H_ */
#include <asn_internal.h>