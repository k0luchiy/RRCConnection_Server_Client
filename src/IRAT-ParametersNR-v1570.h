/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_IRAT_ParametersNR_v1570_H_
#define	_IRAT_ParametersNR_v1570_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersNR_v1570__ss_SINR_Meas_NR_FR1_r15 {
	IRAT_ParametersNR_v1570__ss_SINR_Meas_NR_FR1_r15_supported	= 0
} e_IRAT_ParametersNR_v1570__ss_SINR_Meas_NR_FR1_r15;
typedef enum IRAT_ParametersNR_v1570__ss_SINR_Meas_NR_FR2_r15 {
	IRAT_ParametersNR_v1570__ss_SINR_Meas_NR_FR2_r15_supported	= 0
} e_IRAT_ParametersNR_v1570__ss_SINR_Meas_NR_FR2_r15;

/* IRAT-ParametersNR-v1570 */
typedef struct IRAT_ParametersNR_v1570 {
	long	*ss_SINR_Meas_NR_FR1_r15;	/* OPTIONAL */
	long	*ss_SINR_Meas_NR_FR2_r15;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersNR_v1570_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ss_SINR_Meas_NR_FR1_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ss_SINR_Meas_NR_FR2_r15_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersNR_v1570;
extern asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersNR_v1570_specs_1;
extern asn_TYPE_member_t asn_MBR_IRAT_ParametersNR_v1570_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersNR_v1570_H_ */
#include <asn_internal.h>
