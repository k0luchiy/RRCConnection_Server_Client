/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RSS_MeasPowerBias_r16_H_
#define	_RSS_MeasPowerBias_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RSS_MeasPowerBias_r16 {
	RSS_MeasPowerBias_r16_dB_6	= 0,
	RSS_MeasPowerBias_r16_dB_3	= 1,
	RSS_MeasPowerBias_r16_dB0	= 2,
	RSS_MeasPowerBias_r16_dB3	= 3,
	RSS_MeasPowerBias_r16_dB6	= 4,
	RSS_MeasPowerBias_r16_dB9	= 5,
	RSS_MeasPowerBias_r16_dB12	= 6,
	RSS_MeasPowerBias_r16_rssNotUsed	= 7
} e_RSS_MeasPowerBias_r16;

/* RSS-MeasPowerBias-r16 */
typedef long	 RSS_MeasPowerBias_r16_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RSS_MeasPowerBias_r16_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RSS_MeasPowerBias_r16;
extern const asn_INTEGER_specifics_t asn_SPC_RSS_MeasPowerBias_r16_specs_1;
asn_struct_free_f RSS_MeasPowerBias_r16_free;
asn_struct_print_f RSS_MeasPowerBias_r16_print;
asn_constr_check_f RSS_MeasPowerBias_r16_constraint;
ber_type_decoder_f RSS_MeasPowerBias_r16_decode_ber;
der_type_encoder_f RSS_MeasPowerBias_r16_encode_der;
xer_type_decoder_f RSS_MeasPowerBias_r16_decode_xer;
xer_type_encoder_f RSS_MeasPowerBias_r16_encode_xer;
jer_type_encoder_f RSS_MeasPowerBias_r16_encode_jer;
per_type_decoder_f RSS_MeasPowerBias_r16_decode_uper;
per_type_encoder_f RSS_MeasPowerBias_r16_encode_uper;
per_type_decoder_f RSS_MeasPowerBias_r16_decode_aper;
per_type_encoder_f RSS_MeasPowerBias_r16_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RSS_MeasPowerBias_r16_H_ */
#include <asn_internal.h>