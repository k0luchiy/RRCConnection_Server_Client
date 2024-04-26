/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RRCConnectionSetupComplete-v1610-IEs.h"

#include "RRCConnectionSetupComplete-v1690-IEs.h"
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
static asn_per_constraints_t asn_PER_type_rlos_Request_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cp_CIoT_5GS_Optimisation_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_up_CIoT_5GS_Optimisation_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_lte_M_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_iab_NodeIndication_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_rlos_Request_r16_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_rlos_Request_r16_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlos_Request_r16_specs_2 = {
	asn_MAP_rlos_Request_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_rlos_Request_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlos_Request_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlos_Request_r16_2 = {
	"rlos-Request-r16",
	"rlos-Request-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlos_Request_r16_tags_2,
	sizeof(asn_DEF_rlos_Request_r16_tags_2)
		/sizeof(asn_DEF_rlos_Request_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_rlos_Request_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_rlos_Request_r16_tags_2)
		/sizeof(asn_DEF_rlos_Request_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rlos_Request_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlos_Request_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cp_CIoT_5GS_Optimisation_r16_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_cp_CIoT_5GS_Optimisation_r16_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cp_CIoT_5GS_Optimisation_r16_specs_4 = {
	asn_MAP_cp_CIoT_5GS_Optimisation_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_cp_CIoT_5GS_Optimisation_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cp_CIoT_5GS_Optimisation_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cp_CIoT_5GS_Optimisation_r16_4 = {
	"cp-CIoT-5GS-Optimisation-r16",
	"cp-CIoT-5GS-Optimisation-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_cp_CIoT_5GS_Optimisation_r16_tags_4,
	sizeof(asn_DEF_cp_CIoT_5GS_Optimisation_r16_tags_4)
		/sizeof(asn_DEF_cp_CIoT_5GS_Optimisation_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_cp_CIoT_5GS_Optimisation_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_cp_CIoT_5GS_Optimisation_r16_tags_4)
		/sizeof(asn_DEF_cp_CIoT_5GS_Optimisation_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cp_CIoT_5GS_Optimisation_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cp_CIoT_5GS_Optimisation_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_up_CIoT_5GS_Optimisation_r16_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_up_CIoT_5GS_Optimisation_r16_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_up_CIoT_5GS_Optimisation_r16_specs_6 = {
	asn_MAP_up_CIoT_5GS_Optimisation_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_up_CIoT_5GS_Optimisation_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_up_CIoT_5GS_Optimisation_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_up_CIoT_5GS_Optimisation_r16_6 = {
	"up-CIoT-5GS-Optimisation-r16",
	"up-CIoT-5GS-Optimisation-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_up_CIoT_5GS_Optimisation_r16_tags_6,
	sizeof(asn_DEF_up_CIoT_5GS_Optimisation_r16_tags_6)
		/sizeof(asn_DEF_up_CIoT_5GS_Optimisation_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_up_CIoT_5GS_Optimisation_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_up_CIoT_5GS_Optimisation_r16_tags_6)
		/sizeof(asn_DEF_up_CIoT_5GS_Optimisation_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_up_CIoT_5GS_Optimisation_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_up_CIoT_5GS_Optimisation_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_lte_M_r16_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_lte_M_r16_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_lte_M_r16_specs_9 = {
	asn_MAP_lte_M_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_lte_M_r16_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_lte_M_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_lte_M_r16_9 = {
	"lte-M-r16",
	"lte-M-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_lte_M_r16_tags_9,
	sizeof(asn_DEF_lte_M_r16_tags_9)
		/sizeof(asn_DEF_lte_M_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_lte_M_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_lte_M_r16_tags_9)
		/sizeof(asn_DEF_lte_M_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_lte_M_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_lte_M_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_iab_NodeIndication_r16_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_iab_NodeIndication_r16_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_iab_NodeIndication_r16_specs_11 = {
	asn_MAP_iab_NodeIndication_r16_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_iab_NodeIndication_r16_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_iab_NodeIndication_r16_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_iab_NodeIndication_r16_11 = {
	"iab-NodeIndication-r16",
	"iab-NodeIndication-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_iab_NodeIndication_r16_tags_11,
	sizeof(asn_DEF_iab_NodeIndication_r16_tags_11)
		/sizeof(asn_DEF_iab_NodeIndication_r16_tags_11[0]) - 1, /* 1 */
	asn_DEF_iab_NodeIndication_r16_tags_11,	/* Same as above */
	sizeof(asn_DEF_iab_NodeIndication_r16_tags_11)
		/sizeof(asn_DEF_iab_NodeIndication_r16_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_iab_NodeIndication_r16_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_iab_NodeIndication_r16_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_v1610_IEs_1[] = {
	{ ATF_POINTER, 7, offsetof(struct RRCConnectionSetupComplete_v1610_IEs, rlos_Request_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlos_Request_r16_2,
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
		"rlos-Request-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct RRCConnectionSetupComplete_v1610_IEs, cp_CIoT_5GS_Optimisation_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cp_CIoT_5GS_Optimisation_r16_4,
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
		"cp-CIoT-5GS-Optimisation-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionSetupComplete_v1610_IEs, up_CIoT_5GS_Optimisation_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_up_CIoT_5GS_Optimisation_r16_6,
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
		"up-CIoT-5GS-Optimisation-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionSetupComplete_v1610_IEs, pur_ConfigID_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUR_ConfigID_r16,
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
		"pur-ConfigID-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetupComplete_v1610_IEs, lte_M_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_lte_M_r16_9,
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
		"lte-M-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetupComplete_v1610_IEs, iab_NodeIndication_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_iab_NodeIndication_r16_11,
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
		"iab-NodeIndication-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionSetupComplete_v1690_IEs,
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
static const int asn_MAP_RRCConnectionSetupComplete_v1610_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionSetupComplete_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetupComplete_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlos-Request-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cp-CIoT-5GS-Optimisation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* up-CIoT-5GS-Optimisation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pur-ConfigID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lte-M-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* iab-NodeIndication-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_v1610_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetupComplete_v1610_IEs),
	offsetof(struct RRCConnectionSetupComplete_v1610_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetupComplete_v1610_IEs_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetupComplete_v1610_IEs_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v1610_IEs = {
	"RRCConnectionSetupComplete-v1610-IEs",
	"RRCConnectionSetupComplete-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionSetupComplete_v1610_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetupComplete_v1610_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetupComplete_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetupComplete_v1610_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_v1610_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RRCConnectionSetupComplete_v1610_IEs_1,
	7,	/* Elements count */
	&asn_SPC_RRCConnectionSetupComplete_v1610_IEs_specs_1	/* Additional specs */
};

