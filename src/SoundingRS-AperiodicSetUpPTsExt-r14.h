/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SoundingRS_AperiodicSetUpPTsExt_r14_H_
#define	_SoundingRS_AperiodicSetUpPTsExt_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SoundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SRS_CC_SetIndex_r14;

/* SoundingRS-AperiodicSetUpPTsExt-r14 */
typedef struct SoundingRS_AperiodicSetUpPTsExt_r14 {
	struct SoundingRS_AperiodicSetUpPTsExt_r14__srs_CC_SetIndexList_r14 {
		A_SEQUENCE_OF(struct SRS_CC_SetIndex_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_CC_SetIndexList_r14;
	SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13_t	 soundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SoundingRS_AperiodicSetUpPTsExt_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SoundingRS_AperiodicSetUpPTsExt_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SoundingRS_AperiodicSetUpPTsExt_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SoundingRS_AperiodicSetUpPTsExt_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SoundingRS_AperiodicSetUpPTsExt_r14_H_ */
#include <asn_internal.h>