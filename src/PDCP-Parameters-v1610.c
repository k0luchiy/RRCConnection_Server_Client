/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PDCP-Parameters-v1610.h"

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
static asn_per_constraints_t asn_PER_type_pdcp_VersionChangeWithoutHO_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ehc_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_continueEHC_Context_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_maxNumberEHC_Contexts_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_jointEHC_ROHC_Config_r16_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_pdcp_VersionChangeWithoutHO_r16_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pdcp_VersionChangeWithoutHO_r16_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdcp_VersionChangeWithoutHO_r16_specs_2 = {
	asn_MAP_pdcp_VersionChangeWithoutHO_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_pdcp_VersionChangeWithoutHO_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdcp_VersionChangeWithoutHO_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcp_VersionChangeWithoutHO_r16_2 = {
	"pdcp-VersionChangeWithoutHO-r16",
	"pdcp-VersionChangeWithoutHO-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdcp_VersionChangeWithoutHO_r16_tags_2,
	sizeof(asn_DEF_pdcp_VersionChangeWithoutHO_r16_tags_2)
		/sizeof(asn_DEF_pdcp_VersionChangeWithoutHO_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_pdcp_VersionChangeWithoutHO_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_pdcp_VersionChangeWithoutHO_r16_tags_2)
		/sizeof(asn_DEF_pdcp_VersionChangeWithoutHO_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_pdcp_VersionChangeWithoutHO_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdcp_VersionChangeWithoutHO_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ehc_r16_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ehc_r16_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ehc_r16_specs_4 = {
	asn_MAP_ehc_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ehc_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ehc_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ehc_r16_4 = {
	"ehc-r16",
	"ehc-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ehc_r16_tags_4,
	sizeof(asn_DEF_ehc_r16_tags_4)
		/sizeof(asn_DEF_ehc_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_ehc_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_ehc_r16_tags_4)
		/sizeof(asn_DEF_ehc_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ehc_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ehc_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_continueEHC_Context_r16_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_continueEHC_Context_r16_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_continueEHC_Context_r16_specs_6 = {
	asn_MAP_continueEHC_Context_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_continueEHC_Context_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_continueEHC_Context_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_continueEHC_Context_r16_6 = {
	"continueEHC-Context-r16",
	"continueEHC-Context-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_continueEHC_Context_r16_tags_6,
	sizeof(asn_DEF_continueEHC_Context_r16_tags_6)
		/sizeof(asn_DEF_continueEHC_Context_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_continueEHC_Context_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_continueEHC_Context_r16_tags_6)
		/sizeof(asn_DEF_continueEHC_Context_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_continueEHC_Context_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_continueEHC_Context_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_maxNumberEHC_Contexts_r16_value2enum_8[] = {
	{ 0,	3,	"cs2" },
	{ 1,	3,	"cs4" },
	{ 2,	3,	"cs8" },
	{ 3,	4,	"cs16" },
	{ 4,	4,	"cs32" },
	{ 5,	4,	"cs64" },
	{ 6,	5,	"cs128" },
	{ 7,	5,	"cs256" },
	{ 8,	5,	"cs512" },
	{ 9,	6,	"cs1024" },
	{ 10,	6,	"cs2048" },
	{ 11,	6,	"cs4096" },
	{ 12,	6,	"cs8192" },
	{ 13,	7,	"cs16384" },
	{ 14,	7,	"cs32768" },
	{ 15,	7,	"cs65536" }
};
static const unsigned int asn_MAP_maxNumberEHC_Contexts_r16_enum2value_8[] = {
	9,	/* cs1024(9) */
	6,	/* cs128(6) */
	3,	/* cs16(3) */
	13,	/* cs16384(13) */
	0,	/* cs2(0) */
	10,	/* cs2048(10) */
	7,	/* cs256(7) */
	4,	/* cs32(4) */
	14,	/* cs32768(14) */
	1,	/* cs4(1) */
	11,	/* cs4096(11) */
	8,	/* cs512(8) */
	5,	/* cs64(5) */
	15,	/* cs65536(15) */
	2,	/* cs8(2) */
	12	/* cs8192(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberEHC_Contexts_r16_specs_8 = {
	asn_MAP_maxNumberEHC_Contexts_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberEHC_Contexts_r16_enum2value_8,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberEHC_Contexts_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberEHC_Contexts_r16_8 = {
	"maxNumberEHC-Contexts-r16",
	"maxNumberEHC-Contexts-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberEHC_Contexts_r16_tags_8,
	sizeof(asn_DEF_maxNumberEHC_Contexts_r16_tags_8)
		/sizeof(asn_DEF_maxNumberEHC_Contexts_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_maxNumberEHC_Contexts_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_maxNumberEHC_Contexts_r16_tags_8)
		/sizeof(asn_DEF_maxNumberEHC_Contexts_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_maxNumberEHC_Contexts_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberEHC_Contexts_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_jointEHC_ROHC_Config_r16_value2enum_25[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_jointEHC_ROHC_Config_r16_enum2value_25[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_jointEHC_ROHC_Config_r16_specs_25 = {
	asn_MAP_jointEHC_ROHC_Config_r16_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_jointEHC_ROHC_Config_r16_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_jointEHC_ROHC_Config_r16_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_jointEHC_ROHC_Config_r16_25 = {
	"jointEHC-ROHC-Config-r16",
	"jointEHC-ROHC-Config-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_jointEHC_ROHC_Config_r16_tags_25,
	sizeof(asn_DEF_jointEHC_ROHC_Config_r16_tags_25)
		/sizeof(asn_DEF_jointEHC_ROHC_Config_r16_tags_25[0]) - 1, /* 1 */
	asn_DEF_jointEHC_ROHC_Config_r16_tags_25,	/* Same as above */
	sizeof(asn_DEF_jointEHC_ROHC_Config_r16_tags_25)
		/sizeof(asn_DEF_jointEHC_ROHC_Config_r16_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_jointEHC_ROHC_Config_r16_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_jointEHC_ROHC_Config_r16_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCP_Parameters_v1610_1[] = {
	{ ATF_POINTER, 5, offsetof(struct PDCP_Parameters_v1610, pdcp_VersionChangeWithoutHO_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdcp_VersionChangeWithoutHO_r16_2,
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
		"pdcp-VersionChangeWithoutHO-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct PDCP_Parameters_v1610, ehc_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ehc_r16_4,
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
		"ehc-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct PDCP_Parameters_v1610, continueEHC_Context_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_continueEHC_Context_r16_6,
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
		"continueEHC-Context-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct PDCP_Parameters_v1610, maxNumberEHC_Contexts_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberEHC_Contexts_r16_8,
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
		"maxNumberEHC-Contexts-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCP_Parameters_v1610, jointEHC_ROHC_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_jointEHC_ROHC_Config_r16_25,
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
		"jointEHC-ROHC-Config-r16"
		},
};
static const int asn_MAP_PDCP_Parameters_v1610_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_PDCP_Parameters_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCP_Parameters_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-VersionChangeWithoutHO-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ehc-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* continueEHC-Context-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumberEHC-Contexts-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* jointEHC-ROHC-Config-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCP_Parameters_v1610_specs_1 = {
	sizeof(struct PDCP_Parameters_v1610),
	offsetof(struct PDCP_Parameters_v1610, _asn_ctx),
	asn_MAP_PDCP_Parameters_v1610_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PDCP_Parameters_v1610_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Parameters_v1610 = {
	"PDCP-Parameters-v1610",
	"PDCP-Parameters-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCP_Parameters_v1610_tags_1,
	sizeof(asn_DEF_PDCP_Parameters_v1610_tags_1)
		/sizeof(asn_DEF_PDCP_Parameters_v1610_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Parameters_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Parameters_v1610_tags_1)
		/sizeof(asn_DEF_PDCP_Parameters_v1610_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PDCP_Parameters_v1610_1,
	5,	/* Elements count */
	&asn_SPC_PDCP_Parameters_v1610_specs_1	/* Additional specs */
};

