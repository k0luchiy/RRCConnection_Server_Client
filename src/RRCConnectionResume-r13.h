/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionResume_r13_H_
#define	_RRCConnectionResume_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "RRCConnectionResume-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResume_r13__criticalExtensions_PR {
	RRCConnectionResume_r13__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionResume_r13__criticalExtensions_PR_c1,
	RRCConnectionResume_r13__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionResume_r13__criticalExtensions_PR;
typedef enum RRCConnectionResume_r13__criticalExtensions__c1_PR {
	RRCConnectionResume_r13__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRCConnectionResume_r13__criticalExtensions__c1_PR_rrcConnectionResume_r13,
	RRCConnectionResume_r13__criticalExtensions__c1_PR_spare3,
	RRCConnectionResume_r13__criticalExtensions__c1_PR_spare2,
	RRCConnectionResume_r13__criticalExtensions__c1_PR_spare1
} RRCConnectionResume_r13__criticalExtensions__c1_PR;

/* RRCConnectionResume-r13 */
typedef struct RRCConnectionResume_r13 {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionResume_r13__criticalExtensions {
		RRCConnectionResume_r13__criticalExtensions_PR present;
		union RRCConnectionResume_r13__criticalExtensions_u {
			struct RRCConnectionResume_r13__criticalExtensions__c1 {
				RRCConnectionResume_r13__criticalExtensions__c1_PR present;
				union RRCConnectionResume_r13__criticalExtensions__c1_u {
					RRCConnectionResume_r13_IEs_t	 rrcConnectionResume_r13;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct RRCConnectionResume_r13__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionResume_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionResume_r13_H_ */
#include <asn_internal.h>
