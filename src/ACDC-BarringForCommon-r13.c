/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "ACDC-BarringForCommon-r13.h"

asn_TYPE_member_t asn_MBR_ACDC_BarringForCommon_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ACDC_BarringForCommon_r13, acdc_HPLMNonly_r13),
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
		"acdc-HPLMNonly-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ACDC_BarringForCommon_r13, barringPerACDC_CategoryList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BarringPerACDC_CategoryList_r13,
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
		"barringPerACDC-CategoryList-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_ACDC_BarringForCommon_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ACDC_BarringForCommon_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* acdc-HPLMNonly-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* barringPerACDC-CategoryList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_ACDC_BarringForCommon_r13_specs_1 = {
	sizeof(struct ACDC_BarringForCommon_r13),
	offsetof(struct ACDC_BarringForCommon_r13, _asn_ctx),
	asn_MAP_ACDC_BarringForCommon_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ACDC_BarringForCommon_r13 = {
	"ACDC-BarringForCommon-r13",
	"ACDC-BarringForCommon-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_ACDC_BarringForCommon_r13_tags_1,
	sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1)
		/sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1[0]), /* 1 */
	asn_DEF_ACDC_BarringForCommon_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1)
		/sizeof(asn_DEF_ACDC_BarringForCommon_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ACDC_BarringForCommon_r13_1,
	2,	/* Elements count */
	&asn_SPC_ACDC_BarringForCommon_r13_specs_1	/* Additional specs */
};

