/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SupportedBandUTRA-TDD128.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SupportedBandUTRA_TDD128_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_SupportedBandUTRA_TDD128_value2enum_1[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" },
	{ 3,	1,	"d" },
	{ 4,	1,	"e" },
	{ 5,	1,	"f" },
	{ 6,	1,	"g" },
	{ 7,	1,	"h" },
	{ 8,	1,	"i" },
	{ 9,	1,	"j" },
	{ 10,	1,	"k" },
	{ 11,	1,	"l" },
	{ 12,	1,	"m" },
	{ 13,	1,	"n" },
	{ 14,	1,	"o" },
	{ 15,	1,	"p" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SupportedBandUTRA_TDD128_enum2value_1[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2,	/* c(2) */
	3,	/* d(3) */
	4,	/* e(4) */
	5,	/* f(5) */
	6,	/* g(6) */
	7,	/* h(7) */
	8,	/* i(8) */
	9,	/* j(9) */
	10,	/* k(10) */
	11,	/* l(11) */
	12,	/* m(12) */
	13,	/* n(13) */
	14,	/* o(14) */
	15	/* p(15) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_SupportedBandUTRA_TDD128_specs_1 = {
	asn_MAP_SupportedBandUTRA_TDD128_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SupportedBandUTRA_TDD128_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SupportedBandUTRA_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandUTRA_TDD128 = {
	"SupportedBandUTRA-TDD128",
	"SupportedBandUTRA-TDD128",
	&asn_OP_NativeEnumerated,
	asn_DEF_SupportedBandUTRA_TDD128_tags_1,
	sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1)
		/sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1[0]), /* 1 */
	asn_DEF_SupportedBandUTRA_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1)
		/sizeof(asn_DEF_SupportedBandUTRA_TDD128_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SupportedBandUTRA_TDD128_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SupportedBandUTRA_TDD128_specs_1	/* Additional specs */
};

