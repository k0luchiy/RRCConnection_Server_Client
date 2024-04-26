/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "BandParameters-v1610.h"

#include "SRS-CapabilityPerBandPair-v1610.h"
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
memb_srs_CapabilityPerBandPairList_v1610_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
static asn_per_constraints_t asn_PER_type_intraFreqAsyncDAPS_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dummy_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_intraFreqTwoTAGs_DAPS_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_addSRS_FrequencyHopping_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_addSRS_1T2R_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_addSRS_1T4R_r16_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_addSRS_2T4R_2pairs_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_addSRS_2T4R_3pairs_r16_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_srs_CapabilityPerBandPairList_v1610_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_srs_CapabilityPerBandPairList_v1610_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_intraFreqAsyncDAPS_r16_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_intraFreqAsyncDAPS_r16_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_intraFreqAsyncDAPS_r16_specs_3 = {
	asn_MAP_intraFreqAsyncDAPS_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_intraFreqAsyncDAPS_r16_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_intraFreqAsyncDAPS_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqAsyncDAPS_r16_3 = {
	"intraFreqAsyncDAPS-r16",
	"intraFreqAsyncDAPS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_intraFreqAsyncDAPS_r16_tags_3,
	sizeof(asn_DEF_intraFreqAsyncDAPS_r16_tags_3)
		/sizeof(asn_DEF_intraFreqAsyncDAPS_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_intraFreqAsyncDAPS_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_intraFreqAsyncDAPS_r16_tags_3)
		/sizeof(asn_DEF_intraFreqAsyncDAPS_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_intraFreqAsyncDAPS_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_intraFreqAsyncDAPS_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dummy_value2enum_5[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dummy_enum2value_5[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dummy_specs_5 = {
	asn_MAP_dummy_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_dummy_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dummy_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_5 = {
	"dummy",
	"dummy",
	&asn_OP_NativeEnumerated,
	asn_DEF_dummy_tags_5,
	sizeof(asn_DEF_dummy_tags_5)
		/sizeof(asn_DEF_dummy_tags_5[0]) - 1, /* 1 */
	asn_DEF_dummy_tags_5,	/* Same as above */
	sizeof(asn_DEF_dummy_tags_5)
		/sizeof(asn_DEF_dummy_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dummy_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dummy_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_intraFreqTwoTAGs_DAPS_r16_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_intraFreqTwoTAGs_DAPS_r16_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_intraFreqTwoTAGs_DAPS_r16_specs_7 = {
	asn_MAP_intraFreqTwoTAGs_DAPS_r16_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_intraFreqTwoTAGs_DAPS_r16_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_intraFreqTwoTAGs_DAPS_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqTwoTAGs_DAPS_r16_7 = {
	"intraFreqTwoTAGs-DAPS-r16",
	"intraFreqTwoTAGs-DAPS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_intraFreqTwoTAGs_DAPS_r16_tags_7,
	sizeof(asn_DEF_intraFreqTwoTAGs_DAPS_r16_tags_7)
		/sizeof(asn_DEF_intraFreqTwoTAGs_DAPS_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_intraFreqTwoTAGs_DAPS_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_intraFreqTwoTAGs_DAPS_r16_tags_7)
		/sizeof(asn_DEF_intraFreqTwoTAGs_DAPS_r16_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_intraFreqTwoTAGs_DAPS_r16_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_intraFreqTwoTAGs_DAPS_r16_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_intraFreqDAPS_r16_2[] = {
	{ ATF_POINTER, 3, offsetof(struct BandParameters_v1610__intraFreqDAPS_r16, intraFreqAsyncDAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_intraFreqAsyncDAPS_r16_3,
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
		"intraFreqAsyncDAPS-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters_v1610__intraFreqDAPS_r16, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dummy_5,
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
		"dummy"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1610__intraFreqDAPS_r16, intraFreqTwoTAGs_DAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_intraFreqTwoTAGs_DAPS_r16_7,
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
		"intraFreqTwoTAGs-DAPS-r16"
		},
};
static const int asn_MAP_intraFreqDAPS_r16_oms_2[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_intraFreqDAPS_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_intraFreqDAPS_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqAsyncDAPS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* intraFreqTwoTAGs-DAPS-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_intraFreqDAPS_r16_specs_2 = {
	sizeof(struct BandParameters_v1610__intraFreqDAPS_r16),
	offsetof(struct BandParameters_v1610__intraFreqDAPS_r16, _asn_ctx),
	asn_MAP_intraFreqDAPS_r16_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_intraFreqDAPS_r16_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqDAPS_r16_2 = {
	"intraFreqDAPS-r16",
	"intraFreqDAPS-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_intraFreqDAPS_r16_tags_2,
	sizeof(asn_DEF_intraFreqDAPS_r16_tags_2)
		/sizeof(asn_DEF_intraFreqDAPS_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_intraFreqDAPS_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_intraFreqDAPS_r16_tags_2)
		/sizeof(asn_DEF_intraFreqDAPS_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_intraFreqDAPS_r16_2,
	3,	/* Elements count */
	&asn_SPC_intraFreqDAPS_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_addSRS_FrequencyHopping_r16_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_addSRS_FrequencyHopping_r16_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_addSRS_FrequencyHopping_r16_specs_9 = {
	asn_MAP_addSRS_FrequencyHopping_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_addSRS_FrequencyHopping_r16_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_addSRS_FrequencyHopping_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_addSRS_FrequencyHopping_r16_9 = {
	"addSRS-FrequencyHopping-r16",
	"addSRS-FrequencyHopping-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_addSRS_FrequencyHopping_r16_tags_9,
	sizeof(asn_DEF_addSRS_FrequencyHopping_r16_tags_9)
		/sizeof(asn_DEF_addSRS_FrequencyHopping_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_addSRS_FrequencyHopping_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_addSRS_FrequencyHopping_r16_tags_9)
		/sizeof(asn_DEF_addSRS_FrequencyHopping_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_addSRS_FrequencyHopping_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_addSRS_FrequencyHopping_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_addSRS_1T2R_r16_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_addSRS_1T2R_r16_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_addSRS_1T2R_r16_specs_12 = {
	asn_MAP_addSRS_1T2R_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_addSRS_1T2R_r16_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_addSRS_1T2R_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_addSRS_1T2R_r16_12 = {
	"addSRS-1T2R-r16",
	"addSRS-1T2R-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_addSRS_1T2R_r16_tags_12,
	sizeof(asn_DEF_addSRS_1T2R_r16_tags_12)
		/sizeof(asn_DEF_addSRS_1T2R_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_addSRS_1T2R_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_addSRS_1T2R_r16_tags_12)
		/sizeof(asn_DEF_addSRS_1T2R_r16_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_addSRS_1T2R_r16_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_addSRS_1T2R_r16_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_addSRS_1T4R_r16_value2enum_14[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_addSRS_1T4R_r16_enum2value_14[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_addSRS_1T4R_r16_specs_14 = {
	asn_MAP_addSRS_1T4R_r16_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_addSRS_1T4R_r16_enum2value_14,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_addSRS_1T4R_r16_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_addSRS_1T4R_r16_14 = {
	"addSRS-1T4R-r16",
	"addSRS-1T4R-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_addSRS_1T4R_r16_tags_14,
	sizeof(asn_DEF_addSRS_1T4R_r16_tags_14)
		/sizeof(asn_DEF_addSRS_1T4R_r16_tags_14[0]) - 1, /* 1 */
	asn_DEF_addSRS_1T4R_r16_tags_14,	/* Same as above */
	sizeof(asn_DEF_addSRS_1T4R_r16_tags_14)
		/sizeof(asn_DEF_addSRS_1T4R_r16_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_addSRS_1T4R_r16_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_addSRS_1T4R_r16_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_addSRS_2T4R_2pairs_r16_value2enum_16[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_addSRS_2T4R_2pairs_r16_enum2value_16[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_addSRS_2T4R_2pairs_r16_specs_16 = {
	asn_MAP_addSRS_2T4R_2pairs_r16_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_addSRS_2T4R_2pairs_r16_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_addSRS_2T4R_2pairs_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_addSRS_2T4R_2pairs_r16_16 = {
	"addSRS-2T4R-2pairs-r16",
	"addSRS-2T4R-2pairs-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_addSRS_2T4R_2pairs_r16_tags_16,
	sizeof(asn_DEF_addSRS_2T4R_2pairs_r16_tags_16)
		/sizeof(asn_DEF_addSRS_2T4R_2pairs_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_addSRS_2T4R_2pairs_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_addSRS_2T4R_2pairs_r16_tags_16)
		/sizeof(asn_DEF_addSRS_2T4R_2pairs_r16_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_addSRS_2T4R_2pairs_r16_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_addSRS_2T4R_2pairs_r16_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_addSRS_2T4R_3pairs_r16_value2enum_18[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_addSRS_2T4R_3pairs_r16_enum2value_18[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_addSRS_2T4R_3pairs_r16_specs_18 = {
	asn_MAP_addSRS_2T4R_3pairs_r16_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_addSRS_2T4R_3pairs_r16_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_addSRS_2T4R_3pairs_r16_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_addSRS_2T4R_3pairs_r16_18 = {
	"addSRS-2T4R-3pairs-r16",
	"addSRS-2T4R-3pairs-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_addSRS_2T4R_3pairs_r16_tags_18,
	sizeof(asn_DEF_addSRS_2T4R_3pairs_r16_tags_18)
		/sizeof(asn_DEF_addSRS_2T4R_3pairs_r16_tags_18[0]) - 1, /* 1 */
	asn_DEF_addSRS_2T4R_3pairs_r16_tags_18,	/* Same as above */
	sizeof(asn_DEF_addSRS_2T4R_3pairs_r16_tags_18)
		/sizeof(asn_DEF_addSRS_2T4R_3pairs_r16_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_addSRS_2T4R_3pairs_r16_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_addSRS_2T4R_3pairs_r16_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_addSRS_AntennaSwitching_r16_11[] = {
	{ ATF_POINTER, 4, offsetof(struct BandParameters_v1610__addSRS_AntennaSwitching_r16, addSRS_1T2R_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_addSRS_1T2R_r16_12,
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
		"addSRS-1T2R-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct BandParameters_v1610__addSRS_AntennaSwitching_r16, addSRS_1T4R_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_addSRS_1T4R_r16_14,
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
		"addSRS-1T4R-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters_v1610__addSRS_AntennaSwitching_r16, addSRS_2T4R_2pairs_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_addSRS_2T4R_2pairs_r16_16,
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
		"addSRS-2T4R-2pairs-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1610__addSRS_AntennaSwitching_r16, addSRS_2T4R_3pairs_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_addSRS_2T4R_3pairs_r16_18,
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
		"addSRS-2T4R-3pairs-r16"
		},
};
static const int asn_MAP_addSRS_AntennaSwitching_r16_oms_11[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_addSRS_AntennaSwitching_r16_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_addSRS_AntennaSwitching_r16_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* addSRS-1T2R-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* addSRS-1T4R-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* addSRS-2T4R-2pairs-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* addSRS-2T4R-3pairs-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_addSRS_AntennaSwitching_r16_specs_11 = {
	sizeof(struct BandParameters_v1610__addSRS_AntennaSwitching_r16),
	offsetof(struct BandParameters_v1610__addSRS_AntennaSwitching_r16, _asn_ctx),
	asn_MAP_addSRS_AntennaSwitching_r16_tag2el_11,
	4,	/* Count of tags in the map */
	asn_MAP_addSRS_AntennaSwitching_r16_oms_11,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_addSRS_AntennaSwitching_r16_11 = {
	"addSRS-AntennaSwitching-r16",
	"addSRS-AntennaSwitching-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_addSRS_AntennaSwitching_r16_tags_11,
	sizeof(asn_DEF_addSRS_AntennaSwitching_r16_tags_11)
		/sizeof(asn_DEF_addSRS_AntennaSwitching_r16_tags_11[0]) - 1, /* 1 */
	asn_DEF_addSRS_AntennaSwitching_r16_tags_11,	/* Same as above */
	sizeof(asn_DEF_addSRS_AntennaSwitching_r16_tags_11)
		/sizeof(asn_DEF_addSRS_AntennaSwitching_r16_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_addSRS_AntennaSwitching_r16_11,
	4,	/* Elements count */
	&asn_SPC_addSRS_AntennaSwitching_r16_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_srs_CapabilityPerBandPairList_v1610_20[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SRS_CapabilityPerBandPair_v1610,
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
static const ber_tlv_tag_t asn_DEF_srs_CapabilityPerBandPairList_v1610_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_srs_CapabilityPerBandPairList_v1610_specs_20 = {
	sizeof(struct BandParameters_v1610__srs_CapabilityPerBandPairList_v1610),
	offsetof(struct BandParameters_v1610__srs_CapabilityPerBandPairList_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srs_CapabilityPerBandPairList_v1610_20 = {
	"srs-CapabilityPerBandPairList-v1610",
	"srs-CapabilityPerBandPairList-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_srs_CapabilityPerBandPairList_v1610_tags_20,
	sizeof(asn_DEF_srs_CapabilityPerBandPairList_v1610_tags_20)
		/sizeof(asn_DEF_srs_CapabilityPerBandPairList_v1610_tags_20[0]) - 1, /* 1 */
	asn_DEF_srs_CapabilityPerBandPairList_v1610_tags_20,	/* Same as above */
	sizeof(asn_DEF_srs_CapabilityPerBandPairList_v1610_tags_20)
		/sizeof(asn_DEF_srs_CapabilityPerBandPairList_v1610_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_srs_CapabilityPerBandPairList_v1610_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_srs_CapabilityPerBandPairList_v1610_20,
	1,	/* Single element */
	&asn_SPC_srs_CapabilityPerBandPairList_v1610_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandParameters_v1610_1[] = {
	{ ATF_POINTER, 4, offsetof(struct BandParameters_v1610, intraFreqDAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_intraFreqDAPS_r16_2,
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
		"intraFreqDAPS-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct BandParameters_v1610, addSRS_FrequencyHopping_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_addSRS_FrequencyHopping_r16_9,
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
		"addSRS-FrequencyHopping-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct BandParameters_v1610, addSRS_AntennaSwitching_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_addSRS_AntennaSwitching_r16_11,
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
		"addSRS-AntennaSwitching-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1610, srs_CapabilityPerBandPairList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_srs_CapabilityPerBandPairList_v1610_20,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_srs_CapabilityPerBandPairList_v1610_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_srs_CapabilityPerBandPairList_v1610_constraint_1
		},
		0, 0, /* No default value */
		"srs-CapabilityPerBandPairList-v1610"
		},
};
static const int asn_MAP_BandParameters_v1610_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_BandParameters_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqDAPS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* addSRS-FrequencyHopping-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* addSRS-AntennaSwitching-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* srs-CapabilityPerBandPairList-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1610_specs_1 = {
	sizeof(struct BandParameters_v1610),
	offsetof(struct BandParameters_v1610, _asn_ctx),
	asn_MAP_BandParameters_v1610_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_BandParameters_v1610_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_v1610 = {
	"BandParameters-v1610",
	"BandParameters-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_v1610_tags_1,
	sizeof(asn_DEF_BandParameters_v1610_tags_1)
		/sizeof(asn_DEF_BandParameters_v1610_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_v1610_tags_1)
		/sizeof(asn_DEF_BandParameters_v1610_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BandParameters_v1610_1,
	4,	/* Elements count */
	&asn_SPC_BandParameters_v1610_specs_1	/* Additional specs */
};

