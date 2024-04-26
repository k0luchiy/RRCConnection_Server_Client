/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MAC-Parameters-v1430.h"

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
static asn_per_constraints_t asn_PER_type_shortSPS_IntervalFDD_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_shortSPS_IntervalTDD_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_skipUplinkDynamic_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_skipUplinkSPS_r14_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_multipleUplinkSPS_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dataInactMon_r14_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_shortSPS_IntervalFDD_r14_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_shortSPS_IntervalFDD_r14_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_shortSPS_IntervalFDD_r14_specs_2 = {
	asn_MAP_shortSPS_IntervalFDD_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_shortSPS_IntervalFDD_r14_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_shortSPS_IntervalFDD_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortSPS_IntervalFDD_r14_2 = {
	"shortSPS-IntervalFDD-r14",
	"shortSPS-IntervalFDD-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_shortSPS_IntervalFDD_r14_tags_2,
	sizeof(asn_DEF_shortSPS_IntervalFDD_r14_tags_2)
		/sizeof(asn_DEF_shortSPS_IntervalFDD_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_shortSPS_IntervalFDD_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_shortSPS_IntervalFDD_r14_tags_2)
		/sizeof(asn_DEF_shortSPS_IntervalFDD_r14_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_shortSPS_IntervalFDD_r14_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_shortSPS_IntervalFDD_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_shortSPS_IntervalTDD_r14_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_shortSPS_IntervalTDD_r14_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_shortSPS_IntervalTDD_r14_specs_4 = {
	asn_MAP_shortSPS_IntervalTDD_r14_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_shortSPS_IntervalTDD_r14_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_shortSPS_IntervalTDD_r14_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortSPS_IntervalTDD_r14_4 = {
	"shortSPS-IntervalTDD-r14",
	"shortSPS-IntervalTDD-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_shortSPS_IntervalTDD_r14_tags_4,
	sizeof(asn_DEF_shortSPS_IntervalTDD_r14_tags_4)
		/sizeof(asn_DEF_shortSPS_IntervalTDD_r14_tags_4[0]) - 1, /* 1 */
	asn_DEF_shortSPS_IntervalTDD_r14_tags_4,	/* Same as above */
	sizeof(asn_DEF_shortSPS_IntervalTDD_r14_tags_4)
		/sizeof(asn_DEF_shortSPS_IntervalTDD_r14_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_shortSPS_IntervalTDD_r14_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_shortSPS_IntervalTDD_r14_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_skipUplinkDynamic_r14_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_skipUplinkDynamic_r14_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_skipUplinkDynamic_r14_specs_6 = {
	asn_MAP_skipUplinkDynamic_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_skipUplinkDynamic_r14_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_skipUplinkDynamic_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_skipUplinkDynamic_r14_6 = {
	"skipUplinkDynamic-r14",
	"skipUplinkDynamic-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_skipUplinkDynamic_r14_tags_6,
	sizeof(asn_DEF_skipUplinkDynamic_r14_tags_6)
		/sizeof(asn_DEF_skipUplinkDynamic_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_skipUplinkDynamic_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_skipUplinkDynamic_r14_tags_6)
		/sizeof(asn_DEF_skipUplinkDynamic_r14_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_skipUplinkDynamic_r14_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_skipUplinkDynamic_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_skipUplinkSPS_r14_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_skipUplinkSPS_r14_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_skipUplinkSPS_r14_specs_8 = {
	asn_MAP_skipUplinkSPS_r14_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_skipUplinkSPS_r14_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_skipUplinkSPS_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_skipUplinkSPS_r14_8 = {
	"skipUplinkSPS-r14",
	"skipUplinkSPS-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_skipUplinkSPS_r14_tags_8,
	sizeof(asn_DEF_skipUplinkSPS_r14_tags_8)
		/sizeof(asn_DEF_skipUplinkSPS_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_skipUplinkSPS_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_skipUplinkSPS_r14_tags_8)
		/sizeof(asn_DEF_skipUplinkSPS_r14_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_skipUplinkSPS_r14_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_skipUplinkSPS_r14_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multipleUplinkSPS_r14_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multipleUplinkSPS_r14_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multipleUplinkSPS_r14_specs_10 = {
	asn_MAP_multipleUplinkSPS_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_multipleUplinkSPS_r14_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multipleUplinkSPS_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multipleUplinkSPS_r14_10 = {
	"multipleUplinkSPS-r14",
	"multipleUplinkSPS-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_multipleUplinkSPS_r14_tags_10,
	sizeof(asn_DEF_multipleUplinkSPS_r14_tags_10)
		/sizeof(asn_DEF_multipleUplinkSPS_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_multipleUplinkSPS_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_multipleUplinkSPS_r14_tags_10)
		/sizeof(asn_DEF_multipleUplinkSPS_r14_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_multipleUplinkSPS_r14_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multipleUplinkSPS_r14_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dataInactMon_r14_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dataInactMon_r14_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dataInactMon_r14_specs_12 = {
	asn_MAP_dataInactMon_r14_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_dataInactMon_r14_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dataInactMon_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dataInactMon_r14_12 = {
	"dataInactMon-r14",
	"dataInactMon-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_dataInactMon_r14_tags_12,
	sizeof(asn_DEF_dataInactMon_r14_tags_12)
		/sizeof(asn_DEF_dataInactMon_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_dataInactMon_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_dataInactMon_r14_tags_12)
		/sizeof(asn_DEF_dataInactMon_r14_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dataInactMon_r14_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dataInactMon_r14_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_Parameters_v1430_1[] = {
	{ ATF_POINTER, 6, offsetof(struct MAC_Parameters_v1430, shortSPS_IntervalFDD_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_shortSPS_IntervalFDD_r14_2,
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
		"shortSPS-IntervalFDD-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct MAC_Parameters_v1430, shortSPS_IntervalTDD_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_shortSPS_IntervalTDD_r14_4,
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
		"shortSPS-IntervalTDD-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct MAC_Parameters_v1430, skipUplinkDynamic_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_skipUplinkDynamic_r14_6,
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
		"skipUplinkDynamic-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct MAC_Parameters_v1430, skipUplinkSPS_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_skipUplinkSPS_r14_8,
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
		"skipUplinkSPS-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_Parameters_v1430, multipleUplinkSPS_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multipleUplinkSPS_r14_10,
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
		"multipleUplinkSPS-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_Parameters_v1430, dataInactMon_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dataInactMon_r14_12,
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
		"dataInactMon-r14"
		},
};
static const int asn_MAP_MAC_Parameters_v1430_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_MAC_Parameters_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_Parameters_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* shortSPS-IntervalFDD-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* shortSPS-IntervalTDD-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* skipUplinkDynamic-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* skipUplinkSPS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* multipleUplinkSPS-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* dataInactMon-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_Parameters_v1430_specs_1 = {
	sizeof(struct MAC_Parameters_v1430),
	offsetof(struct MAC_Parameters_v1430, _asn_ctx),
	asn_MAP_MAC_Parameters_v1430_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_MAC_Parameters_v1430_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_v1430 = {
	"MAC-Parameters-v1430",
	"MAC-Parameters-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_Parameters_v1430_tags_1,
	sizeof(asn_DEF_MAC_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_v1430_tags_1[0]), /* 1 */
	asn_DEF_MAC_Parameters_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_Parameters_v1430_tags_1)
		/sizeof(asn_DEF_MAC_Parameters_v1430_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MAC_Parameters_v1430_1,
	6,	/* Elements count */
	&asn_SPC_MAC_Parameters_v1430_specs_1	/* Additional specs */
};

