/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "AntennaInfoUL-STTI-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_transmissionModeUL_STTI_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_transmissionModeUL_STTI_r15_value2enum_2[] = {
	{ 0,	3,	"tm1" },
	{ 1,	3,	"tm2" }
};
static const unsigned int asn_MAP_transmissionModeUL_STTI_r15_enum2value_2[] = {
	0,	/* tm1(0) */
	1	/* tm2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionModeUL_STTI_r15_specs_2 = {
	asn_MAP_transmissionModeUL_STTI_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionModeUL_STTI_r15_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionModeUL_STTI_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionModeUL_STTI_r15_2 = {
	"transmissionModeUL-STTI-r15",
	"transmissionModeUL-STTI-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionModeUL_STTI_r15_tags_2,
	sizeof(asn_DEF_transmissionModeUL_STTI_r15_tags_2)
		/sizeof(asn_DEF_transmissionModeUL_STTI_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_transmissionModeUL_STTI_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_transmissionModeUL_STTI_r15_tags_2)
		/sizeof(asn_DEF_transmissionModeUL_STTI_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_transmissionModeUL_STTI_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionModeUL_STTI_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AntennaInfoUL_STTI_r15_1[] = {
	{ ATF_POINTER, 1, offsetof(struct AntennaInfoUL_STTI_r15, transmissionModeUL_STTI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionModeUL_STTI_r15_2,
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
		"transmissionModeUL-STTI-r15"
		},
};
static const int asn_MAP_AntennaInfoUL_STTI_r15_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_AntennaInfoUL_STTI_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AntennaInfoUL_STTI_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* transmissionModeUL-STTI-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoUL_STTI_r15_specs_1 = {
	sizeof(struct AntennaInfoUL_STTI_r15),
	offsetof(struct AntennaInfoUL_STTI_r15, _asn_ctx),
	asn_MAP_AntennaInfoUL_STTI_r15_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_AntennaInfoUL_STTI_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AntennaInfoUL_STTI_r15 = {
	"AntennaInfoUL-STTI-r15",
	"AntennaInfoUL-STTI-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_AntennaInfoUL_STTI_r15_tags_1,
	sizeof(asn_DEF_AntennaInfoUL_STTI_r15_tags_1)
		/sizeof(asn_DEF_AntennaInfoUL_STTI_r15_tags_1[0]), /* 1 */
	asn_DEF_AntennaInfoUL_STTI_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_AntennaInfoUL_STTI_r15_tags_1)
		/sizeof(asn_DEF_AntennaInfoUL_STTI_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_AntennaInfoUL_STTI_r15_1,
	1,	/* Elements count */
	&asn_SPC_AntennaInfoUL_STTI_r15_specs_1	/* Additional specs */
};

