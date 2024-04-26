/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RadioResourceConfigDedicated_H_
#define	_RadioResourceConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAC-MainConfig.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "C-RNTI.h"
#include "CRS-ChEstMPDCCH-ConfigDedicated-r16.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioResourceConfigDedicated__mac_MainConfig_PR {
	RadioResourceConfigDedicated__mac_MainConfig_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated__mac_MainConfig_PR_explicitValue,
	RadioResourceConfigDedicated__mac_MainConfig_PR_defaultValue
} RadioResourceConfigDedicated__mac_MainConfig_PR;
typedef enum RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15_PR {
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15_PR_release,
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15_PR_setup
} RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15_PR;
typedef enum RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup_PR {
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup_PR_crs_IntfMitigEnabled,
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup_PR_crs_IntfMitigNumPRBs
} RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup_PR;
typedef enum RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup__crs_IntfMitigNumPRBs {
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup__crs_IntfMitigNumPRBs_n6	= 0,
	RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup__crs_IntfMitigNumPRBs_n24	= 1
} e_RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup__crs_IntfMitigNumPRBs;
typedef enum RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16_PR {
	RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16_PR_NOTHING,	/* No components present */
	RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16_PR_release,
	RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16_PR_setup
} RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16_PR;

/* Forward declarations */
struct SRB_ToAddModList;
struct DRB_ToAddModList;
struct DRB_ToReleaseList;
struct SPS_Config;
struct PhysicalConfigDedicated;
struct RLF_TimersAndConstants_r9;
struct MeasSubframePatternPCell_r10;
struct NeighCellsCRS_Info_r11;
struct NAICS_AssistanceInfo_r12;
struct NeighCellsCRS_Info_r13;
struct RLF_TimersAndConstants_r13;
struct SPS_Config_v1430;
struct SRB_ToAddModListExt_r15;
struct SPS_Config_v1530;
struct NeighCellsCRS_Info_r15;
struct DRB_ToAddModList_r15;
struct DRB_ToReleaseList_r15;
struct SPS_Config_v1540;
struct RLF_TimersAndConstantsMCG_Failure_r16;

/* RadioResourceConfigDedicated */
typedef struct RadioResourceConfigDedicated {
	struct SRB_ToAddModList	*srb_ToAddModList;	/* OPTIONAL */
	struct DRB_ToAddModList	*drb_ToAddModList;	/* OPTIONAL */
	struct DRB_ToReleaseList	*drb_ToReleaseList;	/* OPTIONAL */
	struct RadioResourceConfigDedicated__mac_MainConfig {
		RadioResourceConfigDedicated__mac_MainConfig_PR present;
		union RadioResourceConfigDedicated__mac_MainConfig_u {
			MAC_MainConfig_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mac_MainConfig;
	struct SPS_Config	*sps_Config;	/* OPTIONAL */
	struct PhysicalConfigDedicated	*physicalConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RadioResourceConfigDedicated__ext1 {
		struct RLF_TimersAndConstants_r9	*rlf_TimersAndConstants_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RadioResourceConfigDedicated__ext2 {
		struct MeasSubframePatternPCell_r10	*measSubframePatternPCell_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RadioResourceConfigDedicated__ext3 {
		struct NeighCellsCRS_Info_r11	*neighCellsCRS_Info_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct RadioResourceConfigDedicated__ext4 {
		struct NAICS_AssistanceInfo_r12	*naics_Info_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct RadioResourceConfigDedicated__ext5 {
		struct NeighCellsCRS_Info_r13	*neighCellsCRS_Info_r13;	/* OPTIONAL */
		struct RLF_TimersAndConstants_r13	*rlf_TimersAndConstants_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct RadioResourceConfigDedicated__ext6 {
		struct SPS_Config_v1430	*sps_Config_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct RadioResourceConfigDedicated__ext7 {
		struct SRB_ToAddModListExt_r15	*srb_ToAddModListExt_r15;	/* OPTIONAL */
		long	*srb_ToReleaseListExt_r15;	/* OPTIONAL */
		struct SPS_Config_v1530	*sps_Config_v1530;	/* OPTIONAL */
		struct RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15 {
			RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15_PR present;
			union RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15_u {
				NULL_t	 release;
				struct RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup {
					RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup_PR present;
					union RadioResourceConfigDedicated__ext7__crs_IntfMitigConfig_r15__setup_u {
						NULL_t	 crs_IntfMitigEnabled;
						long	 crs_IntfMitigNumPRBs;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *crs_IntfMitigConfig_r15;
		struct NeighCellsCRS_Info_r15	*neighCellsCRS_Info_r15;	/* OPTIONAL */
		struct DRB_ToAddModList_r15	*drb_ToAddModList_r15;	/* OPTIONAL */
		struct DRB_ToReleaseList_r15	*drb_ToReleaseList_r15;	/* OPTIONAL */
		struct RadioResourceConfigDedicated__ext7__dummy {
			A_SEQUENCE_OF(long) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *dummy;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct RadioResourceConfigDedicated__ext8 {
		struct SPS_Config_v1540	*sps_Config_v1540;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	struct RadioResourceConfigDedicated__ext9 {
		struct RLF_TimersAndConstantsMCG_Failure_r16	*rlf_TimersAndConstantsMCG_Failure_r16;	/* OPTIONAL */
		struct RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16 {
			RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16_PR present;
			union RadioResourceConfigDedicated__ext9__crs_ChEstMPDCCH_ConfigDedicated_r16_u {
				NULL_t	 release;
				CRS_ChEstMPDCCH_ConfigDedicated_r16_t	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *crs_ChEstMPDCCH_ConfigDedicated_r16;
		C_RNTI_t	*newUE_Identity_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigDedicated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_crs_IntfMitigNumPRBs_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicated_1[15];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioResourceConfigDedicated_H_ */
#include <asn_internal.h>
