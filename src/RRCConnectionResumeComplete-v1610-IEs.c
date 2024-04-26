/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "RRCConnectionResumeComplete-v1610-IEs.h"

#include "MeasResultListIdle-r15.h"
#include "MeasResultListExtIdle-r16.h"
#include "MeasResultListIdleNR-r16.h"
#include "RRCConnectionResumeComplete-v1710-IEs.h"
asn_TYPE_member_t asn_MBR_RRCConnectionResumeComplete_v1610_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionResumeComplete_v1610_IEs, measResultListIdle_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListIdle_r15,
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
		"measResultListIdle-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionResumeComplete_v1610_IEs, measResultListExtIdle_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListExtIdle_r16,
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
		"measResultListExtIdle-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionResumeComplete_v1610_IEs, measResultListIdleNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListIdleNR_r16,
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
		"measResultListIdleNR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionResumeComplete_v1610_IEs, scg_ConfigResponseNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"scg-ConfigResponseNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionResumeComplete_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionResumeComplete_v1710_IEs,
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
static const int asn_MAP_RRCConnectionResumeComplete_v1610_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionResumeComplete_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResumeComplete_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListIdle-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultListExtIdle-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultListIdleNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scg-ConfigResponseNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResumeComplete_v1610_IEs_specs_1 = {
	sizeof(struct RRCConnectionResumeComplete_v1610_IEs),
	offsetof(struct RRCConnectionResumeComplete_v1610_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResumeComplete_v1610_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCConnectionResumeComplete_v1610_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResumeComplete_v1610_IEs = {
	"RRCConnectionResumeComplete-v1610-IEs",
	"RRCConnectionResumeComplete-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResumeComplete_v1610_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResumeComplete_v1610_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResumeComplete_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResumeComplete_v1610_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResumeComplete_v1610_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RRCConnectionResumeComplete_v1610_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCConnectionResumeComplete_v1610_IEs_specs_1	/* Additional specs */
};
