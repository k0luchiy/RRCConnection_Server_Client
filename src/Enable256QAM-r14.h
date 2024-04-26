/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_Enable256QAM_r14_H_
#define	_Enable256QAM_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Enable256QAM_r14_PR {
	Enable256QAM_r14_PR_NOTHING,	/* No components present */
	Enable256QAM_r14_PR_release,
	Enable256QAM_r14_PR_setup
} Enable256QAM_r14_PR;
typedef enum Enable256QAM_r14__setup_PR {
	Enable256QAM_r14__setup_PR_NOTHING,	/* No components present */
	Enable256QAM_r14__setup_PR_tpc_SubframeSet_Configured_r14,
	Enable256QAM_r14__setup_PR_tpc_SubframeSet_NotConfigured_r14
} Enable256QAM_r14__setup_PR;

/* Enable256QAM-r14 */
typedef struct Enable256QAM_r14 {
	Enable256QAM_r14_PR present;
	union Enable256QAM_r14_u {
		NULL_t	 release;
		struct Enable256QAM_r14__setup {
			Enable256QAM_r14__setup_PR present;
			union Enable256QAM_r14__setup_u {
				struct Enable256QAM_r14__setup__tpc_SubframeSet_Configured_r14 {
					BOOLEAN_t	 subframeSet1_DCI_Format0_r14;
					BOOLEAN_t	 subframeSet1_DCI_Format4_r14;
					BOOLEAN_t	 subframeSet2_DCI_Format0_r14;
					BOOLEAN_t	 subframeSet2_DCI_Format4_r14;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} tpc_SubframeSet_Configured_r14;
				struct Enable256QAM_r14__setup__tpc_SubframeSet_NotConfigured_r14 {
					BOOLEAN_t	 dci_Format0_r14;
					BOOLEAN_t	 dci_Format4_r14;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} tpc_SubframeSet_NotConfigured_r14;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Enable256QAM_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Enable256QAM_r14;
extern asn_CHOICE_specifics_t asn_SPC_Enable256QAM_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_Enable256QAM_r14_1[2];
extern asn_per_constraints_t asn_PER_type_Enable256QAM_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Enable256QAM_r14_H_ */
#include <asn_internal.h>
