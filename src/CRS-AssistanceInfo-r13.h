/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CRS_AssistanceInfo_r13_H_
#define	_CRS_AssistanceInfo_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CRS_AssistanceInfo_r13__antennaPortsCount_r13 {
	CRS_AssistanceInfo_r13__antennaPortsCount_r13_an1	= 0,
	CRS_AssistanceInfo_r13__antennaPortsCount_r13_an2	= 1,
	CRS_AssistanceInfo_r13__antennaPortsCount_r13_an4	= 2,
	CRS_AssistanceInfo_r13__antennaPortsCount_r13_spare1	= 3
} e_CRS_AssistanceInfo_r13__antennaPortsCount_r13;

/* Forward declarations */
struct MBSFN_SubframeConfigList;
struct MBSFN_SubframeConfigList_v1430;

/* CRS-AssistanceInfo-r13 */
typedef struct CRS_AssistanceInfo_r13 {
	PhysCellId_t	 physCellId_r13;
	long	 antennaPortsCount_r13;
	struct MBSFN_SubframeConfigList	*mbsfn_SubframeConfigList_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CRS_AssistanceInfo_r13__ext1 {
		struct MBSFN_SubframeConfigList_v1430	*mbsfn_SubframeConfigList_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CRS_AssistanceInfo_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_r13_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CRS_AssistanceInfo_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_CRS_AssistanceInfo_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_CRS_AssistanceInfo_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CRS_AssistanceInfo_r13_H_ */
#include <asn_internal.h>
