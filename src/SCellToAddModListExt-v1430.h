/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SCellToAddModListExt_v1430_H_
#define	_SCellToAddModListExt_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToAddModExt_v1430;

/* SCellToAddModListExt-v1430 */
typedef struct SCellToAddModListExt_v1430 {
	A_SEQUENCE_OF(struct SCellToAddModExt_v1430) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModListExt_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModListExt_v1430;
extern asn_SET_OF_specifics_t asn_SPC_SCellToAddModListExt_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_SCellToAddModListExt_v1430_1[1];
extern asn_per_constraints_t asn_PER_type_SCellToAddModListExt_v1430_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SCellToAddModListExt_v1430_H_ */
#include <asn_internal.h>
