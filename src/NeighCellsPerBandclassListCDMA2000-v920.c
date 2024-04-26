/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "NeighCellsPerBandclassListCDMA2000-v920.h"

#include "NeighCellsPerBandclassCDMA2000-v920.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NeighCellsPerBandclassListCDMA2000_v920_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NeighCellsPerBandclassListCDMA2000_v920_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NeighCellsPerBandclassCDMA2000_v920,
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
static const ber_tlv_tag_t asn_DEF_NeighCellsPerBandclassListCDMA2000_v920_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NeighCellsPerBandclassListCDMA2000_v920_specs_1 = {
	sizeof(struct NeighCellsPerBandclassListCDMA2000_v920),
	offsetof(struct NeighCellsPerBandclassListCDMA2000_v920, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NeighCellsPerBandclassListCDMA2000_v920 = {
	"NeighCellsPerBandclassListCDMA2000-v920",
	"NeighCellsPerBandclassListCDMA2000-v920",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NeighCellsPerBandclassListCDMA2000_v920_tags_1,
	sizeof(asn_DEF_NeighCellsPerBandclassListCDMA2000_v920_tags_1)
		/sizeof(asn_DEF_NeighCellsPerBandclassListCDMA2000_v920_tags_1[0]), /* 1 */
	asn_DEF_NeighCellsPerBandclassListCDMA2000_v920_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighCellsPerBandclassListCDMA2000_v920_tags_1)
		/sizeof(asn_DEF_NeighCellsPerBandclassListCDMA2000_v920_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NeighCellsPerBandclassListCDMA2000_v920_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NeighCellsPerBandclassListCDMA2000_v920_1,
	1,	/* Single element */
	&asn_SPC_NeighCellsPerBandclassListCDMA2000_v920_specs_1	/* Additional specs */
};

