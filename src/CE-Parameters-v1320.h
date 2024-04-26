/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CE_Parameters_v1320_H_
#define	_CE_Parameters_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CE_Parameters_v1320__intraFreqA3_CE_ModeA_r13 {
	CE_Parameters_v1320__intraFreqA3_CE_ModeA_r13_supported	= 0
} e_CE_Parameters_v1320__intraFreqA3_CE_ModeA_r13;
typedef enum CE_Parameters_v1320__intraFreqA3_CE_ModeB_r13 {
	CE_Parameters_v1320__intraFreqA3_CE_ModeB_r13_supported	= 0
} e_CE_Parameters_v1320__intraFreqA3_CE_ModeB_r13;
typedef enum CE_Parameters_v1320__intraFreqHO_CE_ModeA_r13 {
	CE_Parameters_v1320__intraFreqHO_CE_ModeA_r13_supported	= 0
} e_CE_Parameters_v1320__intraFreqHO_CE_ModeA_r13;
typedef enum CE_Parameters_v1320__intraFreqHO_CE_ModeB_r13 {
	CE_Parameters_v1320__intraFreqHO_CE_ModeB_r13_supported	= 0
} e_CE_Parameters_v1320__intraFreqHO_CE_ModeB_r13;

/* CE-Parameters-v1320 */
typedef struct CE_Parameters_v1320 {
	long	*intraFreqA3_CE_ModeA_r13;	/* OPTIONAL */
	long	*intraFreqA3_CE_ModeB_r13;	/* OPTIONAL */
	long	*intraFreqHO_CE_ModeA_r13;	/* OPTIONAL */
	long	*intraFreqHO_CE_ModeB_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CE_Parameters_v1320_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqA3_CE_ModeA_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqA3_CE_ModeB_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqHO_CE_ModeA_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_intraFreqHO_CE_ModeB_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CE_Parameters_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_CE_Parameters_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_CE_Parameters_v1320_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CE_Parameters_v1320_H_ */
#include <asn_internal.h>
