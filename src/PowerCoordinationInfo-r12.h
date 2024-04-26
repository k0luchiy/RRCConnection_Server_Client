/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PowerCoordinationInfo_r12_H_
#define	_PowerCoordinationInfo_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PowerCoordinationInfo-r12 */
typedef struct PowerCoordinationInfo_r12 {
	long	 p_MeNB_r12;
	long	 p_SeNB_r12;
	long	 powerControlMode_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowerCoordinationInfo_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PowerCoordinationInfo_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_PowerCoordinationInfo_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_PowerCoordinationInfo_r12_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PowerCoordinationInfo_r12_H_ */
#include <asn_internal.h>
