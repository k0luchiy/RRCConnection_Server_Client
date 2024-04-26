/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -S /home/koluchiy/fork_asn1c/skeletons -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType2_H_
#define	_SystemInformationBlockType2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioResourceConfigCommonSIB.h"
#include "UE-TimersAndConstants.h"
#include "TimeAlignmentTimer.h"
#include <OCTET_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "ARFCN-ValueEUTRA.h"
#include <NativeEnumerated.h>
#include "AdditionalSpectrumEmission.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType2__freqInfo__ul_Bandwidth {
	SystemInformationBlockType2__freqInfo__ul_Bandwidth_n6	= 0,
	SystemInformationBlockType2__freqInfo__ul_Bandwidth_n15	= 1,
	SystemInformationBlockType2__freqInfo__ul_Bandwidth_n25	= 2,
	SystemInformationBlockType2__freqInfo__ul_Bandwidth_n50	= 3,
	SystemInformationBlockType2__freqInfo__ul_Bandwidth_n75	= 4,
	SystemInformationBlockType2__freqInfo__ul_Bandwidth_n100	= 5
} e_SystemInformationBlockType2__freqInfo__ul_Bandwidth;
typedef enum SystemInformationBlockType2__ext3__ac_BarringSkipForMMTELVoice_r12 {
	SystemInformationBlockType2__ext3__ac_BarringSkipForMMTELVoice_r12_true	= 0
} e_SystemInformationBlockType2__ext3__ac_BarringSkipForMMTELVoice_r12;
typedef enum SystemInformationBlockType2__ext3__ac_BarringSkipForMMTELVideo_r12 {
	SystemInformationBlockType2__ext3__ac_BarringSkipForMMTELVideo_r12_true	= 0
} e_SystemInformationBlockType2__ext3__ac_BarringSkipForMMTELVideo_r12;
typedef enum SystemInformationBlockType2__ext3__ac_BarringSkipForSMS_r12 {
	SystemInformationBlockType2__ext3__ac_BarringSkipForSMS_r12_true	= 0
} e_SystemInformationBlockType2__ext3__ac_BarringSkipForSMS_r12;
typedef enum SystemInformationBlockType2__ext4__voiceServiceCauseIndication_r12 {
	SystemInformationBlockType2__ext4__voiceServiceCauseIndication_r12_true	= 0
} e_SystemInformationBlockType2__ext4__voiceServiceCauseIndication_r12;
typedef enum SystemInformationBlockType2__ext6__useFullResumeID_r13 {
	SystemInformationBlockType2__ext6__useFullResumeID_r13_true	= 0
} e_SystemInformationBlockType2__ext6__useFullResumeID_r13;
typedef enum SystemInformationBlockType2__ext7__unicastFreqHoppingInd_r13 {
	SystemInformationBlockType2__ext7__unicastFreqHoppingInd_r13_true	= 0
} e_SystemInformationBlockType2__ext7__unicastFreqHoppingInd_r13;
typedef enum SystemInformationBlockType2__ext8__videoServiceCauseIndication_r14 {
	SystemInformationBlockType2__ext8__videoServiceCauseIndication_r14_true	= 0
} e_SystemInformationBlockType2__ext8__videoServiceCauseIndication_r14;
typedef enum SystemInformationBlockType2__ext10__cp_EDT_r15 {
	SystemInformationBlockType2__ext10__cp_EDT_r15_true	= 0
} e_SystemInformationBlockType2__ext10__cp_EDT_r15;
typedef enum SystemInformationBlockType2__ext10__up_EDT_r15 {
	SystemInformationBlockType2__ext10__up_EDT_r15_true	= 0
} e_SystemInformationBlockType2__ext10__up_EDT_r15;
typedef enum SystemInformationBlockType2__ext10__idleModeMeasurements_r15 {
	SystemInformationBlockType2__ext10__idleModeMeasurements_r15_true	= 0
} e_SystemInformationBlockType2__ext10__idleModeMeasurements_r15;
typedef enum SystemInformationBlockType2__ext10__reducedCP_LatencyEnabled_r15 {
	SystemInformationBlockType2__ext10__reducedCP_LatencyEnabled_r15_true	= 0
} e_SystemInformationBlockType2__ext10__reducedCP_LatencyEnabled_r15;
typedef enum SystemInformationBlockType2__ext11__mbms_ROM_ServiceIndication_r15 {
	SystemInformationBlockType2__ext11__mbms_ROM_ServiceIndication_r15_true	= 0
} e_SystemInformationBlockType2__ext11__mbms_ROM_ServiceIndication_r15;
typedef enum SystemInformationBlockType2__ext12__rlos_Enabled_r16 {
	SystemInformationBlockType2__ext12__rlos_Enabled_r16_true	= 0
} e_SystemInformationBlockType2__ext12__rlos_Enabled_r16;
typedef enum SystemInformationBlockType2__ext12__earlySecurityReactivation_r16 {
	SystemInformationBlockType2__ext12__earlySecurityReactivation_r16_true	= 0
} e_SystemInformationBlockType2__ext12__earlySecurityReactivation_r16;
typedef enum SystemInformationBlockType2__ext12__cp_EDT_5GC_r16 {
	SystemInformationBlockType2__ext12__cp_EDT_5GC_r16_true	= 0
} e_SystemInformationBlockType2__ext12__cp_EDT_5GC_r16;
typedef enum SystemInformationBlockType2__ext12__up_EDT_5GC_r16 {
	SystemInformationBlockType2__ext12__up_EDT_5GC_r16_true	= 0
} e_SystemInformationBlockType2__ext12__up_EDT_5GC_r16;
typedef enum SystemInformationBlockType2__ext12__cp_PUR_EPC_r16 {
	SystemInformationBlockType2__ext12__cp_PUR_EPC_r16_true	= 0
} e_SystemInformationBlockType2__ext12__cp_PUR_EPC_r16;
typedef enum SystemInformationBlockType2__ext12__up_PUR_EPC_r16 {
	SystemInformationBlockType2__ext12__up_PUR_EPC_r16_true	= 0
} e_SystemInformationBlockType2__ext12__up_PUR_EPC_r16;
typedef enum SystemInformationBlockType2__ext12__cp_PUR_5GC_r16 {
	SystemInformationBlockType2__ext12__cp_PUR_5GC_r16_true	= 0
} e_SystemInformationBlockType2__ext12__cp_PUR_5GC_r16;
typedef enum SystemInformationBlockType2__ext12__up_PUR_5GC_r16 {
	SystemInformationBlockType2__ext12__up_PUR_5GC_r16_true	= 0
} e_SystemInformationBlockType2__ext12__up_PUR_5GC_r16;
typedef enum SystemInformationBlockType2__ext12__mpdcch_CQI_Reporting_r16 {
	SystemInformationBlockType2__ext12__mpdcch_CQI_Reporting_r16_fourBits	= 0,
	SystemInformationBlockType2__ext12__mpdcch_CQI_Reporting_r16_both	= 1
} e_SystemInformationBlockType2__ext12__mpdcch_CQI_Reporting_r16;
typedef enum SystemInformationBlockType2__ext12__rai_ActivationEnh_r16 {
	SystemInformationBlockType2__ext12__rai_ActivationEnh_r16_true	= 0
} e_SystemInformationBlockType2__ext12__rai_ActivationEnh_r16;
typedef enum SystemInformationBlockType2__ext12__idleModeMeasurementsNR_r16 {
	SystemInformationBlockType2__ext12__idleModeMeasurementsNR_r16_true	= 0
} e_SystemInformationBlockType2__ext12__idleModeMeasurementsNR_r16;

/* Forward declarations */
struct MBSFN_SubframeConfigList;
struct AC_BarringConfig;
struct AC_BarringPerPLMN_List_r12;
struct ACDC_BarringForCommon_r13;
struct ACDC_BarringPerPLMN_List_r13;
struct UDT_Restricting_r13;
struct UDT_RestrictingPerPLMN_List_r13;
struct CIOT_EPS_OptimisationInfo_r13;
struct MBSFN_SubframeConfigList_v1430;
struct PLMN_InfoList_r15;

/* SystemInformationBlockType2 */
typedef struct SystemInformationBlockType2 {
	struct SystemInformationBlockType2__ac_BarringInfo {
		BOOLEAN_t	 ac_BarringForEmergency;
		struct AC_BarringConfig	*ac_BarringForMO_Signalling;	/* OPTIONAL */
		struct AC_BarringConfig	*ac_BarringForMO_Data;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ac_BarringInfo;
	RadioResourceConfigCommonSIB_t	 radioResourceConfigCommon;
	UE_TimersAndConstants_t	 ue_TimersAndConstants;
	struct SystemInformationBlockType2__freqInfo {
		ARFCN_ValueEUTRA_t	*ul_CarrierFreq;	/* OPTIONAL */
		long	*ul_Bandwidth;	/* OPTIONAL */
		AdditionalSpectrumEmission_t	 additionalSpectrumEmission;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqInfo;
	struct MBSFN_SubframeConfigList	*mbsfn_SubframeConfigList;	/* OPTIONAL */
	TimeAlignmentTimer_t	 timeAlignmentTimerCommon;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SystemInformationBlockType2__ext1 {
		struct AC_BarringConfig	*ssac_BarringForMMTEL_Voice_r9;	/* OPTIONAL */
		struct AC_BarringConfig	*ssac_BarringForMMTEL_Video_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SystemInformationBlockType2__ext2 {
		struct AC_BarringConfig	*ac_BarringForCSFB_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct SystemInformationBlockType2__ext3 {
		long	*ac_BarringSkipForMMTELVoice_r12;	/* OPTIONAL */
		long	*ac_BarringSkipForMMTELVideo_r12;	/* OPTIONAL */
		long	*ac_BarringSkipForSMS_r12;	/* OPTIONAL */
		struct AC_BarringPerPLMN_List_r12	*ac_BarringPerPLMN_List_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct SystemInformationBlockType2__ext4 {
		long	*voiceServiceCauseIndication_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct SystemInformationBlockType2__ext5 {
		struct ACDC_BarringForCommon_r13	*acdc_BarringForCommon_r13;	/* OPTIONAL */
		struct ACDC_BarringPerPLMN_List_r13	*acdc_BarringPerPLMN_List_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct SystemInformationBlockType2__ext6 {
		struct UDT_Restricting_r13	*udt_RestrictingForCommon_r13;	/* OPTIONAL */
		struct UDT_RestrictingPerPLMN_List_r13	*udt_RestrictingPerPLMN_List_r13;	/* OPTIONAL */
		struct CIOT_EPS_OptimisationInfo_r13	*cIoT_EPS_OptimisationInfo_r13;	/* OPTIONAL */
		long	*useFullResumeID_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct SystemInformationBlockType2__ext7 {
		long	*unicastFreqHoppingInd_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct SystemInformationBlockType2__ext8 {
		struct MBSFN_SubframeConfigList_v1430	*mbsfn_SubframeConfigList_v1430;	/* OPTIONAL */
		long	*videoServiceCauseIndication_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	struct SystemInformationBlockType2__ext9 {
		struct PLMN_InfoList_r15	*plmn_InfoList_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext9;
	struct SystemInformationBlockType2__ext10 {
		long	*cp_EDT_r15;	/* OPTIONAL */
		long	*up_EDT_r15;	/* OPTIONAL */
		long	*idleModeMeasurements_r15;	/* OPTIONAL */
		long	*reducedCP_LatencyEnabled_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext10;
	struct SystemInformationBlockType2__ext11 {
		long	*mbms_ROM_ServiceIndication_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext11;
	struct SystemInformationBlockType2__ext12 {
		long	*rlos_Enabled_r16;	/* OPTIONAL */
		long	*earlySecurityReactivation_r16;	/* OPTIONAL */
		long	*cp_EDT_5GC_r16;	/* OPTIONAL */
		long	*up_EDT_5GC_r16;	/* OPTIONAL */
		long	*cp_PUR_EPC_r16;	/* OPTIONAL */
		long	*up_PUR_EPC_r16;	/* OPTIONAL */
		long	*cp_PUR_5GC_r16;	/* OPTIONAL */
		long	*up_PUR_5GC_r16;	/* OPTIONAL */
		long	*mpdcch_CQI_Reporting_r16;	/* OPTIONAL */
		long	*rai_ActivationEnh_r16;	/* OPTIONAL */
		long	*idleModeMeasurementsNR_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType2_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ac_BarringSkipForMMTELVoice_r12_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ac_BarringSkipForMMTELVideo_r12_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ac_BarringSkipForSMS_r12_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceServiceCauseIndication_r12_36;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_useFullResumeID_r13_45;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_unicastFreqHoppingInd_r13_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_videoServiceCauseIndication_r14_52;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cp_EDT_r15_57;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_up_EDT_r15_59;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_idleModeMeasurements_r15_61;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reducedCP_LatencyEnabled_r15_63;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mbms_ROM_ServiceIndication_r15_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rlos_Enabled_r16_69;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_earlySecurityReactivation_r16_71;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cp_EDT_5GC_r16_73;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_up_EDT_5GC_r16_75;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cp_PUR_EPC_r16_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_up_PUR_EPC_r16_79;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cp_PUR_5GC_r16_81;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_up_PUR_5GC_r16_83;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mpdcch_CQI_Reporting_r16_85;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rai_ActivationEnh_r16_88;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_idleModeMeasurementsNR_r16_90;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType2_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType2_1[19];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType2_H_ */
#include <asn_internal.h>
