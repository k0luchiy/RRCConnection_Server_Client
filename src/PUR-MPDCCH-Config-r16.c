/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PUR-MPDCCH-Config-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_resourceBlockAssignment_r16_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4UL)) {
		/* Constraint check succeeded */
		return 0;
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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_mpdcch_Narrowband_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 16L)) {
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
static asn_per_constraints_t asn_PER_type_numberPRB_Pairs_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_resourceBlockAssignment_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mpdcch_NumRepetition_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_fdd_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_tdd_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mpdcch_StartSF_UESS_r16_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mpdcch_Offset_PUR_SS_r16_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_mpdcch_Narrowband_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_numberPRB_Pairs_r16_value2enum_5[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_numberPRB_Pairs_r16_enum2value_5[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2,	/* n6(2) */
	3	/* spare1(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_numberPRB_Pairs_r16_specs_5 = {
	asn_MAP_numberPRB_Pairs_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_numberPRB_Pairs_r16_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_numberPRB_Pairs_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberPRB_Pairs_r16_5 = {
	"numberPRB-Pairs-r16",
	"numberPRB-Pairs-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_numberPRB_Pairs_r16_tags_5,
	sizeof(asn_DEF_numberPRB_Pairs_r16_tags_5)
		/sizeof(asn_DEF_numberPRB_Pairs_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_numberPRB_Pairs_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_numberPRB_Pairs_r16_tags_5)
		/sizeof(asn_DEF_numberPRB_Pairs_r16_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_numberPRB_Pairs_r16_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberPRB_Pairs_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mpdcch_PRB_PairsConfig_r16_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16__mpdcch_PRB_PairsConfig_r16, numberPRB_Pairs_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberPRB_Pairs_r16_5,
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
		"numberPRB-Pairs-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16__mpdcch_PRB_PairsConfig_r16, resourceBlockAssignment_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_resourceBlockAssignment_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_resourceBlockAssignment_r16_constraint_4
		},
		0, 0, /* No default value */
		"resourceBlockAssignment-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_mpdcch_PRB_PairsConfig_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mpdcch_PRB_PairsConfig_r16_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberPRB-Pairs-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resourceBlockAssignment-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_mpdcch_PRB_PairsConfig_r16_specs_4 = {
	sizeof(struct PUR_MPDCCH_Config_r16__mpdcch_PRB_PairsConfig_r16),
	offsetof(struct PUR_MPDCCH_Config_r16__mpdcch_PRB_PairsConfig_r16, _asn_ctx),
	asn_MAP_mpdcch_PRB_PairsConfig_r16_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_PRB_PairsConfig_r16_4 = {
	"mpdcch-PRB-PairsConfig-r16",
	"mpdcch-PRB-PairsConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_mpdcch_PRB_PairsConfig_r16_tags_4,
	sizeof(asn_DEF_mpdcch_PRB_PairsConfig_r16_tags_4)
		/sizeof(asn_DEF_mpdcch_PRB_PairsConfig_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_mpdcch_PRB_PairsConfig_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_mpdcch_PRB_PairsConfig_r16_tags_4)
		/sizeof(asn_DEF_mpdcch_PRB_PairsConfig_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_mpdcch_PRB_PairsConfig_r16_4,
	2,	/* Elements count */
	&asn_SPC_mpdcch_PRB_PairsConfig_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mpdcch_NumRepetition_r16_value2enum_11[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" }
};
static const unsigned int asn_MAP_mpdcch_NumRepetition_r16_enum2value_11[] = {
	0,	/* r1(0) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_mpdcch_NumRepetition_r16_specs_11 = {
	asn_MAP_mpdcch_NumRepetition_r16_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_mpdcch_NumRepetition_r16_enum2value_11,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mpdcch_NumRepetition_r16_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_NumRepetition_r16_11 = {
	"mpdcch-NumRepetition-r16",
	"mpdcch-NumRepetition-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_mpdcch_NumRepetition_r16_tags_11,
	sizeof(asn_DEF_mpdcch_NumRepetition_r16_tags_11)
		/sizeof(asn_DEF_mpdcch_NumRepetition_r16_tags_11[0]) - 1, /* 1 */
	asn_DEF_mpdcch_NumRepetition_r16_tags_11,	/* Same as above */
	sizeof(asn_DEF_mpdcch_NumRepetition_r16_tags_11)
		/sizeof(asn_DEF_mpdcch_NumRepetition_r16_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mpdcch_NumRepetition_r16_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mpdcch_NumRepetition_r16_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fdd_value2enum_22[] = {
	{ 0,	2,	"v1" },
	{ 1,	6,	"v1dot5" },
	{ 2,	2,	"v2" },
	{ 3,	6,	"v2dot5" },
	{ 4,	2,	"v4" },
	{ 5,	2,	"v5" },
	{ 6,	2,	"v8" },
	{ 7,	3,	"v10" }
};
static const unsigned int asn_MAP_fdd_enum2value_22[] = {
	0,	/* v1(0) */
	7,	/* v10(7) */
	1,	/* v1dot5(1) */
	2,	/* v2(2) */
	3,	/* v2dot5(3) */
	4,	/* v4(4) */
	5,	/* v5(5) */
	6	/* v8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_fdd_specs_22 = {
	asn_MAP_fdd_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_fdd_enum2value_22,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_22 = {
	"fdd",
	"fdd",
	&asn_OP_NativeEnumerated,
	asn_DEF_fdd_tags_22,
	sizeof(asn_DEF_fdd_tags_22)
		/sizeof(asn_DEF_fdd_tags_22[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_22,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_22)
		/sizeof(asn_DEF_fdd_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fdd_constr_22,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fdd_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tdd_value2enum_31[] = {
	{ 0,	2,	"v1" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v5" },
	{ 4,	2,	"v8" },
	{ 5,	3,	"v10" },
	{ 6,	3,	"v20" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_tdd_enum2value_31[] = {
	7,	/* spare1(7) */
	0,	/* v1(0) */
	5,	/* v10(5) */
	1,	/* v2(1) */
	6,	/* v20(6) */
	2,	/* v4(2) */
	3,	/* v5(3) */
	4	/* v8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_tdd_specs_31 = {
	asn_MAP_tdd_value2enum_31,	/* "tag" => N; sorted by tag */
	asn_MAP_tdd_enum2value_31,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tdd_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_31 = {
	"tdd",
	"tdd",
	&asn_OP_NativeEnumerated,
	asn_DEF_tdd_tags_31,
	sizeof(asn_DEF_tdd_tags_31)
		/sizeof(asn_DEF_tdd_tags_31[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_31,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_31)
		/sizeof(asn_DEF_tdd_tags_31[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_tdd_constr_31,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tdd_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mpdcch_StartSF_UESS_r16_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16__mpdcch_StartSF_UESS_r16, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fdd_22,
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
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16__mpdcch_StartSF_UESS_r16, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tdd_31,
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
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mpdcch_StartSF_UESS_r16_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_mpdcch_StartSF_UESS_r16_specs_21 = {
	sizeof(struct PUR_MPDCCH_Config_r16__mpdcch_StartSF_UESS_r16),
	offsetof(struct PUR_MPDCCH_Config_r16__mpdcch_StartSF_UESS_r16, _asn_ctx),
	offsetof(struct PUR_MPDCCH_Config_r16__mpdcch_StartSF_UESS_r16, present),
	sizeof(((struct PUR_MPDCCH_Config_r16__mpdcch_StartSF_UESS_r16 *)0)->present),
	asn_MAP_mpdcch_StartSF_UESS_r16_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_StartSF_UESS_r16_21 = {
	"mpdcch-StartSF-UESS-r16",
	"mpdcch-StartSF-UESS-r16",
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
		&asn_PER_type_mpdcch_StartSF_UESS_r16_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_mpdcch_StartSF_UESS_r16_21,
	2,	/* Elements count */
	&asn_SPC_mpdcch_StartSF_UESS_r16_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mpdcch_Offset_PUR_SS_r16_value2enum_40[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	10,	"oneQuarter" },
	{ 3,	11,	"threeEighth" },
	{ 4,	7,	"oneHalf" },
	{ 5,	10,	"fiveEighth" },
	{ 6,	12,	"threeQuarter" },
	{ 7,	11,	"sevenEighth" }
};
static const unsigned int asn_MAP_mpdcch_Offset_PUR_SS_r16_enum2value_40[] = {
	5,	/* fiveEighth(5) */
	1,	/* oneEighth(1) */
	4,	/* oneHalf(4) */
	2,	/* oneQuarter(2) */
	7,	/* sevenEighth(7) */
	3,	/* threeEighth(3) */
	6,	/* threeQuarter(6) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mpdcch_Offset_PUR_SS_r16_specs_40 = {
	asn_MAP_mpdcch_Offset_PUR_SS_r16_value2enum_40,	/* "tag" => N; sorted by tag */
	asn_MAP_mpdcch_Offset_PUR_SS_r16_enum2value_40,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mpdcch_Offset_PUR_SS_r16_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mpdcch_Offset_PUR_SS_r16_40 = {
	"mpdcch-Offset-PUR-SS-r16",
	"mpdcch-Offset-PUR-SS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_mpdcch_Offset_PUR_SS_r16_tags_40,
	sizeof(asn_DEF_mpdcch_Offset_PUR_SS_r16_tags_40)
		/sizeof(asn_DEF_mpdcch_Offset_PUR_SS_r16_tags_40[0]) - 1, /* 1 */
	asn_DEF_mpdcch_Offset_PUR_SS_r16_tags_40,	/* Same as above */
	sizeof(asn_DEF_mpdcch_Offset_PUR_SS_r16_tags_40)
		/sizeof(asn_DEF_mpdcch_Offset_PUR_SS_r16_tags_40[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mpdcch_Offset_PUR_SS_r16_constr_40,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mpdcch_Offset_PUR_SS_r16_specs_40	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUR_MPDCCH_Config_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16, mpdcch_FreqHopping_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"mpdcch-FreqHopping-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16, mpdcch_Narrowband_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_mpdcch_Narrowband_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_mpdcch_Narrowband_r16_constraint_1
		},
		0, 0, /* No default value */
		"mpdcch-Narrowband-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16, mpdcch_PRB_PairsConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_mpdcch_PRB_PairsConfig_r16_4,
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
		"mpdcch-PRB-PairsConfig-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16, mpdcch_NumRepetition_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mpdcch_NumRepetition_r16_11,
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
		"mpdcch-NumRepetition-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16, mpdcch_StartSF_UESS_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mpdcch_StartSF_UESS_r16_21,
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
		"mpdcch-StartSF-UESS-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUR_MPDCCH_Config_r16, mpdcch_Offset_PUR_SS_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mpdcch_Offset_PUR_SS_r16_40,
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
		"mpdcch-Offset-PUR-SS-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_PUR_MPDCCH_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUR_MPDCCH_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mpdcch-FreqHopping-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mpdcch-Narrowband-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mpdcch-PRB-PairsConfig-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mpdcch-NumRepetition-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mpdcch-StartSF-UESS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* mpdcch-Offset-PUR-SS-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUR_MPDCCH_Config_r16_specs_1 = {
	sizeof(struct PUR_MPDCCH_Config_r16),
	offsetof(struct PUR_MPDCCH_Config_r16, _asn_ctx),
	asn_MAP_PUR_MPDCCH_Config_r16_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUR_MPDCCH_Config_r16 = {
	"PUR-MPDCCH-Config-r16",
	"PUR-MPDCCH-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_PUR_MPDCCH_Config_r16_tags_1,
	sizeof(asn_DEF_PUR_MPDCCH_Config_r16_tags_1)
		/sizeof(asn_DEF_PUR_MPDCCH_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_PUR_MPDCCH_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUR_MPDCCH_Config_r16_tags_1)
		/sizeof(asn_DEF_PUR_MPDCCH_Config_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PUR_MPDCCH_Config_r16_1,
	6,	/* Elements count */
	&asn_SPC_PUR_MPDCCH_Config_r16_specs_1	/* Additional specs */
};
