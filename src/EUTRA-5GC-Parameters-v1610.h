/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EUTRA_5GC_Parameters_v1610_H_
#define	_EUTRA_5GC_Parameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_5GC_Parameters_v1610__ce_InactiveState_r16 {
	EUTRA_5GC_Parameters_v1610__ce_InactiveState_r16_supported	= 0
} e_EUTRA_5GC_Parameters_v1610__ce_InactiveState_r16;
typedef enum EUTRA_5GC_Parameters_v1610__ce_EUTRA_5GC_r16 {
	EUTRA_5GC_Parameters_v1610__ce_EUTRA_5GC_r16_supported	= 0
} e_EUTRA_5GC_Parameters_v1610__ce_EUTRA_5GC_r16;

/* EUTRA-5GC-Parameters-v1610 */
typedef struct EUTRA_5GC_Parameters_v1610 {
	long	*ce_InactiveState_r16;	/* OPTIONAL */
	long	*ce_EUTRA_5GC_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_5GC_Parameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_InactiveState_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_EUTRA_5GC_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_5GC_Parameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_5GC_Parameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_5GC_Parameters_v1610_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_5GC_Parameters_v1610_H_ */
#include <asn_internal.h>
