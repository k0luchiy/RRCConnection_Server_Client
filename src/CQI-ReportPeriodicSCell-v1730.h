/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportPeriodicSCell_v1730_H_
#define	_CQI_ReportPeriodicSCell_v1730_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CQI-ReportPeriodicSCell-v1730 */
typedef struct CQI_ReportPeriodicSCell_v1730 {
	long	 cqi_pmi_ConfigIndex2Dormant_r17;
	long	*ri_ConfigIndex2Dormant_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportPeriodicSCell_v1730_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodicSCell_v1730;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportPeriodicSCell_v1730_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportPeriodicSCell_v1730_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportPeriodicSCell_v1730_H_ */
#include <asn_internal.h>
