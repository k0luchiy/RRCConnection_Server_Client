/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasId_H_
#define	_MeasId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasId */
typedef long	 MeasId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MeasId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MeasId;
asn_struct_free_f MeasId_free;
asn_struct_print_f MeasId_print;
asn_constr_check_f MeasId_constraint;
ber_type_decoder_f MeasId_decode_ber;
der_type_encoder_f MeasId_encode_der;
xer_type_decoder_f MeasId_decode_xer;
xer_type_encoder_f MeasId_encode_xer;
jer_type_encoder_f MeasId_encode_jer;
per_type_decoder_f MeasId_decode_uper;
per_type_encoder_f MeasId_encode_uper;
per_type_decoder_f MeasId_decode_aper;
per_type_encoder_f MeasId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasId_H_ */
#include <asn_internal.h>
