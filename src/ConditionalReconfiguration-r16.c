/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "ConditionalReconfiguration-r16.h"

#include "CondReconfigurationToAddModList-r16.h"
#include "CondReconfigurationToRemoveList-r16.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_attemptCondReconf_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_attemptCondReconf_r16_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_attemptCondReconf_r16_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_attemptCondReconf_r16_specs_4 = {
	asn_MAP_attemptCondReconf_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_attemptCondReconf_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_attemptCondReconf_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_attemptCondReconf_r16_4 = {
	"attemptCondReconf-r16",
	"attemptCondReconf-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_attemptCondReconf_r16_tags_4,
	sizeof(asn_DEF_attemptCondReconf_r16_tags_4)
		/sizeof(asn_DEF_attemptCondReconf_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_attemptCondReconf_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_attemptCondReconf_r16_tags_4)
		/sizeof(asn_DEF_attemptCondReconf_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_attemptCondReconf_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_attemptCondReconf_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ConditionalReconfiguration_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ConditionalReconfiguration_r16, condReconfigurationToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CondReconfigurationToAddModList_r16,
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
		"condReconfigurationToAddModList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct ConditionalReconfiguration_r16, condReconfigurationToRemoveList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CondReconfigurationToRemoveList_r16,
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
		"condReconfigurationToRemoveList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct ConditionalReconfiguration_r16, attemptCondReconf_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_attemptCondReconf_r16_4,
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
		"attemptCondReconf-r16"
		},
};
static const int asn_MAP_ConditionalReconfiguration_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ConditionalReconfiguration_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConditionalReconfiguration_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* condReconfigurationToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* condReconfigurationToRemoveList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* attemptCondReconf-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_ConditionalReconfiguration_r16_specs_1 = {
	sizeof(struct ConditionalReconfiguration_r16),
	offsetof(struct ConditionalReconfiguration_r16, _asn_ctx),
	asn_MAP_ConditionalReconfiguration_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ConditionalReconfiguration_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ConditionalReconfiguration_r16 = {
	"ConditionalReconfiguration-r16",
	"ConditionalReconfiguration-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_ConditionalReconfiguration_r16_tags_1,
	sizeof(asn_DEF_ConditionalReconfiguration_r16_tags_1)
		/sizeof(asn_DEF_ConditionalReconfiguration_r16_tags_1[0]), /* 1 */
	asn_DEF_ConditionalReconfiguration_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConditionalReconfiguration_r16_tags_1)
		/sizeof(asn_DEF_ConditionalReconfiguration_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ConditionalReconfiguration_r16_1,
	3,	/* Elements count */
	&asn_SPC_ConditionalReconfiguration_r16_specs_1	/* Additional specs */
};

