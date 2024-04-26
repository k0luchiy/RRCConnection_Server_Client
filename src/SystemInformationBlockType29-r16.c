/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType29-r16.h"

#include "ResourceReservationConfigDL-r16.h"
#include "ResourceReservationConfigUL-r16.h"
asn_TYPE_member_t asn_MBR_SystemInformationBlockType29_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType29_r16, resourceReservationConfigCommonDL_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResourceReservationConfigDL_r16,
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
		"resourceReservationConfigCommonDL-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType29_r16, resourceReservationConfigCommonUL_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResourceReservationConfigUL_r16,
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
		"resourceReservationConfigCommonUL-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType29_r16, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
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
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_SystemInformationBlockType29_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType29_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType29_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceReservationConfigCommonDL-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resourceReservationConfigCommonUL-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType29_r16_specs_1 = {
	sizeof(struct SystemInformationBlockType29_r16),
	offsetof(struct SystemInformationBlockType29_r16, _asn_ctx),
	asn_MAP_SystemInformationBlockType29_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType29_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType29_r16 = {
	"SystemInformationBlockType29-r16",
	"SystemInformationBlockType29-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType29_r16_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType29_r16_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType29_r16_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType29_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType29_r16_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType29_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SystemInformationBlockType29_r16_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType29_r16_specs_1	/* Additional specs */
};
