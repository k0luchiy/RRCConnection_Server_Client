/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "ProximityIndication-r9-IEs.h"

#include "ProximityIndication-v930-IEs.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_type_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_carrierFreq_r9_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_type_r9_value2enum_2[] = {
	{ 0,	8,	"entering" },
	{ 1,	7,	"leaving" }
};
static const unsigned int asn_MAP_type_r9_enum2value_2[] = {
	0,	/* entering(0) */
	1	/* leaving(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_type_r9_specs_2 = {
	asn_MAP_type_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_type_r9_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_type_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_type_r9_2 = {
	"type-r9",
	"type-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_type_r9_tags_2,
	sizeof(asn_DEF_type_r9_tags_2)
		/sizeof(asn_DEF_type_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_type_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_type_r9_tags_2)
		/sizeof(asn_DEF_type_r9_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_type_r9_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_type_r9_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_carrierFreq_r9_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProximityIndication_r9_IEs__carrierFreq_r9, choice.eutra_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
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
		"eutra-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProximityIndication_r9_IEs__carrierFreq_r9, choice.utra_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
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
		"utra-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProximityIndication_r9_IEs__carrierFreq_r9, choice.eutra2_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
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
		"eutra2-v9e0"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_carrierFreq_r9_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utra-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* eutra2-v9e0 */
};
static asn_CHOICE_specifics_t asn_SPC_carrierFreq_r9_specs_5 = {
	sizeof(struct ProximityIndication_r9_IEs__carrierFreq_r9),
	offsetof(struct ProximityIndication_r9_IEs__carrierFreq_r9, _asn_ctx),
	offsetof(struct ProximityIndication_r9_IEs__carrierFreq_r9, present),
	sizeof(((struct ProximityIndication_r9_IEs__carrierFreq_r9 *)0)->present),
	asn_MAP_carrierFreq_r9_tag2el_5,
	3,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierFreq_r9_5 = {
	"carrierFreq-r9",
	"carrierFreq-r9",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_carrierFreq_r9_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_carrierFreq_r9_5,
	3,	/* Elements count */
	&asn_SPC_carrierFreq_r9_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ProximityIndication_r9_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProximityIndication_r9_IEs, type_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_type_r9_2,
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
		"type-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProximityIndication_r9_IEs, carrierFreq_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_carrierFreq_r9_5,
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
		"carrierFreq-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct ProximityIndication_r9_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProximityIndication_v930_IEs,
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
static const int asn_MAP_ProximityIndication_r9_IEs_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ProximityIndication_r9_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ProximityIndication_r9_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* type-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_ProximityIndication_r9_IEs_specs_1 = {
	sizeof(struct ProximityIndication_r9_IEs),
	offsetof(struct ProximityIndication_r9_IEs, _asn_ctx),
	asn_MAP_ProximityIndication_r9_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ProximityIndication_r9_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ProximityIndication_r9_IEs = {
	"ProximityIndication-r9-IEs",
	"ProximityIndication-r9-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_ProximityIndication_r9_IEs_tags_1,
	sizeof(asn_DEF_ProximityIndication_r9_IEs_tags_1)
		/sizeof(asn_DEF_ProximityIndication_r9_IEs_tags_1[0]), /* 1 */
	asn_DEF_ProximityIndication_r9_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProximityIndication_r9_IEs_tags_1)
		/sizeof(asn_DEF_ProximityIndication_r9_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ProximityIndication_r9_IEs_1,
	3,	/* Elements count */
	&asn_SPC_ProximityIndication_r9_IEs_specs_1	/* Additional specs */
};
