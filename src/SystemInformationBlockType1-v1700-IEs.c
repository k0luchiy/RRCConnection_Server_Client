/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType1-v1700-IEs.h"

#include "PLMN-IdentityList-v1700.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cellBarred_NTN_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_cellBarred_NTN_r17_value2enum_3[] = {
	{ 0,	6,	"barred" },
	{ 1,	9,	"notBarred" }
};
static const unsigned int asn_MAP_cellBarred_NTN_r17_enum2value_3[] = {
	0,	/* barred(0) */
	1	/* notBarred(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cellBarred_NTN_r17_specs_3 = {
	asn_MAP_cellBarred_NTN_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_cellBarred_NTN_r17_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cellBarred_NTN_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellBarred_NTN_r17_3 = {
	"cellBarred-NTN-r17",
	"cellBarred-NTN-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_cellBarred_NTN_r17_tags_3,
	sizeof(asn_DEF_cellBarred_NTN_r17_tags_3)
		/sizeof(asn_DEF_cellBarred_NTN_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_cellBarred_NTN_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_cellBarred_NTN_r17_tags_3)
		/sizeof(asn_DEF_cellBarred_NTN_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cellBarred_NTN_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cellBarred_NTN_r17_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cellAccessRelatedInfo_NTN_r17_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17, cellBarred_NTN_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cellBarred_NTN_r17_3,
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
		"cellBarred-NTN-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17, plmn_IdentityList_v1700),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList_v1700,
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
		"plmn-IdentityList-v1700"
		},
};
static const int asn_MAP_cellAccessRelatedInfo_NTN_r17_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_cellAccessRelatedInfo_NTN_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellAccessRelatedInfo_NTN_r17_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellBarred-NTN-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plmn-IdentityList-v1700 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellAccessRelatedInfo_NTN_r17_specs_2 = {
	sizeof(struct SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17),
	offsetof(struct SystemInformationBlockType1_v1700_IEs__cellAccessRelatedInfo_NTN_r17, _asn_ctx),
	asn_MAP_cellAccessRelatedInfo_NTN_r17_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_cellAccessRelatedInfo_NTN_r17_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellAccessRelatedInfo_NTN_r17_2 = {
	"cellAccessRelatedInfo-NTN-r17",
	"cellAccessRelatedInfo-NTN-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_cellAccessRelatedInfo_NTN_r17_tags_2,
	sizeof(asn_DEF_cellAccessRelatedInfo_NTN_r17_tags_2)
		/sizeof(asn_DEF_cellAccessRelatedInfo_NTN_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_cellAccessRelatedInfo_NTN_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_cellAccessRelatedInfo_NTN_r17_tags_2)
		/sizeof(asn_DEF_cellAccessRelatedInfo_NTN_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_cellAccessRelatedInfo_NTN_r17_2,
	2,	/* Elements count */
	&asn_SPC_cellAccessRelatedInfo_NTN_r17_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_7 = {
	sizeof(struct SystemInformationBlockType1_v1700_IEs__nonCriticalExtension),
	offsetof(struct SystemInformationBlockType1_v1700_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_7 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_7,
	sizeof(asn_DEF_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_nonCriticalExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_nonCriticalExtension_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1700_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType1_v1700_IEs, cellAccessRelatedInfo_NTN_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellAccessRelatedInfo_NTN_r17_2,
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
		"cellAccessRelatedInfo-NTN-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType1_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_7,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType1_v1700_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType1_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType1_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellAccessRelatedInfo-NTN-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1700_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType1_v1700_IEs),
	offsetof(struct SystemInformationBlockType1_v1700_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType1_v1700_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType1_v1700_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1700_IEs = {
	"SystemInformationBlockType1-v1700-IEs",
	"SystemInformationBlockType1-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType1_v1700_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType1_v1700_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType1_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType1_v1700_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType1_v1700_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SystemInformationBlockType1_v1700_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType1_v1700_IEs_specs_1	/* Additional specs */
};
