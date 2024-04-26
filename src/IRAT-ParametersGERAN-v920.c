/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "IRAT-ParametersGERAN-v920.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dtm_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_e_RedirectionGERAN_r9_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_dtm_r9_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dtm_r9_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dtm_r9_specs_2 = {
	asn_MAP_dtm_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dtm_r9_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dtm_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dtm_r9_2 = {
	"dtm-r9",
	"dtm-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_dtm_r9_tags_2,
	sizeof(asn_DEF_dtm_r9_tags_2)
		/sizeof(asn_DEF_dtm_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_dtm_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_dtm_r9_tags_2)
		/sizeof(asn_DEF_dtm_r9_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dtm_r9_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dtm_r9_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_e_RedirectionGERAN_r9_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_e_RedirectionGERAN_r9_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_e_RedirectionGERAN_r9_specs_4 = {
	asn_MAP_e_RedirectionGERAN_r9_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_e_RedirectionGERAN_r9_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_e_RedirectionGERAN_r9_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e_RedirectionGERAN_r9_4 = {
	"e-RedirectionGERAN-r9",
	"e-RedirectionGERAN-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_e_RedirectionGERAN_r9_tags_4,
	sizeof(asn_DEF_e_RedirectionGERAN_r9_tags_4)
		/sizeof(asn_DEF_e_RedirectionGERAN_r9_tags_4[0]) - 1, /* 1 */
	asn_DEF_e_RedirectionGERAN_r9_tags_4,	/* Same as above */
	sizeof(asn_DEF_e_RedirectionGERAN_r9_tags_4)
		/sizeof(asn_DEF_e_RedirectionGERAN_r9_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_e_RedirectionGERAN_r9_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_e_RedirectionGERAN_r9_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_IRAT_ParametersGERAN_v920_1[] = {
	{ ATF_POINTER, 2, offsetof(struct IRAT_ParametersGERAN_v920, dtm_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dtm_r9_2,
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
		"dtm-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct IRAT_ParametersGERAN_v920, e_RedirectionGERAN_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_e_RedirectionGERAN_r9_4,
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
		"e-RedirectionGERAN-r9"
		},
};
static const int asn_MAP_IRAT_ParametersGERAN_v920_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_IRAT_ParametersGERAN_v920_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IRAT_ParametersGERAN_v920_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dtm-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* e-RedirectionGERAN-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_IRAT_ParametersGERAN_v920_specs_1 = {
	sizeof(struct IRAT_ParametersGERAN_v920),
	offsetof(struct IRAT_ParametersGERAN_v920, _asn_ctx),
	asn_MAP_IRAT_ParametersGERAN_v920_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_IRAT_ParametersGERAN_v920_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersGERAN_v920 = {
	"IRAT-ParametersGERAN-v920",
	"IRAT-ParametersGERAN-v920",
	&asn_OP_SEQUENCE,
	asn_DEF_IRAT_ParametersGERAN_v920_tags_1,
	sizeof(asn_DEF_IRAT_ParametersGERAN_v920_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersGERAN_v920_tags_1[0]), /* 1 */
	asn_DEF_IRAT_ParametersGERAN_v920_tags_1,	/* Same as above */
	sizeof(asn_DEF_IRAT_ParametersGERAN_v920_tags_1)
		/sizeof(asn_DEF_IRAT_ParametersGERAN_v920_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_IRAT_ParametersGERAN_v920_1,
	2,	/* Elements count */
	&asn_SPC_IRAT_ParametersGERAN_v920_specs_1	/* Additional specs */
};

