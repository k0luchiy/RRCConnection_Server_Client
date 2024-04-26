/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NTN_Parameters_r17_H_
#define	_NTN_Parameters_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NTN_Parameters_r17__ntn_Connectivity_EPC_r17 {
	NTN_Parameters_r17__ntn_Connectivity_EPC_r17_supported	= 0
} e_NTN_Parameters_r17__ntn_Connectivity_EPC_r17;
typedef enum NTN_Parameters_r17__ntn_TA_Report_r17 {
	NTN_Parameters_r17__ntn_TA_Report_r17_supported	= 0
} e_NTN_Parameters_r17__ntn_TA_Report_r17;
typedef enum NTN_Parameters_r17__ntn_PUR_TimerDelay_r17 {
	NTN_Parameters_r17__ntn_PUR_TimerDelay_r17_supported	= 0
} e_NTN_Parameters_r17__ntn_PUR_TimerDelay_r17;
typedef enum NTN_Parameters_r17__ntn_OffsetTimingEnh_r17 {
	NTN_Parameters_r17__ntn_OffsetTimingEnh_r17_supported	= 0
} e_NTN_Parameters_r17__ntn_OffsetTimingEnh_r17;
typedef enum NTN_Parameters_r17__ntn_ScenarioSupport_r17 {
	NTN_Parameters_r17__ntn_ScenarioSupport_r17_ngso	= 0,
	NTN_Parameters_r17__ntn_ScenarioSupport_r17_gso	= 1
} e_NTN_Parameters_r17__ntn_ScenarioSupport_r17;

/* NTN-Parameters-r17 */
typedef struct NTN_Parameters_r17 {
	long	*ntn_Connectivity_EPC_r17;	/* OPTIONAL */
	long	*ntn_TA_Report_r17;	/* OPTIONAL */
	long	*ntn_PUR_TimerDelay_r17;	/* OPTIONAL */
	long	*ntn_OffsetTimingEnh_r17;	/* OPTIONAL */
	long	*ntn_ScenarioSupport_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NTN_Parameters_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_Connectivity_EPC_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_TA_Report_r17_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_PUR_TimerDelay_r17_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_OffsetTimingEnh_r17_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ntn_ScenarioSupport_r17_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NTN_Parameters_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NTN_Parameters_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NTN_Parameters_r17_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NTN_Parameters_r17_H_ */
#include <asn_internal.h>
