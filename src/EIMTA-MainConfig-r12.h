/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EIMTA_MainConfig_r12_H_
#define	_EIMTA_MainConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "C-RNTI.h"
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EIMTA_MainConfig_r12_PR {
	EIMTA_MainConfig_r12_PR_NOTHING,	/* No components present */
	EIMTA_MainConfig_r12_PR_release,
	EIMTA_MainConfig_r12_PR_setup
} EIMTA_MainConfig_r12_PR;
typedef enum EIMTA_MainConfig_r12__setup__eimta_CommandPeriodicity_r12 {
	EIMTA_MainConfig_r12__setup__eimta_CommandPeriodicity_r12_sf10	= 0,
	EIMTA_MainConfig_r12__setup__eimta_CommandPeriodicity_r12_sf20	= 1,
	EIMTA_MainConfig_r12__setup__eimta_CommandPeriodicity_r12_sf40	= 2,
	EIMTA_MainConfig_r12__setup__eimta_CommandPeriodicity_r12_sf80	= 3
} e_EIMTA_MainConfig_r12__setup__eimta_CommandPeriodicity_r12;

/* EIMTA-MainConfig-r12 */
typedef struct EIMTA_MainConfig_r12 {
	EIMTA_MainConfig_r12_PR present;
	union EIMTA_MainConfig_r12_u {
		NULL_t	 release;
		struct EIMTA_MainConfig_r12__setup {
			C_RNTI_t	 eimta_RNTI_r12;
			long	 eimta_CommandPeriodicity_r12;
			BIT_STRING_t	 eimta_CommandSubframeSet_r12;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EIMTA_MainConfig_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_eimta_CommandPeriodicity_r12_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EIMTA_MainConfig_r12;
extern asn_CHOICE_specifics_t asn_SPC_EIMTA_MainConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_EIMTA_MainConfig_r12_1[2];
extern asn_per_constraints_t asn_PER_type_EIMTA_MainConfig_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EIMTA_MainConfig_r12_H_ */
#include <asn_internal.h>
