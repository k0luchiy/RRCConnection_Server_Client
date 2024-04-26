/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PDSCH_ConfigDedicated_v1430_H_
#define	_PDSCH_ConfigDedicated_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigDedicated_v1430__ce_PDSCH_MaxBandwidth_r14 {
	PDSCH_ConfigDedicated_v1430__ce_PDSCH_MaxBandwidth_r14_bw5	= 0,
	PDSCH_ConfigDedicated_v1430__ce_PDSCH_MaxBandwidth_r14_bw20	= 1
} e_PDSCH_ConfigDedicated_v1430__ce_PDSCH_MaxBandwidth_r14;
typedef enum PDSCH_ConfigDedicated_v1430__ce_PDSCH_TenProcesses_r14 {
	PDSCH_ConfigDedicated_v1430__ce_PDSCH_TenProcesses_r14_on	= 0
} e_PDSCH_ConfigDedicated_v1430__ce_PDSCH_TenProcesses_r14;
typedef enum PDSCH_ConfigDedicated_v1430__ce_HARQ_AckBundling_r14 {
	PDSCH_ConfigDedicated_v1430__ce_HARQ_AckBundling_r14_on	= 0
} e_PDSCH_ConfigDedicated_v1430__ce_HARQ_AckBundling_r14;
typedef enum PDSCH_ConfigDedicated_v1430__ce_SchedulingEnhancement_r14 {
	PDSCH_ConfigDedicated_v1430__ce_SchedulingEnhancement_r14_range1	= 0,
	PDSCH_ConfigDedicated_v1430__ce_SchedulingEnhancement_r14_range2	= 1
} e_PDSCH_ConfigDedicated_v1430__ce_SchedulingEnhancement_r14;
typedef enum PDSCH_ConfigDedicated_v1430__tbsIndexAlt2_r14 {
	PDSCH_ConfigDedicated_v1430__tbsIndexAlt2_r14_b33	= 0
} e_PDSCH_ConfigDedicated_v1430__tbsIndexAlt2_r14;

/* PDSCH-ConfigDedicated-v1430 */
typedef struct PDSCH_ConfigDedicated_v1430 {
	long	*ce_PDSCH_MaxBandwidth_r14;	/* OPTIONAL */
	long	*ce_PDSCH_TenProcesses_r14;	/* OPTIONAL */
	long	*ce_HARQ_AckBundling_r14;	/* OPTIONAL */
	long	*ce_SchedulingEnhancement_r14;	/* OPTIONAL */
	long	*tbsIndexAlt2_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicated_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_MaxBandwidth_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_PDSCH_TenProcesses_r14_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_HARQ_AckBundling_r14_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_SchedulingEnhancement_r14_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tbsIndexAlt2_r14_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1430_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigDedicated_v1430_H_ */
#include <asn_internal.h>
