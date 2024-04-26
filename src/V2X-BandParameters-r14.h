/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_V2X_BandParameters_r14_H_
#define	_V2X_BandParameters_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandParametersTxSL_r14;
struct BandParametersRxSL_r14;

/* V2X-BandParameters-r14 */
typedef struct V2X_BandParameters_r14 {
	FreqBandIndicator_r11_t	 v2x_FreqBandEUTRA_r14;
	struct BandParametersTxSL_r14	*bandParametersTxSL_r14;	/* OPTIONAL */
	struct BandParametersRxSL_r14	*bandParametersRxSL_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} V2X_BandParameters_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_V2X_BandParameters_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_V2X_BandParameters_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_V2X_BandParameters_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_BandParameters_r14_H_ */
#include <asn_internal.h>
