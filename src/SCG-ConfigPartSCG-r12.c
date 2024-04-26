/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SCG-ConfigPartSCG-r12.h"

#include "RadioResourceConfigDedicatedSCG-r12.h"
#include "SCellToReleaseList-r10.h"
#include "PSCellToAddMod-r12.h"
#include "SCellToAddModList-r10.h"
#include "MobilityControlInfoSCG-r12.h"
#include "SCellToReleaseListExt-r13.h"
#include "SCellToAddModListExt-r13.h"
#include "SCellToAddModListExt-v1370.h"
#include "PSCellToAddMod-v1440.h"
#include "SCellGroupToReleaseList-r15.h"
#include "SCellGroupToAddModList-r15.h"
#include "MeasConfig.h"
#include "TDM-PatternConfig-r15.h"
static asn_TYPE_member_t asn_MBR_ext1_8[] = {
	{ ATF_POINTER, 2, offsetof(struct SCG_ConfigPartSCG_r12__ext1, sCellToReleaseListSCG_Ext_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToReleaseListExt_r13,
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
		"sCellToReleaseListSCG-Ext-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12__ext1, sCellToAddModListSCG_Ext_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModListExt_r13,
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
		"sCellToAddModListSCG-Ext-r13"
		},
};
static const int asn_MAP_ext1_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellToReleaseListSCG-Ext-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sCellToAddModListSCG-Ext-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_8 = {
	sizeof(struct SCG_ConfigPartSCG_r12__ext1),
	offsetof(struct SCG_ConfigPartSCG_r12__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_8,
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_8,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_11[] = {
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12__ext2, sCellToAddModListSCG_Ext_v1370),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModListExt_v1370,
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
		"sCellToAddModListSCG-Ext-v1370"
		},
};
static const int asn_MAP_ext2_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sCellToAddModListSCG-Ext-v1370 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_11 = {
	sizeof(struct SCG_ConfigPartSCG_r12__ext2),
	offsetof(struct SCG_ConfigPartSCG_r12__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_11 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_11,
	sizeof(asn_DEF_ext2_tags_11)
		/sizeof(asn_DEF_ext2_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_11)
		/sizeof(asn_DEF_ext2_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext2_11,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_13[] = {
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12__ext3, pSCellToAddMod_v1440),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PSCellToAddMod_v1440,
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
		"pSCellToAddMod-v1440"
		},
};
static const int asn_MAP_ext3_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pSCellToAddMod-v1440 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_13 = {
	sizeof(struct SCG_ConfigPartSCG_r12__ext3),
	offsetof(struct SCG_ConfigPartSCG_r12__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_13 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_13,
	sizeof(asn_DEF_ext3_tags_13)
		/sizeof(asn_DEF_ext3_tags_13[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_13,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_13)
		/sizeof(asn_DEF_ext3_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext3_13,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext4_15[] = {
	{ ATF_POINTER, 2, offsetof(struct SCG_ConfigPartSCG_r12__ext4, sCellGroupToReleaseListSCG_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellGroupToReleaseList_r15,
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
		"sCellGroupToReleaseListSCG-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12__ext4, sCellGroupToAddModListSCG_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellGroupToAddModList_r15,
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
		"sCellGroupToAddModListSCG-r15"
		},
};
static const int asn_MAP_ext4_oms_15[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext4_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext4_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCellGroupToReleaseListSCG-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sCellGroupToAddModListSCG-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext4_specs_15 = {
	sizeof(struct SCG_ConfigPartSCG_r12__ext4),
	offsetof(struct SCG_ConfigPartSCG_r12__ext4, _asn_ctx),
	asn_MAP_ext4_tag2el_15,
	2,	/* Count of tags in the map */
	asn_MAP_ext4_oms_15,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext4_15 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_ext4_tags_15,
	sizeof(asn_DEF_ext4_tags_15)
		/sizeof(asn_DEF_ext4_tags_15[0]) - 1, /* 1 */
	asn_DEF_ext4_tags_15,	/* Same as above */
	sizeof(asn_DEF_ext4_tags_15)
		/sizeof(asn_DEF_ext4_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext4_15,
	2,	/* Elements count */
	&asn_SPC_ext4_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext5_18[] = {
	{ ATF_POINTER, 2, offsetof(struct SCG_ConfigPartSCG_r12__ext5, measConfigSN_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
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
		"measConfigSN-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12__ext5, tdm_PatternConfigNE_DC_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TDM_PatternConfig_r15,
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
		"tdm-PatternConfigNE-DC-r15"
		},
};
static const int asn_MAP_ext5_oms_18[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext5_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext5_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measConfigSN-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdm-PatternConfigNE-DC-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext5_specs_18 = {
	sizeof(struct SCG_ConfigPartSCG_r12__ext5),
	offsetof(struct SCG_ConfigPartSCG_r12__ext5, _asn_ctx),
	asn_MAP_ext5_tag2el_18,
	2,	/* Count of tags in the map */
	asn_MAP_ext5_oms_18,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext5_18 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_ext5_tags_18,
	sizeof(asn_DEF_ext5_tags_18)
		/sizeof(asn_DEF_ext5_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext5_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext5_tags_18)
		/sizeof(asn_DEF_ext5_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext5_18,
	2,	/* Elements count */
	&asn_SPC_ext5_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext6_21[] = {
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12__ext6, p_MaxEUTRA_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
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
		"p-MaxEUTRA-r15"
		},
};
static const int asn_MAP_ext6_oms_21[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext6_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext6_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* p-MaxEUTRA-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext6_specs_21 = {
	sizeof(struct SCG_ConfigPartSCG_r12__ext6),
	offsetof(struct SCG_ConfigPartSCG_r12__ext6, _asn_ctx),
	asn_MAP_ext6_tag2el_21,
	1,	/* Count of tags in the map */
	asn_MAP_ext6_oms_21,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext6_21 = {
	"ext6",
	"ext6",
	&asn_OP_SEQUENCE,
	asn_DEF_ext6_tags_21,
	sizeof(asn_DEF_ext6_tags_21)
		/sizeof(asn_DEF_ext6_tags_21[0]) - 1, /* 1 */
	asn_DEF_ext6_tags_21,	/* Same as above */
	sizeof(asn_DEF_ext6_tags_21)
		/sizeof(asn_DEF_ext6_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext6_21,
	1,	/* Elements count */
	&asn_SPC_ext6_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SCG_ConfigPartSCG_r12_1[] = {
	{ ATF_POINTER, 11, offsetof(struct SCG_ConfigPartSCG_r12, radioResourceConfigDedicatedSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicatedSCG_r12,
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
		"radioResourceConfigDedicatedSCG-r12"
		},
	{ ATF_POINTER, 10, offsetof(struct SCG_ConfigPartSCG_r12, sCellToReleaseListSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToReleaseList_r10,
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
		"sCellToReleaseListSCG-r12"
		},
	{ ATF_POINTER, 9, offsetof(struct SCG_ConfigPartSCG_r12, pSCellToAddMod_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PSCellToAddMod_r12,
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
		"pSCellToAddMod-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct SCG_ConfigPartSCG_r12, sCellToAddModListSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SCellToAddModList_r10,
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
		"sCellToAddModListSCG-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct SCG_ConfigPartSCG_r12, mobilityControlInfoSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityControlInfoSCG_r12,
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
		"mobilityControlInfoSCG-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct SCG_ConfigPartSCG_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_ext1_8,
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
	{ ATF_POINTER, 5, offsetof(struct SCG_ConfigPartSCG_r12, ext2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_ext2_11,
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
	{ ATF_POINTER, 4, offsetof(struct SCG_ConfigPartSCG_r12, ext3),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_ext3_13,
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
	{ ATF_POINTER, 3, offsetof(struct SCG_ConfigPartSCG_r12, ext4),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext4_15,
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
		"ext4"
		},
	{ ATF_POINTER, 2, offsetof(struct SCG_ConfigPartSCG_r12, ext5),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext5_18,
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
		"ext5"
		},
	{ ATF_POINTER, 1, offsetof(struct SCG_ConfigPartSCG_r12, ext6),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext6_21,
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
		"ext6"
		},
};
static const int asn_MAP_SCG_ConfigPartSCG_r12_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_SCG_ConfigPartSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SCG_ConfigPartSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigDedicatedSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sCellToReleaseListSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pSCellToAddMod-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sCellToAddModListSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mobilityControlInfoSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext5 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* ext6 */
};
asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigPartSCG_r12_specs_1 = {
	sizeof(struct SCG_ConfigPartSCG_r12),
	offsetof(struct SCG_ConfigPartSCG_r12, _asn_ctx),
	asn_MAP_SCG_ConfigPartSCG_r12_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_SCG_ConfigPartSCG_r12_oms_1,	/* Optional members */
	5, 6,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SCG_ConfigPartSCG_r12 = {
	"SCG-ConfigPartSCG-r12",
	"SCG-ConfigPartSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_SCG_ConfigPartSCG_r12_tags_1,
	sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1)
		/sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_SCG_ConfigPartSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1)
		/sizeof(asn_DEF_SCG_ConfigPartSCG_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SCG_ConfigPartSCG_r12_1,
	11,	/* Elements count */
	&asn_SPC_SCG_ConfigPartSCG_r12_specs_1	/* Additional specs */
};

