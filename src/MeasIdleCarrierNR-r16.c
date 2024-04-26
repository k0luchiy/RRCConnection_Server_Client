/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MeasIdleCarrierNR-r16.h"

#include "MultiFrequencyBandListNR-r15.h"
#include "CellListNR-r16.h"
#include "BeamMeasConfigIdleNR-r16.h"
#include "ThresholdListNR-r15.h"
#include "MTC-SSB-NR-r15.h"
#include "SSB-ToMeasure-r15.h"
#include "SS-RSSI-Measurement-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_subcarrierSpacingSSB_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_reportQuantitiesNR_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_subcarrierSpacingSSB_r17_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingSSB_r16_value2enum_3[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	6,	"kHz120" },
	{ 3,	6,	"kHz240" }
};
static const unsigned int asn_MAP_subcarrierSpacingSSB_r16_enum2value_3[] = {
	2,	/* kHz120(2) */
	0,	/* kHz15(0) */
	3,	/* kHz240(3) */
	1	/* kHz30(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingSSB_r16_specs_3 = {
	asn_MAP_subcarrierSpacingSSB_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingSSB_r16_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingSSB_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r16_3 = {
	"subcarrierSpacingSSB-r16",
	"subcarrierSpacingSSB-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingSSB_r16_tags_3,
	sizeof(asn_DEF_subcarrierSpacingSSB_r16_tags_3)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingSSB_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingSSB_r16_tags_3)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_subcarrierSpacingSSB_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingSSB_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reportQuantitiesNR_r16_value2enum_10[] = {
	{ 0,	4,	"rsrp" },
	{ 1,	4,	"rsrq" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_reportQuantitiesNR_r16_enum2value_10[] = {
	2,	/* both(2) */
	0,	/* rsrp(0) */
	1	/* rsrq(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_reportQuantitiesNR_r16_specs_10 = {
	asn_MAP_reportQuantitiesNR_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_reportQuantitiesNR_r16_enum2value_10,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reportQuantitiesNR_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportQuantitiesNR_r16_10 = {
	"reportQuantitiesNR-r16",
	"reportQuantitiesNR-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_reportQuantitiesNR_r16_tags_10,
	sizeof(asn_DEF_reportQuantitiesNR_r16_tags_10)
		/sizeof(asn_DEF_reportQuantitiesNR_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_reportQuantitiesNR_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_reportQuantitiesNR_r16_tags_10)
		/sizeof(asn_DEF_reportQuantitiesNR_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_reportQuantitiesNR_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportQuantitiesNR_r16_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_qualityThresholdNR_r16_14[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasIdleCarrierNR_r16__qualityThresholdNR_r16, idleRSRP_ThresholdNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeNR_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"idleRSRP-ThresholdNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierNR_r16__qualityThresholdNR_r16, idleRSRQ_ThresholdNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_RangeNR_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"idleRSRQ-ThresholdNR-r16"
		},
};
static const int asn_MAP_qualityThresholdNR_r16_oms_14[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_qualityThresholdNR_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_qualityThresholdNR_r16_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleRSRP-ThresholdNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* idleRSRQ-ThresholdNR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_qualityThresholdNR_r16_specs_14 = {
	sizeof(struct MeasIdleCarrierNR_r16__qualityThresholdNR_r16),
	offsetof(struct MeasIdleCarrierNR_r16__qualityThresholdNR_r16, _asn_ctx),
	asn_MAP_qualityThresholdNR_r16_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_qualityThresholdNR_r16_oms_14,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_qualityThresholdNR_r16_14 = {
	"qualityThresholdNR-r16",
	"qualityThresholdNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_qualityThresholdNR_r16_tags_14,
	sizeof(asn_DEF_qualityThresholdNR_r16_tags_14)
		/sizeof(asn_DEF_qualityThresholdNR_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_qualityThresholdNR_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_qualityThresholdNR_r16_tags_14)
		/sizeof(asn_DEF_qualityThresholdNR_r16_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_qualityThresholdNR_r16_14,
	2,	/* Elements count */
	&asn_SPC_qualityThresholdNR_r16_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ssb_MeasConfig_r16_17[] = {
	{ ATF_POINTER, 4, offsetof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, maxRS_IndexCellQual_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxRS_IndexCellQualNR_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"maxRS-IndexCellQual-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, threshRS_Index_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdListNR_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"threshRS-Index-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, measTimingConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MTC_SSB_NR_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"measTimingConfig-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, ssb_ToMeasure_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SSB_ToMeasure_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ssb-ToMeasure-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, deriveSSB_IndexFromCell_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"deriveSSB-IndexFromCell-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, ss_RSSI_Measurement_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_RSSI_Measurement_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ss-RSSI-Measurement-r16"
		},
};
static const int asn_MAP_ssb_MeasConfig_r16_oms_17[] = { 0, 1, 2, 3, 5 };
static const ber_tlv_tag_t asn_DEF_ssb_MeasConfig_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ssb_MeasConfig_r16_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxRS-IndexCellQual-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* threshRS-Index-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measTimingConfig-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ssb-ToMeasure-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deriveSSB-IndexFromCell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ss-RSSI-Measurement-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ssb_MeasConfig_r16_specs_17 = {
	sizeof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16),
	offsetof(struct MeasIdleCarrierNR_r16__ssb_MeasConfig_r16, _asn_ctx),
	asn_MAP_ssb_MeasConfig_r16_tag2el_17,
	6,	/* Count of tags in the map */
	asn_MAP_ssb_MeasConfig_r16_oms_17,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ssb_MeasConfig_r16_17 = {
	"ssb-MeasConfig-r16",
	"ssb-MeasConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_ssb_MeasConfig_r16_tags_17,
	sizeof(asn_DEF_ssb_MeasConfig_r16_tags_17)
		/sizeof(asn_DEF_ssb_MeasConfig_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_ssb_MeasConfig_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_ssb_MeasConfig_r16_tags_17)
		/sizeof(asn_DEF_ssb_MeasConfig_r16_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ssb_MeasConfig_r16_17,
	6,	/* Elements count */
	&asn_SPC_ssb_MeasConfig_r16_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingSSB_r17_value2enum_27[] = {
	{ 0,	6,	"kHz480" },
	{ 1,	6,	"spare1" }
};
static const unsigned int asn_MAP_subcarrierSpacingSSB_r17_enum2value_27[] = {
	0,	/* kHz480(0) */
	1	/* spare1(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingSSB_r17_specs_27 = {
	asn_MAP_subcarrierSpacingSSB_r17_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingSSB_r17_enum2value_27,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingSSB_r17_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r17_27 = {
	"subcarrierSpacingSSB-r17",
	"subcarrierSpacingSSB-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingSSB_r17_tags_27,
	sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_27)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_27[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingSSB_r17_tags_27,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_27)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_27[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_subcarrierSpacingSSB_r17_constr_27,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingSSB_r17_specs_27	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_26[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierNR_r16__ext1, subcarrierSpacingSSB_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingSSB_r17_27,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"subcarrierSpacingSSB-r17"
		},
};
static const int asn_MAP_ext1_oms_26[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subcarrierSpacingSSB-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_26 = {
	sizeof(struct MeasIdleCarrierNR_r16__ext1),
	offsetof(struct MeasIdleCarrierNR_r16__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_26,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_26,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_26 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_26,
	sizeof(asn_DEF_ext1_tags_26)
		/sizeof(asn_DEF_ext1_tags_26[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_26,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_26)
		/sizeof(asn_DEF_ext1_tags_26[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_26,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_26	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasIdleCarrierNR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierNR_r16, carrierFreqNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"carrierFreqNR-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierNR_r16, subcarrierSpacingSSB_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingSSB_r16_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"subcarrierSpacingSSB-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasIdleCarrierNR_r16, frequencyBandList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiFrequencyBandListNR_r15,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"frequencyBandList"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierNR_r16, measCellListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellListNR_r16,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"measCellListNR-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasIdleCarrierNR_r16, reportQuantitiesNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportQuantitiesNR_r16_10,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"reportQuantitiesNR-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasIdleCarrierNR_r16, qualityThresholdNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_qualityThresholdNR_r16_14,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"qualityThresholdNR-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasIdleCarrierNR_r16, ssb_MeasConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ssb_MeasConfig_r16_17,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ssb-MeasConfig-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasIdleCarrierNR_r16, beamMeasConfigIdle_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BeamMeasConfigIdleNR_r16,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"beamMeasConfigIdle-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasIdleCarrierNR_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext1_26,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MeasIdleCarrierNR_r16_oms_1[] = { 2, 3, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_MeasIdleCarrierNR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasIdleCarrierNR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subcarrierSpacingSSB-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyBandList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measCellListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reportQuantitiesNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* qualityThresholdNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ssb-MeasConfig-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* beamMeasConfigIdle-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasIdleCarrierNR_r16_specs_1 = {
	sizeof(struct MeasIdleCarrierNR_r16),
	offsetof(struct MeasIdleCarrierNR_r16, _asn_ctx),
	asn_MAP_MeasIdleCarrierNR_r16_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_MeasIdleCarrierNR_r16_oms_1,	/* Optional members */
	5, 1,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasIdleCarrierNR_r16 = {
	"MeasIdleCarrierNR-r16",
	"MeasIdleCarrierNR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasIdleCarrierNR_r16_tags_1,
	sizeof(asn_DEF_MeasIdleCarrierNR_r16_tags_1)
		/sizeof(asn_DEF_MeasIdleCarrierNR_r16_tags_1[0]), /* 1 */
	asn_DEF_MeasIdleCarrierNR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasIdleCarrierNR_r16_tags_1)
		/sizeof(asn_DEF_MeasIdleCarrierNR_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MeasIdleCarrierNR_r16_1,
	9,	/* Elements count */
	&asn_SPC_MeasIdleCarrierNR_r16_specs_1	/* Additional specs */
};
