/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MBSFN_AreaInfo_r17_H_
#define	_MBSFN_AreaInfo_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBSFN-AreaInfo-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFN_AreaInfo_r17__pmch_Bandwidth_r17 {
	MBSFN_AreaInfo_r17__pmch_Bandwidth_r17_n40	= 0,
	MBSFN_AreaInfo_r17__pmch_Bandwidth_r17_n35	= 1,
	MBSFN_AreaInfo_r17__pmch_Bandwidth_r17_n30	= 2,
	MBSFN_AreaInfo_r17__pmch_Bandwidth_r17_spare1	= 3
} e_MBSFN_AreaInfo_r17__pmch_Bandwidth_r17;

/* MBSFN-AreaInfo-r17 */
typedef struct MBSFN_AreaInfo_r17 {
	MBSFN_AreaInfo_r16_t	 mbsfn_AreaInfo_r17;
	long	 pmch_Bandwidth_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_AreaInfo_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pmch_Bandwidth_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_AreaInfo_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_MBSFN_AreaInfo_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFN_AreaInfo_r17_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_AreaInfo_r17_H_ */
#include <asn_internal.h>