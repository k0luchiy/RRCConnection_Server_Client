/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PMCH_InfoExt_r12_H_
#define	_PMCH_InfoExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PMCH-Config-r12.h"
#include "MBMS-SessionInfoList-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PMCH-InfoExt-r12 */
typedef struct PMCH_InfoExt_r12 {
	PMCH_Config_r12_t	 pmch_Config_r12;
	MBMS_SessionInfoList_r9_t	 mbms_SessionInfoList_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PMCH_InfoExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PMCH_InfoExt_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_PMCH_InfoExt_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_PMCH_InfoExt_r12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PMCH_InfoExt_r12_H_ */
#include <asn_internal.h>
