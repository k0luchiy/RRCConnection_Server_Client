/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReconfiguration_v10l0_IEs_H_
#define	_RRCConnectionReconfiguration_v10l0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MobilityControlInfo_v10l0;
struct SCellToAddModList_v10l0;
struct RRCConnectionReconfiguration_v12f0_IEs;

/* RRCConnectionReconfiguration-v10l0-IEs */
typedef struct RRCConnectionReconfiguration_v10l0_IEs {
	struct MobilityControlInfo_v10l0	*mobilityControlInfo_v10l0;	/* OPTIONAL */
	struct SCellToAddModList_v10l0	*sCellToAddModList_v10l0;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCConnectionReconfiguration_v12f0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v10l0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v10l0_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReconfiguration_v10l0_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReconfiguration_v10l0_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfiguration_v10l0_IEs_H_ */
#include <asn_internal.h>
