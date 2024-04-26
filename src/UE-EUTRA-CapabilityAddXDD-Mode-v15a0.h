/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NeighCellSI-AcquisitionParameters-v15a0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1530;
struct PhyLayerParameters_v1540;
struct PhyLayerParameters_v1550;

/* UE-EUTRA-CapabilityAddXDD-Mode-v15a0 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v15a0 {
	struct PhyLayerParameters_v1530	*phyLayerParameters_v1530;	/* OPTIONAL */
	struct PhyLayerParameters_v1540	*phyLayerParameters_v1540;	/* OPTIONAL */
	struct PhyLayerParameters_v1550	*phyLayerParameters_v1550;	/* OPTIONAL */
	NeighCellSI_AcquisitionParameters_v15a0_t	 neighCellSI_AcquisitionParameters_v15a0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v15a0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v15a0;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v15a0_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v15a0_H_ */
#include <asn_internal.h>
