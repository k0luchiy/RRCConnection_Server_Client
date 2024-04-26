/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CA-MIMO-ParametersDL-r15.h"

#include "IntraBandContiguousCC-Info-r12.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_intraBandContiguousCC_InfoList_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 32UL)) {
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
static asn_per_constraints_t asn_PER_type_fourLayerTM3_TM4_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_intraBandContiguousCC_InfoList_r15_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_intraBandContiguousCC_InfoList_r15_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_fourLayerTM3_TM4_r15_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_fourLayerTM3_TM4_r15_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_fourLayerTM3_TM4_r15_specs_3 = {
	asn_MAP_fourLayerTM3_TM4_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_fourLayerTM3_TM4_r15_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fourLayerTM3_TM4_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fourLayerTM3_TM4_r15_3 = {
	"fourLayerTM3-TM4-r15",
	"fourLayerTM3-TM4-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_fourLayerTM3_TM4_r15_tags_3,
	sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_3)
		/sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_fourLayerTM3_TM4_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_3)
		/sizeof(asn_DEF_fourLayerTM3_TM4_r15_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_fourLayerTM3_TM4_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fourLayerTM3_TM4_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_intraBandContiguousCC_InfoList_r15_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IntraBandContiguousCC_Info_r12,
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
static const ber_tlv_tag_t asn_DEF_intraBandContiguousCC_InfoList_r15_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_intraBandContiguousCC_InfoList_r15_specs_5 = {
	sizeof(struct CA_MIMO_ParametersDL_r15__intraBandContiguousCC_InfoList_r15),
	offsetof(struct CA_MIMO_ParametersDL_r15__intraBandContiguousCC_InfoList_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraBandContiguousCC_InfoList_r15_5 = {
	"intraBandContiguousCC-InfoList-r15",
	"intraBandContiguousCC-InfoList-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_intraBandContiguousCC_InfoList_r15_tags_5,
	sizeof(asn_DEF_intraBandContiguousCC_InfoList_r15_tags_5)
		/sizeof(asn_DEF_intraBandContiguousCC_InfoList_r15_tags_5[0]) - 1, /* 1 */
	asn_DEF_intraBandContiguousCC_InfoList_r15_tags_5,	/* Same as above */
	sizeof(asn_DEF_intraBandContiguousCC_InfoList_r15_tags_5)
		/sizeof(asn_DEF_intraBandContiguousCC_InfoList_r15_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_intraBandContiguousCC_InfoList_r15_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_intraBandContiguousCC_InfoList_r15_5,
	1,	/* Single element */
	&asn_SPC_intraBandContiguousCC_InfoList_r15_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CA_MIMO_ParametersDL_r15_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CA_MIMO_ParametersDL_r15, supportedMIMO_CapabilityDL_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_CapabilityDL_r10,
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
		"supportedMIMO-CapabilityDL-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct CA_MIMO_ParametersDL_r15, fourLayerTM3_TM4_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fourLayerTM3_TM4_r15_3,
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
		"fourLayerTM3-TM4-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct CA_MIMO_ParametersDL_r15, intraBandContiguousCC_InfoList_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_intraBandContiguousCC_InfoList_r15_5,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_intraBandContiguousCC_InfoList_r15_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_intraBandContiguousCC_InfoList_r15_constraint_1
		},
		0, 0, /* No default value */
		"intraBandContiguousCC-InfoList-r15"
		},
};
static const int asn_MAP_CA_MIMO_ParametersDL_r15_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_CA_MIMO_ParametersDL_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CA_MIMO_ParametersDL_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedMIMO-CapabilityDL-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fourLayerTM3-TM4-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* intraBandContiguousCC-InfoList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_CA_MIMO_ParametersDL_r15_specs_1 = {
	sizeof(struct CA_MIMO_ParametersDL_r15),
	offsetof(struct CA_MIMO_ParametersDL_r15, _asn_ctx),
	asn_MAP_CA_MIMO_ParametersDL_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CA_MIMO_ParametersDL_r15_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CA_MIMO_ParametersDL_r15 = {
	"CA-MIMO-ParametersDL-r15",
	"CA-MIMO-ParametersDL-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_CA_MIMO_ParametersDL_r15_tags_1,
	sizeof(asn_DEF_CA_MIMO_ParametersDL_r15_tags_1)
		/sizeof(asn_DEF_CA_MIMO_ParametersDL_r15_tags_1[0]), /* 1 */
	asn_DEF_CA_MIMO_ParametersDL_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_CA_MIMO_ParametersDL_r15_tags_1)
		/sizeof(asn_DEF_CA_MIMO_ParametersDL_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CA_MIMO_ParametersDL_r15_1,
	3,	/* Elements count */
	&asn_SPC_CA_MIMO_ParametersDL_r15_specs_1	/* Additional specs */
};

