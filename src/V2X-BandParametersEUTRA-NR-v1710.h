/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_V2X_BandParametersEUTRA_NR_v1710_H_
#define	_V2X_BandParametersEUTRA_NR_v1710_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* V2X-BandParametersEUTRA-NR-v1710 */
typedef struct V2X_BandParametersEUTRA_NR_v1710 {
	OCTET_STRING_t	*v2x_BandParametersEUTRA_NR_v1710;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} V2X_BandParametersEUTRA_NR_v1710_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_V2X_BandParametersEUTRA_NR_v1710;
extern asn_SEQUENCE_specifics_t asn_SPC_V2X_BandParametersEUTRA_NR_v1710_specs_1;
extern asn_TYPE_member_t asn_MBR_V2X_BandParametersEUTRA_NR_v1710_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_BandParametersEUTRA_NR_v1710_H_ */
#include <asn_internal.h>
