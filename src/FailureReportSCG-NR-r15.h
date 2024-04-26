/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_FailureReportSCG_NR_r15_H_
#define	_FailureReportSCG_NR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureReportSCG_NR_r15__failureType_r15 {
	FailureReportSCG_NR_r15__failureType_r15_t310_Expiry	= 0,
	FailureReportSCG_NR_r15__failureType_r15_randomAccessProblem	= 1,
	FailureReportSCG_NR_r15__failureType_r15_rlc_MaxNumRetx	= 2,
	FailureReportSCG_NR_r15__failureType_r15_synchReconfigFailureSCG	= 3,
	FailureReportSCG_NR_r15__failureType_r15_scg_reconfigFailure	= 4,
	FailureReportSCG_NR_r15__failureType_r15_srb3_IntegrityFailure	= 5,
	FailureReportSCG_NR_r15__failureType_r15_dummy	= 6
} e_FailureReportSCG_NR_r15__failureType_r15;
typedef enum FailureReportSCG_NR_r15__ext1__failureType_v1610 {
	FailureReportSCG_NR_r15__ext1__failureType_v1610_t312_Expiry	= 0,
	FailureReportSCG_NR_r15__ext1__failureType_v1610_scg_lbtFailure	= 1,
	FailureReportSCG_NR_r15__ext1__failureType_v1610_beamFailureRecoveryFailure	= 2,
	FailureReportSCG_NR_r15__ext1__failureType_v1610_bh_RLF_r16	= 3,
	FailureReportSCG_NR_r15__ext1__failureType_v1610_beamFailure_r17	= 4,
	FailureReportSCG_NR_r15__ext1__failureType_v1610_spare3	= 5,
	FailureReportSCG_NR_r15__ext1__failureType_v1610_spare2	= 6,
	FailureReportSCG_NR_r15__ext1__failureType_v1610_spare1	= 7
} e_FailureReportSCG_NR_r15__ext1__failureType_v1610;

/* Forward declarations */
struct MeasResultFreqListFailNR_r15;
struct LocationInfo_r10;
struct LogMeasResultListBT_r15;
struct LogMeasResultListWLAN_r15;

/* FailureReportSCG-NR-r15 */
typedef struct FailureReportSCG_NR_r15 {
	long	 failureType_r15;
	struct MeasResultFreqListFailNR_r15	*measResultFreqListNR_r15;	/* OPTIONAL */
	OCTET_STRING_t	*measResultSCG_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct FailureReportSCG_NR_r15__ext1 {
		struct LocationInfo_r10	*locationInfo_r16;	/* OPTIONAL */
		struct LogMeasResultListBT_r15	*logMeasResultListBT_r16;	/* OPTIONAL */
		struct LogMeasResultListWLAN_r15	*logMeasResultListWLAN_r16;	/* OPTIONAL */
		long	*failureType_v1610;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureReportSCG_NR_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_r15_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_v1610_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FailureReportSCG_NR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureReportSCG_NR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureReportSCG_NR_r15_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _FailureReportSCG_NR_r15_H_ */
#include <asn_internal.h>
