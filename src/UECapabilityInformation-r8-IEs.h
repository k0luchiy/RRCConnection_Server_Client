/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UECapabilityInformation_r8_IEs_H_
#define	_UECapabilityInformation_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-CapabilityRAT-ContainerList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UECapabilityInformation_v8a0_IEs;

/* UECapabilityInformation-r8-IEs */
typedef struct UECapabilityInformation_r8_IEs {
	UE_CapabilityRAT_ContainerList_t	 ue_CapabilityRAT_ContainerList;
	struct UECapabilityInformation_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityInformation_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityInformation_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityInformation_r8_IEs_H_ */
#include <asn_internal.h>
