/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RSRP-ChangeThresh-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_RSRP_ChangeThresh_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_RSRP_ChangeThresh_r16_value2enum_1[] = {
	{ 0,	3,	"dB4" },
	{ 1,	3,	"dB6" },
	{ 2,	3,	"dB8" },
	{ 3,	4,	"dB10" },
	{ 4,	4,	"dB14" },
	{ 5,	4,	"dB18" },
	{ 6,	4,	"dB22" },
	{ 7,	4,	"dB26" },
	{ 8,	4,	"dB30" },
	{ 9,	4,	"dB34" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_RSRP_ChangeThresh_r16_enum2value_1[] = {
	3,	/* dB10(3) */
	4,	/* dB14(4) */
	5,	/* dB18(5) */
	6,	/* dB22(6) */
	7,	/* dB26(7) */
	8,	/* dB30(8) */
	9,	/* dB34(9) */
	0,	/* dB4(0) */
	1,	/* dB6(1) */
	2,	/* dB8(2) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
const asn_INTEGER_specifics_t asn_SPC_RSRP_ChangeThresh_r16_specs_1 = {
	asn_MAP_RSRP_ChangeThresh_r16_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RSRP_ChangeThresh_r16_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RSRP_ChangeThresh_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RSRP_ChangeThresh_r16 = {
	"RSRP-ChangeThresh-r16",
	"RSRP-ChangeThresh-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_RSRP_ChangeThresh_r16_tags_1,
	sizeof(asn_DEF_RSRP_ChangeThresh_r16_tags_1)
		/sizeof(asn_DEF_RSRP_ChangeThresh_r16_tags_1[0]), /* 1 */
	asn_DEF_RSRP_ChangeThresh_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSRP_ChangeThresh_r16_tags_1)
		/sizeof(asn_DEF_RSRP_ChangeThresh_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_RSRP_ChangeThresh_r16_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RSRP_ChangeThresh_r16_specs_1	/* Additional specs */
};

