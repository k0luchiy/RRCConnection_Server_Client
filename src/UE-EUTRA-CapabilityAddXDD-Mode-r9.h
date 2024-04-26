/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_r9_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters;
struct IRAT_ParametersGERAN;
struct IRAT_ParametersUTRA_v920;
struct IRAT_ParametersCDMA2000_1XRTT_v920;
struct NeighCellSI_AcquisitionParameters_r9;

/* UE-EUTRA-CapabilityAddXDD-Mode-r9 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_r9 {
	struct PhyLayerParameters	*phyLayerParameters_r9;	/* OPTIONAL */
	BIT_STRING_t	*featureGroupIndicators_r9;	/* OPTIONAL */
	BIT_STRING_t	*featureGroupIndRel9Add_r9;	/* OPTIONAL */
	struct IRAT_ParametersGERAN	*interRAT_ParametersGERAN_r9;	/* OPTIONAL */
	struct IRAT_ParametersUTRA_v920	*interRAT_ParametersUTRA_r9;	/* OPTIONAL */
	struct IRAT_ParametersCDMA2000_1XRTT_v920	*interRAT_ParametersCDMA2000_r9;	/* OPTIONAL */
	struct NeighCellSI_AcquisitionParameters_r9	*neighCellSI_AcquisitionParameters_r9;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_r9_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_r9_H_ */
#include <asn_internal.h>
