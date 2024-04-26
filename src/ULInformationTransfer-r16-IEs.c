/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "ULInformationTransfer-r16-IEs.h"

#include "ULInformationTransfer-v8a0-IEs.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dedicatedInfoType_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_dedicatedInfoType_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ULInformationTransfer_r16_IEs__dedicatedInfoType_r16, choice.dedicatedInfoNAS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
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
		"dedicatedInfoNAS-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ULInformationTransfer_r16_IEs__dedicatedInfoType_r16, choice.dedicatedInfoCDMA2000_1XRTT_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoCDMA2000,
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
		"dedicatedInfoCDMA2000-1XRTT-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ULInformationTransfer_r16_IEs__dedicatedInfoType_r16, choice.dedicatedInfoCDMA2000_HRPD_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoCDMA2000,
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
		"dedicatedInfoCDMA2000-HRPD-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_dedicatedInfoType_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoNAS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedInfoCDMA2000-1XRTT-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dedicatedInfoCDMA2000-HRPD-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_dedicatedInfoType_r16_specs_2 = {
	sizeof(struct ULInformationTransfer_r16_IEs__dedicatedInfoType_r16),
	offsetof(struct ULInformationTransfer_r16_IEs__dedicatedInfoType_r16, _asn_ctx),
	offsetof(struct ULInformationTransfer_r16_IEs__dedicatedInfoType_r16, present),
	sizeof(((struct ULInformationTransfer_r16_IEs__dedicatedInfoType_r16 *)0)->present),
	asn_MAP_dedicatedInfoType_r16_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dedicatedInfoType_r16_2 = {
	"dedicatedInfoType-r16",
	"dedicatedInfoType-r16",
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
		&asn_PER_type_dedicatedInfoType_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_dedicatedInfoType_r16_2,
	3,	/* Elements count */
	&asn_SPC_dedicatedInfoType_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ULInformationTransfer_r16_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ULInformationTransfer_r16_IEs, dedicatedInfoType_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dedicatedInfoType_r16_2,
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
		"dedicatedInfoType-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct ULInformationTransfer_r16_IEs, dedicatedInfoF1c_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoF1c_r16,
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
		"dedicatedInfoF1c-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct ULInformationTransfer_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ULInformationTransfer_v8a0_IEs,
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
static const int asn_MAP_ULInformationTransfer_r16_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ULInformationTransfer_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ULInformationTransfer_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedInfoF1c-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransfer_r16_IEs_specs_1 = {
	sizeof(struct ULInformationTransfer_r16_IEs),
	offsetof(struct ULInformationTransfer_r16_IEs, _asn_ctx),
	asn_MAP_ULInformationTransfer_r16_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ULInformationTransfer_r16_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer_r16_IEs = {
	"ULInformationTransfer-r16-IEs",
	"ULInformationTransfer-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_ULInformationTransfer_r16_IEs_tags_1,
	sizeof(asn_DEF_ULInformationTransfer_r16_IEs_tags_1)
		/sizeof(asn_DEF_ULInformationTransfer_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_ULInformationTransfer_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ULInformationTransfer_r16_IEs_tags_1)
		/sizeof(asn_DEF_ULInformationTransfer_r16_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ULInformationTransfer_r16_IEs_1,
	3,	/* Elements count */
	&asn_SPC_ULInformationTransfer_r16_IEs_specs_1	/* Additional specs */
};
