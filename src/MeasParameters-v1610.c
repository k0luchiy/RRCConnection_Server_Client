/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MeasParameters-v1610.h"

#include "MeasGapInfoNR-r16.h"
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
memb_bandInfoNR_v1610_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 64UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_bandInfoNR_v1610_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_altFreqPriority_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ce_DL_ChannelQualityReporting_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ce_MeasRSS_Dedicated_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_eutra_IdleInactiveMeasurements_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_IdleInactiveMeasFR1_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_nr_IdleInactiveMeasFR2_r16_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_idleInactiveValidityAreaList_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_measGapPatterns_NRonly_r16_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_measGapPatterns_NRonly_ENDC_r16_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_bandInfoNR_v1610_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_bandInfoNR_v1610_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MeasGapInfoNR_r16,
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
static const ber_tlv_tag_t asn_DEF_bandInfoNR_v1610_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandInfoNR_v1610_specs_2 = {
	sizeof(struct MeasParameters_v1610__bandInfoNR_v1610),
	offsetof(struct MeasParameters_v1610__bandInfoNR_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandInfoNR_v1610_2 = {
	"bandInfoNR-v1610",
	"bandInfoNR-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_bandInfoNR_v1610_tags_2,
	sizeof(asn_DEF_bandInfoNR_v1610_tags_2)
		/sizeof(asn_DEF_bandInfoNR_v1610_tags_2[0]) - 1, /* 1 */
	asn_DEF_bandInfoNR_v1610_tags_2,	/* Same as above */
	sizeof(asn_DEF_bandInfoNR_v1610_tags_2)
		/sizeof(asn_DEF_bandInfoNR_v1610_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_bandInfoNR_v1610_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_bandInfoNR_v1610_2,
	1,	/* Single element */
	&asn_SPC_bandInfoNR_v1610_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_altFreqPriority_r16_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_altFreqPriority_r16_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_altFreqPriority_r16_specs_4 = {
	asn_MAP_altFreqPriority_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_altFreqPriority_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_altFreqPriority_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altFreqPriority_r16_4 = {
	"altFreqPriority-r16",
	"altFreqPriority-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_altFreqPriority_r16_tags_4,
	sizeof(asn_DEF_altFreqPriority_r16_tags_4)
		/sizeof(asn_DEF_altFreqPriority_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_altFreqPriority_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_altFreqPriority_r16_tags_4)
		/sizeof(asn_DEF_altFreqPriority_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_altFreqPriority_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altFreqPriority_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_DL_ChannelQualityReporting_r16_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ce_DL_ChannelQualityReporting_r16_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_DL_ChannelQualityReporting_r16_specs_6 = {
	asn_MAP_ce_DL_ChannelQualityReporting_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_DL_ChannelQualityReporting_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_DL_ChannelQualityReporting_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_DL_ChannelQualityReporting_r16_6 = {
	"ce-DL-ChannelQualityReporting-r16",
	"ce-DL-ChannelQualityReporting-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_DL_ChannelQualityReporting_r16_tags_6,
	sizeof(asn_DEF_ce_DL_ChannelQualityReporting_r16_tags_6)
		/sizeof(asn_DEF_ce_DL_ChannelQualityReporting_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_ce_DL_ChannelQualityReporting_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_ce_DL_ChannelQualityReporting_r16_tags_6)
		/sizeof(asn_DEF_ce_DL_ChannelQualityReporting_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ce_DL_ChannelQualityReporting_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_DL_ChannelQualityReporting_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ce_MeasRSS_Dedicated_r16_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_ce_MeasRSS_Dedicated_r16_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ce_MeasRSS_Dedicated_r16_specs_8 = {
	asn_MAP_ce_MeasRSS_Dedicated_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ce_MeasRSS_Dedicated_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ce_MeasRSS_Dedicated_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ce_MeasRSS_Dedicated_r16_8 = {
	"ce-MeasRSS-Dedicated-r16",
	"ce-MeasRSS-Dedicated-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_ce_MeasRSS_Dedicated_r16_tags_8,
	sizeof(asn_DEF_ce_MeasRSS_Dedicated_r16_tags_8)
		/sizeof(asn_DEF_ce_MeasRSS_Dedicated_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_ce_MeasRSS_Dedicated_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_ce_MeasRSS_Dedicated_r16_tags_8)
		/sizeof(asn_DEF_ce_MeasRSS_Dedicated_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ce_MeasRSS_Dedicated_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ce_MeasRSS_Dedicated_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_eutra_IdleInactiveMeasurements_r16_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_eutra_IdleInactiveMeasurements_r16_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_eutra_IdleInactiveMeasurements_r16_specs_10 = {
	asn_MAP_eutra_IdleInactiveMeasurements_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_eutra_IdleInactiveMeasurements_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_eutra_IdleInactiveMeasurements_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_IdleInactiveMeasurements_r16_10 = {
	"eutra-IdleInactiveMeasurements-r16",
	"eutra-IdleInactiveMeasurements-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_eutra_IdleInactiveMeasurements_r16_tags_10,
	sizeof(asn_DEF_eutra_IdleInactiveMeasurements_r16_tags_10)
		/sizeof(asn_DEF_eutra_IdleInactiveMeasurements_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_eutra_IdleInactiveMeasurements_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_eutra_IdleInactiveMeasurements_r16_tags_10)
		/sizeof(asn_DEF_eutra_IdleInactiveMeasurements_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_eutra_IdleInactiveMeasurements_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_eutra_IdleInactiveMeasurements_r16_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nr_IdleInactiveMeasFR1_r16_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_nr_IdleInactiveMeasFR1_r16_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_IdleInactiveMeasFR1_r16_specs_12 = {
	asn_MAP_nr_IdleInactiveMeasFR1_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_IdleInactiveMeasFR1_r16_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_IdleInactiveMeasFR1_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_IdleInactiveMeasFR1_r16_12 = {
	"nr-IdleInactiveMeasFR1-r16",
	"nr-IdleInactiveMeasFR1-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_IdleInactiveMeasFR1_r16_tags_12,
	sizeof(asn_DEF_nr_IdleInactiveMeasFR1_r16_tags_12)
		/sizeof(asn_DEF_nr_IdleInactiveMeasFR1_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_nr_IdleInactiveMeasFR1_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_nr_IdleInactiveMeasFR1_r16_tags_12)
		/sizeof(asn_DEF_nr_IdleInactiveMeasFR1_r16_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_IdleInactiveMeasFR1_r16_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_IdleInactiveMeasFR1_r16_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nr_IdleInactiveMeasFR2_r16_value2enum_14[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_nr_IdleInactiveMeasFR2_r16_enum2value_14[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_nr_IdleInactiveMeasFR2_r16_specs_14 = {
	asn_MAP_nr_IdleInactiveMeasFR2_r16_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_nr_IdleInactiveMeasFR2_r16_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nr_IdleInactiveMeasFR2_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nr_IdleInactiveMeasFR2_r16_14 = {
	"nr-IdleInactiveMeasFR2-r16",
	"nr-IdleInactiveMeasFR2-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_nr_IdleInactiveMeasFR2_r16_tags_14,
	sizeof(asn_DEF_nr_IdleInactiveMeasFR2_r16_tags_14)
		/sizeof(asn_DEF_nr_IdleInactiveMeasFR2_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_nr_IdleInactiveMeasFR2_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_nr_IdleInactiveMeasFR2_r16_tags_14)
		/sizeof(asn_DEF_nr_IdleInactiveMeasFR2_r16_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_nr_IdleInactiveMeasFR2_r16_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nr_IdleInactiveMeasFR2_r16_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_idleInactiveValidityAreaList_r16_value2enum_16[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_idleInactiveValidityAreaList_r16_enum2value_16[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_idleInactiveValidityAreaList_r16_specs_16 = {
	asn_MAP_idleInactiveValidityAreaList_r16_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_idleInactiveValidityAreaList_r16_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_idleInactiveValidityAreaList_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_idleInactiveValidityAreaList_r16_16 = {
	"idleInactiveValidityAreaList-r16",
	"idleInactiveValidityAreaList-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_idleInactiveValidityAreaList_r16_tags_16,
	sizeof(asn_DEF_idleInactiveValidityAreaList_r16_tags_16)
		/sizeof(asn_DEF_idleInactiveValidityAreaList_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_idleInactiveValidityAreaList_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_idleInactiveValidityAreaList_r16_tags_16)
		/sizeof(asn_DEF_idleInactiveValidityAreaList_r16_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_idleInactiveValidityAreaList_r16_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_idleInactiveValidityAreaList_r16_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measGapPatterns_NRonly_r16_value2enum_18[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_measGapPatterns_NRonly_r16_enum2value_18[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_measGapPatterns_NRonly_r16_specs_18 = {
	asn_MAP_measGapPatterns_NRonly_r16_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_measGapPatterns_NRonly_r16_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measGapPatterns_NRonly_r16_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measGapPatterns_NRonly_r16_18 = {
	"measGapPatterns-NRonly-r16",
	"measGapPatterns-NRonly-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_measGapPatterns_NRonly_r16_tags_18,
	sizeof(asn_DEF_measGapPatterns_NRonly_r16_tags_18)
		/sizeof(asn_DEF_measGapPatterns_NRonly_r16_tags_18[0]) - 1, /* 1 */
	asn_DEF_measGapPatterns_NRonly_r16_tags_18,	/* Same as above */
	sizeof(asn_DEF_measGapPatterns_NRonly_r16_tags_18)
		/sizeof(asn_DEF_measGapPatterns_NRonly_r16_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_measGapPatterns_NRonly_r16_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measGapPatterns_NRonly_r16_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_measGapPatterns_NRonly_ENDC_r16_value2enum_20[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_measGapPatterns_NRonly_ENDC_r16_enum2value_20[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_measGapPatterns_NRonly_ENDC_r16_specs_20 = {
	asn_MAP_measGapPatterns_NRonly_ENDC_r16_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_measGapPatterns_NRonly_ENDC_r16_enum2value_20,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measGapPatterns_NRonly_ENDC_r16_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measGapPatterns_NRonly_ENDC_r16_20 = {
	"measGapPatterns-NRonly-ENDC-r16",
	"measGapPatterns-NRonly-ENDC-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_measGapPatterns_NRonly_ENDC_r16_tags_20,
	sizeof(asn_DEF_measGapPatterns_NRonly_ENDC_r16_tags_20)
		/sizeof(asn_DEF_measGapPatterns_NRonly_ENDC_r16_tags_20[0]) - 1, /* 1 */
	asn_DEF_measGapPatterns_NRonly_ENDC_r16_tags_20,	/* Same as above */
	sizeof(asn_DEF_measGapPatterns_NRonly_ENDC_r16_tags_20)
		/sizeof(asn_DEF_measGapPatterns_NRonly_ENDC_r16_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_measGapPatterns_NRonly_ENDC_r16_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measGapPatterns_NRonly_ENDC_r16_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasParameters_v1610_1[] = {
	{ ATF_POINTER, 10, offsetof(struct MeasParameters_v1610, bandInfoNR_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_bandInfoNR_v1610_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_bandInfoNR_v1610_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_bandInfoNR_v1610_constraint_1
		},
		0, 0, /* No default value */
		"bandInfoNR-v1610"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasParameters_v1610, altFreqPriority_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altFreqPriority_r16_4,
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
		"altFreqPriority-r16"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasParameters_v1610, ce_DL_ChannelQualityReporting_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_DL_ChannelQualityReporting_r16_6,
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
		"ce-DL-ChannelQualityReporting-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasParameters_v1610, ce_MeasRSS_Dedicated_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ce_MeasRSS_Dedicated_r16_8,
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
		"ce-MeasRSS-Dedicated-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasParameters_v1610, eutra_IdleInactiveMeasurements_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_eutra_IdleInactiveMeasurements_r16_10,
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
		"eutra-IdleInactiveMeasurements-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasParameters_v1610, nr_IdleInactiveMeasFR1_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_IdleInactiveMeasFR1_r16_12,
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
		"nr-IdleInactiveMeasFR1-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasParameters_v1610, nr_IdleInactiveMeasFR2_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nr_IdleInactiveMeasFR2_r16_14,
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
		"nr-IdleInactiveMeasFR2-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasParameters_v1610, idleInactiveValidityAreaList_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_idleInactiveValidityAreaList_r16_16,
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
		"idleInactiveValidityAreaList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasParameters_v1610, measGapPatterns_NRonly_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measGapPatterns_NRonly_r16_18,
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
		"measGapPatterns-NRonly-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasParameters_v1610, measGapPatterns_NRonly_ENDC_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measGapPatterns_NRonly_ENDC_r16_20,
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
		"measGapPatterns-NRonly-ENDC-r16"
		},
};
static const int asn_MAP_MeasParameters_v1610_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_MeasParameters_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasParameters_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandInfoNR-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* altFreqPriority-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ce-DL-ChannelQualityReporting-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ce-MeasRSS-Dedicated-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eutra-IdleInactiveMeasurements-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* nr-IdleInactiveMeasFR1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* nr-IdleInactiveMeasFR2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* idleInactiveValidityAreaList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* measGapPatterns-NRonly-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* measGapPatterns-NRonly-ENDC-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasParameters_v1610_specs_1 = {
	sizeof(struct MeasParameters_v1610),
	offsetof(struct MeasParameters_v1610, _asn_ctx),
	asn_MAP_MeasParameters_v1610_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_MeasParameters_v1610_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1610 = {
	"MeasParameters-v1610",
	"MeasParameters-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasParameters_v1610_tags_1,
	sizeof(asn_DEF_MeasParameters_v1610_tags_1)
		/sizeof(asn_DEF_MeasParameters_v1610_tags_1[0]), /* 1 */
	asn_DEF_MeasParameters_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasParameters_v1610_tags_1)
		/sizeof(asn_DEF_MeasParameters_v1610_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MeasParameters_v1610_1,
	10,	/* Elements count */
	&asn_SPC_MeasParameters_v1610_specs_1	/* Additional specs */
};

