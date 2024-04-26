/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "FeatureSetDL-PerCC-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_fourLayerTM3_TM4_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_supportedCSI_Proc_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_fourLayerTM3_TM4_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_fourLayerTM3_TM4_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_fourLayerTM3_TM4_r15_specs_2 = {
	asn_MAP_fourLayerTM3_TM4_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_fourLayerTM3_TM4_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fourLayerTM3_TM4_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fourLayerTM3_TM4_r15_2 = {
	"fourLayerTM3-TM4-r15",
	"fourLayerTM3-TM4-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_fourLayerTM3_TM4_r15_tags_2,
	sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_2)
		/sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_fourLayerTM3_TM4_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_2)
		/sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fourLayerTM3_TM4_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fourLayerTM3_TM4_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_supportedCSI_Proc_r15_value2enum_5[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" }
};
static const unsigned int asn_MAP_supportedCSI_Proc_r15_enum2value_5[] = {
	0,	/* n1(0) */
	1,	/* n3(1) */
	2	/* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_supportedCSI_Proc_r15_specs_5 = {
	asn_MAP_supportedCSI_Proc_r15_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_supportedCSI_Proc_r15_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_supportedCSI_Proc_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportedCSI_Proc_r15_5 = {
	"supportedCSI-Proc-r15",
	"supportedCSI-Proc-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_supportedCSI_Proc_r15_tags_5,
	sizeof(asn_DEF_supportedCSI_Proc_r15_tags_5)
		/sizeof(asn_DEF_supportedCSI_Proc_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_supportedCSI_Proc_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_supportedCSI_Proc_r15_tags_5)
		/sizeof(asn_DEF_supportedCSI_Proc_r15_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_supportedCSI_Proc_r15_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportedCSI_Proc_r15_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetDL_PerCC_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct FeatureSetDL_PerCC_r15, fourLayerTM3_TM4_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fourLayerTM3_TM4_r15_2,
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
		"fourLayerTM3-TM4-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetDL_PerCC_r15, supportedMIMO_CapabilityDL_MRDC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CapabilityDL_r10,
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
		"supportedMIMO-CapabilityDL-MRDC-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetDL_PerCC_r15, supportedCSI_Proc_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportedCSI_Proc_r15_5,
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
		"supportedCSI-Proc-r15"
		},
};
static const int asn_MAP_FeatureSetDL_PerCC_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_FeatureSetDL_PerCC_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetDL_PerCC_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fourLayerTM3-TM4-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedMIMO-CapabilityDL-MRDC-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportedCSI-Proc-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDL_PerCC_r15_specs_1 = {
	sizeof(struct FeatureSetDL_PerCC_r15),
	offsetof(struct FeatureSetDL_PerCC_r15, _asn_ctx),
	asn_MAP_FeatureSetDL_PerCC_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_FeatureSetDL_PerCC_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetDL_PerCC_r15 = {
	"FeatureSetDL-PerCC-r15",
	"FeatureSetDL-PerCC-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetDL_PerCC_r15_tags_1,
	sizeof(asn_DEF_FeatureSetDL_PerCC_r15_tags_1)
		/sizeof(asn_DEF_FeatureSetDL_PerCC_r15_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetDL_PerCC_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetDL_PerCC_r15_tags_1)
		/sizeof(asn_DEF_FeatureSetDL_PerCC_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FeatureSetDL_PerCC_r15_1,
	3,	/* Elements count */
	&asn_SPC_FeatureSetDL_PerCC_r15_specs_1	/* Additional specs */
};

