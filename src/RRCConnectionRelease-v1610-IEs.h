/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionRelease_v1610_IEs_H_
#define	_RRCConnectionRelease_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "I-RNTI-r15.h"
#include "ShortI-RNTI-r15.h"
#include <NativeEnumerated.h>
#include <NULL.h>
#include "PUR-Config-r16.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRelease_v1610_IEs__pur_Config_r16_PR {
	RRCConnectionRelease_v1610_IEs__pur_Config_r16_PR_NOTHING,	/* No components present */
	RRCConnectionRelease_v1610_IEs__pur_Config_r16_PR_release,
	RRCConnectionRelease_v1610_IEs__pur_Config_r16_PR_setup
} RRCConnectionRelease_v1610_IEs__pur_Config_r16_PR;
typedef enum RRCConnectionRelease_v1610_IEs__releaseIdleMeasConfig_r16 {
	RRCConnectionRelease_v1610_IEs__releaseIdleMeasConfig_r16_true	= 0
} e_RRCConnectionRelease_v1610_IEs__releaseIdleMeasConfig_r16;
typedef enum RRCConnectionRelease_v1610_IEs__altFreqPriorities_r16 {
	RRCConnectionRelease_v1610_IEs__altFreqPriorities_r16_true	= 0
} e_RRCConnectionRelease_v1610_IEs__altFreqPriorities_r16;
typedef enum RRCConnectionRelease_v1610_IEs__t323_r16 {
	RRCConnectionRelease_v1610_IEs__t323_r16_min5	= 0,
	RRCConnectionRelease_v1610_IEs__t323_r16_min10	= 1,
	RRCConnectionRelease_v1610_IEs__t323_r16_min20	= 2,
	RRCConnectionRelease_v1610_IEs__t323_r16_min30	= 3,
	RRCConnectionRelease_v1610_IEs__t323_r16_min60	= 4,
	RRCConnectionRelease_v1610_IEs__t323_r16_min120	= 5,
	RRCConnectionRelease_v1610_IEs__t323_r16_min180	= 6,
	RRCConnectionRelease_v1610_IEs__t323_r16_min720	= 7
} e_RRCConnectionRelease_v1610_IEs__t323_r16;

/* Forward declarations */
struct RRC_InactiveConfig_v1610;
struct RRCConnectionRelease_v1650_IEs;

/* RRCConnectionRelease-v1610-IEs */
typedef struct RRCConnectionRelease_v1610_IEs {
	I_RNTI_r15_t	*fullI_RNTI_r16;	/* OPTIONAL */
	ShortI_RNTI_r15_t	*shortI_RNTI_r16;	/* OPTIONAL */
	struct RRCConnectionRelease_v1610_IEs__pur_Config_r16 {
		RRCConnectionRelease_v1610_IEs__pur_Config_r16_PR present;
		union RRCConnectionRelease_v1610_IEs__pur_Config_r16_u {
			NULL_t	 release;
			PUR_Config_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pur_Config_r16;
	struct RRC_InactiveConfig_v1610	*rrc_InactiveConfig_v1610;	/* OPTIONAL */
	long	*releaseIdleMeasConfig_r16;	/* OPTIONAL */
	long	*altFreqPriorities_r16;	/* OPTIONAL */
	long	*t323_r16;	/* OPTIONAL */
	struct RRCConnectionRelease_v1650_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_releaseIdleMeasConfig_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_altFreqPriorities_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t323_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionRelease_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionRelease_v1610_IEs_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_v1610_IEs_H_ */
#include <asn_internal.h>