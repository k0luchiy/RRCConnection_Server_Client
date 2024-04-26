/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UplinkPowerControlCommon-v1610.h"

static int
memb_p0_NominalSRS_Add_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126L && value <= 24L)) {
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
static asn_per_constraints_t asn_PER_memb_p0_NominalSRS_Add_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_UplinkPowerControlCommon_v1610_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon_v1610, alphaSRS_Add_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Alpha_r12,
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
		"alphaSRS-Add-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlCommon_v1610, p0_NominalSRS_Add_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_p0_NominalSRS_Add_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_p0_NominalSRS_Add_r16_constraint_1
		},
		0, 0, /* No default value */
		"p0-NominalSRS-Add-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlCommon_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlCommon_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* alphaSRS-Add-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p0-NominalSRS-Add-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlCommon_v1610_specs_1 = {
	sizeof(struct UplinkPowerControlCommon_v1610),
	offsetof(struct UplinkPowerControlCommon_v1610, _asn_ctx),
	asn_MAP_UplinkPowerControlCommon_v1610_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlCommon_v1610 = {
	"UplinkPowerControlCommon-v1610",
	"UplinkPowerControlCommon-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkPowerControlCommon_v1610_tags_1,
	sizeof(asn_DEF_UplinkPowerControlCommon_v1610_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_v1610_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlCommon_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlCommon_v1610_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlCommon_v1610_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_UplinkPowerControlCommon_v1610_1,
	2,	/* Elements count */
	&asn_SPC_UplinkPowerControlCommon_v1610_specs_1	/* Additional specs */
};

