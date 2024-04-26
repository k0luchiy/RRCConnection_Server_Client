/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCEarlyDataRequest_v1610_IEs_H_
#define	_RRCEarlyDataRequest_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCEarlyDataRequest_v1610_IEs__establishmentCause_v1610 {
	RRCEarlyDataRequest_v1610_IEs__establishmentCause_v1610_mt_Access	= 0,
	RRCEarlyDataRequest_v1610_IEs__establishmentCause_v1610_spare3	= 1,
	RRCEarlyDataRequest_v1610_IEs__establishmentCause_v1610_spare2	= 2,
	RRCEarlyDataRequest_v1610_IEs__establishmentCause_v1610_spare1	= 3
} e_RRCEarlyDataRequest_v1610_IEs__establishmentCause_v1610;

/* RRCEarlyDataRequest-v1610-IEs */
typedef struct RRCEarlyDataRequest_v1610_IEs {
	long	 establishmentCause_v1610;
	struct RRCEarlyDataRequest_v1610_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCEarlyDataRequest_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_establishmentCause_v1610_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCEarlyDataRequest_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCEarlyDataRequest_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCEarlyDataRequest_v1610_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCEarlyDataRequest_v1610_IEs_H_ */
#include <asn_internal.h>