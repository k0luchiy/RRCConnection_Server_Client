/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ULDedicatedMessageSegment_r16_H_
#define	_ULDedicatedMessageSegment_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ULDedicatedMessageSegment-r16-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULDedicatedMessageSegment_r16__criticalExtensions_PR {
	ULDedicatedMessageSegment_r16__criticalExtensions_PR_NOTHING,	/* No components present */
	ULDedicatedMessageSegment_r16__criticalExtensions_PR_ulDedicatedMessageSegment_r16,
	ULDedicatedMessageSegment_r16__criticalExtensions_PR_criticalExtensionsFuture
} ULDedicatedMessageSegment_r16__criticalExtensions_PR;

/* ULDedicatedMessageSegment-r16 */
typedef struct ULDedicatedMessageSegment_r16 {
	struct ULDedicatedMessageSegment_r16__criticalExtensions {
		ULDedicatedMessageSegment_r16__criticalExtensions_PR present;
		union ULDedicatedMessageSegment_r16__criticalExtensions_u {
			ULDedicatedMessageSegment_r16_IEs_t	 ulDedicatedMessageSegment_r16;
			struct ULDedicatedMessageSegment_r16__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULDedicatedMessageSegment_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULDedicatedMessageSegment_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_ULDedicatedMessageSegment_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_ULDedicatedMessageSegment_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ULDedicatedMessageSegment_r16_H_ */
#include <asn_internal.h>
