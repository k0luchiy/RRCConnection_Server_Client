/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PUSCH-ConfigDedicated-v1020.h"

static int
memb_betaOffset_ACK_Index_MC_r10_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
memb_betaOffset_RI_Index_MC_r10_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
memb_betaOffset_CQI_Index_MC_r10_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_betaOffset_ACK_Index_MC_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_betaOffset_RI_Index_MC_r10_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_betaOffset_CQI_Index_MC_r10_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_groupHoppingDisabled_r10_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dmrs_WithOCC_Activated_r10_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_betaOffsetMC_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, betaOffset_ACK_Index_MC_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_betaOffset_ACK_Index_MC_r10_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_betaOffset_ACK_Index_MC_r10_constraint_2
		},
		0, 0, /* No default value */
		"betaOffset-ACK-Index-MC-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, betaOffset_RI_Index_MC_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_betaOffset_RI_Index_MC_r10_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_betaOffset_RI_Index_MC_r10_constraint_2
		},
		0, 0, /* No default value */
		"betaOffset-RI-Index-MC-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, betaOffset_CQI_Index_MC_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_betaOffset_CQI_Index_MC_r10_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_betaOffset_CQI_Index_MC_r10_constraint_2
		},
		0, 0, /* No default value */
		"betaOffset-CQI-Index-MC-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_betaOffsetMC_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_betaOffsetMC_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffset-ACK-Index-MC-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* betaOffset-RI-Index-MC-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* betaOffset-CQI-Index-MC-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_betaOffsetMC_r10_specs_2 = {
	sizeof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10),
	offsetof(struct PUSCH_ConfigDedicated_v1020__betaOffsetMC_r10, _asn_ctx),
	asn_MAP_betaOffsetMC_r10_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_betaOffsetMC_r10_2 = {
	"betaOffsetMC-r10",
	"betaOffsetMC-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_betaOffsetMC_r10_tags_2,
	sizeof(asn_DEF_betaOffsetMC_r10_tags_2)
		/sizeof(asn_DEF_betaOffsetMC_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_betaOffsetMC_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_betaOffsetMC_r10_tags_2)
		/sizeof(asn_DEF_betaOffsetMC_r10_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_betaOffsetMC_r10_2,
	3,	/* Elements count */
	&asn_SPC_betaOffsetMC_r10_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_groupHoppingDisabled_r10_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_groupHoppingDisabled_r10_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_groupHoppingDisabled_r10_specs_6 = {
	asn_MAP_groupHoppingDisabled_r10_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_groupHoppingDisabled_r10_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_groupHoppingDisabled_r10_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_groupHoppingDisabled_r10_6 = {
	"groupHoppingDisabled-r10",
	"groupHoppingDisabled-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_groupHoppingDisabled_r10_tags_6,
	sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6)
		/sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6[0]) - 1, /* 1 */
	asn_DEF_groupHoppingDisabled_r10_tags_6,	/* Same as above */
	sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6)
		/sizeof(asn_DEF_groupHoppingDisabled_r10_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_groupHoppingDisabled_r10_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_groupHoppingDisabled_r10_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dmrs_WithOCC_Activated_r10_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_dmrs_WithOCC_Activated_r10_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dmrs_WithOCC_Activated_r10_specs_8 = {
	asn_MAP_dmrs_WithOCC_Activated_r10_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_dmrs_WithOCC_Activated_r10_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dmrs_WithOCC_Activated_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_WithOCC_Activated_r10_8 = {
	"dmrs-WithOCC-Activated-r10",
	"dmrs-WithOCC-Activated-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_dmrs_WithOCC_Activated_r10_tags_8,
	sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8)
		/sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_dmrs_WithOCC_Activated_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8)
		/sizeof(asn_DEF_dmrs_WithOCC_Activated_r10_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dmrs_WithOCC_Activated_r10_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dmrs_WithOCC_Activated_r10_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicated_v1020_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PUSCH_ConfigDedicated_v1020, betaOffsetMC_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_betaOffsetMC_r10_2,
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
		"betaOffsetMC-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PUSCH_ConfigDedicated_v1020, groupHoppingDisabled_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_groupHoppingDisabled_r10_6,
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
		"groupHoppingDisabled-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PUSCH_ConfigDedicated_v1020, dmrs_WithOCC_Activated_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dmrs_WithOCC_Activated_r10_8,
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
		"dmrs-WithOCC-Activated-r10"
		},
};
static const int asn_MAP_PUSCH_ConfigDedicated_v1020_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUSCH_ConfigDedicated_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* betaOffsetMC-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* groupHoppingDisabled-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dmrs-WithOCC-Activated-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicated_v1020_specs_1 = {
	sizeof(struct PUSCH_ConfigDedicated_v1020),
	offsetof(struct PUSCH_ConfigDedicated_v1020, _asn_ctx),
	asn_MAP_PUSCH_ConfigDedicated_v1020_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PUSCH_ConfigDedicated_v1020_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1020 = {
	"PUSCH-ConfigDedicated-v1020",
	"PUSCH-ConfigDedicated-v1020",
	&asn_OP_SEQUENCE,
	asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1,
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1[0]), /* 1 */
	asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1)
		/sizeof(asn_DEF_PUSCH_ConfigDedicated_v1020_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PUSCH_ConfigDedicated_v1020_1,
	3,	/* Elements count */
	&asn_SPC_PUSCH_ConfigDedicated_v1020_specs_1	/* Additional specs */
};

