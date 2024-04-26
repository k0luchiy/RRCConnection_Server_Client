/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1610_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1610;
struct PUR_Parameters_r16;
struct MeasParameters_v1610;
struct EUTRA_5GC_Parameters_v1610;
struct IRAT_ParametersNR_v1610;
struct NeighCellSI_AcquisitionParameters_v1610;
struct MobilityParameters_v1610;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1610 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1610 {
	struct PhyLayerParameters_v1610	*phyLayerParameters_v1610;	/* OPTIONAL */
	struct PUR_Parameters_r16	*pur_Parameters_r16;	/* OPTIONAL */
	struct MeasParameters_v1610	*measParameters_v1610;	/* OPTIONAL */
	struct EUTRA_5GC_Parameters_v1610	*eutra_5GC_Parameters_v1610;	/* OPTIONAL */
	struct IRAT_ParametersNR_v1610	*irat_ParametersNR_v1610;	/* OPTIONAL */
	struct NeighCellSI_AcquisitionParameters_v1610	*neighCellSI_AcquisitionParameters_v1610;	/* OPTIONAL */
	struct MobilityParameters_v1610	*mobilityParameters_v1610;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1610_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1610_H_ */
#include <asn_internal.h>
