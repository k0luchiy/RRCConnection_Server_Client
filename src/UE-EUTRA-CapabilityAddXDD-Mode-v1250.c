/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UE-EUTRA-CapabilityAddXDD-Mode-v1250.h"

#include "PhyLayerParameters-v1250.h"
#include "MeasParameters-v1250.h"
asn_TYPE_member_t asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1250_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1250, phyLayerParameters_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v1250,
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
		"phyLayerParameters-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1250, measParameters_v1250),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasParameters_v1250,
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
		"measParameters-v1250"
		},
};
static const int asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1250_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measParameters-v1250 */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1250_specs_1 = {
	sizeof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1250),
	offsetof(struct UE_EUTRA_CapabilityAddXDD_Mode_v1250, _asn_ctx),
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_CapabilityAddXDD_Mode_v1250_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1250",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1250",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tags_1,
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1250_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_UE_EUTRA_CapabilityAddXDD_Mode_v1250_1,
	2,	/* Elements count */
	&asn_SPC_UE_EUTRA_CapabilityAddXDD_Mode_v1250_specs_1	/* Additional specs */
};

