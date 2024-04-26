/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_NeighCellCDMA2000_r11_H_
#define	_NeighCellCDMA2000_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandclassCDMA2000.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NeighCellsPerBandclassCDMA2000_r11;

/* NeighCellCDMA2000-r11 */
typedef struct NeighCellCDMA2000_r11 {
	BandclassCDMA2000_t	 bandClass;
	struct NeighCellCDMA2000_r11__neighFreqInfoList_r11 {
		A_SEQUENCE_OF(struct NeighCellsPerBandclassCDMA2000_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} neighFreqInfoList_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellCDMA2000_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellCDMA2000_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellCDMA2000_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellCDMA2000_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellCDMA2000_r11_H_ */
#include <asn_internal.h>
