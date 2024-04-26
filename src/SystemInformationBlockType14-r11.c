/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType14-r11.h"

#include "EAB-ConfigPLMN-r11.h"
static int
memb_eab_PerPLMN_List_r11_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 6UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eab_PerPLMN_List_r11_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_eab_PerPLMN_List_r11_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eab_Param_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eab_PerRSRP_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_eab_PerPLMN_List_r11_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_EAB_ConfigPLMN_r11,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_eab_PerPLMN_List_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_eab_PerPLMN_List_r11_specs_4 = {
	sizeof(struct SystemInformationBlockType14_r11__eab_Param_r11__eab_PerPLMN_List_r11),
	offsetof(struct SystemInformationBlockType14_r11__eab_Param_r11__eab_PerPLMN_List_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eab_PerPLMN_List_r11_4 = {
	"eab-PerPLMN-List-r11",
	"eab-PerPLMN-List-r11",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_eab_PerPLMN_List_r11_tags_4,
	sizeof(asn_DEF_eab_PerPLMN_List_r11_tags_4)
		/sizeof(asn_DEF_eab_PerPLMN_List_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_eab_PerPLMN_List_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_eab_PerPLMN_List_r11_tags_4)
		/sizeof(asn_DEF_eab_PerPLMN_List_r11_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eab_PerPLMN_List_r11_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_eab_PerPLMN_List_r11_4,
	1,	/* Single element */
	&asn_SPC_eab_PerPLMN_List_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eab_Param_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType14_r11__eab_Param_r11, choice.eab_Common_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EAB_Config_r11,
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
		"eab-Common-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType14_r11__eab_Param_r11, choice.eab_PerPLMN_List_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_eab_PerPLMN_List_r11_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_eab_PerPLMN_List_r11_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_eab_PerPLMN_List_r11_constraint_2
		},
		0, 0, /* No default value */
		"eab-PerPLMN-List-r11"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_eab_Param_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eab-Common-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eab-PerPLMN-List-r11 */
};
static asn_CHOICE_specifics_t asn_SPC_eab_Param_r11_specs_2 = {
	sizeof(struct SystemInformationBlockType14_r11__eab_Param_r11),
	offsetof(struct SystemInformationBlockType14_r11__eab_Param_r11, _asn_ctx),
	offsetof(struct SystemInformationBlockType14_r11__eab_Param_r11, present),
	sizeof(((struct SystemInformationBlockType14_r11__eab_Param_r11 *)0)->present),
	asn_MAP_eab_Param_r11_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eab_Param_r11_2 = {
	"eab-Param-r11",
	"eab-Param-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eab_Param_r11_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_eab_Param_r11_2,
	2,	/* Elements count */
	&asn_SPC_eab_Param_r11_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eab_PerRSRP_r15_value2enum_9[] = {
	{ 0,	7,	"thresh0" },
	{ 1,	7,	"thresh1" },
	{ 2,	7,	"thresh2" },
	{ 3,	7,	"thresh3" }
};
static const unsigned int asn_MAP_eab_PerRSRP_r15_enum2value_9[] = {
	0,	/* thresh0(0) */
	1,	/* thresh1(1) */
	2,	/* thresh2(2) */
	3	/* thresh3(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_eab_PerRSRP_r15_specs_9 = {
	asn_MAP_eab_PerRSRP_r15_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_eab_PerRSRP_r15_enum2value_9,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eab_PerRSRP_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eab_PerRSRP_r15_9 = {
	"eab-PerRSRP-r15",
	"eab-PerRSRP-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_eab_PerRSRP_r15_tags_9,
	sizeof(asn_DEF_eab_PerRSRP_r15_tags_9)
		/sizeof(asn_DEF_eab_PerRSRP_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_eab_PerRSRP_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_eab_PerRSRP_r15_tags_9)
		/sizeof(asn_DEF_eab_PerRSRP_r15_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eab_PerRSRP_r15_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eab_PerRSRP_r15_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_8[] = {
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType14_r11__ext1, eab_PerRSRP_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eab_PerRSRP_r15_9,
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
		"eab-PerRSRP-r15"
		},
};
static const int asn_MAP_ext1_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* eab-PerRSRP-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_8 = {
	sizeof(struct SystemInformationBlockType14_r11__ext1),
	offsetof(struct SystemInformationBlockType14_r11__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_8,
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_8,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType14_r11_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType14_r11, eab_Param_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_eab_Param_r11_2,
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
		"eab-Param-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType14_r11, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType14_r11, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_8,
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
		"ext1"
		},
};
static const int asn_MAP_SystemInformationBlockType14_r11_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType14_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType14_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eab-Param-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType14_r11_specs_1 = {
	sizeof(struct SystemInformationBlockType14_r11),
	offsetof(struct SystemInformationBlockType14_r11, _asn_ctx),
	asn_MAP_SystemInformationBlockType14_r11_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType14_r11_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType14_r11 = {
	"SystemInformationBlockType14-r11",
	"SystemInformationBlockType14-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType14_r11_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType14_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType14_r11_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType14_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType14_r11_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType14_r11_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SystemInformationBlockType14_r11_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType14_r11_specs_1	/* Additional specs */
};

