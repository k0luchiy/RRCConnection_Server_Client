/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MBMS-CarrierType-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_frameOffset_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 3L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_carrierType_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_frameOffset_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_carrierType_r14_value2enum_2[] = {
	{ 0,	4,	"mbms" },
	{ 1,	11,	"fembmsMixed" },
	{ 2,	15,	"fembmsDedicated" }
};
static const unsigned int asn_MAP_carrierType_r14_enum2value_2[] = {
	2,	/* fembmsDedicated(2) */
	1,	/* fembmsMixed(1) */
	0	/* mbms(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_carrierType_r14_specs_2 = {
	asn_MAP_carrierType_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_carrierType_r14_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_carrierType_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_carrierType_r14_2 = {
	"carrierType-r14",
	"carrierType-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_carrierType_r14_tags_2,
	sizeof(asn_DEF_carrierType_r14_tags_2)
		/sizeof(asn_DEF_carrierType_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_carrierType_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_carrierType_r14_tags_2)
		/sizeof(asn_DEF_carrierType_r14_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_carrierType_r14_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_carrierType_r14_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBMS_CarrierType_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_CarrierType_r14, carrierType_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_carrierType_r14_2,
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
		"carrierType-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_CarrierType_r14, frameOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_frameOffset_r14_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_frameOffset_r14_constraint_1
		},
		0, 0, /* No default value */
		"frameOffset-r14"
		},
};
static const int asn_MAP_MBMS_CarrierType_r14_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_MBMS_CarrierType_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_CarrierType_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierType-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* frameOffset-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_CarrierType_r14_specs_1 = {
	sizeof(struct MBMS_CarrierType_r14),
	offsetof(struct MBMS_CarrierType_r14, _asn_ctx),
	asn_MAP_MBMS_CarrierType_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MBMS_CarrierType_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_CarrierType_r14 = {
	"MBMS-CarrierType-r14",
	"MBMS-CarrierType-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_CarrierType_r14_tags_1,
	sizeof(asn_DEF_MBMS_CarrierType_r14_tags_1)
		/sizeof(asn_DEF_MBMS_CarrierType_r14_tags_1[0]), /* 1 */
	asn_DEF_MBMS_CarrierType_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_CarrierType_r14_tags_1)
		/sizeof(asn_DEF_MBMS_CarrierType_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MBMS_CarrierType_r14_1,
	2,	/* Elements count */
	&asn_SPC_MBMS_CarrierType_r14_specs_1	/* Additional specs */
};

