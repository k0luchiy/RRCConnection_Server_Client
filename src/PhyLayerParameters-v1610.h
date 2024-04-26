/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PhyLayerParameters_v1610_H_
#define	_PhyLayerParameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__ce_CSI_RS_Feedback_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__ce_CSI_RS_Feedback_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__ce_CSI_RS_Feedback_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__ce_CSI_RS_FeedbackCodebookRestriction_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__ce_CSI_RS_FeedbackCodebookRestriction_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__ce_CSI_RS_FeedbackCodebookRestriction_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CE_ModeA_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CE_ModeA_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CE_ModeA_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CE_ModeB_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CE_ModeB_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CE_ModeB_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CSI_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CSI_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_CSI_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_ReciprocityTDD_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_ReciprocityTDD_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__crs_ChEstMPDCCH_ReciprocityTDD_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__etws_CMAS_RxInConnCE_ModeA_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__etws_CMAS_RxInConnCE_ModeA_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__etws_CMAS_RxInConnCE_ModeA_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__etws_CMAS_RxInConnCE_ModeB_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__etws_CMAS_RxInConnCE_ModeB_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__etws_CMAS_RxInConnCE_ModeB_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__mpdcch_InLteControlRegionCE_ModeA_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__mpdcch_InLteControlRegionCE_ModeA_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__mpdcch_InLteControlRegionCE_ModeA_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__mpdcch_InLteControlRegionCE_ModeB_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__mpdcch_InLteControlRegionCE_ModeB_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__mpdcch_InLteControlRegionCE_ModeB_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__pdsch_InLteControlRegionCE_ModeA_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__pdsch_InLteControlRegionCE_ModeA_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__pdsch_InLteControlRegionCE_ModeA_r16;
typedef enum PhyLayerParameters_v1610__ce_Capabilities_v1610__pdsch_InLteControlRegionCE_ModeB_r16 {
	PhyLayerParameters_v1610__ce_Capabilities_v1610__pdsch_InLteControlRegionCE_ModeB_r16_supported	= 0
} e_PhyLayerParameters_v1610__ce_Capabilities_v1610__pdsch_InLteControlRegionCE_ModeB_r16;
typedef enum PhyLayerParameters_v1610__widebandPRG_Slot_r16 {
	PhyLayerParameters_v1610__widebandPRG_Slot_r16_supported	= 0
} e_PhyLayerParameters_v1610__widebandPRG_Slot_r16;
typedef enum PhyLayerParameters_v1610__widebandPRG_Subslot_r16 {
	PhyLayerParameters_v1610__widebandPRG_Subslot_r16_supported	= 0
} e_PhyLayerParameters_v1610__widebandPRG_Subslot_r16;
typedef enum PhyLayerParameters_v1610__widebandPRG_Subframe_r16 {
	PhyLayerParameters_v1610__widebandPRG_Subframe_r16_supported	= 0
} e_PhyLayerParameters_v1610__widebandPRG_Subframe_r16;
typedef enum PhyLayerParameters_v1610__addSRS_r16__addSRS_FrequencyHopping_r16 {
	PhyLayerParameters_v1610__addSRS_r16__addSRS_FrequencyHopping_r16_supported	= 0
} e_PhyLayerParameters_v1610__addSRS_r16__addSRS_FrequencyHopping_r16;
typedef enum PhyLayerParameters_v1610__addSRS_r16__addSRS_AntennaSwitching_r16 {
	PhyLayerParameters_v1610__addSRS_r16__addSRS_AntennaSwitching_r16_useBasic	= 0
} e_PhyLayerParameters_v1610__addSRS_r16__addSRS_AntennaSwitching_r16;
typedef enum PhyLayerParameters_v1610__addSRS_r16__addSRS_CarrierSwitching_r16 {
	PhyLayerParameters_v1610__addSRS_r16__addSRS_CarrierSwitching_r16_supported	= 0
} e_PhyLayerParameters_v1610__addSRS_r16__addSRS_CarrierSwitching_r16;
typedef enum PhyLayerParameters_v1610__virtualCellID_BasicSRS_r16 {
	PhyLayerParameters_v1610__virtualCellID_BasicSRS_r16_supported	= 0
} e_PhyLayerParameters_v1610__virtualCellID_BasicSRS_r16;
typedef enum PhyLayerParameters_v1610__virtualCellID_AddSRS_r16 {
	PhyLayerParameters_v1610__virtualCellID_AddSRS_r16_supported	= 0
} e_PhyLayerParameters_v1610__virtualCellID_AddSRS_r16;

/* Forward declarations */
struct CE_MultiTB_Parameters_r16;
struct CE_ResourceResvParameters_r16;

/* PhyLayerParameters-v1610 */
typedef struct PhyLayerParameters_v1610 {
	struct PhyLayerParameters_v1610__ce_Capabilities_v1610 {
		long	*ce_CSI_RS_Feedback_r16;	/* OPTIONAL */
		long	*ce_CSI_RS_FeedbackCodebookRestriction_r16;	/* OPTIONAL */
		long	*crs_ChEstMPDCCH_CE_ModeA_r16;	/* OPTIONAL */
		long	*crs_ChEstMPDCCH_CE_ModeB_r16;	/* OPTIONAL */
		long	*crs_ChEstMPDCCH_CSI_r16;	/* OPTIONAL */
		long	*crs_ChEstMPDCCH_ReciprocityTDD_r16;	/* OPTIONAL */
		long	*etws_CMAS_RxInConnCE_ModeA_r16;	/* OPTIONAL */
		long	*etws_CMAS_RxInConnCE_ModeB_r16;	/* OPTIONAL */
		long	*mpdcch_InLteControlRegionCE_ModeA_r16;	/* OPTIONAL */
		long	*mpdcch_InLteControlRegionCE_ModeB_r16;	/* OPTIONAL */
		long	*pdsch_InLteControlRegionCE_ModeA_r16;	/* OPTIONAL */
		long	*pdsch_InLteControlRegionCE_ModeB_r16;	/* OPTIONAL */
		struct CE_MultiTB_Parameters_r16	*multiTB_Parameters_r16;	/* OPTIONAL */
		struct CE_ResourceResvParameters_r16	*resourceResvParameters_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ce_Capabilities_v1610;
	long	*widebandPRG_Slot_r16;	/* OPTIONAL */
	long	*widebandPRG_Subslot_r16;	/* OPTIONAL */
	long	*widebandPRG_Subframe_r16;	/* OPTIONAL */
	struct PhyLayerParameters_v1610__addSRS_r16 {
		long	*addSRS_FrequencyHopping_r16;	/* OPTIONAL */
		long	*addSRS_AntennaSwitching_r16;	/* OPTIONAL */
		long	*addSRS_CarrierSwitching_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *addSRS_r16;
	long	*virtualCellID_BasicSRS_r16;	/* OPTIONAL */
	long	*virtualCellID_AddSRS_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_CSI_RS_Feedback_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ce_CSI_RS_FeedbackCodebookRestriction_r16_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_ChEstMPDCCH_CE_ModeA_r16_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_ChEstMPDCCH_CE_ModeB_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_ChEstMPDCCH_CSI_r16_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_ChEstMPDCCH_ReciprocityTDD_r16_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_etws_CMAS_RxInConnCE_ModeA_r16_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_etws_CMAS_RxInConnCE_ModeB_r16_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mpdcch_InLteControlRegionCE_ModeA_r16_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mpdcch_InLteControlRegionCE_ModeB_r16_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_InLteControlRegionCE_ModeA_r16_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_InLteControlRegionCE_ModeB_r16_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_widebandPRG_Slot_r16_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_widebandPRG_Subslot_r16_31;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_widebandPRG_Subframe_r16_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_FrequencyHopping_r16_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_AntennaSwitching_r16_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_addSRS_CarrierSwitching_r16_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_virtualCellID_BasicSRS_r16_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_virtualCellID_AddSRS_r16_44;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1610_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1610_H_ */
#include <asn_internal.h>
