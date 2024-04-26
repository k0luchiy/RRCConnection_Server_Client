/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CQI-ReportBoth-v1310.h"

#include "CSI-IM-ConfigToReleaseListExt-r13.h"
#include "CSI-IM-ConfigToAddModListExt-r13.h"
asn_TYPE_member_t asn_MBR_CQI_ReportBoth_v1310_1[] = {
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportBoth_v1310, csi_IM_ConfigToReleaseListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_IM_ConfigToReleaseListExt_r13,
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
		"csi-IM-ConfigToReleaseListExt-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportBoth_v1310, csi_IM_ConfigToAddModListExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_IM_ConfigToAddModListExt_r13,
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
		"csi-IM-ConfigToAddModListExt-r13"
		},
};
static const int asn_MAP_CQI_ReportBoth_v1310_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_CQI_ReportBoth_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportBoth_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-IM-ConfigToReleaseListExt-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-IM-ConfigToAddModListExt-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportBoth_v1310_specs_1 = {
	sizeof(struct CQI_ReportBoth_v1310),
	offsetof(struct CQI_ReportBoth_v1310, _asn_ctx),
	asn_MAP_CQI_ReportBoth_v1310_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CQI_ReportBoth_v1310_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportBoth_v1310 = {
	"CQI-ReportBoth-v1310",
	"CQI-ReportBoth-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportBoth_v1310_tags_1,
	sizeof(asn_DEF_CQI_ReportBoth_v1310_tags_1)
		/sizeof(asn_DEF_CQI_ReportBoth_v1310_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportBoth_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportBoth_v1310_tags_1)
		/sizeof(asn_DEF_CQI_ReportBoth_v1310_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CQI_ReportBoth_v1310_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportBoth_v1310_specs_1	/* Additional specs */
};

