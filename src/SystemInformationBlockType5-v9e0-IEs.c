/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SystemInformationBlockType5-v9e0-IEs.h"

#include "SystemInformationBlockType5-v10j0-IEs.h"
#include "InterFreqCarrierFreqInfo-v9e0.h"
static int
memb_interFreqCarrierFreqList_v9e0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 8UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_interFreqCarrierFreqList_v9e0_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_interFreqCarrierFreqList_v9e0_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_interFreqCarrierFreqList_v9e0_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_InterFreqCarrierFreqInfo_v9e0,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_interFreqCarrierFreqList_v9e0_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_interFreqCarrierFreqList_v9e0_specs_2 = {
	sizeof(struct SystemInformationBlockType5_v9e0_IEs__interFreqCarrierFreqList_v9e0),
	offsetof(struct SystemInformationBlockType5_v9e0_IEs__interFreqCarrierFreqList_v9e0, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interFreqCarrierFreqList_v9e0_2 = {
	"interFreqCarrierFreqList-v9e0",
	"interFreqCarrierFreqList-v9e0",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_interFreqCarrierFreqList_v9e0_tags_2,
	sizeof(asn_DEF_interFreqCarrierFreqList_v9e0_tags_2)
		/sizeof(asn_DEF_interFreqCarrierFreqList_v9e0_tags_2[0]) - 1, /* 1 */
	asn_DEF_interFreqCarrierFreqList_v9e0_tags_2,	/* Same as above */
	sizeof(asn_DEF_interFreqCarrierFreqList_v9e0_tags_2)
		/sizeof(asn_DEF_interFreqCarrierFreqList_v9e0_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_interFreqCarrierFreqList_v9e0_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_interFreqCarrierFreqList_v9e0_2,
	1,	/* Single element */
	&asn_SPC_interFreqCarrierFreqList_v9e0_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType5_v9e0_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType5_v9e0_IEs, interFreqCarrierFreqList_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_interFreqCarrierFreqList_v9e0_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_interFreqCarrierFreqList_v9e0_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_interFreqCarrierFreqList_v9e0_constraint_1
		},
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v9e0"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType5_v9e0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType5_v10j0_IEs,
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
static const int asn_MAP_SystemInformationBlockType5_v9e0_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType5_v9e0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType5_v9e0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v9e0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType5_v9e0_IEs_specs_1 = {
	sizeof(struct SystemInformationBlockType5_v9e0_IEs),
	offsetof(struct SystemInformationBlockType5_v9e0_IEs, _asn_ctx),
	asn_MAP_SystemInformationBlockType5_v9e0_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType5_v9e0_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5_v9e0_IEs = {
	"SystemInformationBlockType5-v9e0-IEs",
	"SystemInformationBlockType5-v9e0-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType5_v9e0_IEs_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType5_v9e0_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType5_v9e0_IEs_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType5_v9e0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType5_v9e0_IEs_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType5_v9e0_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SystemInformationBlockType5_v9e0_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SystemInformationBlockType5_v9e0_IEs_specs_1	/* Additional specs */
};

