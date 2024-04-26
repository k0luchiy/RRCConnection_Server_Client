/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "AntennaInfoDedicated-v920.h"

static int
memb_n2TxAntenna_tm8_r9_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 6UL)) {
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
memb_n4TxAntenna_tm8_r9_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32UL)) {
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
static asn_per_constraints_t asn_PER_memb_n2TxAntenna_tm8_r9_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_n4TxAntenna_tm8_r9_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_codebookSubsetRestriction_v920_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_codebookSubsetRestriction_v920_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated_v920__codebookSubsetRestriction_v920, choice.n2TxAntenna_tm8_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_n2TxAntenna_tm8_r9_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_n2TxAntenna_tm8_r9_constraint_2
		},
		0, 0, /* No default value */
		"n2TxAntenna-tm8-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaInfoDedicated_v920__codebookSubsetRestriction_v920, choice.n4TxAntenna_tm8_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_n4TxAntenna_tm8_r9_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_n4TxAntenna_tm8_r9_constraint_2
		},
		0, 0, /* No default value */
		"n4TxAntenna-tm8-r9"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_codebookSubsetRestriction_v920_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n2TxAntenna-tm8-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* n4TxAntenna-tm8-r9 */
};
static asn_CHOICE_specifics_t asn_SPC_codebookSubsetRestriction_v920_specs_2 = {
	sizeof(struct AntennaInfoDedicated_v920__codebookSubsetRestriction_v920),
	offsetof(struct AntennaInfoDedicated_v920__codebookSubsetRestriction_v920, _asn_ctx),
	offsetof(struct AntennaInfoDedicated_v920__codebookSubsetRestriction_v920, present),
	sizeof(((struct AntennaInfoDedicated_v920__codebookSubsetRestriction_v920 *)0)->present),
	asn_MAP_codebookSubsetRestriction_v920_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_codebookSubsetRestriction_v920_2 = {
	"codebookSubsetRestriction-v920",
	"codebookSubsetRestriction-v920",
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
		&asn_PER_type_codebookSubsetRestriction_v920_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_codebookSubsetRestriction_v920_2,
	2,	/* Elements count */
	&asn_SPC_codebookSubsetRestriction_v920_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AntennaInfoDedicated_v920_1[] = {
	{ ATF_POINTER, 1, offsetof(struct AntennaInfoDedicated_v920, codebookSubsetRestriction_v920),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_codebookSubsetRestriction_v920_2,
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
		"codebookSubsetRestriction-v920"
		},
};
static const int asn_MAP_AntennaInfoDedicated_v920_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_AntennaInfoDedicated_v920_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AntennaInfoDedicated_v920_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* codebookSubsetRestriction-v920 */
};
asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoDedicated_v920_specs_1 = {
	sizeof(struct AntennaInfoDedicated_v920),
	offsetof(struct AntennaInfoDedicated_v920, _asn_ctx),
	asn_MAP_AntennaInfoDedicated_v920_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_AntennaInfoDedicated_v920_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v920 = {
	"AntennaInfoDedicated-v920",
	"AntennaInfoDedicated-v920",
	&asn_OP_SEQUENCE,
	asn_DEF_AntennaInfoDedicated_v920_tags_1,
	sizeof(asn_DEF_AntennaInfoDedicated_v920_tags_1)
		/sizeof(asn_DEF_AntennaInfoDedicated_v920_tags_1[0]), /* 1 */
	asn_DEF_AntennaInfoDedicated_v920_tags_1,	/* Same as above */
	sizeof(asn_DEF_AntennaInfoDedicated_v920_tags_1)
		/sizeof(asn_DEF_AntennaInfoDedicated_v920_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_AntennaInfoDedicated_v920_1,
	1,	/* Elements count */
	&asn_SPC_AntennaInfoDedicated_v920_specs_1	/* Additional specs */
};

