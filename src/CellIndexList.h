/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CellIndexList_H_
#define	_CellIndexList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIndex.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellIndexList */
typedef struct CellIndexList {
	A_SEQUENCE_OF(CellIndex_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellIndexList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellIndexList;
extern asn_SET_OF_specifics_t asn_SPC_CellIndexList_specs_1;
extern asn_TYPE_member_t asn_MBR_CellIndexList_1[1];
extern asn_per_constraints_t asn_PER_type_CellIndexList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CellIndexList_H_ */
#include <asn_internal.h>
