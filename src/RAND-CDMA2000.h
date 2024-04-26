/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RAND_CDMA2000_H_
#define	_RAND_CDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RAND-CDMA2000 */
typedef BIT_STRING_t	 RAND_CDMA2000_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RAND_CDMA2000_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RAND_CDMA2000;
asn_struct_free_f RAND_CDMA2000_free;
asn_struct_print_f RAND_CDMA2000_print;
asn_constr_check_f RAND_CDMA2000_constraint;
ber_type_decoder_f RAND_CDMA2000_decode_ber;
der_type_encoder_f RAND_CDMA2000_encode_der;
xer_type_decoder_f RAND_CDMA2000_decode_xer;
xer_type_encoder_f RAND_CDMA2000_encode_xer;
jer_type_encoder_f RAND_CDMA2000_encode_jer;
per_type_decoder_f RAND_CDMA2000_decode_uper;
per_type_encoder_f RAND_CDMA2000_encode_uper;
per_type_decoder_f RAND_CDMA2000_decode_aper;
per_type_encoder_f RAND_CDMA2000_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RAND_CDMA2000_H_ */
#include <asn_internal.h>