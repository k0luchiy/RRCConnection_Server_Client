/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PLMN_IdentityInfoListNR_v1710_H_
#define	_PLMN_IdentityInfoListNR_v1710_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityInfoNR_v1710;

/* PLMN-IdentityInfoListNR-v1710 */
typedef struct PLMN_IdentityInfoListNR_v1710 {
	A_SEQUENCE_OF(struct PLMN_IdentityInfoNR_v1710) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfoListNR_v1710_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfoListNR_v1710;
extern asn_SET_OF_specifics_t asn_SPC_PLMN_IdentityInfoListNR_v1710_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_IdentityInfoListNR_v1710_1[1];
extern asn_per_constraints_t asn_PER_type_PLMN_IdentityInfoListNR_v1710_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfoListNR_v1710_H_ */
#include <asn_internal.h>
