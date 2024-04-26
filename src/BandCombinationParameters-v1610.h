/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_BandCombinationParameters_v1610_H_
#define	_BandCombinationParameters_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombinationParameters_v1610__interFreqDAPS_r16__interFreqAsyncDAPS_r16 {
	BandCombinationParameters_v1610__interFreqDAPS_r16__interFreqAsyncDAPS_r16_supported	= 0
} e_BandCombinationParameters_v1610__interFreqDAPS_r16__interFreqAsyncDAPS_r16;
typedef enum BandCombinationParameters_v1610__interFreqDAPS_r16__interFreqMultiUL_TransmissionDAPS_r16 {
	BandCombinationParameters_v1610__interFreqDAPS_r16__interFreqMultiUL_TransmissionDAPS_r16_supported	= 0
} e_BandCombinationParameters_v1610__interFreqDAPS_r16__interFreqMultiUL_TransmissionDAPS_r16;

/* Forward declarations */
struct MeasGapInfoNR_r16;
struct BandParameters_v1610;

/* BandCombinationParameters-v1610 */
typedef struct BandCombinationParameters_v1610 {
	struct MeasGapInfoNR_r16	*measGapInfoNR_r16;	/* OPTIONAL */
	struct BandCombinationParameters_v1610__bandParameterList_v1610 {
		A_SEQUENCE_OF(struct BandParameters_v1610) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1610;
	struct BandCombinationParameters_v1610__interFreqDAPS_r16 {
		long	*interFreqAsyncDAPS_r16;	/* OPTIONAL */
		long	*interFreqMultiUL_TransmissionDAPS_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqDAPS_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_interFreqAsyncDAPS_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_interFreqMultiUL_TransmissionDAPS_r16_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1610_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _BandCombinationParameters_v1610_H_ */
#include <asn_internal.h>
