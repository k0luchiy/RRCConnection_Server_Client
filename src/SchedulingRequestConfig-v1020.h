/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SchedulingRequestConfig_v1020_H_
#define	_SchedulingRequestConfig_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SchedulingRequestConfig-v1020 */
typedef struct SchedulingRequestConfig_v1020 {
	long	*sr_PUCCH_ResourceIndexP1_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestConfig_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfig_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_SchedulingRequestConfig_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingRequestConfig_v1020_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestConfig_v1020_H_ */
#include <asn_internal.h>
