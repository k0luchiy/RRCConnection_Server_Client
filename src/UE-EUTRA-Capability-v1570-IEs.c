/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UE-EUTRA-Capability-v1570-IEs.h"

#include "RF-Parameters-v1570.h"
#include "IRAT-ParametersNR-v1570.h"
#include "UE-EUTRA-Capability-v15a0-IEs.h"
asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1570_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v1570_IEs, rf_Parameters_v1570),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Parameters_v1570,
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
		"rf-Parameters-v1570"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1570_IEs, irat_ParametersNR_v1570),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersNR_v1570,
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
		"irat-ParametersNR-v1570"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1570_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v15a0_IEs,
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
static const int asn_MAP_UE_EUTRA_Capability_v1570_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1570_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1570_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rf-Parameters-v1570 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* irat-ParametersNR-v1570 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1570_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1570_IEs),
	offsetof(struct UE_EUTRA_Capability_v1570_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1570_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1570_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1570_IEs = {
	"UE-EUTRA-Capability-v1570-IEs",
	"UE-EUTRA-Capability-v1570-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1570_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1570_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1570_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1570_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1570_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1570_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_UE_EUTRA_Capability_v1570_IEs_1,
	3,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1570_IEs_specs_1	/* Additional specs */
};

