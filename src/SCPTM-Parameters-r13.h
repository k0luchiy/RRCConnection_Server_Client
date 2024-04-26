/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SCPTM_Parameters_r13_H_
#define	_SCPTM_Parameters_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCPTM_Parameters_r13__scptm_ParallelReception_r13 {
	SCPTM_Parameters_r13__scptm_ParallelReception_r13_supported	= 0
} e_SCPTM_Parameters_r13__scptm_ParallelReception_r13;
typedef enum SCPTM_Parameters_r13__scptm_SCell_r13 {
	SCPTM_Parameters_r13__scptm_SCell_r13_supported	= 0
} e_SCPTM_Parameters_r13__scptm_SCell_r13;
typedef enum SCPTM_Parameters_r13__scptm_NonServingCell_r13 {
	SCPTM_Parameters_r13__scptm_NonServingCell_r13_supported	= 0
} e_SCPTM_Parameters_r13__scptm_NonServingCell_r13;
typedef enum SCPTM_Parameters_r13__scptm_AsyncDC_r13 {
	SCPTM_Parameters_r13__scptm_AsyncDC_r13_supported	= 0
} e_SCPTM_Parameters_r13__scptm_AsyncDC_r13;

/* SCPTM-Parameters-r13 */
typedef struct SCPTM_Parameters_r13 {
	long	*scptm_ParallelReception_r13;	/* OPTIONAL */
	long	*scptm_SCell_r13;	/* OPTIONAL */
	long	*scptm_NonServingCell_r13;	/* OPTIONAL */
	long	*scptm_AsyncDC_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCPTM_Parameters_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_scptm_ParallelReception_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scptm_SCell_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scptm_NonServingCell_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scptm_AsyncDC_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SCPTM_Parameters_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SCPTM_Parameters_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SCPTM_Parameters_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SCPTM_Parameters_r13_H_ */
#include <asn_internal.h>
