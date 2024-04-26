/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_DRB_Identity_H_
#define	_DRB_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DRB-Identity */
typedef long	 DRB_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DRB_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DRB_Identity;
asn_struct_free_f DRB_Identity_free;
asn_struct_print_f DRB_Identity_print;
asn_constr_check_f DRB_Identity_constraint;
ber_type_decoder_f DRB_Identity_decode_ber;
der_type_encoder_f DRB_Identity_encode_der;
xer_type_decoder_f DRB_Identity_decode_xer;
xer_type_encoder_f DRB_Identity_encode_xer;
jer_type_encoder_f DRB_Identity_encode_jer;
per_type_decoder_f DRB_Identity_decode_uper;
per_type_encoder_f DRB_Identity_encode_uper;
per_type_decoder_f DRB_Identity_decode_aper;
per_type_encoder_f DRB_Identity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_Identity_H_ */
#include <asn_internal.h>
