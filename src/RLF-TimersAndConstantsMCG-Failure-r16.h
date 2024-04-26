/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RLF_TimersAndConstantsMCG_Failure_r16_H_
#define	_RLF_TimersAndConstantsMCG_Failure_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLF_TimersAndConstantsMCG_Failure_r16_PR {
	RLF_TimersAndConstantsMCG_Failure_r16_PR_NOTHING,	/* No components present */
	RLF_TimersAndConstantsMCG_Failure_r16_PR_release,
	RLF_TimersAndConstantsMCG_Failure_r16_PR_setup
} RLF_TimersAndConstantsMCG_Failure_r16_PR;
typedef enum RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16 {
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms50	= 0,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms100	= 1,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms200	= 2,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms300	= 3,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms400	= 4,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms500	= 5,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms600	= 6,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms1000	= 7,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms1500	= 8,
	RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16_ms2000	= 9
} e_RLF_TimersAndConstantsMCG_Failure_r16__setup__t316_r16;

/* RLF-TimersAndConstantsMCG-Failure-r16 */
typedef struct RLF_TimersAndConstantsMCG_Failure_r16 {
	RLF_TimersAndConstantsMCG_Failure_r16_PR present;
	union RLF_TimersAndConstantsMCG_Failure_r16_u {
		NULL_t	 release;
		struct RLF_TimersAndConstantsMCG_Failure_r16__setup {
			long	 t316_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLF_TimersAndConstantsMCG_Failure_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t316_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLF_TimersAndConstantsMCG_Failure_r16;
extern asn_CHOICE_specifics_t asn_SPC_RLF_TimersAndConstantsMCG_Failure_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_RLF_TimersAndConstantsMCG_Failure_r16_1[2];
extern asn_per_constraints_t asn_PER_type_RLF_TimersAndConstantsMCG_Failure_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RLF_TimersAndConstantsMCG_Failure_r16_H_ */
#include <asn_internal.h>