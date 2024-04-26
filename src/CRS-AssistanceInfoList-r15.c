/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CRS-AssistanceInfoList-r15.h"

#include "CRS-AssistanceInfo-r15.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_CRS_AssistanceInfoList_r15_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_CRS_AssistanceInfoList_r15_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CRS_AssistanceInfo_r15,
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
static const ber_tlv_tag_t asn_DEF_CRS_AssistanceInfoList_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_CRS_AssistanceInfoList_r15_specs_1 = {
	sizeof(struct CRS_AssistanceInfoList_r15),
	offsetof(struct CRS_AssistanceInfoList_r15, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_CRS_AssistanceInfoList_r15 = {
	"CRS-AssistanceInfoList-r15",
	"CRS-AssistanceInfoList-r15",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_CRS_AssistanceInfoList_r15_tags_1,
	sizeof(asn_DEF_CRS_AssistanceInfoList_r15_tags_1)
		/sizeof(asn_DEF_CRS_AssistanceInfoList_r15_tags_1[0]), /* 1 */
	asn_DEF_CRS_AssistanceInfoList_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_CRS_AssistanceInfoList_r15_tags_1)
		/sizeof(asn_DEF_CRS_AssistanceInfoList_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_CRS_AssistanceInfoList_r15_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_CRS_AssistanceInfoList_r15_1,
	1,	/* Single element */
	&asn_SPC_CRS_AssistanceInfoList_r15_specs_1	/* Additional specs */
};

