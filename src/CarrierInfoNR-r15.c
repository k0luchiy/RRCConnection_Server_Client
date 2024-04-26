/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CarrierInfoNR-r15.h"

#include "MTC-SSB-NR-r15.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_subcarrierSpacingSSB_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_subcarrierSpacingSSB_r15_value2enum_3[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	6,	"kHz120" },
	{ 3,	6,	"kHz240" }
};
static const unsigned int asn_MAP_subcarrierSpacingSSB_r15_enum2value_3[] = {
	2,	/* kHz120(2) */
	0,	/* kHz15(0) */
	3,	/* kHz240(3) */
	1	/* kHz30(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_subcarrierSpacingSSB_r15_specs_3 = {
	asn_MAP_subcarrierSpacingSSB_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_subcarrierSpacingSSB_r15_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_subcarrierSpacingSSB_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r15_3 = {
	"subcarrierSpacingSSB-r15",
	"subcarrierSpacingSSB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_subcarrierSpacingSSB_r15_tags_3,
	sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_subcarrierSpacingSSB_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3)
		/sizeof(asn_DEF_subcarrierSpacingSSB_r15_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_subcarrierSpacingSSB_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subcarrierSpacingSSB_r15_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CarrierInfoNR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierInfoNR_r15, carrierFreq_r15),
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
		"carrierFreq-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierInfoNR_r15, subcarrierSpacingSSB_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subcarrierSpacingSSB_r15_3,
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
		"subcarrierSpacingSSB-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierInfoNR_r15, smtc_r15),
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
		"smtc-r15"
		},
};
static const int asn_MAP_CarrierInfoNR_r15_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_CarrierInfoNR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierInfoNR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subcarrierSpacingSSB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* smtc-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_CarrierInfoNR_r15_specs_1 = {
	sizeof(struct CarrierInfoNR_r15),
	offsetof(struct CarrierInfoNR_r15, _asn_ctx),
	asn_MAP_CarrierInfoNR_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CarrierInfoNR_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CarrierInfoNR_r15 = {
	"CarrierInfoNR-r15",
	"CarrierInfoNR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_CarrierInfoNR_r15_tags_1,
	sizeof(asn_DEF_CarrierInfoNR_r15_tags_1)
		/sizeof(asn_DEF_CarrierInfoNR_r15_tags_1[0]), /* 1 */
	asn_DEF_CarrierInfoNR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierInfoNR_r15_tags_1)
		/sizeof(asn_DEF_CarrierInfoNR_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CarrierInfoNR_r15_1,
	3,	/* Elements count */
	&asn_SPC_CarrierInfoNR_r15_specs_1	/* Additional specs */
};

