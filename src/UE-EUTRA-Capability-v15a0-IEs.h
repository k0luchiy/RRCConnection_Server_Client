/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v15a0_IEs_H_
#define	_UE_EUTRA_Capability_v15a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NeighCellSI-AcquisitionParameters-v15a0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_5GC_Parameters_r15;
struct UE_EUTRA_CapabilityAddXDD_Mode_v15a0;
struct UE_EUTRA_Capability_v1610_IEs;

/* UE-EUTRA-Capability-v15a0-IEs */
typedef struct UE_EUTRA_Capability_v15a0_IEs {
	NeighCellSI_AcquisitionParameters_v15a0_t	 neighCellSI_AcquisitionParameters_v15a0;
	struct EUTRA_5GC_Parameters_r15	*eutra_5GC_Parameters_r15;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_v15a0	*fdd_Add_UE_EUTRA_Capabilities_v15a0;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_v15a0	*tdd_Add_UE_EUTRA_Capabilities_v15a0;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v1610_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v15a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v15a0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v15a0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v15a0_IEs_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v15a0_IEs_H_ */
#include <asn_internal.h>
