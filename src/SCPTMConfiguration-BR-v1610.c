/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SCPTMConfiguration-BR-v1610.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_multiTB_Gap_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_multiTB_Gap_r16_value2enum_3[] = {
	{ 0,	3,	"sf2" },
	{ 1,	3,	"sf4" },
	{ 2,	3,	"sf8" },
	{ 3,	4,	"sf16" },
	{ 4,	4,	"sf32" },
	{ 5,	4,	"sf64" },
	{ 6,	5,	"sf128" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_multiTB_Gap_r16_enum2value_3[] = {
	6,	/* sf128(6) */
	3,	/* sf16(3) */
	0,	/* sf2(0) */
	4,	/* sf32(4) */
	1,	/* sf4(1) */
	5,	/* sf64(5) */
	2,	/* sf8(2) */
	7	/* spare(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_multiTB_Gap_r16_specs_3 = {
	asn_MAP_multiTB_Gap_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_multiTB_Gap_r16_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multiTB_Gap_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiTB_Gap_r16_3 = {
	"multiTB-Gap-r16",
	"multiTB-Gap-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_multiTB_Gap_r16_tags_3,
	sizeof(asn_DEF_multiTB_Gap_r16_tags_3)
		/sizeof(asn_DEF_multiTB_Gap_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_multiTB_Gap_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_multiTB_Gap_r16_tags_3)
		/sizeof(asn_DEF_multiTB_Gap_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_multiTB_Gap_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiTB_Gap_r16_specs_3	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_12 = {
	sizeof(struct SCPTMConfiguration_BR_v1610__nonCriticalExtension),
	offsetof(struct SCPTMConfiguration_BR_v1610__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_12 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_12,
	sizeof(asn_DEF_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_nonCriticalExtension_tags_12[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_12,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_12)
		/sizeof(asn_DEF_nonCriticalExtension_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCPTMConfiguration_BR_v1610_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCPTMConfiguration_BR_v1610, sc_MTCH_InfoList_MultiTB_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SC_MTCH_InfoList_BR_r14,
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
		"sc-MTCH-InfoList-MultiTB-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SCPTMConfiguration_BR_v1610, multiTB_Gap_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiTB_Gap_r16_3,
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
		"multiTB-Gap-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SCPTMConfiguration_BR_v1610, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_12,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SCPTMConfiguration_BR_v1610_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_SCPTMConfiguration_BR_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCPTMConfiguration_BR_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-MTCH-InfoList-MultiTB-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiTB-Gap-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SCPTMConfiguration_BR_v1610_specs_1 = {
	sizeof(struct SCPTMConfiguration_BR_v1610),
	offsetof(struct SCPTMConfiguration_BR_v1610, _asn_ctx),
	asn_MAP_SCPTMConfiguration_BR_v1610_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SCPTMConfiguration_BR_v1610_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCPTMConfiguration_BR_v1610 = {
	"SCPTMConfiguration-BR-v1610",
	"SCPTMConfiguration-BR-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_SCPTMConfiguration_BR_v1610_tags_1,
	sizeof(asn_DEF_SCPTMConfiguration_BR_v1610_tags_1)
		/sizeof(asn_DEF_SCPTMConfiguration_BR_v1610_tags_1[0]), /* 1 */
	asn_DEF_SCPTMConfiguration_BR_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCPTMConfiguration_BR_v1610_tags_1)
		/sizeof(asn_DEF_SCPTMConfiguration_BR_v1610_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SCPTMConfiguration_BR_v1610_1,
	3,	/* Elements count */
	&asn_SPC_SCPTMConfiguration_BR_v1610_specs_1	/* Additional specs */
};

