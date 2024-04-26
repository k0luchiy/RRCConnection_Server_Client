/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CQI-ReportAperiodicProc-r11.h"

asn_TYPE_member_t asn_MBR_CQI_ReportAperiodicProc_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodicProc_r11, cqi_ReportModeAperiodic_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportModeAperiodic,
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
		"cqi-ReportModeAperiodic-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodicProc_r11, trigger01_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"trigger01-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodicProc_r11, trigger10_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
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
		"trigger10-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportAperiodicProc_r11, trigger11_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
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
		"trigger11-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_CQI_ReportAperiodicProc_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportAperiodicProc_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportModeAperiodic-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger01-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger10-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* trigger11-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportAperiodicProc_r11_specs_1 = {
	sizeof(struct CQI_ReportAperiodicProc_r11),
	offsetof(struct CQI_ReportAperiodicProc_r11, _asn_ctx),
	asn_MAP_CQI_ReportAperiodicProc_r11_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportAperiodicProc_r11 = {
	"CQI-ReportAperiodicProc-r11",
	"CQI-ReportAperiodicProc-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportAperiodicProc_r11_tags_1,
	sizeof(asn_DEF_CQI_ReportAperiodicProc_r11_tags_1)
		/sizeof(asn_DEF_CQI_ReportAperiodicProc_r11_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportAperiodicProc_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportAperiodicProc_r11_tags_1)
		/sizeof(asn_DEF_CQI_ReportAperiodicProc_r11_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CQI_ReportAperiodicProc_r11_1,
	4,	/* Elements count */
	&asn_SPC_CQI_ReportAperiodicProc_r11_specs_1	/* Additional specs */
};
