/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PCCH_Config_v1700_H_
#define	_PCCH_Config_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCCH_Config_v1700__ranPagingInIdlePO_r17 {
	PCCH_Config_v1700__ranPagingInIdlePO_r17_true	= 0
} e_PCCH_Config_v1700__ranPagingInIdlePO_r17;

/* PCCH-Config-v1700 */
typedef struct PCCH_Config_v1700 {
	long	 ranPagingInIdlePO_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Config_v1700_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ranPagingInIdlePO_r17_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Config_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_PCCH_Config_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_PCCH_Config_v1700_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Config_v1700_H_ */
#include <asn_internal.h>