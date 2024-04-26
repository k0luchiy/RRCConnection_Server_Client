/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CDMA2000_Type_H_
#define	_CDMA2000_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CDMA2000_Type {
	CDMA2000_Type_type1XRTT	= 0,
	CDMA2000_Type_typeHRPD	= 1
} e_CDMA2000_Type;

/* CDMA2000-Type */
typedef long	 CDMA2000_Type_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CDMA2000_Type_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CDMA2000_Type;
extern const asn_INTEGER_specifics_t asn_SPC_CDMA2000_Type_specs_1;
asn_struct_free_f CDMA2000_Type_free;
asn_struct_print_f CDMA2000_Type_print;
asn_constr_check_f CDMA2000_Type_constraint;
ber_type_decoder_f CDMA2000_Type_decode_ber;
der_type_encoder_f CDMA2000_Type_encode_der;
xer_type_decoder_f CDMA2000_Type_decode_xer;
xer_type_encoder_f CDMA2000_Type_encode_xer;
jer_type_encoder_f CDMA2000_Type_encode_jer;
per_type_decoder_f CDMA2000_Type_decode_uper;
per_type_encoder_f CDMA2000_Type_encode_uper;
per_type_decoder_f CDMA2000_Type_decode_aper;
per_type_encoder_f CDMA2000_Type_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CDMA2000_Type_H_ */
#include <asn_internal.h>
