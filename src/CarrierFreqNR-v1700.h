/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CarrierFreqNR_v1700_H_
#define	_CarrierFreqNR_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_FreqNeighHSDN_CellList_r17;

/* CarrierFreqNR-v1700 */
typedef struct CarrierFreqNR_v1700 {
	struct NR_FreqNeighHSDN_CellList_r17	*nr_FreqNeighHSDN_CellList_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqNR_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqNR_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqNR_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqNR_v1700_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqNR_v1700_H_ */
#include <asn_internal.h>
