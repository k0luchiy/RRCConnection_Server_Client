/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RadioResourceConfigDedicatedSCG-r12.h"

#include "DRB-ToAddModListSCG-r12.h"
#include "MAC-MainConfig.h"
#include "RLF-TimersAndConstantsSCG-r12.h"
#include "DRB-ToAddModListSCG-r15.h"
#include "SRB-ToAddModList.h"
#include "SRB-ToReleaseList-r15.h"
#include "DRB-ToReleaseList-r15.h"
static asn_TYPE_member_t asn_MBR_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCG_r12__ext1, drb_ToAddModListSCG_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToAddModListSCG_r15,
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
		"drb-ToAddModListSCG-r15"
		},
};
static const int asn_MAP_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* drb-ToAddModListSCG-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_6 = {
	sizeof(struct RadioResourceConfigDedicatedSCG_r12__ext1),
	offsetof(struct RadioResourceConfigDedicatedSCG_r12__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_6,
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_6)
		/sizeof(asn_DEF_ext1_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_6,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicatedSCG_r12__ext2, srb_ToAddModListSCG_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_ToAddModList,
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
		"srb-ToAddModListSCG-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCG_r12__ext2, srb_ToReleaseListSCG_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_ToReleaseList_r15,
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
		"srb-ToReleaseListSCG-r15"
		},
};
static const int asn_MAP_ext2_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-ToAddModListSCG-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srb-ToReleaseListSCG-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct RadioResourceConfigDedicatedSCG_r12__ext2),
	offsetof(struct RadioResourceConfigDedicatedSCG_r12__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_ext2_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_8 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_8,
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_8,
	2,	/* Elements count */
	&asn_SPC_ext2_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_11[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCG_r12__ext3, drb_ToReleaseListSCG_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToReleaseList_r15,
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
		"drb-ToReleaseListSCG-r15"
		},
};
static const int asn_MAP_ext3_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* drb-ToReleaseListSCG-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_11 = {
	sizeof(struct RadioResourceConfigDedicatedSCG_r12__ext3),
	offsetof(struct RadioResourceConfigDedicatedSCG_r12__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_11 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_11,
	sizeof(asn_DEF_ext3_tags_11)
		/sizeof(asn_DEF_ext3_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_11)
		/sizeof(asn_DEF_ext3_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext3_11,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicatedSCG_r12_1[] = {
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigDedicatedSCG_r12, drb_ToAddModListSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToAddModListSCG_r12,
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
		"drb-ToAddModListSCG-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigDedicatedSCG_r12, mac_MainConfigSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_MainConfig,
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
		"mac-MainConfigSCG-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigDedicatedSCG_r12, rlf_TimersAndConstantsSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLF_TimersAndConstantsSCG_r12,
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
		"rlf-TimersAndConstantsSCG-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigDedicatedSCG_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext1_6,
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
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicatedSCG_r12, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext2_8,
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
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicatedSCG_r12, ext3),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext3_11,
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
		"ext3"
		},
};
static const int asn_MAP_RadioResourceConfigDedicatedSCG_r12_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicatedSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicatedSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-ToAddModListSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-MainConfigSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlf-TimersAndConstantsSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicatedSCG_r12_specs_1 = {
	sizeof(struct RadioResourceConfigDedicatedSCG_r12),
	offsetof(struct RadioResourceConfigDedicatedSCG_r12, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicatedSCG_r12_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigDedicatedSCG_r12_oms_1,	/* Optional members */
	3, 3,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicatedSCG_r12 = {
	"RadioResourceConfigDedicatedSCG-r12",
	"RadioResourceConfigDedicatedSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigDedicatedSCG_r12_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicatedSCG_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicatedSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicatedSCG_r12_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicatedSCG_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RadioResourceConfigDedicatedSCG_r12_1,
	6,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicatedSCG_r12_specs_1	/* Additional specs */
};

