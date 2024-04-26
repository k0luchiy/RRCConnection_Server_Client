/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TargetMBSFN_Area_r12_H_
#define	_TargetMBSFN_Area_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBSFN-AreaId-r12.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TargetMBSFN-Area-r12 */
typedef struct TargetMBSFN_Area_r12 {
	MBSFN_AreaId_r12_t	*mbsfn_AreaId_r12;	/* OPTIONAL */
	ARFCN_ValueEUTRA_r9_t	 carrierFreq_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetMBSFN_Area_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetMBSFN_Area_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_TargetMBSFN_Area_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_TargetMBSFN_Area_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TargetMBSFN_Area_r12_H_ */
#include <asn_internal.h>
