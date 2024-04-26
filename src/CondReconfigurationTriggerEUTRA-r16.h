/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CondReconfigurationTriggerEUTRA_r16_H_
#define	_CondReconfigurationTriggerEUTRA_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include "ThresholdEUTRA.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR {
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_NOTHING,	/* No components present */
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventA3_r16,
	CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventA5_r16
	/* Extensions may appear below */
	
} CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR;

/* CondReconfigurationTriggerEUTRA-r16 */
typedef struct CondReconfigurationTriggerEUTRA_r16 {
	struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16 {
		CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR present;
		union CondReconfigurationTriggerEUTRA_r16__condEventId_r16_u {
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventA3_r16 {
				long	 a3_Offset_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventA3_r16;
			struct CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventA5_r16 {
				ThresholdEUTRA_t	 a5_Threshold1_r16;
				ThresholdEUTRA_t	 a5_Threshold2_r16;
				Hysteresis_t	 hysteresis_r16;
				TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventA5_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} condEventId_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CondReconfigurationTriggerEUTRA_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CondReconfigurationTriggerEUTRA_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_CondReconfigurationTriggerEUTRA_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_CondReconfigurationTriggerEUTRA_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CondReconfigurationTriggerEUTRA_r16_H_ */
#include <asn_internal.h>
