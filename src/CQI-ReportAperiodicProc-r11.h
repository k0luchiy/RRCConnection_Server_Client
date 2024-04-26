/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportAperiodicProc_r11_H_
#define	_CQI_ReportAperiodicProc_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CQI-ReportModeAperiodic.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CQI-ReportAperiodicProc-r11 */
typedef struct CQI_ReportAperiodicProc_r11 {
	CQI_ReportModeAperiodic_t	 cqi_ReportModeAperiodic_r11;
	BOOLEAN_t	 trigger01_r11;
	BOOLEAN_t	 trigger10_r11;
	BOOLEAN_t	 trigger11_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportAperiodicProc_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportAperiodicProc_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportAperiodicProc_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportAperiodicProc_r11_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportAperiodicProc_r11_H_ */
#include <asn_internal.h>