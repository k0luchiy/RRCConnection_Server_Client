/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_IM_ConfigToAddModListExt_r13_H_
#define	_CSI_IM_ConfigToAddModListExt_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_IM_ConfigExt_r12;

/* CSI-IM-ConfigToAddModListExt-r13 */
typedef struct CSI_IM_ConfigToAddModListExt_r13 {
	A_SEQUENCE_OF(struct CSI_IM_ConfigExt_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_IM_ConfigToAddModListExt_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_IM_ConfigToAddModListExt_r13;
extern asn_SET_OF_specifics_t asn_SPC_CSI_IM_ConfigToAddModListExt_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_IM_ConfigToAddModListExt_r13_1[1];
extern asn_per_constraints_t asn_PER_type_CSI_IM_ConfigToAddModListExt_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_IM_ConfigToAddModListExt_r13_H_ */
#include <asn_internal.h>
