/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultSSTD_r13_H_
#define	_MeasResultSSTD_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultSSTD-r13 */
typedef struct MeasResultSSTD_r13 {
	long	 sfn_OffsetResult_r13;
	long	 frameBoundaryOffsetResult_r13;
	long	 subframeBoundaryOffsetResult_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultSSTD_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultSSTD_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultSSTD_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultSSTD_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultSSTD_r13_H_ */
#include <asn_internal.h>
