/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType2_v9e0_IEs_H_
#define	_SystemInformationBlockType2_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInformationBlockType2_v9i0_IEs;

/* SystemInformationBlockType2-v9e0-IEs */
typedef struct SystemInformationBlockType2_v9e0_IEs {
	ARFCN_ValueEUTRA_v9e0_t	*ul_CarrierFreq_v9e0;	/* OPTIONAL */
	struct SystemInformationBlockType2_v9i0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType2_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2_v9e0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType2_v9e0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType2_v9e0_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType2_v9e0_IEs_H_ */
#include <asn_internal.h>
