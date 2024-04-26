/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_FailureInformation_r16_H_
#define	_FailureInformation_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FailureInformation-r16-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureInformation_r16__criticalExtensions_PR {
	FailureInformation_r16__criticalExtensions_PR_NOTHING,	/* No components present */
	FailureInformation_r16__criticalExtensions_PR_failureInformation_r16,
	FailureInformation_r16__criticalExtensions_PR_criticalExtensionsFuture
} FailureInformation_r16__criticalExtensions_PR;

/* FailureInformation-r16 */
typedef struct FailureInformation_r16 {
	struct FailureInformation_r16__criticalExtensions {
		FailureInformation_r16__criticalExtensions_PR present;
		union FailureInformation_r16__criticalExtensions_u {
			FailureInformation_r16_IEs_t	 failureInformation_r16;
			struct FailureInformation_r16__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureInformation_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FailureInformation_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureInformation_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureInformation_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _FailureInformation_r16_H_ */
#include <asn_internal.h>
