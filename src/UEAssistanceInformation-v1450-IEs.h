/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UEAssistanceInformation_v1450_IEs_H_
#define	_UEAssistanceInformation_v1450_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OverheatingAssistance_r14;
struct UEAssistanceInformation_v1530_IEs;

/* UEAssistanceInformation-v1450-IEs */
typedef struct UEAssistanceInformation_v1450_IEs {
	struct OverheatingAssistance_r14	*overheatingAssistance_r14;	/* OPTIONAL */
	struct UEAssistanceInformation_v1530_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_v1450_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_v1450_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_v1450_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformation_v1450_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UEAssistanceInformation_v1450_IEs_H_ */
#include <asn_internal.h>
