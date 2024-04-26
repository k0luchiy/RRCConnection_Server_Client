/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MeasParameters-v1700.h"

#include "SharedSpectrumMeasNR-r17.h"
static int
memb_sharedSpectrumMeasNR_EN_DC_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 1024UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sharedSpectrumMeasNR_SA_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 1024UL)) {
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
static asn_per_constraints_t asn_PER_type_sharedSpectrumMeasNR_EN_DC_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_sharedSpectrumMeasNR_SA_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sharedSpectrumMeasNR_EN_DC_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sharedSpectrumMeasNR_SA_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1024 }	/* (SIZE(1..1024)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_sharedSpectrumMeasNR_EN_DC_r17_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SharedSpectrumMeasNR_r17,
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
static const ber_tlv_tag_t asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sharedSpectrumMeasNR_EN_DC_r17_specs_2 = {
	sizeof(struct MeasParameters_v1700__sharedSpectrumMeasNR_EN_DC_r17),
	offsetof(struct MeasParameters_v1700__sharedSpectrumMeasNR_EN_DC_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_2 = {
	"sharedSpectrumMeasNR-EN-DC-r17",
	"sharedSpectrumMeasNR-EN-DC-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_tags_2,
	sizeof(asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_tags_2)
		/sizeof(asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_tags_2)
		/sizeof(asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sharedSpectrumMeasNR_EN_DC_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_sharedSpectrumMeasNR_EN_DC_r17_2,
	1,	/* Single element */
	&asn_SPC_sharedSpectrumMeasNR_EN_DC_r17_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sharedSpectrumMeasNR_SA_r17_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SharedSpectrumMeasNR_r17,
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
static const ber_tlv_tag_t asn_DEF_sharedSpectrumMeasNR_SA_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sharedSpectrumMeasNR_SA_r17_specs_4 = {
	sizeof(struct MeasParameters_v1700__sharedSpectrumMeasNR_SA_r17),
	offsetof(struct MeasParameters_v1700__sharedSpectrumMeasNR_SA_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sharedSpectrumMeasNR_SA_r17_4 = {
	"sharedSpectrumMeasNR-SA-r17",
	"sharedSpectrumMeasNR-SA-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sharedSpectrumMeasNR_SA_r17_tags_4,
	sizeof(asn_DEF_sharedSpectrumMeasNR_SA_r17_tags_4)
		/sizeof(asn_DEF_sharedSpectrumMeasNR_SA_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_sharedSpectrumMeasNR_SA_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_sharedSpectrumMeasNR_SA_r17_tags_4)
		/sizeof(asn_DEF_sharedSpectrumMeasNR_SA_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_sharedSpectrumMeasNR_SA_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_sharedSpectrumMeasNR_SA_r17_4,
	1,	/* Single element */
	&asn_SPC_sharedSpectrumMeasNR_SA_r17_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasParameters_v1700_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasParameters_v1700, sharedSpectrumMeasNR_EN_DC_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sharedSpectrumMeasNR_EN_DC_r17_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sharedSpectrumMeasNR_EN_DC_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_sharedSpectrumMeasNR_EN_DC_r17_constraint_1
		},
		0, 0, /* No default value */
		"sharedSpectrumMeasNR-EN-DC-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasParameters_v1700, sharedSpectrumMeasNR_SA_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_sharedSpectrumMeasNR_SA_r17_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sharedSpectrumMeasNR_SA_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_sharedSpectrumMeasNR_SA_r17_constraint_1
		},
		0, 0, /* No default value */
		"sharedSpectrumMeasNR-SA-r17"
		},
};
static const int asn_MAP_MeasParameters_v1700_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MeasParameters_v1700_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasParameters_v1700_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sharedSpectrumMeasNR-EN-DC-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sharedSpectrumMeasNR-SA-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasParameters_v1700_specs_1 = {
	sizeof(struct MeasParameters_v1700),
	offsetof(struct MeasParameters_v1700, _asn_ctx),
	asn_MAP_MeasParameters_v1700_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MeasParameters_v1700_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1700 = {
	"MeasParameters-v1700",
	"MeasParameters-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasParameters_v1700_tags_1,
	sizeof(asn_DEF_MeasParameters_v1700_tags_1)
		/sizeof(asn_DEF_MeasParameters_v1700_tags_1[0]), /* 1 */
	asn_DEF_MeasParameters_v1700_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasParameters_v1700_tags_1)
		/sizeof(asn_DEF_MeasParameters_v1700_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MeasParameters_v1700_1,
	2,	/* Elements count */
	&asn_SPC_MeasParameters_v1700_specs_1	/* Additional specs */
};

