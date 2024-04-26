/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_LoggedMeasurementConfiguration_v1700_IEs_H_
#define	_LoggedMeasurementConfiguration_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LoggedMeasurementConfiguration_v1700_IEs__measUncomBarPre_r17 {
	LoggedMeasurementConfiguration_v1700_IEs__measUncomBarPre_r17_true	= 0
} e_LoggedMeasurementConfiguration_v1700_IEs__measUncomBarPre_r17;

/* Forward declarations */
struct LoggedEventTriggerConfig_r17;

/* LoggedMeasurementConfiguration-v1700-IEs */
typedef struct LoggedMeasurementConfiguration_v1700_IEs {
	struct LoggedEventTriggerConfig_r17	*loggedEventTriggerConfig_r17;	/* OPTIONAL */
	long	*measUncomBarPre_r17;	/* OPTIONAL */
	struct LoggedMeasurementConfiguration_v1700_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasurementConfiguration_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measUncomBarPre_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasurementConfiguration_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LoggedMeasurementConfiguration_v1700_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LoggedMeasurementConfiguration_v1700_IEs_H_ */
#include <asn_internal.h>
