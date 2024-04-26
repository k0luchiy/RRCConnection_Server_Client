/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReconfigurationComplete_v1430_IEs_H_
#define	_RRCConnectionReconfigurationComplete_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PerCC_GapIndicationList_r14;
struct RRCConnectionReconfigurationComplete_v1510_IEs;

/* RRCConnectionReconfigurationComplete-v1430-IEs */
typedef struct RRCConnectionReconfigurationComplete_v1430_IEs {
	struct PerCC_GapIndicationList_r14	*perCC_GapIndicationList_r14;	/* OPTIONAL */
	long	*numFreqEffective_r14;	/* OPTIONAL */
	long	*numFreqEffectiveReduced_r14;	/* OPTIONAL */
	struct RRCConnectionReconfigurationComplete_v1510_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfigurationComplete_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfigurationComplete_v1430_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfigurationComplete_v1430_IEs_H_ */
#include <asn_internal.h>
