/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CSI_RS_ConfigEMIMO_v1430_H_
#define	_CSI_RS_ConfigEMIMO_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CSI-RS-ConfigNonPrecoded-v1430.h"
#include "CSI-RS-ConfigBeamformed-v1430.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ConfigEMIMO_v1430_PR {
	CSI_RS_ConfigEMIMO_v1430_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigEMIMO_v1430_PR_release,
	CSI_RS_ConfigEMIMO_v1430_PR_setup
} CSI_RS_ConfigEMIMO_v1430_PR;
typedef enum CSI_RS_ConfigEMIMO_v1430__setup_PR {
	CSI_RS_ConfigEMIMO_v1430__setup_PR_NOTHING,	/* No components present */
	CSI_RS_ConfigEMIMO_v1430__setup_PR_nonPrecoded_v1430,
	CSI_RS_ConfigEMIMO_v1430__setup_PR_beamformed_v1430
} CSI_RS_ConfigEMIMO_v1430__setup_PR;

/* CSI-RS-ConfigEMIMO-v1430 */
typedef struct CSI_RS_ConfigEMIMO_v1430 {
	CSI_RS_ConfigEMIMO_v1430_PR present;
	union CSI_RS_ConfigEMIMO_v1430_u {
		NULL_t	 release;
		struct CSI_RS_ConfigEMIMO_v1430__setup {
			CSI_RS_ConfigEMIMO_v1430__setup_PR present;
			union CSI_RS_ConfigEMIMO_v1430__setup_u {
				CSI_RS_ConfigNonPrecoded_v1430_t	 nonPrecoded_v1430;
				CSI_RS_ConfigBeamformed_v1430_t	 beamformed_v1430;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigEMIMO_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigEMIMO_v1430;
extern asn_CHOICE_specifics_t asn_SPC_CSI_RS_ConfigEMIMO_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ConfigEMIMO_v1430_1[2];
extern asn_per_constraints_t asn_PER_type_CSI_RS_ConfigEMIMO_v1430_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ConfigEMIMO_v1430_H_ */
#include <asn_internal.h>
