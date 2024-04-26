/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CarrierFreqNR-v1720.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_subcarrierSpacingSSB_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingSSB_r17_value2enum_2[] = {
	{ 0,	6,	"kHz480" },
	{ 1,	6,	"spare1" }
};
static const unsigned int asn_MAP_subcarrierSpacingSSB_r17_enum2value_2[] = {
	0,	/* kHz480(0) */
	1	/* spare1(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingSSB_r17_specs_2 = {
	asn_MAP_subcarrierSpacingSSB_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingSSB_r17_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingSSB_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r17_2 = {
	"subcarrierSpacingSSB-r17",
	"subcarrierSpacingSSB-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingSSB_r17_tags_2,
	sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_2)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingSSB_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_2)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_subcarrierSpacingSSB_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingSSB_r17_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CarrierFreqNR_v1720_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CarrierFreqNR_v1720, subcarrierSpacingSSB_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingSSB_r17_2,
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
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqNR_v1720, ssb_PositionQCL_CommonNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_PositionQCL_RelationNR_r17,
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
		"ssb-PositionQCL-CommonNR-r17"
		},
};
static const int asn_MAP_CarrierFreqNR_v1720_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_CarrierFreqNR_v1720_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierFreqNR_v1720_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subcarrierSpacingSSB-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ssb-PositionQCL-CommonNR-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqNR_v1720_specs_1 = {
	sizeof(struct CarrierFreqNR_v1720),
	offsetof(struct CarrierFreqNR_v1720, _asn_ctx),
	asn_MAP_CarrierFreqNR_v1720_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CarrierFreqNR_v1720_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqNR_v1720 = {
	"CarrierFreqNR-v1720",
	"CarrierFreqNR-v1720",
	&asn_OP_SEQUENCE,
	asn_DEF_CarrierFreqNR_v1720_tags_1,
	sizeof(asn_DEF_CarrierFreqNR_v1720_tags_1)
		/sizeof(asn_DEF_CarrierFreqNR_v1720_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqNR_v1720_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqNR_v1720_tags_1)
		/sizeof(asn_DEF_CarrierFreqNR_v1720_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CarrierFreqNR_v1720_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreqNR_v1720_specs_1	/* Additional specs */
};

