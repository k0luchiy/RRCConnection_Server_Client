/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_Other_Parameters_v1690_H_
#define	_Other_Parameters_v1690_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Other_Parameters_v1690__ul_RRC_Segmentation_r16 {
	Other_Parameters_v1690__ul_RRC_Segmentation_r16_supported	= 0
} e_Other_Parameters_v1690__ul_RRC_Segmentation_r16;

/* Other-Parameters-v1690 */
typedef struct Other_Parameters_v1690 {
	long	*ul_RRC_Segmentation_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Other_Parameters_v1690_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_RRC_Segmentation_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Other_Parameters_v1690;
extern asn_SEQUENCE_specifics_t asn_SPC_Other_Parameters_v1690_specs_1;
extern asn_TYPE_member_t asn_MBR_Other_Parameters_v1690_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Other_Parameters_v1690_H_ */
#include <asn_internal.h>