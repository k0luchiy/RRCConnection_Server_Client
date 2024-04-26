/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "AUL-Config-r15.h"

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
static int
memb_aul_Subframes_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 40UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_aul_HARQ_Processes_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_aul_StartingFullBW_InsideMCOT_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 5UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_aul_StartingFullBW_OutsideMCOT_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 7UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_endingSymbolAUL_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 12L && value <= 13L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_subframeOffsetCOT_Sharing_r15_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2L && value <= 4L)) {
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
static asn_per_constraints_t asn_PER_type_transmissionModeUL_AUL_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_aul_StartingPartialBW_InsideMCOT_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_aul_StartingPartialBW_OutsideMCOT_r15_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_aul_RetransmissionTimer_r15_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_contentionWindowSizeTimer_r15_constr_46 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_aul_Subframes_r15_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_aul_HARQ_Processes_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_aul_StartingFullBW_InsideMCOT_r15_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_aul_StartingFullBW_OutsideMCOT_r15_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  7,  7 }	/* (SIZE(7..7)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_endingSymbolAUL_r15_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  12,  13 }	/* (12..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_subframeOffsetCOT_Sharing_r15_constr_45 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  2,  4 }	/* (2..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_AUL_Config_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_transmissionModeUL_AUL_r15_value2enum_7[] = {
	{ 0,	3,	"tm1" },
	{ 1,	3,	"tm2" }
};
static const unsigned int asn_MAP_transmissionModeUL_AUL_r15_enum2value_7[] = {
	0,	/* tm1(0) */
	1	/* tm2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionModeUL_AUL_r15_specs_7 = {
	asn_MAP_transmissionModeUL_AUL_r15_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionModeUL_AUL_r15_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionModeUL_AUL_r15_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionModeUL_AUL_r15_7 = {
	"transmissionModeUL-AUL-r15",
	"transmissionModeUL-AUL-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionModeUL_AUL_r15_tags_7,
	sizeof(asn_DEF_transmissionModeUL_AUL_r15_tags_7)
		/sizeof(asn_DEF_transmissionModeUL_AUL_r15_tags_7[0]) - 1, /* 1 */
	asn_DEF_transmissionModeUL_AUL_r15_tags_7,	/* Same as above */
	sizeof(asn_DEF_transmissionModeUL_AUL_r15_tags_7)
		/sizeof(asn_DEF_transmissionModeUL_AUL_r15_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_transmissionModeUL_AUL_r15_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionModeUL_AUL_r15_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_aul_StartingPartialBW_InsideMCOT_r15_value2enum_12[] = {
	{ 0,	3,	"o34" },
	{ 1,	3,	"o43" },
	{ 2,	3,	"o52" },
	{ 3,	3,	"o61" },
	{ 4,	4,	"oOS1" }
};
static const unsigned int asn_MAP_aul_StartingPartialBW_InsideMCOT_r15_enum2value_12[] = {
	0,	/* o34(0) */
	1,	/* o43(1) */
	2,	/* o52(2) */
	3,	/* o61(3) */
	4	/* oOS1(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_aul_StartingPartialBW_InsideMCOT_r15_specs_12 = {
	asn_MAP_aul_StartingPartialBW_InsideMCOT_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_aul_StartingPartialBW_InsideMCOT_r15_enum2value_12,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_12 = {
	"aul-StartingPartialBW-InsideMCOT-r15",
	"aul-StartingPartialBW-InsideMCOT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_tags_12,
	sizeof(asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_tags_12)
		/sizeof(asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_tags_12)
		/sizeof(asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_aul_StartingPartialBW_InsideMCOT_r15_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_aul_StartingPartialBW_InsideMCOT_r15_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_aul_StartingPartialBW_OutsideMCOT_r15_value2enum_18[] = {
	{ 0,	3,	"o16" },
	{ 1,	3,	"o25" },
	{ 2,	3,	"o34" },
	{ 3,	3,	"o43" },
	{ 4,	3,	"o52" },
	{ 5,	3,	"o61" },
	{ 6,	4,	"oOS1" }
};
static const unsigned int asn_MAP_aul_StartingPartialBW_OutsideMCOT_r15_enum2value_18[] = {
	0,	/* o16(0) */
	1,	/* o25(1) */
	2,	/* o34(2) */
	3,	/* o43(3) */
	4,	/* o52(4) */
	5,	/* o61(5) */
	6	/* oOS1(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_aul_StartingPartialBW_OutsideMCOT_r15_specs_18 = {
	asn_MAP_aul_StartingPartialBW_OutsideMCOT_r15_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_aul_StartingPartialBW_OutsideMCOT_r15_enum2value_18,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_18 = {
	"aul-StartingPartialBW-OutsideMCOT-r15",
	"aul-StartingPartialBW-OutsideMCOT-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_tags_18,
	sizeof(asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_tags_18)
		/sizeof(asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_tags_18[0]) - 1, /* 1 */
	asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_tags_18,	/* Same as above */
	sizeof(asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_tags_18)
		/sizeof(asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_aul_StartingPartialBW_OutsideMCOT_r15_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_aul_StartingPartialBW_OutsideMCOT_r15_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_aul_RetransmissionTimer_r15_value2enum_26[] = {
	{ 0,	4,	"psf4" },
	{ 1,	4,	"psf5" },
	{ 2,	4,	"psf6" },
	{ 3,	4,	"psf8" },
	{ 4,	5,	"psf10" },
	{ 5,	5,	"psf12" },
	{ 6,	5,	"psf20" },
	{ 7,	5,	"psf28" },
	{ 8,	5,	"psf37" },
	{ 9,	5,	"psf44" },
	{ 10,	5,	"psf68" },
	{ 11,	5,	"psf84" },
	{ 12,	6,	"psf100" },
	{ 13,	6,	"psf116" },
	{ 14,	6,	"psf132" },
	{ 15,	6,	"psf164" },
	{ 16,	6,	"psf324" }
};
static const unsigned int asn_MAP_aul_RetransmissionTimer_r15_enum2value_26[] = {
	4,	/* psf10(4) */
	12,	/* psf100(12) */
	13,	/* psf116(13) */
	5,	/* psf12(5) */
	14,	/* psf132(14) */
	15,	/* psf164(15) */
	6,	/* psf20(6) */
	7,	/* psf28(7) */
	16,	/* psf324(16) */
	8,	/* psf37(8) */
	0,	/* psf4(0) */
	9,	/* psf44(9) */
	1,	/* psf5(1) */
	2,	/* psf6(2) */
	10,	/* psf68(10) */
	3,	/* psf8(3) */
	11	/* psf84(11) */
};
static const asn_INTEGER_specifics_t asn_SPC_aul_RetransmissionTimer_r15_specs_26 = {
	asn_MAP_aul_RetransmissionTimer_r15_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_aul_RetransmissionTimer_r15_enum2value_26,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_aul_RetransmissionTimer_r15_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_aul_RetransmissionTimer_r15_26 = {
	"aul-RetransmissionTimer-r15",
	"aul-RetransmissionTimer-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_aul_RetransmissionTimer_r15_tags_26,
	sizeof(asn_DEF_aul_RetransmissionTimer_r15_tags_26)
		/sizeof(asn_DEF_aul_RetransmissionTimer_r15_tags_26[0]) - 1, /* 1 */
	asn_DEF_aul_RetransmissionTimer_r15_tags_26,	/* Same as above */
	sizeof(asn_DEF_aul_RetransmissionTimer_r15_tags_26)
		/sizeof(asn_DEF_aul_RetransmissionTimer_r15_tags_26[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_aul_RetransmissionTimer_r15_constr_26,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_aul_RetransmissionTimer_r15_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_contentionWindowSizeTimer_r15_value2enum_46[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n5" },
	{ 2,	3,	"n10" }
};
static const unsigned int asn_MAP_contentionWindowSizeTimer_r15_enum2value_46[] = {
	0,	/* n0(0) */
	2,	/* n10(2) */
	1	/* n5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_contentionWindowSizeTimer_r15_specs_46 = {
	asn_MAP_contentionWindowSizeTimer_r15_value2enum_46,	/* "tag" => N; sorted by tag */
	asn_MAP_contentionWindowSizeTimer_r15_enum2value_46,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_contentionWindowSizeTimer_r15_tags_46[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_contentionWindowSizeTimer_r15_46 = {
	"contentionWindowSizeTimer-r15",
	"contentionWindowSizeTimer-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_contentionWindowSizeTimer_r15_tags_46,
	sizeof(asn_DEF_contentionWindowSizeTimer_r15_tags_46)
		/sizeof(asn_DEF_contentionWindowSizeTimer_r15_tags_46[0]) - 1, /* 1 */
	asn_DEF_contentionWindowSizeTimer_r15_tags_46,	/* Same as above */
	sizeof(asn_DEF_contentionWindowSizeTimer_r15_tags_46)
		/sizeof(asn_DEF_contentionWindowSizeTimer_r15_tags_46[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_contentionWindowSizeTimer_r15_constr_46,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_contentionWindowSizeTimer_r15_specs_46	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_CRNTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
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
		"aul-CRNTI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_Subframes_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_aul_Subframes_r15_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_aul_Subframes_r15_constraint_3
		},
		0, 0, /* No default value */
		"aul-Subframes-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_HARQ_Processes_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_aul_HARQ_Processes_r15_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_aul_HARQ_Processes_r15_constraint_3
		},
		0, 0, /* No default value */
		"aul-HARQ-Processes-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, transmissionModeUL_AUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionModeUL_AUL_r15_7,
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
		"transmissionModeUL-AUL-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_StartingFullBW_InsideMCOT_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_aul_StartingFullBW_InsideMCOT_r15_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_aul_StartingFullBW_InsideMCOT_r15_constraint_3
		},
		0, 0, /* No default value */
		"aul-StartingFullBW-InsideMCOT-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_StartingFullBW_OutsideMCOT_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_aul_StartingFullBW_OutsideMCOT_r15_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_aul_StartingFullBW_OutsideMCOT_r15_constraint_3
		},
		0, 0, /* No default value */
		"aul-StartingFullBW-OutsideMCOT-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_StartingPartialBW_InsideMCOT_r15),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_aul_StartingPartialBW_InsideMCOT_r15_12,
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
		"aul-StartingPartialBW-InsideMCOT-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_StartingPartialBW_OutsideMCOT_r15),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_aul_StartingPartialBW_OutsideMCOT_r15_18,
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
		"aul-StartingPartialBW-OutsideMCOT-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, aul_RetransmissionTimer_r15),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_aul_RetransmissionTimer_r15_26,
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
		"aul-RetransmissionTimer-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, endingSymbolAUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_endingSymbolAUL_r15_constr_44,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_endingSymbolAUL_r15_constraint_3
		},
		0, 0, /* No default value */
		"endingSymbolAUL-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, subframeOffsetCOT_Sharing_r15),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_subframeOffsetCOT_Sharing_r15_constr_45,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_subframeOffsetCOT_Sharing_r15_constraint_3
		},
		0, 0, /* No default value */
		"subframeOffsetCOT-Sharing-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15__setup, contentionWindowSizeTimer_r15),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_contentionWindowSizeTimer_r15_46,
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
		"contentionWindowSizeTimer-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aul-CRNTI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* aul-Subframes-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aul-HARQ-Processes-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* transmissionModeUL-AUL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* aul-StartingFullBW-InsideMCOT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* aul-StartingFullBW-OutsideMCOT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* aul-StartingPartialBW-InsideMCOT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* aul-StartingPartialBW-OutsideMCOT-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* aul-RetransmissionTimer-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* endingSymbolAUL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* subframeOffsetCOT-Sharing-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* contentionWindowSizeTimer-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct AUL_Config_r15__setup),
	offsetof(struct AUL_Config_r15__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	12,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_setup_3,
	12,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AUL_Config_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15, choice.release),
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
	{ ATF_NOFLAGS, 0, offsetof(struct AUL_Config_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
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
static const asn_TYPE_tag2member_t asn_MAP_AUL_Config_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_AUL_Config_r15_specs_1 = {
	sizeof(struct AUL_Config_r15),
	offsetof(struct AUL_Config_r15, _asn_ctx),
	offsetof(struct AUL_Config_r15, present),
	sizeof(((struct AUL_Config_r15 *)0)->present),
	asn_MAP_AUL_Config_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_AUL_Config_r15 = {
	"AUL-Config-r15",
	"AUL-Config-r15",
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
		&asn_PER_type_AUL_Config_r15_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_AUL_Config_r15_1,
	2,	/* Elements count */
	&asn_SPC_AUL_Config_r15_specs_1	/* Additional specs */
};

