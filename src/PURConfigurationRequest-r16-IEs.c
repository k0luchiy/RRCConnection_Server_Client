/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PURConfigurationRequest-r16-IEs.h"

#include "PUR-PeriodicityAndOffset-r16.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_requestedNumOccasions_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_requestedTBS_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_rrc_ACK_r16_constr_74 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_pur_ConfigRequest_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_requestedNumOccasions_r16_value2enum_5[] = {
	{ 0,	3,	"one" },
	{ 1,	8,	"infinite" }
};
static const unsigned int asn_MAP_requestedNumOccasions_r16_enum2value_5[] = {
	1,	/* infinite(1) */
	0	/* one(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_requestedNumOccasions_r16_specs_5 = {
	asn_MAP_requestedNumOccasions_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_requestedNumOccasions_r16_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_requestedNumOccasions_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_requestedNumOccasions_r16_5 = {
	"requestedNumOccasions-r16",
	"requestedNumOccasions-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_requestedNumOccasions_r16_tags_5,
	sizeof(asn_DEF_requestedNumOccasions_r16_tags_5)
		/sizeof(asn_DEF_requestedNumOccasions_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_requestedNumOccasions_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_requestedNumOccasions_r16_tags_5)
		/sizeof(asn_DEF_requestedNumOccasions_r16_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_requestedNumOccasions_r16_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_requestedNumOccasions_r16_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_requestedTBS_r16_value2enum_9[] = {
	{ 0,	4,	"b328" },
	{ 1,	4,	"b344" },
	{ 2,	4,	"b376" },
	{ 3,	4,	"b392" },
	{ 4,	4,	"b408" },
	{ 5,	4,	"b424" },
	{ 6,	4,	"b440" },
	{ 7,	4,	"b456" },
	{ 8,	4,	"b472" },
	{ 9,	4,	"b488" },
	{ 10,	4,	"b504" },
	{ 11,	4,	"b536" },
	{ 12,	4,	"b568" },
	{ 13,	4,	"b584" },
	{ 14,	4,	"b616" },
	{ 15,	4,	"b648" },
	{ 16,	4,	"b680" },
	{ 17,	4,	"b712" },
	{ 18,	4,	"b744" },
	{ 19,	4,	"b776" },
	{ 20,	4,	"b808" },
	{ 21,	4,	"b840" },
	{ 22,	4,	"b872" },
	{ 23,	4,	"b904" },
	{ 24,	4,	"b936" },
	{ 25,	4,	"b968" },
	{ 26,	5,	"b1000" },
	{ 27,	5,	"b1032" },
	{ 28,	5,	"b1064" },
	{ 29,	5,	"b1096" },
	{ 30,	5,	"b1128" },
	{ 31,	5,	"b1160" },
	{ 32,	5,	"b1192" },
	{ 33,	5,	"b1224" },
	{ 34,	5,	"b1256" },
	{ 35,	5,	"b1288" },
	{ 36,	5,	"b1320" },
	{ 37,	5,	"b1352" },
	{ 38,	5,	"b1384" },
	{ 39,	5,	"b1416" },
	{ 40,	5,	"b1480" },
	{ 41,	5,	"b1544" },
	{ 42,	5,	"b1608" },
	{ 43,	5,	"b1672" },
	{ 44,	5,	"b1736" },
	{ 45,	5,	"b1800" },
	{ 46,	5,	"b1864" },
	{ 47,	5,	"b1928" },
	{ 48,	5,	"b1992" },
	{ 49,	5,	"b2024" },
	{ 50,	5,	"b2088" },
	{ 51,	5,	"b2152" },
	{ 52,	5,	"b2216" },
	{ 53,	5,	"b2280" },
	{ 54,	5,	"b2344" },
	{ 55,	5,	"b2408" },
	{ 56,	5,	"b2472" },
	{ 57,	5,	"b2536" },
	{ 58,	5,	"b2600" },
	{ 59,	5,	"b2664" },
	{ 60,	5,	"b2728" },
	{ 61,	5,	"b2792" },
	{ 62,	5,	"b2856" },
	{ 63,	5,	"b2984" }
};
static const unsigned int asn_MAP_requestedTBS_r16_enum2value_9[] = {
	26,	/* b1000(26) */
	27,	/* b1032(27) */
	28,	/* b1064(28) */
	29,	/* b1096(29) */
	30,	/* b1128(30) */
	31,	/* b1160(31) */
	32,	/* b1192(32) */
	33,	/* b1224(33) */
	34,	/* b1256(34) */
	35,	/* b1288(35) */
	36,	/* b1320(36) */
	37,	/* b1352(37) */
	38,	/* b1384(38) */
	39,	/* b1416(39) */
	40,	/* b1480(40) */
	41,	/* b1544(41) */
	42,	/* b1608(42) */
	43,	/* b1672(43) */
	44,	/* b1736(44) */
	45,	/* b1800(45) */
	46,	/* b1864(46) */
	47,	/* b1928(47) */
	48,	/* b1992(48) */
	49,	/* b2024(49) */
	50,	/* b2088(50) */
	51,	/* b2152(51) */
	52,	/* b2216(52) */
	53,	/* b2280(53) */
	54,	/* b2344(54) */
	55,	/* b2408(55) */
	56,	/* b2472(56) */
	57,	/* b2536(57) */
	58,	/* b2600(58) */
	59,	/* b2664(59) */
	60,	/* b2728(60) */
	61,	/* b2792(61) */
	62,	/* b2856(62) */
	63,	/* b2984(63) */
	0,	/* b328(0) */
	1,	/* b344(1) */
	2,	/* b376(2) */
	3,	/* b392(3) */
	4,	/* b408(4) */
	5,	/* b424(5) */
	6,	/* b440(6) */
	7,	/* b456(7) */
	8,	/* b472(8) */
	9,	/* b488(9) */
	10,	/* b504(10) */
	11,	/* b536(11) */
	12,	/* b568(12) */
	13,	/* b584(13) */
	14,	/* b616(14) */
	15,	/* b648(15) */
	16,	/* b680(16) */
	17,	/* b712(17) */
	18,	/* b744(18) */
	19,	/* b776(19) */
	20,	/* b808(20) */
	21,	/* b840(21) */
	22,	/* b872(22) */
	23,	/* b904(23) */
	24,	/* b936(24) */
	25	/* b968(25) */
};
static const asn_INTEGER_specifics_t asn_SPC_requestedTBS_r16_specs_9 = {
	asn_MAP_requestedTBS_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_requestedTBS_r16_enum2value_9,	/* N => "tag"; sorted by N */
	64,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_requestedTBS_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_requestedTBS_r16_9 = {
	"requestedTBS-r16",
	"requestedTBS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_requestedTBS_r16_tags_9,
	sizeof(asn_DEF_requestedTBS_r16_tags_9)
		/sizeof(asn_DEF_requestedTBS_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_requestedTBS_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_requestedTBS_r16_tags_9)
		/sizeof(asn_DEF_requestedTBS_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_requestedTBS_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_requestedTBS_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rrc_ACK_r16_value2enum_74[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_rrc_ACK_r16_enum2value_74[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rrc_ACK_r16_specs_74 = {
	asn_MAP_rrc_ACK_r16_value2enum_74,	/* "tag" => N; sorted by tag */
	asn_MAP_rrc_ACK_r16_enum2value_74,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rrc_ACK_r16_tags_74[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rrc_ACK_r16_74 = {
	"rrc-ACK-r16",
	"rrc-ACK-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_rrc_ACK_r16_tags_74,
	sizeof(asn_DEF_rrc_ACK_r16_tags_74)
		/sizeof(asn_DEF_rrc_ACK_r16_tags_74[0]) - 1, /* 1 */
	asn_DEF_rrc_ACK_r16_tags_74,	/* Same as above */
	sizeof(asn_DEF_rrc_ACK_r16_tags_74)
		/sizeof(asn_DEF_rrc_ACK_r16_tags_74[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_rrc_ACK_r16_constr_74,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rrc_ACK_r16_specs_74	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pur_SetupRequest_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest, requestedNumOccasions_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_requestedNumOccasions_r16_5,
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
		"requestedNumOccasions-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest, requestedPeriodicityAndOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PUR_PeriodicityAndOffset_r16,
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
		"requestedPeriodicityAndOffset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest, requestedTBS_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_requestedTBS_r16_9,
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
		"requestedTBS-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest, rrc_ACK_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rrc_ACK_r16_74,
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
		"rrc-ACK-r16"
		},
};
static const int asn_MAP_pur_SetupRequest_oms_4[] = { 1, 3 };
static const ber_tlv_tag_t asn_DEF_pur_SetupRequest_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_pur_SetupRequest_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestedNumOccasions-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestedPeriodicityAndOffset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestedTBS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rrc-ACK-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_pur_SetupRequest_specs_4 = {
	sizeof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest),
	offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16__pur_SetupRequest, _asn_ctx),
	asn_MAP_pur_SetupRequest_tag2el_4,
	4,	/* Count of tags in the map */
	asn_MAP_pur_SetupRequest_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pur_SetupRequest_4 = {
	"pur-SetupRequest",
	"pur-SetupRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_pur_SetupRequest_tags_4,
	sizeof(asn_DEF_pur_SetupRequest_tags_4)
		/sizeof(asn_DEF_pur_SetupRequest_tags_4[0]) - 1, /* 1 */
	asn_DEF_pur_SetupRequest_tags_4,	/* Same as above */
	sizeof(asn_DEF_pur_SetupRequest_tags_4)
		/sizeof(asn_DEF_pur_SetupRequest_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_pur_SetupRequest_4,
	4,	/* Elements count */
	&asn_SPC_pur_SetupRequest_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pur_ConfigRequest_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16, choice.pur_ReleaseRequest),
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
		"pur-ReleaseRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16, choice.pur_SetupRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_pur_SetupRequest_4,
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
		"pur-SetupRequest"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_pur_ConfigRequest_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pur-ReleaseRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pur-SetupRequest */
};
static asn_CHOICE_specifics_t asn_SPC_pur_ConfigRequest_r16_specs_2 = {
	sizeof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16),
	offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16, _asn_ctx),
	offsetof(struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16, present),
	sizeof(((struct PURConfigurationRequest_r16_IEs__pur_ConfigRequest_r16 *)0)->present),
	asn_MAP_pur_ConfigRequest_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pur_ConfigRequest_r16_2 = {
	"pur-ConfigRequest-r16",
	"pur-ConfigRequest-r16",
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
		&asn_PER_type_pur_ConfigRequest_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_pur_ConfigRequest_r16_2,
	2,	/* Elements count */
	&asn_SPC_pur_ConfigRequest_r16_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_77[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_77 = {
	sizeof(struct PURConfigurationRequest_r16_IEs__nonCriticalExtension),
	offsetof(struct PURConfigurationRequest_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_77 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_77,
	sizeof(asn_DEF_nonCriticalExtension_tags_77)
		/sizeof(asn_DEF_nonCriticalExtension_tags_77[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_77,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_77)
		/sizeof(asn_DEF_nonCriticalExtension_tags_77[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_77	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PURConfigurationRequest_r16_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PURConfigurationRequest_r16_IEs, pur_ConfigRequest_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_pur_ConfigRequest_r16_2,
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
		"pur-ConfigRequest-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct PURConfigurationRequest_r16_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
	{ ATF_POINTER, 1, offsetof(struct PURConfigurationRequest_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_77,
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
static const int asn_MAP_PURConfigurationRequest_r16_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PURConfigurationRequest_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PURConfigurationRequest_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pur-ConfigRequest-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_PURConfigurationRequest_r16_IEs_specs_1 = {
	sizeof(struct PURConfigurationRequest_r16_IEs),
	offsetof(struct PURConfigurationRequest_r16_IEs, _asn_ctx),
	asn_MAP_PURConfigurationRequest_r16_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PURConfigurationRequest_r16_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PURConfigurationRequest_r16_IEs = {
	"PURConfigurationRequest-r16-IEs",
	"PURConfigurationRequest-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_PURConfigurationRequest_r16_IEs_tags_1,
	sizeof(asn_DEF_PURConfigurationRequest_r16_IEs_tags_1)
		/sizeof(asn_DEF_PURConfigurationRequest_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_PURConfigurationRequest_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_PURConfigurationRequest_r16_IEs_tags_1)
		/sizeof(asn_DEF_PURConfigurationRequest_r16_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PURConfigurationRequest_r16_IEs_1,
	3,	/* Elements count */
	&asn_SPC_PURConfigurationRequest_r16_IEs_specs_1	/* Additional specs */
};

