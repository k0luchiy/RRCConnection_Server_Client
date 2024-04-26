/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SchedulingInfoExt_r12_H_
#define	_SchedulingInfoExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SI-Periodicity-r12.h"
#include "SIB-MappingInfo-v12j0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SchedulingInfoExt-r12 */
typedef struct SchedulingInfoExt_r12 {
	SI_Periodicity_r12_t	 si_Periodicity_r12;
	SIB_MappingInfo_v12j0_t	 sib_MappingInfo_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfoExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfoExt_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingInfoExt_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingInfoExt_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInfoExt_r12_H_ */
#include <asn_internal.h>
