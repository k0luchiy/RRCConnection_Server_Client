/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ShortConfigSCell_r15_H_
#define	_CQI_ShortConfigSCell_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ShortConfigSCell_r15_PR {
	CQI_ShortConfigSCell_r15_PR_NOTHING,	/* No components present */
	CQI_ShortConfigSCell_r15_PR_release,
	CQI_ShortConfigSCell_r15_PR_setup
} CQI_ShortConfigSCell_r15_PR;
typedef enum CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15_PR {
	CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15_PR_NOTHING,	/* No components present */
	CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15_PR_widebandCQI_Short_r15,
	CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15_PR_subbandCQI_Short_r15
} CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15_PR;
typedef enum CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__widebandCQI_Short_r15__csi_ReportModeShort_r15 {
	CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__widebandCQI_Short_r15__csi_ReportModeShort_r15_submode1	= 0,
	CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__widebandCQI_Short_r15__csi_ReportModeShort_r15_submode2	= 1
} e_CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__widebandCQI_Short_r15__csi_ReportModeShort_r15;
typedef enum CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__subbandCQI_Short_r15__periodicityFactor_r15 {
	CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__subbandCQI_Short_r15__periodicityFactor_r15_n2	= 0,
	CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__subbandCQI_Short_r15__periodicityFactor_r15_n4	= 1
} e_CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__subbandCQI_Short_r15__periodicityFactor_r15;

/* CQI-ShortConfigSCell-r15 */
typedef struct CQI_ShortConfigSCell_r15 {
	CQI_ShortConfigSCell_r15_PR present;
	union CQI_ShortConfigSCell_r15_u {
		NULL_t	 release;
		struct CQI_ShortConfigSCell_r15__setup {
			long	 cqi_pmi_ConfigIndexShort_r15;
			long	*ri_ConfigIndexShort_r15;	/* OPTIONAL */
			struct CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15 {
				CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15_PR present;
				union CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15_u {
					struct CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__widebandCQI_Short_r15 {
						long	*csi_ReportModeShort_r15;	/* OPTIONAL */
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} widebandCQI_Short_r15;
					struct CQI_ShortConfigSCell_r15__setup__cqi_FormatIndicatorShort_r15__subbandCQI_Short_r15 {
						long	 k_r15;
						long	 periodicityFactor_r15;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} subbandCQI_Short_r15;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cqi_FormatIndicatorShort_r15;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ShortConfigSCell_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportModeShort_r15_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicityFactor_r15_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ShortConfigSCell_r15;
extern asn_CHOICE_specifics_t asn_SPC_CQI_ShortConfigSCell_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ShortConfigSCell_r15_1[2];
extern asn_per_constraints_t asn_PER_type_CQI_ShortConfigSCell_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ShortConfigSCell_r15_H_ */
#include <asn_internal.h>
