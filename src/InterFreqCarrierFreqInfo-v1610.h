/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_InterFreqCarrierFreqInfo_v1610_H_
#define	_InterFreqCarrierFreqInfo_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellReselectionPriority.h"
#include "CellReselectionSubPriority-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RSS_ConfigCarrierInfo_r16;
struct InterFreqNeighCellList_v1610;

/* InterFreqCarrierFreqInfo-v1610 */
typedef struct InterFreqCarrierFreqInfo_v1610 {
	CellReselectionPriority_t	*altCellReselectionPriority_r16;	/* OPTIONAL */
	CellReselectionSubPriority_r13_t	*altCellReselectionSubPriority_r16;	/* OPTIONAL */
	struct RSS_ConfigCarrierInfo_r16	*rss_ConfigCarrierInfo_r16;	/* OPTIONAL */
	struct InterFreqNeighCellList_v1610	*interFreqNeighCellList_v1610;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_v1610_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqCarrierFreqInfo_v1610_H_ */
#include <asn_internal.h>
