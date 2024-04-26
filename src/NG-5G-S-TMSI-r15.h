/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NG_5G_S_TMSI_r15_H_
#define	_NG_5G_S_TMSI_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NG-5G-S-TMSI-r15 */
typedef BIT_STRING_t	 NG_5G_S_TMSI_r15_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NG_5G_S_TMSI_r15_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NG_5G_S_TMSI_r15;
asn_struct_free_f NG_5G_S_TMSI_r15_free;
asn_struct_print_f NG_5G_S_TMSI_r15_print;
asn_constr_check_f NG_5G_S_TMSI_r15_constraint;
ber_type_decoder_f NG_5G_S_TMSI_r15_decode_ber;
der_type_encoder_f NG_5G_S_TMSI_r15_encode_der;
xer_type_decoder_f NG_5G_S_TMSI_r15_decode_xer;
xer_type_encoder_f NG_5G_S_TMSI_r15_encode_xer;
jer_type_encoder_f NG_5G_S_TMSI_r15_encode_jer;
per_type_decoder_f NG_5G_S_TMSI_r15_decode_uper;
per_type_encoder_f NG_5G_S_TMSI_r15_encode_uper;
per_type_decoder_f NG_5G_S_TMSI_r15_decode_aper;
per_type_encoder_f NG_5G_S_TMSI_r15_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NG_5G_S_TMSI_r15_H_ */
#include <asn_internal.h>
