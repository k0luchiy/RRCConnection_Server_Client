/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MBMS-ROM-Info-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mbms_ROM_SubcarrierSpacing_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mbms_Bandwidth_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_mbms_ROM_SubcarrierSpacing_r16_value2enum_3[] = {
	{ 0,	8,	"kHz2dot5" },
	{ 1,	9,	"kHz0dot37" }
};
static const unsigned int asn_MAP_mbms_ROM_SubcarrierSpacing_r16_enum2value_3[] = {
	1,	/* kHz0dot37(1) */
	0	/* kHz2dot5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mbms_ROM_SubcarrierSpacing_r16_specs_3 = {
	asn_MAP_mbms_ROM_SubcarrierSpacing_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_mbms_ROM_SubcarrierSpacing_r16_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mbms_ROM_SubcarrierSpacing_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbms_ROM_SubcarrierSpacing_r16_3 = {
	"mbms-ROM-SubcarrierSpacing-r16",
	"mbms-ROM-SubcarrierSpacing-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_mbms_ROM_SubcarrierSpacing_r16_tags_3,
	sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r16_tags_3)
		/sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_mbms_ROM_SubcarrierSpacing_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r16_tags_3)
		/sizeof(asn_DEF_mbms_ROM_SubcarrierSpacing_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mbms_ROM_SubcarrierSpacing_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mbms_ROM_SubcarrierSpacing_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mbms_Bandwidth_r16_value2enum_6[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_mbms_Bandwidth_r16_enum2value_6[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_mbms_Bandwidth_r16_specs_6 = {
	asn_MAP_mbms_Bandwidth_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_mbms_Bandwidth_r16_enum2value_6,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mbms_Bandwidth_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbms_Bandwidth_r16_6 = {
	"mbms-Bandwidth-r16",
	"mbms-Bandwidth-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_mbms_Bandwidth_r16_tags_6,
	sizeof(asn_DEF_mbms_Bandwidth_r16_tags_6)
		/sizeof(asn_DEF_mbms_Bandwidth_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_mbms_Bandwidth_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_mbms_Bandwidth_r16_tags_6)
		/sizeof(asn_DEF_mbms_Bandwidth_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mbms_Bandwidth_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mbms_Bandwidth_r16_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMS_ROM_Info_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ROM_Info_r16, mbms_ROM_Freq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_r9,
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
		"mbms-ROM-Freq-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ROM_Info_r16, mbms_ROM_SubcarrierSpacing_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mbms_ROM_SubcarrierSpacing_r16_3,
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
		"mbms-ROM-SubcarrierSpacing-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ROM_Info_r16, mbms_Bandwidth_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mbms_Bandwidth_r16_6,
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
		"mbms-Bandwidth-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_MBMS_ROM_Info_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_ROM_Info_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-ROM-Freq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-ROM-SubcarrierSpacing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mbms-Bandwidth-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_ROM_Info_r16_specs_1 = {
	sizeof(struct MBMS_ROM_Info_r16),
	offsetof(struct MBMS_ROM_Info_r16, _asn_ctx),
	asn_MAP_MBMS_ROM_Info_r16_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_ROM_Info_r16 = {
	"MBMS-ROM-Info-r16",
	"MBMS-ROM-Info-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_ROM_Info_r16_tags_1,
	sizeof(asn_DEF_MBMS_ROM_Info_r16_tags_1)
		/sizeof(asn_DEF_MBMS_ROM_Info_r16_tags_1[0]), /* 1 */
	asn_DEF_MBMS_ROM_Info_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_ROM_Info_r16_tags_1)
		/sizeof(asn_DEF_MBMS_ROM_Info_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MBMS_ROM_Info_r16_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_ROM_Info_r16_specs_1	/* Additional specs */
};

