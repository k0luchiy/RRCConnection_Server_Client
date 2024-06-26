/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PDSCH_ConfigDedicated_v1610_H_
#define	_PDSCH_ConfigDedicated_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CE-PDSCH-MultiTB-Config-r16.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16_PR {
	PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16_PR_NOTHING,	/* No components present */
	PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16_PR_release,
	PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16_PR_setup
} PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16_PR;

/* PDSCH-ConfigDedicated-v1610 */
typedef struct PDSCH_ConfigDedicated_v1610 {
	struct PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16 {
		PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16_PR present;
		union PDSCH_ConfigDedicated_v1610__ce_PDSCH_MultiTB_Config_r16_u {
			NULL_t	 release;
			CE_PDSCH_MultiTB_Config_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ce_PDSCH_MultiTB_Config_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigDedicated_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigDedicated_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigDedicated_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigDedicated_v1610_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigDedicated_v1610_H_ */
#include <asn_internal.h>
