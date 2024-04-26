/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EventType_r17_H_
#define	_EventType_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "ThresholdEUTRA.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventType_r17_PR {
	EventType_r17_PR_NOTHING,	/* No components present */
	EventType_r17_PR_outOfCoverage,
	EventType_r17_PR_eventL1
	/* Extensions may appear below */
	
} EventType_r17_PR;

/* EventType-r17 */
typedef struct EventType_r17 {
	EventType_r17_PR present;
	union EventType_r17_u {
		NULL_t	 outOfCoverage;
		struct EventType_r17__eventL1 {
			ThresholdEUTRA_t	 l1_Threshold_r17;
			Hysteresis_t	 hysteresis_r17;
			TimeToTrigger_t	 timeToTrigger_r17;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} eventL1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventType_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventType_r17;
extern asn_CHOICE_specifics_t asn_SPC_EventType_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_EventType_r17_1[2];
extern asn_per_constraints_t asn_PER_type_EventType_r17_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EventType_r17_H_ */
#include <asn_internal.h>
