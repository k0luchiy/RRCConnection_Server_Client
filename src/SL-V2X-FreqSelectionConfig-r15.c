/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SL-V2X-FreqSelectionConfig-r15.h"

asn_TYPE_member_t asn_MBR_SL_V2X_FreqSelectionConfig_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_FreqSelectionConfig_r15, priorityList_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_PriorityList_r13,
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
		"priorityList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_V2X_FreqSelectionConfig_r15, threshCBR_FreqReselection_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CBR_r14,
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
		"threshCBR-FreqReselection-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_FreqSelectionConfig_r15, threshCBR_FreqKeeping_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CBR_r14,
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
		"threshCBR-FreqKeeping-r15"
		},
};
static const int asn_MAP_SL_V2X_FreqSelectionConfig_r15_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_SL_V2X_FreqSelectionConfig_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_V2X_FreqSelectionConfig_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* threshCBR-FreqReselection-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* threshCBR-FreqKeeping-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_FreqSelectionConfig_r15_specs_1 = {
	sizeof(struct SL_V2X_FreqSelectionConfig_r15),
	offsetof(struct SL_V2X_FreqSelectionConfig_r15, _asn_ctx),
	asn_MAP_SL_V2X_FreqSelectionConfig_r15_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SL_V2X_FreqSelectionConfig_r15_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SL_V2X_FreqSelectionConfig_r15 = {
	"SL-V2X-FreqSelectionConfig-r15",
	"SL-V2X-FreqSelectionConfig-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_SL_V2X_FreqSelectionConfig_r15_tags_1,
	sizeof(asn_DEF_SL_V2X_FreqSelectionConfig_r15_tags_1)
		/sizeof(asn_DEF_SL_V2X_FreqSelectionConfig_r15_tags_1[0]), /* 1 */
	asn_DEF_SL_V2X_FreqSelectionConfig_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_V2X_FreqSelectionConfig_r15_tags_1)
		/sizeof(asn_DEF_SL_V2X_FreqSelectionConfig_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SL_V2X_FreqSelectionConfig_r15_1,
	3,	/* Elements count */
	&asn_SPC_SL_V2X_FreqSelectionConfig_r15_specs_1	/* Additional specs */
};

