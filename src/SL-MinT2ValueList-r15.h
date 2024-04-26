/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SL_MinT2ValueList_r15_H_
#define	_SL_MinT2ValueList_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SL_MinT2Value_r15;

/* SL-MinT2ValueList-r15 */
typedef struct SL_MinT2ValueList_r15 {
	A_SEQUENCE_OF(struct SL_MinT2Value_r15) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_MinT2ValueList_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_MinT2ValueList_r15;
extern asn_SET_OF_specifics_t asn_SPC_SL_MinT2ValueList_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_MinT2ValueList_r15_1[1];
extern asn_per_constraints_t asn_PER_type_SL_MinT2ValueList_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_MinT2ValueList_r15_H_ */
#include <asn_internal.h>
