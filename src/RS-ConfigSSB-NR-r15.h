/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RS_ConfigSSB_NR_r15_H_
#define	_RS_ConfigSSB_NR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MTC-SSB-NR-r15.h"
#include <NativeEnumerated.h>
#include <NULL.h>
#include "SSB-ToMeasure-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "SSB-PositionQCL-RelationNR-r16.h"
#include "PhysCellIdNR-r15.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "SSB-PositionQCL-RelationNR-r17.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RS_ConfigSSB_NR_r15__subcarrierSpacingSSB_r15 {
	RS_ConfigSSB_NR_r15__subcarrierSpacingSSB_r15_kHz15	= 0,
	RS_ConfigSSB_NR_r15__subcarrierSpacingSSB_r15_kHz30	= 1,
	RS_ConfigSSB_NR_r15__subcarrierSpacingSSB_r15_kHz120	= 2,
	RS_ConfigSSB_NR_r15__subcarrierSpacingSSB_r15_kHz240	= 3
} e_RS_ConfigSSB_NR_r15__subcarrierSpacingSSB_r15;
typedef enum RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15_PR {
	RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15_PR_NOTHING,	/* No components present */
	RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15_PR_release,
	RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15_PR_setup
} RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15_PR;
typedef enum RS_ConfigSSB_NR_r15__ext3__subcarrierSpacingSSB_r17 {
	RS_ConfigSSB_NR_r15__ext3__subcarrierSpacingSSB_r17_kHz480	= 0,
	RS_ConfigSSB_NR_r15__ext3__subcarrierSpacingSSB_r17_kHz960	= 1
} e_RS_ConfigSSB_NR_r15__ext3__subcarrierSpacingSSB_r17;

/* Forward declarations */
struct SSB_PositionQCL_CellsToAddModListNR_r16;
struct SSB_PositionQCL_CellsToAddModListNR_r17;

/* RS-ConfigSSB-NR-r15 */
typedef struct RS_ConfigSSB_NR_r15 {
	MTC_SSB_NR_r15_t	 measTimingConfig_r15;
	long	 subcarrierSpacingSSB_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RS_ConfigSSB_NR_r15__ext1 {
		struct RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15 {
			RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15_PR present;
			union RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15_u {
				NULL_t	 release;
				SSB_ToMeasure_r15_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ssb_ToMeasure_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RS_ConfigSSB_NR_r15__ext2 {
		SSB_PositionQCL_RelationNR_r16_t	*ssb_PositionQCL_CommonNR_r16;	/* OPTIONAL */
		struct SSB_PositionQCL_CellsToAddModListNR_r16	*ssb_PositionQCL_CellsToAddModListNR_r16;	/* OPTIONAL */
		struct RS_ConfigSSB_NR_r15__ext2__ssb_PositionQCL_CellsToRemoveListNR_r16 {
			A_SEQUENCE_OF(PhysCellIdNR_r15_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ssb_PositionQCL_CellsToRemoveListNR_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RS_ConfigSSB_NR_r15__ext3 {
		long	*subcarrierSpacingSSB_r17;	/* OPTIONAL */
		SSB_PositionQCL_RelationNR_r17_t	*ssb_PositionQCL_CommonNR_r17;	/* OPTIONAL */
		struct SSB_PositionQCL_CellsToAddModListNR_r17	*ssb_PositionQCL_CellsToAddModListNR_r17;	/* OPTIONAL */
		struct RS_ConfigSSB_NR_r15__ext3__ssb_PositionQCL_CellsToRemoveListNR_r17 {
			A_SEQUENCE_OF(PhysCellIdNR_r15_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ssb_PositionQCL_CellsToRemoveListNR_r17;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RS_ConfigSSB_NR_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r15_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierSpacingSSB_r17_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RS_ConfigSSB_NR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_RS_ConfigSSB_NR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_RS_ConfigSSB_NR_r15_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RS_ConfigSSB_NR_r15_H_ */
#include <asn_internal.h>
