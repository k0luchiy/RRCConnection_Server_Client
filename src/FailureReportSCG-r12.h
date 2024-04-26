/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_FailureReportSCG_r12_H_
#define	_FailureReportSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureReportSCG_r12__failureType_r12 {
	FailureReportSCG_r12__failureType_r12_t313_Expiry	= 0,
	FailureReportSCG_r12__failureType_r12_randomAccessProblem	= 1,
	FailureReportSCG_r12__failureType_r12_rlc_MaxNumRetx	= 2,
	FailureReportSCG_r12__failureType_r12_scg_ChangeFailure	= 3
} e_FailureReportSCG_r12__failureType_r12;
typedef enum FailureReportSCG_r12__ext1__failureType_v1290 {
	FailureReportSCG_r12__ext1__failureType_v1290_maxUL_TimingDiff_v1290	= 0
} e_FailureReportSCG_r12__ext1__failureType_v1290;

/* Forward declarations */
struct MeasResultServFreqList_r10;
struct MeasResultList2EUTRA_r9;
struct MeasResultServFreqListExt_r13;

/* FailureReportSCG-r12 */
typedef struct FailureReportSCG_r12 {
	long	 failureType_r12;
	struct MeasResultServFreqList_r10	*measResultServFreqList_r12;	/* OPTIONAL */
	struct MeasResultList2EUTRA_r9	*measResultNeighCells_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct FailureReportSCG_r12__ext1 {
		long	*failureType_v1290;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct FailureReportSCG_r12__ext2 {
		struct MeasResultServFreqListExt_r13	*measResultServFreqListExt_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureReportSCG_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_v1290_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FailureReportSCG_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureReportSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureReportSCG_r12_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _FailureReportSCG_r12_H_ */
#include <asn_internal.h>
