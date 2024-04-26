/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_IRAT_ParametersNR_v1610_H_
#define	_IRAT_ParametersNR_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersNR_v1610__nr_HO_ToEN_DC_r16 {
	IRAT_ParametersNR_v1610__nr_HO_ToEN_DC_r16_supported	= 0
} e_IRAT_ParametersNR_v1610__nr_HO_ToEN_DC_r16;
typedef enum IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_FDD_FR1_r16 {
	IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_FDD_FR1_r16_supported	= 0
} e_IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_FDD_FR1_r16;
typedef enum IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_TDD_FR1_r16 {
	IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_TDD_FR1_r16_supported	= 0
} e_IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_TDD_FR1_r16;
typedef enum IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_FDD_FR2_r16 {
	IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_FDD_FR2_r16_supported	= 0
} e_IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_FDD_FR2_r16;
typedef enum IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_TDD_FR2_r16 {
	IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_TDD_FR2_r16_supported	= 0
} e_IRAT_ParametersNR_v1610__ce_EUTRA_5GC_HO_ToNR_TDD_FR2_r16;

/* IRAT-ParametersNR-v1610 */
typedef struct IRAT_ParametersNR_v1610 {
	long	*nr_HO_ToEN_DC_r16;	/* OPTIONAL */
	long	*ce_EUTRA_5GC_HO_ToNR_FDD_FR1_r16;	/* OPTIONAL */
	long	*ce_EUTRA_5GC_HO_ToNR_TDD_FR1_r16;	/* OPTIONAL */
	long	*ce_EUTRA_5GC_HO_ToNR_FDD_FR2_r16;	/* OPTIONAL */
	long	*ce_EUTRA_5GC_HO_ToNR_TDD_FR2_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersNR_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nr_HO_ToEN_DC_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_EUTRA_5GC_HO_ToNR_FDD_FR1_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_EUTRA_5GC_HO_ToNR_TDD_FR1_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_EUTRA_5GC_HO_ToNR_FDD_FR2_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_EUTRA_5GC_HO_ToNR_TDD_FR2_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersNR_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersNR_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersNR_v1610_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersNR_v1610_H_ */
#include <asn_internal.h>