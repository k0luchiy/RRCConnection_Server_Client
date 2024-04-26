/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType24_r15_H_
#define	_SystemInformationBlockType24_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-Reselection.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqListNR_r15;
struct SpeedStateScaleFactors;
struct CarrierFreqListNR_v1610;
struct CarrierFreqListNR_v1700;
struct CarrierFreqListNR_v1720;

/* SystemInformationBlockType24-r15 */
typedef struct SystemInformationBlockType24_r15 {
	struct CarrierFreqListNR_r15	*carrierFreqListNR_r15;	/* OPTIONAL */
	T_Reselection_t	 t_ReselectionNR_r15;
	struct SpeedStateScaleFactors	*t_ReselectionNR_SF_r15;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SystemInformationBlockType24_r15__ext1 {
		struct CarrierFreqListNR_v1610	*carrierFreqListNR_v1610;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SystemInformationBlockType24_r15__ext2 {
		struct CarrierFreqListNR_v1700	*carrierFreqListNR_v1700;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct SystemInformationBlockType24_r15__ext3 {
		struct CarrierFreqListNR_v1720	*carrierFreqListNR_v1720;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType24_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType24_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType24_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType24_r15_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType24_r15_H_ */
#include <asn_internal.h>
