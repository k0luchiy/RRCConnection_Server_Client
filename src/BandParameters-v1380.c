/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "BandParameters-v1380.h"

static int
memb_txAntennaSwitchDL_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
memb_txAntennaSwitchUL_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
static asn_per_constraints_t asn_PER_memb_txAntennaSwitchDL_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_txAntennaSwitchUL_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_BandParameters_v1380_1[] = {
	{ ATF_POINTER, 2, offsetof(struct BandParameters_v1380, txAntennaSwitchDL_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_txAntennaSwitchDL_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_txAntennaSwitchDL_r13_constraint_1
		},
		0, 0, /* No default value */
		"txAntennaSwitchDL-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct BandParameters_v1380, txAntennaSwitchUL_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_txAntennaSwitchUL_r13_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_txAntennaSwitchUL_r13_constraint_1
		},
		0, 0, /* No default value */
		"txAntennaSwitchUL-r13"
		},
};
static const int asn_MAP_BandParameters_v1380_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_BandParameters_v1380_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandParameters_v1380_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* txAntennaSwitchDL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* txAntennaSwitchUL-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandParameters_v1380_specs_1 = {
	sizeof(struct BandParameters_v1380),
	offsetof(struct BandParameters_v1380, _asn_ctx),
	asn_MAP_BandParameters_v1380_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_BandParameters_v1380_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandParameters_v1380 = {
	"BandParameters-v1380",
	"BandParameters-v1380",
	&asn_OP_SEQUENCE,
	asn_DEF_BandParameters_v1380_tags_1,
	sizeof(asn_DEF_BandParameters_v1380_tags_1)
		/sizeof(asn_DEF_BandParameters_v1380_tags_1[0]), /* 1 */
	asn_DEF_BandParameters_v1380_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandParameters_v1380_tags_1)
		/sizeof(asn_DEF_BandParameters_v1380_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BandParameters_v1380_1,
	2,	/* Elements count */
	&asn_SPC_BandParameters_v1380_specs_1	/* Additional specs */
};

