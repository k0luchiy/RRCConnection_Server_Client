/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_AntennaInfoDedicated_v1250_H_
#define	_AntennaInfoDedicated_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AntennaInfoDedicated-v1250 */
typedef struct AntennaInfoDedicated_v1250 {
	BOOLEAN_t	 alternativeCodebookEnabledFor4TX_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoDedicated_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaInfoDedicated_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_v1250_H_ */
#include <asn_internal.h>
