/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RF_Parameters_v1430_H_
#define	_RF_Parameters_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "BandCombinationList-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters_v1430__diffFallbackCombReport_r14 {
	RF_Parameters_v1430__diffFallbackCombReport_r14_supported	= 0
} e_RF_Parameters_v1430__diffFallbackCombReport_r14;

/* Forward declarations */
struct SupportedBandCombination_v1430;
struct SupportedBandCombinationAdd_v1430;
struct SupportedBandCombinationReduced_v1430;

/* RF-Parameters-v1430 */
typedef struct RF_Parameters_v1430 {
	struct SupportedBandCombination_v1430	*supportedBandCombination_v1430;	/* OPTIONAL */
	struct SupportedBandCombinationAdd_v1430	*supportedBandCombinationAdd_v1430;	/* OPTIONAL */
	struct SupportedBandCombinationReduced_v1430	*supportedBandCombinationReduced_v1430;	/* OPTIONAL */
	struct RF_Parameters_v1430__eNB_RequestedParameters_v1430 {
		BandCombinationList_r14_t	 requestedDiffFallbackCombList_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *eNB_RequestedParameters_v1430;
	long	*diffFallbackCombReport_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_diffFallbackCombReport_r14_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_v1430_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_v1430_H_ */
#include <asn_internal.h>
