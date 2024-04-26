/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandParameters_r10_H_
#define	_BandParameters_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandParametersUL_r10;
struct BandParametersDL_r10;

/* BandParameters-r10 */
typedef struct BandParameters_r10 {
	FreqBandIndicator_t	 bandEUTRA_r10;
	struct BandParametersUL_r10	*bandParametersUL_r10;	/* OPTIONAL */
	struct BandParametersDL_r10	*bandParametersDL_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandParameters_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandParameters_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_BandParameters_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_BandParameters_r10_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BandParameters_r10_H_ */
#include <asn_internal.h>
