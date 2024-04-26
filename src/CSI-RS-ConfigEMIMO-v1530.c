/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CSI-RS-ConfigEMIMO-v1530.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_setup_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_CSI_RS_ConfigEMIMO_v1530_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigEMIMO_v1530__setup, choice.nonPrecoded_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNonPrecoded_v1530,
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
		"nonPrecoded-v1530"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nonPrecoded-v1530 */
};
static asn_CHOICE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CSI_RS_ConfigEMIMO_v1530__setup),
	offsetof(struct CSI_RS_ConfigEMIMO_v1530__setup, _asn_ctx),
	offsetof(struct CSI_RS_ConfigEMIMO_v1530__setup, present),
	sizeof(((struct CSI_RS_ConfigEMIMO_v1530__setup *)0)->present),
	asn_MAP_setup_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
		&asn_PER_type_setup_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_setup_3,
	1,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_RS_ConfigEMIMO_v1530_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigEMIMO_v1530, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigEMIMO_v1530, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_setup_3,
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
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_ConfigEMIMO_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_CSI_RS_ConfigEMIMO_v1530_specs_1 = {
	sizeof(struct CSI_RS_ConfigEMIMO_v1530),
	offsetof(struct CSI_RS_ConfigEMIMO_v1530, _asn_ctx),
	offsetof(struct CSI_RS_ConfigEMIMO_v1530, present),
	sizeof(((struct CSI_RS_ConfigEMIMO_v1530 *)0)->present),
	asn_MAP_CSI_RS_ConfigEMIMO_v1530_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigEMIMO_v1530 = {
	"CSI-RS-ConfigEMIMO-v1530",
	"CSI-RS-ConfigEMIMO-v1530",
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
		&asn_PER_type_CSI_RS_ConfigEMIMO_v1530_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_CSI_RS_ConfigEMIMO_v1530_1,
	2,	/* Elements count */
	&asn_SPC_CSI_RS_ConfigEMIMO_v1530_specs_1	/* Additional specs */
};

