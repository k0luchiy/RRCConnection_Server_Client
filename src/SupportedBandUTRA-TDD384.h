/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SupportedBandUTRA_TDD384_H_
#define	_SupportedBandUTRA_TDD384_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandUTRA_TDD384 {
	SupportedBandUTRA_TDD384_a	= 0,
	SupportedBandUTRA_TDD384_b	= 1,
	SupportedBandUTRA_TDD384_c	= 2,
	SupportedBandUTRA_TDD384_d	= 3,
	SupportedBandUTRA_TDD384_e	= 4,
	SupportedBandUTRA_TDD384_f	= 5,
	SupportedBandUTRA_TDD384_g	= 6,
	SupportedBandUTRA_TDD384_h	= 7,
	SupportedBandUTRA_TDD384_i	= 8,
	SupportedBandUTRA_TDD384_j	= 9,
	SupportedBandUTRA_TDD384_k	= 10,
	SupportedBandUTRA_TDD384_l	= 11,
	SupportedBandUTRA_TDD384_m	= 12,
	SupportedBandUTRA_TDD384_n	= 13,
	SupportedBandUTRA_TDD384_o	= 14,
	SupportedBandUTRA_TDD384_p	= 15
	/*
	 * Enumeration is extensible
	 */
} e_SupportedBandUTRA_TDD384;

/* SupportedBandUTRA-TDD384 */
typedef long	 SupportedBandUTRA_TDD384_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SupportedBandUTRA_TDD384_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandUTRA_TDD384;
extern const asn_INTEGER_specifics_t asn_SPC_SupportedBandUTRA_TDD384_specs_1;
asn_struct_free_f SupportedBandUTRA_TDD384_free;
asn_struct_print_f SupportedBandUTRA_TDD384_print;
asn_constr_check_f SupportedBandUTRA_TDD384_constraint;
ber_type_decoder_f SupportedBandUTRA_TDD384_decode_ber;
der_type_encoder_f SupportedBandUTRA_TDD384_encode_der;
xer_type_decoder_f SupportedBandUTRA_TDD384_decode_xer;
xer_type_encoder_f SupportedBandUTRA_TDD384_encode_xer;
jer_type_encoder_f SupportedBandUTRA_TDD384_encode_jer;
per_type_decoder_f SupportedBandUTRA_TDD384_decode_uper;
per_type_encoder_f SupportedBandUTRA_TDD384_encode_uper;
per_type_decoder_f SupportedBandUTRA_TDD384_decode_aper;
per_type_encoder_f SupportedBandUTRA_TDD384_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandUTRA_TDD384_H_ */
#include <asn_internal.h>
