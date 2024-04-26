/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PUCCH-ConfigDedicated-v1020.h"

#include "N1PUCCH-AN-CS-r10.h"
static int
memb_n1PUCCH_AN_CS_List_r10_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 2UL)) {
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_n1PUCCH_AN_RepP1_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 2047L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_n1PUCCH_AN_CS_List_r10_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_n1PUCCH_AN_CS_List_r10_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_n1PUCCH_AN_CS_r10_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_pucch_Format_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_twoAntennaPortActivatedPUCCH_Format1a1b_r10_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_simultaneousPUCCH_PUSCH_r10_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_n1PUCCH_AN_RepP1_r10_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_n1PUCCH_AN_CS_List_r10_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_N1PUCCH_AN_CS_r10,
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
static const ber_tlv_tag_t asn_DEF_n1PUCCH_AN_CS_List_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_n1PUCCH_AN_CS_List_r10_specs_8 = {
	sizeof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup__n1PUCCH_AN_CS_List_r10),
	offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup__n1PUCCH_AN_CS_List_r10, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n1PUCCH_AN_CS_List_r10_8 = {
	"n1PUCCH-AN-CS-List-r10",
	"n1PUCCH-AN-CS-List-r10",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_n1PUCCH_AN_CS_List_r10_tags_8,
	sizeof(asn_DEF_n1PUCCH_AN_CS_List_r10_tags_8)
		/sizeof(asn_DEF_n1PUCCH_AN_CS_List_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_n1PUCCH_AN_CS_List_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_n1PUCCH_AN_CS_List_r10_tags_8)
		/sizeof(asn_DEF_n1PUCCH_AN_CS_List_r10_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_n1PUCCH_AN_CS_List_r10_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_n1PUCCH_AN_CS_List_r10_8,
	1,	/* Single element */
	&asn_SPC_n1PUCCH_AN_CS_List_r10_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup, n1PUCCH_AN_CS_List_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_n1PUCCH_AN_CS_List_r10_8,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_n1PUCCH_AN_CS_List_r10_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_n1PUCCH_AN_CS_List_r10_constraint_7
		},
		0, 0, /* No default value */
		"n1PUCCH-AN-CS-List-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* n1PUCCH-AN-CS-List-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_7 = {
	sizeof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup),
	offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_7,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_7 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_7,
	sizeof(asn_DEF_setup_tags_7)
		/sizeof(asn_DEF_setup_tags_7[0]) - 1, /* 1 */
	asn_DEF_setup_tags_7,	/* Same as above */
	sizeof(asn_DEF_setup_tags_7)
		/sizeof(asn_DEF_setup_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_setup_7,
	1,	/* Elements count */
	&asn_SPC_setup_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_n1PUCCH_AN_CS_r10_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_7,
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
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_n1PUCCH_AN_CS_r10_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_n1PUCCH_AN_CS_r10_specs_5 = {
	sizeof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10),
	offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10, _asn_ctx),
	offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10, present),
	sizeof(((struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10__n1PUCCH_AN_CS_r10 *)0)->present),
	asn_MAP_n1PUCCH_AN_CS_r10_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_n1PUCCH_AN_CS_r10_5 = {
	"n1PUCCH-AN-CS-r10",
	"n1PUCCH-AN-CS-r10",
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
		&asn_PER_type_n1PUCCH_AN_CS_r10_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_n1PUCCH_AN_CS_r10_5,
	2,	/* Elements count */
	&asn_SPC_n1PUCCH_AN_CS_r10_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_channelSelection_r10_4[] = {
	{ ATF_POINTER, 1, offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10, n1PUCCH_AN_CS_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_n1PUCCH_AN_CS_r10_5,
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
		"n1PUCCH-AN-CS-r10"
		},
};
static const int asn_MAP_channelSelection_r10_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_channelSelection_r10_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_channelSelection_r10_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* n1PUCCH-AN-CS-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_channelSelection_r10_specs_4 = {
	sizeof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10),
	offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10__channelSelection_r10, _asn_ctx),
	asn_MAP_channelSelection_r10_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_channelSelection_r10_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_channelSelection_r10_4 = {
	"channelSelection-r10",
	"channelSelection-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_channelSelection_r10_tags_4,
	sizeof(asn_DEF_channelSelection_r10_tags_4)
		/sizeof(asn_DEF_channelSelection_r10_tags_4[0]) - 1, /* 1 */
	asn_DEF_channelSelection_r10_tags_4,	/* Same as above */
	sizeof(asn_DEF_channelSelection_r10_tags_4)
		/sizeof(asn_DEF_channelSelection_r10_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_channelSelection_r10_4,
	1,	/* Elements count */
	&asn_SPC_channelSelection_r10_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pucch_Format_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10, choice.format3_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_Format3_Conf_r13,
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
		"format3-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10, choice.channelSelection_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_channelSelection_r10_4,
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
		"channelSelection-r10"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pucch_Format_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* format3-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* channelSelection-r10 */
};
static asn_CHOICE_specifics_t asn_SPC_pucch_Format_r10_specs_2 = {
	sizeof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10),
	offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10, _asn_ctx),
	offsetof(struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10, present),
	sizeof(((struct PUCCH_ConfigDedicated_v1020__pucch_Format_r10 *)0)->present),
	asn_MAP_pucch_Format_r10_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pucch_Format_r10_2 = {
	"pucch-Format-r10",
	"pucch-Format-r10",
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
		&asn_PER_type_pucch_Format_r10_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_pucch_Format_r10_2,
	2,	/* Elements count */
	&asn_SPC_pucch_Format_r10_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoAntennaPortActivatedPUCCH_Format1a1b_r10_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_twoAntennaPortActivatedPUCCH_Format1a1b_r10_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoAntennaPortActivatedPUCCH_Format1a1b_r10_specs_10 = {
	asn_MAP_twoAntennaPortActivatedPUCCH_Format1a1b_r10_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_twoAntennaPortActivatedPUCCH_Format1a1b_r10_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_10 = {
	"twoAntennaPortActivatedPUCCH-Format1a1b-r10",
	"twoAntennaPortActivatedPUCCH-Format1a1b-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_tags_10,
	sizeof(asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_tags_10)
		/sizeof(asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_tags_10[0]) - 1, /* 1 */
	asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_tags_10,	/* Same as above */
	sizeof(asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_tags_10)
		/sizeof(asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_twoAntennaPortActivatedPUCCH_Format1a1b_r10_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoAntennaPortActivatedPUCCH_Format1a1b_r10_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_simultaneousPUCCH_PUSCH_r10_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_simultaneousPUCCH_PUSCH_r10_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_simultaneousPUCCH_PUSCH_r10_specs_12 = {
	asn_MAP_simultaneousPUCCH_PUSCH_r10_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_simultaneousPUCCH_PUSCH_r10_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_simultaneousPUCCH_PUSCH_r10_12 = {
	"simultaneousPUCCH-PUSCH-r10",
	"simultaneousPUCCH-PUSCH-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_12,
	sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_12)
		/sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_12[0]) - 1, /* 1 */
	asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_12,	/* Same as above */
	sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_12)
		/sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_simultaneousPUCCH_PUSCH_r10_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_simultaneousPUCCH_PUSCH_r10_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_v1020_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PUCCH_ConfigDedicated_v1020, pucch_Format_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pucch_Format_r10_2,
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
		"pucch-Format-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct PUCCH_ConfigDedicated_v1020, twoAntennaPortActivatedPUCCH_Format1a1b_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoAntennaPortActivatedPUCCH_Format1a1b_r10_10,
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
		"twoAntennaPortActivatedPUCCH-Format1a1b-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PUCCH_ConfigDedicated_v1020, simultaneousPUCCH_PUSCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_simultaneousPUCCH_PUSCH_r10_12,
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
		"simultaneousPUCCH-PUSCH-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PUCCH_ConfigDedicated_v1020, n1PUCCH_AN_RepP1_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_n1PUCCH_AN_RepP1_r10_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_n1PUCCH_AN_RepP1_r10_constraint_1
		},
		0, 0, /* No default value */
		"n1PUCCH-AN-RepP1-r10"
		},
};
static const int asn_MAP_PUCCH_ConfigDedicated_v1020_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PUCCH_ConfigDedicated_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUCCH_ConfigDedicated_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pucch-Format-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* twoAntennaPortActivatedPUCCH-Format1a1b-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* simultaneousPUCCH-PUSCH-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* n1PUCCH-AN-RepP1-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_v1020_specs_1 = {
	sizeof(struct PUCCH_ConfigDedicated_v1020),
	offsetof(struct PUCCH_ConfigDedicated_v1020, _asn_ctx),
	asn_MAP_PUCCH_ConfigDedicated_v1020_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PUCCH_ConfigDedicated_v1020_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1020 = {
	"PUCCH-ConfigDedicated-v1020",
	"PUCCH-ConfigDedicated-v1020",
	&asn_OP_SEQUENCE,
	asn_DEF_PUCCH_ConfigDedicated_v1020_tags_1,
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1020_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1020_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_ConfigDedicated_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_ConfigDedicated_v1020_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_v1020_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PUCCH_ConfigDedicated_v1020_1,
	4,	/* Elements count */
	&asn_SPC_PUCCH_ConfigDedicated_v1020_specs_1	/* Additional specs */
};

