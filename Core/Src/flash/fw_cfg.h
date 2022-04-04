/*
 * fw_cfg.h
 *
 *  Created on: Jan 24, 2022
 *      Author: madop
 */

/******************************************************************************************************************//**
 * @file fw_cfg.h
 *
 * @brief This file is generated from Yocta-61y.xlsm (Macro version: 1.2.0)
 *
 * @copyright Copyright (c) STMicroelectronics 2011 - 2017
 *            All rights reserved.
 *********************************************************************************************************************/
#ifndef FW_CFG_H_
#define FW_CFG_H_
#include <stdint.h>
#include "main.h"


#ifndef   __packeds
  #define __packeds                               __PACKED_STRUCT
#endif


//extern struct fwCfg_t userConfig;

typedef __packeds fwCfg_t
{
    uint32_t u32_crc;                               //000 - crc - crc
    uint32_t u32_len;                               //004 - len - len

    uint32_t u32_crcN;                              //008 - crc_n - crc_n
    uint32_t u32_lenN;                              //00C - len_n - len_n

    uint16_t u16_cfgProjectId;                      //010 - cfg_project_id - cfg_project_id
    uint16_t u16_cfgVer;                            //012 - cfg_ver - cfg_ver
    uint8_t u8_cfgPartId;                           //014 - cfg_part_id - cfg_part_id
    uint8_t u8_cfgAfeVer;                           //015 - cfg_afe_ver - cfg_afe_ver
    uint8_t u8_reserved016;                         //016 - reserved
    uint8_t u8_reserved017;                         //017 - reserved

    uint8_t u8_extReleaseByte0;                     //018 - external_release_config0 - ext_release_byte0
    uint8_t u8_extReleaseByte1;                     //018 - external_release_config0 - ext_release_byte1
    uint8_t u8_extReleaseByte2;                     //018 - external_release_config0 - ext_release_byte2
    uint8_t u8_extReleaseByte3;                     //018 - external_release_config0 - ext_release_byte3
    uint8_t u8_extReleaseByte4;                     //01C - external_release_config1 - ext_release_byte4
    uint8_t u8_extReleaseByte5;                     //01C - external_release_config1 - ext_release_byte5
    uint8_t u8_extReleaseByte6;                     //01C - external_release_config1 - ext_release_byte6
    uint8_t u8_extReleaseByte7;                     //01C - external_release_config1 - ext_release_byte7

    uint8_t u8_sense0En;                            //020 - sense0_en - sense0_en
    uint8_t u8_sense1En;                            //021 - sense1_en - sense1_en
    uint8_t u8_sense2En;                            //022 - sense2_en - sense2_en
    uint8_t u8_sense3En;                            //023 - sense3_en - sense3_en
    uint8_t u8_sense4En;                            //024 - sense4_en - sense4_en
    uint8_t u8_sense5En;                            //025 - sense5_en - sense5_en
    uint8_t u8_sense6En;                            //026 - sense6_en - sense6_en
    uint8_t u8_sense7En;                            //027 - sense7_en - sense7_en

    uint8_t u8_force0En;                            //028 - force0_en - force0_en
    uint8_t u8_force1En;                            //029 - force1_en - force1_en
    uint8_t u8_force2En;                            //02A - force2_en - force2_en
    uint8_t u8_force3En;                            //02B - force3_en - force3_en
    uint8_t u8_force4En;                            //02C - force4_en - force4_en
    uint8_t u8_force5En;                            //02D - force5_en - force5_en
    uint8_t u8_force6En;                            //02E - force6_en - force6_en
    uint8_t u8_force7En;                            //02F - force7_en - force7_en

    uint8_t u8_senseLen;                            //030 - sense_len - sense_len
    uint8_t u8_forceLen;                            //031 - force_len - force_len
    uint16_t u16_scrXRes;                           //032 - scr_x_res - scr_x_res

    uint16_t u16_scrYRes;                           //034 - scr_y_res - scr_y_res
    __packed uint8_t b1_orientSwap   	 : 1;    	//036 - scr_orient - orient_swap
    __packed uint8_t b1_orientForce  	 : 1;    	//036 - scr_orient - orient_force
    __packed uint8_t b1_orientSense      : 1;    	//036 - scr_orient - orient_sense
    __packed uint8_t b1_rptResScaleEn    : 1;    	//036 - scr_orient - rpt_res_scale_en
    __packed uint8_t b4_reserved036_4_7  : 4;    	//036 - scr_orient - reserved

    __packed uint16_t u16_rptXRes;                  //037 - rpt_x_res - rpt_x_res
    __packed uint16_t u16_rptYRes;                  //039 - rpt_y_res - rpt_y_res

    __packed uint16_t u16_scrPpi;                   //03B - scr_ppi - scr_ppi
    uint8_t u8_orientRawdata;                       //03D - orient_rawdata - orient_rawdata
    uint8_t u8_scrMultiple;                         //03E - scr_multiple - scr_multiple
    uint8_t u8_reserved03F;                         //03F - reserved
    __packed uint8_t b1_acalEn              : 1;    //040 - acal_cfg - acal_en
    __packed uint8_t b1_acalIdleSsEn        : 1;    //040 - acal_cfg - acal_idle_ss_en
    __packed uint8_t b6_reserved040_2_7     : 6;    //040 - acal_cfg - reserved

    uint8_t u8_acalSkipCnt;                         //041 - acal_skip_cnt - acal_skip_cnt
    uint8_t u8_acalIdleSkipCnt;                     //042 - acal_idle_skip_cnt - acal_idle_skip_cnt

    uint8_t u8_acalLpSkipCnt;                       //043 - acal_lp_skip_cnt - acal_lp_skip_cnt
    __packed uint16_t b4_acalMsScrWgh       : 4;    //044 - acal_wgh - acal_ms_scr_wgh
    __packed uint16_t b4_acalMsScrLpWgh     : 4;    //044 - acal_wgh - acal_ms_scr_lp_wgh
    __packed uint16_t b4_acalMsKeyWgh       : 4;    //044 - acal_wgh - acal_ms_key_wgh
    __packed uint16_t b4_acalSsTchWgh       : 4;    //044 - acal_wgh - acal_ss_tch_wgh


    uint16_t u16_acalMsScrUpThres;                  //046 - acal_ms_scr_up_thres - acal_ms_scr_up_thres
	uint16_t u16_acalMsScrLowThres;                 //048 - acal_ms_scr_low_thres - acal_ms_scr_low_thres
	uint16_t u16_acalMsScrLpUpThres;                //04A - acal_ms_scr_lp_up_thres - acal_ms_scr_lp_up_thres
	uint16_t u16_acalMsScrLpLowThres;               //04C - acal_ms_scr_lp_low_thres - acal_ms_scr_lp_low_thres
	uint16_t u16_acalSsTchFUpThres;                 //04E - acal_ss_tch_f_up_thres - acal_ss_tch_f_up_thres
	uint16_t u16_acalSsTchFLowThres;                //050 - acal_ss_tch_f_low_thres - acal_ss_tch_f_low_thres
	uint16_t u16_acalSsTchSUpThres;                 //052 - acal_ss_tch_s_up_thres - acal_ss_tch_s_up_thres
	uint16_t u16_acalSsTchSLowThres;                //054 - acal_ss_tch_s_low_thres - acal_ss_tch_s_low_thres
	uint16_t u16_acalMsKeyUpThres;                  //056 - acal_ms_key_up_thres - acal_ms_key_up_thres
	uint16_t u16_acalMsKeyLowThres;                 //058 - acal_ms_key_low_thres - acal_ms_key_low_thres
	__packed uint8_t b4_acalFrcTchWgh       : 4;    //05A - frc_acal_wgh - acal_frc_tch_wgh
	__packed uint8_t b4_reserved05A_4_7     : 4;    //05A - frc_acal_wgh - reserved
	__packed uint16_t u16_acalFrcTchUpThres;        //05B - acal_frc_tch_up_thres - acal_frc_tch_up_thres
	__packed uint16_t u16_acalFrcTchLowThres;       //05D - acal_frc_tch_low_thres - acal_frc_tch_low_thres
	__packed uint16_t u16_acalMsScrUpThresGlvLp;    //05F - acal_ms_scr_up_thres_glv_lp - acal_ms_scr_up_thres_glv_lp
	__packed uint16_t u16_acalMsScrLowThresGlvLp;   //061 - acal_ms_scr_low_thres_glv_lp - acal_ms_scr_low_thres_glv_lp
	__packed uint16_t u16_acalWtrMsScrUpThres;      //063 - acal_wtr_ms_scr_up_thres - acal_wtr_ms_scr_up_thres
	__packed uint16_t u16_acalWtrMsScrLowThres;     //065 - acal_wtr_ms_scr_low_thres - acal_wtr_ms_scr_low_thres
	__packed uint16_t u16_acalMsScrIntgLowThres;    //067 - acal_ms_scr_intg_low_thres - acal_ms_scr_intg_low_thres
	uint8_t u8_reserved069;                         //069 - reserved
	uint8_t u8_reserved06A;                         //06A - reserved
	 __packed uint8_t b1_fcalSsTchDummySampleEn: 1; //06B - fcal_cfg - fcal_ss_tch_dummy_sample_en
	__packed uint8_t b1_fcalSsTchDummyMsScrEn  : 1; //06B - fcal_cfg - fcal_ss_tch_dummy_ms_scr_en
	__packed uint8_t b6_reserved06B_2_7     : 6;    //06B - fcal_cfg - reserved
	__packed uint8_t b2_fcalMsScrCnt        : 2;    //06C - fcal_samp_cnt - fcal_ms_scr_cnt
	__packed uint8_t b2_fcalSsTchCnt        : 2;    //06C - fcal_samp_cnt - fcal_ss_tch_cnt
	__packed uint8_t b2_fcalMsKeyCnt        : 2;    //06C - fcal_samp_cnt - fcal_ms_key_cnt
	__packed uint8_t b2_fcalFrcTchCnt       : 2;    //06C - fcal_samp_cnt - fcal_frc_tch_cnt
	__packed uint8_t b4_romRawMsScrCnt      : 4;    //06D - rom_raw_samp_cnt - rom_raw_ms_scr_cnt
	__packed uint8_t b4_romRawSsTchCnt      : 4;    //06D - rom_raw_samp_cnt - rom_raw_ss_tch_cnt
	__packed uint8_t b4_lpItoFcalRawMsScrCnt : 4;   //06E - lp_raw_samp_cnt - lp_ito_fcal_raw_ms_scr_cnt
	__packed uint8_t b4_reserved06E_4_7     : 4;    //06E - lp_raw_samp_cnt - reserved
	uint8_t u8_reserved06F;                         //06F - reserved
	uint8_t u8_reserved070;                         //070 - reserved
	__packed uint8_t b1_apwrIdleScanModeEn  : 1;    //071 - tsk_scan_config - apwr_idle_scan_mode_en
	__packed uint8_t b1_apwrIdleScanTimeScaleEn: 1; //071 - tsk_scan_config - apwr_idle_scan_time_scale_en
	__packed uint8_t b1_apwrAfeOffEn        : 1;    //071 - tsk_scan_config - apwr_afe_off_en
	__packed uint8_t b1_apwrShareSsTchAfeIdleEn: 1; //071 - tsk_scan_config - apwr_share_ss_tch_afe_idle_en
	__packed uint8_t b1_apwrShareMsAfeLpEn  : 1;    //071 - tsk_scan_config - apwr_share_ms_afe_lp_en
	__packed uint8_t b1_apwrDefaultRpt240En : 1;    //071 - tsk_scan_config - apwr_default_rpt_240_en
	__packed uint8_t b1_apwrDefaultRptFwAccEn : 1;  //071 - tsk_scan_config - apwr_default_rpt_fw_acc_en
	__packed uint8_t b1_scanTimer100usResEn : 1;    //071 - tsk_scan_config - scan_timer_100us_res_en
	uint8_t u8_frameRateTch;                        //072 - frame_rate_tch - frame_rate_tch
	uint8_t u8_frameRateIdle;                       //073 - frame_rate_idle - frame_rate_idle
	uint8_t u8_frameRateLpDet;                      //074 - frame_rate_lp_det - frame_rate_lp_det
	uint8_t u8_frameRateLpActive;                   //075 - frame_rate_lp_active - frame_rate_lp_active
	uint8_t u8_apwrNtch2IdleDly;                    //076 - apwr_ntch_2_idle_dly - apwr_ntch_2_idle_dly
	uint8_t u8_apwrTch2NtchDly;                     //077 - apwr_tch_2_ntch_dly - apwr_tch_2_ntch_dly
	uint8_t u8_apwrLpa2LpiDly;                      //078 - apwr_lpa_2_lpi_dly - apwr_lpa_2_lpi_dly
	uint8_t u8_apwrNtch2IdleDlyScale;               //079 - apwr_ntch_2_idle_dly_scale - apwr_ntch_2_idle_dly_scale
	uint8_t u8_cmdFrameRateTch180;                  //07A - cmd_frame_rate_tch - cmd_frame_rate_tch_180
	uint8_t u8_cmdFrameRateTch240;                  //07A - cmd_frame_rate_tch - cmd_frame_rate_tch_240
	uint8_t u8_reserved07C;                         //07C - reserved
	__packed uint8_t b1_syncEn              : 1;    //07D - sync_cfg0 - sync_en
	__packed uint8_t b1_sync120hzScanEn     : 1;    //07D - sync_cfg0 - sync_120hz_scan_en
	__packed uint8_t b1_syncSampleBtwHsynEn : 1;    //07D - sync_cfg0 - sync_sample_btw_hsyn_en
	__packed uint8_t b2_syncMode            : 2;    //07D - sync_cfg0 - sync_mode
	__packed uint8_t b1_syncHsynPol         : 1;    //07D - sync_cfg0 - sync_hsyn_pol
	__packed uint8_t b1_syncVsynPol         : 1;    //07D - sync_cfg0 - sync_vsyn_pol
	__packed uint8_t b1_syncHsynTimingEn    : 1;    //07D - sync_cfg0 - sync_hsyn_timing_en
	__packed uint8_t b1_syncItoEn           : 1;    //07E - sync_cfg1 - sync_ito_en
	__packed uint8_t b1_reserved07E_1_1     : 1;    //07E - sync_cfg1 - reserved
	__packed uint8_t b1_selfSyncEn          : 1;    //07E - sync_cfg1 - self_sync_en
	__packed uint8_t b1_lpSelfSyncEn        : 1;    //07E - sync_cfg1 - lp_self_sync_en
	__packed uint8_t b4_reserved07E_4_7     : 4;    //07E - sync_cfg1 - reserved
	__packed uint16_t u16_syncPostHsynDly;          //07F - sync_post_hsyn_dly - sync_post_hsyn_dly
	__packed uint8_t b4_syncSampleBtwHsyn   : 4;    //081 - sync_sample_btw_hsyn - sync_sample_btw_hsyn
	__packed uint8_t b3_syncFrmStartDly     : 3;    //081 - sync_sample_btw_hsyn - sync_frm_start_dly
	__packed uint8_t b1_reserved081_7_7     : 1;    //081 - sync_sample_btw_hsyn - reserved
	uint16_t u16_syncCntHsynThres;                  //082 - sync_cnt_hsyn_threshold_0 - sync_cnt_hsyn_thres
	__packed uint8_t b4_syncHsynDly         : 4;    //084 - sync_hsyn_phase_setting - sync_hsyn_dly
	__packed uint8_t b4_reserved084_4_7     : 4;    //084 - sync_hsyn_phase_setting - reserved
	__packed uint16_t u16_syncFrmStartThres;        //085 - sync_frm_start_thres - sync_frm_start_thres
	__packed uint16_t u16_syncHwPostVsynDly;        //087 - sync_hw_post_vsyn_dly - sync_hw_post_vsyn_dly
	uint8_t u8_sync60hzScanRate;                    //089 - sync_60hz_scan_rate - sync_60hz_scan_rate
	uint8_t u8_sync120hzOddScanRate;                //08A - sync_120hz_odd_scan_rate - sync_120hz_odd_scan_rate
	uint8_t u8_sync120hzEvenScanRate;               //08B - sync_120hz_even_scan_rate - sync_120hz_even_scan_rate
	uint8_t u8_sync240hzScanRate;                   //08C - sync_240hz_scan_rate - sync_240hz_scan_rate
	__packed uint8_t b4_ssTchSyncSampleBtwHsyn  : 4;    //08D - ss_tch_hsyn_settings - ss_tch_sync_sample_btw_hsyn
	__packed uint8_t b2_reserved08D_4_5     : 2;    //08D - ss_tch_hsyn_settings - reserved
	__packed uint8_t b1_ssTchSyncPostHsynDlyRandEn  : 1;    //08D - ss_tch_hsyn_settings - ss_tch_sync_post_hsyn_dly_rand_en
	__packed uint8_t b1_reserved08D_7_7     : 1;    //08D - ss_tch_hsyn_settings - reserved
	uint16_t u16_ssTchSyncPostHsynDly;              //08E - ss_tch_hsyn_settings_1 - ss_tch_sync_post_hsyn_dly
	uint16_t u16_ssTchSyncPostHsynDlyRandMax;       //090 - ss_tch_sync_post_hsyn_dly_rand_max - ss_tch_sync_post_hsyn_dly_rand_max
	uint16_t u16_ssTchSyncPostHsynDlyRandMin;       //092 - ss_tch_sync_post_hsyn_dly_rand_min - ss_tch_sync_post_hsyn_dly_rand_min
	__packed uint8_t b3_syncHsyncGpio       : 3;    //094 - sync_gpio_config - sync_hsync_gpio
	__packed uint8_t b1_reserved094_3_3     : 1;    //094 - sync_gpio_config - reserved
	__packed uint8_t b3_syncVsyncGpio       : 3;    //094 - sync_gpio_config - sync_vsync_gpio
	__packed uint8_t b1_reserved094_7_7     : 1;    //094 - sync_gpio_config - reserved
	uint8_t u8_reserved095;                         //095 - reserved
	uint8_t u8_reserved096;                         //096 - reserved
	uint8_t u8_reserved097;                         //097 - reserved
	uint8_t u8_reserved098;                         //098 - reserved
	uint8_t u8_reserved099;                         //099 - reserved
	__packed uint8_t b1_rptSecEn            : 1;    //09A - rpt_config - rpt_sec_en
	__packed uint8_t b1_rptStatEn           : 1;    //09A - rpt_config - rpt_stat_en
	__packed uint8_t b1_rptDbgEn            : 1;    //09A - rpt_config - rpt_dbg_en
	__packed uint8_t b1_rptFwProcessEn      : 1;    //09A - rpt_config - rpt_fw_process_en
	__packed uint8_t b1_rptStatFrameDropEn  : 1;    //09A - rpt_config - rpt_stat_frame_drop_en
	__packed uint8_t b1_rptLpDbgEn          : 1;    //09A - rpt_config - rpt_lp_dbg_en
	__packed uint8_t b1_rptStatLpfcalBlockEn    : 1;    //09A - rpt_config - rpt_stat_lpfcal_block_en
	__packed uint8_t b1_rptStatEchoEn       : 1;    //09A - rpt_config - rpt_stat_echo_en
	__packed uint8_t b1_rptSecBrushAreaEn   : 1;    //09B - rpt_config1 - rpt_sec_brush_area_en
	__packed uint8_t b1_rptMaxEnergyToHostEn    : 1;    //09B - rpt_config1 - rpt_max_energy_to_host_en
	__packed uint8_t b1_rptTchAngleEn       : 1;    //09B - rpt_config1 - rpt_tch_angle_en
	__packed uint8_t b5_reserved09B_3_7     : 5;    //09B - rpt_config1 - reserved
	uint16_t u16_rptMajorAxisMin;                   //09C - rpt_major_axis_min - rpt_major_axis_min
	uint16_t u16_rptMajorAxisMax;                   //09E - rpt_major_axis_max - rpt_major_axis_max
	uint16_t u16_rptMinorAxisMin;                   //0A0 - rpt_minor_axis_min - rpt_minor_axis_min
	uint16_t u16_rptMinorAxisMax;                   //0A2 - rpt_minor_axis_max - rpt_minor_axis_max
	uint16_t u16_rptSecBrushAreaDen;                //0A4 - rpt_sec_brush_area_den - rpt_sec_brush_area_den
	uint8_t u8_rptTchAreaScaleNumerator;            //0A6 - rpt_tch_area_scale_numerator - rpt_tch_area_scale_numerator
	uint8_t u8_rptTchAreaScaleDenominator;          //0A7 - rpt_tch_area_scale_denominator - rpt_tch_area_scale_denominator
	uint8_t u8_rptTchAreaOffset;                    //0A8 - rpt_tch_area_offset - rpt_tch_area_offset
	uint8_t u8_reserved0A9;                         //0A9 - reserved
	uint8_t u8_reserved0AA;                         //0AA - reserved
	uint8_t u8_reserved0AB;                         //0AB - reserved
	__packed uint8_t b1_chrgrModeEn         : 1;    //0AC - chrgr_cfg - chrgr_mode_en
	__packed uint8_t b1_chrgrGpioEn         : 1;    //0AC - chrgr_cfg - chrgr_gpio_en
	__packed uint8_t b1_chrgrSsTchMsBitmapEn    : 1;    //0AC - chrgr_cfg - chrgr_ss_tch_ms_bitmap_en
	__packed uint8_t b2_reserved0AC_3_4     : 2;    //0AC - chrgr_cfg - reserved
	__packed uint8_t b3_chrgrGpioNum        : 3;    //0AC - chrgr_cfg - chrgr_gpio_num
	__packed uint16_t u16_chrgrGrvTolHoriVert;      //0AD - chrgr_grv_tol_hori_vert - chrgr_grv_tol_hori_vert
	__packed uint16_t u16_chrgrGrvTolDiag;          //0AF - chrgr_grv_tol_diag - chrgr_grv_tol_diag
	__packed uint16_t u16_chrgrGrvMinTchSepDist;    //0B1 - chrgr_grv_min_tch_sep_dist - chrgr_grv_min_tch_sep_dist
	uint8_t u8_chrgrGrvNormPercent;                 //0B3 - chrgr_grv_norm_percent - chrgr_grv_norm_percent
	uint8_t u8_chrgrTchThresInc;                    //0B4 - chrgr_tch_thres_inc - chrgr_tch_thres_inc
	__packed uint16_t u16_chrgrTchMrgDist;          //0B5 - chrgr_tch_mrg_dist - chrgr_tch_mrg_dist
	uint8_t u8_chrgrFgrThresHyst;                   //0B7 - chrgr_fgr_thres_hyst - chrgr_fgr_thres_hyst
	uint8_t u8_reserved0B8;                         //0B8 - reserved
	uint8_t u8_reserved0B9;                         //0B9 - reserved
	__packed uint8_t b1_ssFltEn             : 1;    //0BA - ss_flt_cfg - ss_flt_en
	__packed uint8_t b7_reserved0BA_1_7     : 7;    //0BA - ss_flt_cfg - reserved
	__packed uint16_t u16_ssFltGrvBaseThres;        //0BB - ss_flt_grv_base_thres - ss_flt_grv_base_thres
	__packed uint16_t u16_ssFltValidPeakThres;      //0BD - ss_flt_valid_peak_thres - ss_flt_valid_peak_thres
	__packed uint16_t u16_ssFltGrvTol;              //0BF - ss_flt_grv_tol - ss_flt_grv_tol
	uint8_t u8_ssFltGrvNormPercent;                 //0C1 - ss_flt_grv_norm_percent - ss_flt_grv_norm_percent
	uint8_t u8_reserved0C2;                         //0C2 - reserved
	__packed uint16_t u16_chrgrAcalMsScrUpThres;    //0C3 - chrgr_acal_ms_scr_up_thres - chrgr_acal_ms_scr_up_thres
	__packed uint16_t u16_chrgrAcalMsScrLowThres;   //0C5 - chrgr_acal_ms_scr_low_thres - chrgr_acal_ms_scr_low_thres
	uint8_t u8_reserved0C7;                         //0C7 - reserved
	uint8_t u8_reserved0C8;                         //0C8 - reserved
	__packed uint8_t b4_afeMsSensePadTune   : 4;    //0C9 - afe_ms_drive_ctrl - afe_ms_sense_pad_tune
	__packed uint8_t b4_afeMsForcePadTune   : 4;    //0C9 - afe_ms_drive_ctrl - afe_ms_force_pad_tune
	__packed uint8_t b4_afeSsSensePadTune   : 4;    //0CA - afe_ss_drive_ctrl - afe_ss_sense_pad_tune
	__packed uint8_t b4_afeSsForcePadTune   : 4;    //0CA - afe_ss_drive_ctrl - afe_ss_force_pad_tune
	uint8_t u8_reserved0CB;                         //0CB - reserved
	__packed uint8_t b1_oscOverClkEn        : 1;    //0CC - osc_over_clk_cfg - osc_over_clk_en
	__packed uint8_t b7_oscOffsetFine       : 7;    //0CC - osc_over_clk_cfg - osc_offset_fine
	__packed uint8_t b1_msScrCpSel          : 1;    //0CD - ms_scr_afe_cfg0 - ms_scr_cp_sel
	__packed uint8_t b1_msSrcHiZEn          : 1;    //0CD - ms_scr_afe_cfg0 - ms_src_hi_z_en
	__packed uint8_t b1_msScrDrv3xEn        : 1;    //0CD - ms_scr_afe_cfg0 - ms_scr_drv_3x_en
	__packed uint8_t b1_msScrAcxEn          : 1;    //0CD - ms_scr_afe_cfg0 - ms_scr_acx_en
	__packed uint8_t b1_msScrClipCntEn      : 1;    //0CD - ms_scr_afe_cfg0 - ms_scr_clip_cnt_en
	__packed uint8_t b1_msScrDataFilterEn   : 1;    //0CD - ms_scr_afe_cfg0 - ms_scr_data_filter_en
	__packed uint8_t b1_msScrOsFilterEn     : 1;    //0CD - ms_scr_afe_cfg0 - ms_scr_os_filter_en
	__packed uint8_t b1_msScrAzEn           : 1;    //0CD - ms_scr_afe_cfg0 - ms_scr_az_en
	__packed uint8_t b1_msScrIoffEn         : 1;    //0CE - ms_scr_afe_cfg1 - ms_scr_ioff_en
	__packed uint8_t b2_msScrIoffStrength   : 2;    //0CE - ms_scr_afe_cfg1 - ms_scr_ioff_strength
	__packed uint8_t b1_reserved0CE_3_3     : 1;    //0CE - ms_scr_afe_cfg1 - reserved
	__packed uint8_t b1_msScrCgEn           : 1;    //0CE - ms_scr_afe_cfg1 - ms_scr_cg_en
	__packed uint8_t b2_msScrDtoMode        : 2;    //0CE - ms_scr_afe_cfg1 - ms_scr_dto_mode
	__packed uint8_t b1_msScrFwAccEn        : 1;    //0CE - ms_scr_afe_cfg1 - ms_scr_fw_acc_en
	__packed uint8_t b1_msScrC2iSingleEndEn : 1;    //0CF - ms_scr_afe_cfg2 - ms_scr_c2i_single_end_en
	__packed uint8_t b1_msScrC2iFloatEn     : 1;    //0CF - ms_scr_afe_cfg2 - ms_scr_c2i_float_en
	__packed uint8_t b2_msScrC2iLcSel       : 2;    //0CF - ms_scr_afe_cfg2 - ms_scr_c2i_lc_sel
	__packed uint8_t b3_reserved0CF_4_6     : 3;    //0CF - ms_scr_afe_cfg2 - reserved
	__packed uint8_t b1_msScrFwAccNoisyRawQtoProcEn : 1;    //0CF - ms_scr_afe_cfg2 - ms_scr_fw_acc_noisy_raw_qto_proc_en
	uint8_t u8_msScrCpTune;                         //0D0 - ms_scr_afe_cfg3 - ms_scr_cp_tune
	__packed uint8_t b4_msScrRlOfRt         : 4;    //0D1 - ms_scr_afe_cfg4 - ms_scr_rl_of_rt
	__packed uint8_t b4_msScrCxCnt          : 4;    //0D1 - ms_scr_afe_cfg4 - ms_scr_cx_cnt
	__packed uint8_t b2_msScrDefaultRIdx    : 2;    //0D2 - ms_scr_afe_cfg5 - ms_scr_default_r_idx
	__packed uint8_t b2_msLpScrDefaultRIdx  : 2;    //0D2 - ms_scr_afe_cfg5 - ms_lp_scr_default_r_idx
	__packed uint8_t b4_reserved0D2_4_7     : 4;    //0D2 - ms_scr_afe_cfg5 - reserved
	__packed uint16_t u16_msScrTCyc;                //0D3 - ms_scr_t_cyc - ms_scr_t_cyc
	__packed uint16_t u16_msScrOsDly;               //0D5 - ms_scr_os_dly - ms_scr_os_dly
	uint8_t u8_msScrHighResAnalogAcc;               //0D7 - ms_scr_high_res_prfl0 - ms_scr_high_res_analog_acc
	__packed uint8_t b4_msScrHighResDigAcc  : 4;    //0D8 - ms_scr_high_res_prfl1 - ms_scr_high_res_dig_acc
	__packed uint8_t b2_msScrHighResCa      : 2;    //0D8 - ms_scr_high_res_prfl1 - ms_scr_high_res_ca
	__packed uint8_t b2_msScrHighResDiv     : 2;    //0D8 - ms_scr_high_res_prfl1 - ms_scr_high_res_div
	__packed uint8_t b4_msScrHighResRstcCnt : 4;    //0D9 - ms_scr_high_res_prfl2 - ms_scr_high_res_rstc_cnt
	__packed uint8_t b4_reserved0D9_4_7     : 4;    //0D9 - ms_scr_high_res_prfl2 - reserved
	__packed uint8_t b5_msScrHighResOsCnt   : 5;    //0DA - ms_scr_high_res_prfl3 - ms_scr_high_res_os_cnt
	__packed uint8_t b3_reserved0DA_5_7     : 3;    //0DA - ms_scr_high_res_prfl3 - reserved
	__packed uint8_t b5_msScrHighResOsAcc   : 5;    //0DB - ms_scr_high_res_prfl4 - ms_scr_high_res_os_acc
	__packed uint8_t b3_reserved0DB_5_7     : 3;    //0DB - ms_scr_high_res_prfl4 - reserved
	uint8_t u8_reserved0DC;                         //0DC - reserved
	__packed uint16_t u16_msScrHighResAccReset;     //0DD - ms_scr_high_res_prfl6 - ms_scr_high_res_acc_reset
	uint8_t u8_msScrLpAnalogAcc;                    //0DF - ms_scr_lp_prfl0 - ms_scr_lp_analog_acc
	__packed uint8_t b4_msScrLpDigAcc       : 4;    //0E0 - ms_scr_lp_prfl1 - ms_scr_lp_dig_acc
	__packed uint8_t b2_msScrLpCa           : 2;    //0E0 - ms_scr_lp_prfl1 - ms_scr_lp_ca
	__packed uint8_t b2_msScrLpDiv          : 2;    //0E0 - ms_scr_lp_prfl1 - ms_scr_lp_div
	__packed uint8_t b4_msScrLpRstcCnt      : 4;    //0E1 - ms_scr_lp_prfl2 - ms_scr_lp_rstc_cnt
	__packed uint8_t b1_msScrLpC2iSingleEndEn   : 1;    //0E1 - ms_scr_lp_prfl2 - ms_scr_lp_c2i_single_end_en
	__packed uint8_t b1_msScrLpC2iFloatEn   : 1;    //0E1 - ms_scr_lp_prfl2 - ms_scr_lp_c2i_float_en
	__packed uint8_t b2_reserved0E1_6_7     : 2;    //0E1 - ms_scr_lp_prfl2 - reserved
	__packed uint8_t b5_msScrLpOsCnt        : 5;    //0E2 - ms_scr_lp_prfl3 - ms_scr_lp_os_cnt
	__packed uint8_t b3_reserved0E2_5_7     : 3;    //0E2 - ms_scr_lp_prfl3 - reserved
	__packed uint8_t b5_msScrLpOsAcc        : 5;    //0E3 - ms_scr_lp_prfl4 - ms_scr_lp_os_acc
	__packed uint8_t b3_reserved0E3_5_7     : 3;    //0E3 - ms_scr_lp_prfl4 - reserved
	uint16_t u16_msScrLpAccReset;                   //0E4 - ms_scr_lp_prfl5 - ms_scr_lp_acc_reset
	__packed uint8_t b2_msScrFwAccCnt       : 2;    //0E6 - ms_scr_fw_acc_prfl0 - ms_scr_fw_acc_cnt
	__packed uint8_t b2_msScrFwAccCntGlove  : 2;    //0E6 - ms_scr_fw_acc_prfl0 - ms_scr_fw_acc_cnt_glove
	__packed uint8_t b4_reserved0E6_4_7     : 4;    //0E6 - ms_scr_fw_acc_prfl0 - reserved
	__packed uint8_t b2_msScrFwAccCntNoisy  : 2;    //0E7 - ms_scr_fw_acc_noisy_prfl0 - ms_scr_fw_acc_cnt_noisy
	__packed uint8_t b1_msScrNoisyWindowAccEn   : 1;    //0E7 - ms_scr_fw_acc_noisy_prfl0 - ms_scr_noisy_window_acc_en
	__packed uint8_t b3_reserved0E7_3_5     : 3;    //0E7 - ms_scr_fw_acc_noisy_prfl0 - reserved
	__packed uint8_t b2_msScrFwMultiRAccNoisyEn : 2;    //0E7 - ms_scr_fw_acc_noisy_prfl0 - ms_scr_fw_multi_r_acc_noisy_en
	uint8_t u8_msScrHighResNoisyAnalogAcc;          //0E8 - ms_scr_fw_acc_noisy_prfl1 - ms_scr_high_res_noisy_analog_acc
	uint8_t u8_msScrLpRCyc;                         //0E9 - ms_scr_lp_prfl6 - ms_scr_lp_r_cyc
	uint8_t u8_msMrnAnalogAcc;                      //0EA - ms_mrn_scan_prfl0 - ms_mrn_analog_acc
	__packed uint8_t b2_msMrnCa             : 2;    //0EB - ms_mrn_scan_prfl1 - ms_mrn_ca
	__packed uint8_t b2_msMrnDiv            : 2;    //0EB - ms_mrn_scan_prfl1 - ms_mrn_div
	__packed uint8_t b4_reserved0EB_4_7     : 4;    //0EB - ms_mrn_scan_prfl1 - reserved
	uint8_t u8_reserved0EC;                         //0EC - reserved
	__packed uint8_t b1_msKeyCpSel          : 1;    //0ED - ms_key_afe_cfg0 - ms_key_cp_sel
	__packed uint8_t b1_reserved0ED_1_1     : 1;    //0ED - ms_key_afe_cfg0 - reserved
	__packed uint8_t b1_msKeyDrv3xEn        : 1;    //0ED - ms_key_afe_cfg0 - ms_key_drv_3x_en
	__packed uint8_t b1_msKeyAcxEn          : 1;    //0ED - ms_key_afe_cfg0 - ms_key_acx_en
	__packed uint8_t b1_reserved0ED_4_4     : 1;    //0ED - ms_key_afe_cfg0 - reserved
	__packed uint8_t b1_msKeyDataFilterEn   : 1;    //0ED - ms_key_afe_cfg0 - ms_key_data_filter_en
	__packed uint8_t b1_msKeyOsFilterEn     : 1;    //0ED - ms_key_afe_cfg0 - ms_key_os_filter_en
	__packed uint8_t b1_msKeyAzEn           : 1;    //0ED - ms_key_afe_cfg0 - ms_key_az_en
	__packed uint8_t b1_msKeyIoffEn         : 1;    //0EE - ms_key_afe_cfg1 - ms_key_ioff_en
	__packed uint8_t b2_msKeyIoffStrength   : 2;    //0EE - ms_key_afe_cfg1 - ms_key_ioff_strength
	__packed uint8_t b1_reserved0EE_3_3     : 1;    //0EE - ms_key_afe_cfg1 - reserved
	__packed uint8_t b1_msKeyCgEn           : 1;    //0EE - ms_key_afe_cfg1 - ms_key_cg_en
	__packed uint8_t b3_reserved0EE_5_7     : 3;    //0EE - ms_key_afe_cfg1 - reserved
	__packed uint8_t b2_reserved0EF_0_1     : 2;    //0EF - ms_key_afe_cfg2 - reserved
	__packed uint8_t b2_msKeyC2iLcSel       : 2;    //0EF - ms_key_afe_cfg2 - ms_key_c2i_lc_sel
	__packed uint8_t b4_reserved0EF_4_7     : 4;    //0EF - ms_key_afe_cfg2 - reserved
	uint8_t u8_msKeyCpTune;                         //0F0 - ms_key_afe_cfg3 - ms_key_cp_tune
	__packed uint8_t b4_msKeyRlOfRt         : 4;    //0F1 - ms_key_afe_cfg4 - ms_key_rl_of_rt
	__packed uint8_t b4_msKeyCxCnt          : 4;    //0F1 - ms_key_afe_cfg4 - ms_key_cx_cnt
	__packed uint8_t b8_reserved0F2_0_7     : 8;    //0F2 - ms_key_afe_cfg5 - reserved
	__packed uint16_t u16_msKeyTCyc;                //0F3 - ms_key_t_cyc - ms_key_t_cyc
	__packed uint16_t u16_msKeyRCyc;                //0F5 - ms_key_r_cyc - ms_key_r_cyc
	__packed uint16_t u16_msKeyOsDly;               //0F7 - ms_key_os_dly - ms_key_os_dly
	uint8_t u8_msKeyHighResAnalogAcc;               //0F9 - ms_key_high_res_prfl0 - ms_key_high_res_analog_acc
	__packed uint8_t b4_msKeyHighResDigAcc  : 4;    //0FA - ms_key_high_res_prfl1 - ms_key_high_res_dig_acc
	__packed uint8_t b2_msKeyHighResCa      : 2;    //0FA - ms_key_high_res_prfl1 - ms_key_high_res_ca
	__packed uint8_t b2_msKeyHighResDiv     : 2;    //0FA - ms_key_high_res_prfl1 - ms_key_high_res_div
	__packed uint8_t b4_msKeyHighResRstcCnt : 4;    //0FB - ms_key_high_res_prfl2 - ms_key_high_res_rstc_cnt
	__packed uint8_t b4_reserved0FB_4_7     : 4;    //0FB - ms_key_high_res_prfl2 - reserved
	__packed uint8_t b5_msKeyHighResOsCnt   : 5;    //0FC - ms_key_high_res_prfl3 - ms_key_high_res_os_cnt
	__packed uint8_t b3_reserved0FC_5_7     : 3;    //0FC - ms_key_high_res_prfl3 - reserved
	__packed uint8_t b5_msKeyHighResOsAcc   : 5;    //0FD - ms_key_high_res_prfl4 - ms_key_high_res_os_acc
	__packed uint8_t b3_reserved0FD_5_7     : 3;    //0FD - ms_key_high_res_prfl4 - reserved
	__packed uint8_t b8_reserved0FE_0_7     : 8;    //0FE - ms_key_high_res_prfl5 - reserved
	__packed uint16_t u16_msKeyHighResAccReset;     //0FF - ms_key_high_res_prfl6 - ms_key_high_res_acc_reset
	uint8_t u8_reserved101;                         //101 - reserved
	__packed uint8_t b1_ssTchCpSel          : 1;    //102 - ss_tch_afe_cfg0 - ss_tch_cp_sel
	__packed uint8_t b1_ssTchTxCpSel        : 1;    //102 - ss_tch_afe_cfg0 - ss_tch_tx_cp_sel
	__packed uint8_t b1_reserved102_2_2     : 1;    //102 - ss_tch_afe_cfg0 - reserved
	__packed uint8_t b1_ssTchAcxEn          : 1;    //102 - ss_tch_afe_cfg0 - ss_tch_acx_en
	__packed uint8_t b1_reserved102_4_4     : 1;    //102 - ss_tch_afe_cfg0 - reserved
	__packed uint8_t b1_ssTchDataFilterEn   : 1;    //102 - ss_tch_afe_cfg0 - ss_tch_data_filter_en
	__packed uint8_t b1_ssTchOsFilterEn     : 1;    //102 - ss_tch_afe_cfg0 - ss_tch_os_filter_en
	__packed uint8_t b1_ssTchAzEn           : 1;    //102 - ss_tch_afe_cfg0 - ss_tch_az_en
	__packed uint8_t b1_ssTchIoffEn         : 1;    //103 - ss_tch_afe_cfg1 - ss_tch_ioff_en
	__packed uint8_t b2_ssTchIoffStrength   : 2;    //103 - ss_tch_afe_cfg1 - ss_tch_ioff_strength
	__packed uint8_t b2_reserved103_3_4     : 2;    //103 - ss_tch_afe_cfg1 - reserved
	__packed uint8_t b1_ssTchFastScanEn     : 1;    //103 - ss_tch_afe_cfg1 - ss_tch_fast_scan_en
	__packed uint8_t b2_ssTchDataModeSel    : 2;    //103 - ss_tch_afe_cfg1 - ss_tch_data_mode_sel
	__packed uint8_t b1_ssTchC2iSingleEndEn : 1;    //104 - ss_tch_afe_cfg2 - ss_tch_c2i_single_end_en
	__packed uint8_t b1_ssTchC2iFloatEn     : 1;    //104 - ss_tch_afe_cfg2 - ss_tch_c2i_float_en
	__packed uint8_t b2_ssTchC2iLcSel       : 2;    //104 - ss_tch_afe_cfg2 - ss_tch_c2i_lc_sel
	__packed uint8_t b1_reserved104_4_4     : 1;    //104 - ss_tch_afe_cfg2 - reserved
	__packed uint8_t b1_ssTchBootsStrapEn   : 1;    //104 - ss_tch_afe_cfg2 - ss_tch_boots_strap_en
	__packed uint8_t b1_ssTchEarlyScanEn    : 1;    //104 - ss_tch_afe_cfg2 - ss_tch_early_scan_en
	__packed uint8_t b1_reserved104_7_7     : 1;    //104 - ss_tch_afe_cfg2 - reserved
	uint8_t u8_ssTchCpTune;                         //105 - ss_tch_afe_cfg3 - ss_tch_cp_tune
	__packed uint8_t b4_reserved106_0_3     : 4;    //106 - ss_tch_afe_cfg4 - reserved
	__packed uint8_t b4_ssTchCxCnt          : 4;    //106 - ss_tch_afe_cfg4 - ss_tch_cx_cnt
	__packed uint8_t b1_ssDataDataAvgEn     : 1;    //107 - ss_tch_afe_cfg5 - ss_data_data_avg_en
	__packed uint8_t b5_reserved107_1_5     : 5;    //107 - ss_tch_afe_cfg5 - reserved
	__packed uint8_t b1_ssTchFwAccEn        : 1;    //107 - ss_tch_afe_cfg5 - ss_tch_fw_acc_en
	__packed uint8_t b1_ssTchFwAccWithAfePowerCycleEn   : 1;    //107 - ss_tch_afe_cfg5 - ss_tch_fw_acc_with_afe_power_cycle_en
	uint16_t u16_ssTchRCyc;                         //108 - ss_tch_r_cyc - ss_tch_r_cyc
	uint16_t u16_ssTchTCyc;                         //10A - ss_tch_t_cyc - ss_tch_t_cyc
	uint16_t u16_ssTchRlCyc;                        //10C - ss_tch_rl_cyc - ss_tch_rl_cyc
	uint16_t u16_ssTchOsDly;                        //10E - ss_tch_os_dly - ss_tch_os_dly
	__packed uint8_t b1_ssTchFIxLoRange     : 1;    //110 - ss_tch_f_ix_range_cfg_0 - ss_tch_f_ix_lo_range
	__packed uint8_t b3_reserved110_1_3     : 3;    //110 - ss_tch_f_ix_range_cfg_0 - reserved
	__packed uint8_t b4_ssTchFIx0Range      : 4;    //110 - ss_tch_f_ix_range_cfg_0 - ss_tch_f_ix0_range
	__packed uint8_t b4_ssTchFIx1Range      : 4;    //111 - ss_tch_f_ix_range_cfg_1 - ss_tch_f_ix1_range
	__packed uint8_t b4_ssTchFIx2Range      : 4;    //111 - ss_tch_f_ix_range_cfg_1 - ss_tch_f_ix2_range
	__packed uint8_t b1_ssTchSIxLoRange     : 1;    //112 - ss_tch_s_ix_range_cfg_0 - ss_tch_s_ix_lo_range
	__packed uint8_t b3_reserved112_1_3     : 3;    //112 - ss_tch_s_ix_range_cfg_0 - reserved
	__packed uint8_t b4_ssTchSIx0Range      : 4;    //112 - ss_tch_s_ix_range_cfg_0 - ss_tch_s_ix0_range
	__packed uint8_t b4_ssTchSIx1Range      : 4;    //113 - ss_tch_s_ix_range_cfg_1 - ss_tch_s_ix1_range
	__packed uint8_t b4_ssTchSIx2Range      : 4;    //113 - ss_tch_s_ix_range_cfg_1 - ss_tch_s_ix2_range
	uint8_t u8_ssTchHighResAnalogAcc;               //114 - ss_tch_high_res_prfl0 - ss_tch_high_res_analog_acc
	__packed uint8_t b4_ssTchHighResDigAcc  : 4;    //115 - ss_tch_high_res_prfl1 - ss_tch_high_res_dig_acc
	__packed uint8_t b4_reserved115_4_7     : 4;    //115 - ss_tch_high_res_prfl1 - reserved
	__packed uint8_t b2_ssTchHighResFCa     : 2;    //116 - ss_tch_high_res_prfl2 - ss_tch_high_res_f_ca
	__packed uint8_t b2_ssTchHighResFDiv    : 2;    //116 - ss_tch_high_res_prfl2 - ss_tch_high_res_f_div
	__packed uint8_t b2_ssTchHighResSCa     : 2;    //116 - ss_tch_high_res_prfl2 - ss_tch_high_res_s_ca
	__packed uint8_t b2_ssTchHighResSDiv    : 2;    //116 - ss_tch_high_res_prfl2 - ss_tch_high_res_s_div
	__packed uint8_t b5_ssTchHighResOsCnt   : 5;    //117 - ss_tch_high_res_prfl3 - ss_tch_high_res_os_cnt
	__packed uint8_t b3_ssTchHighResDummySampleCnt  : 3;    //117 - ss_tch_high_res_prfl3 - ss_tch_high_res_dummy_sample_cnt
	__packed uint8_t b5_ssTchHighResOsAcc   : 5;    //118 - ss_tch_high_res_prfl4 - ss_tch_high_res_os_acc
	__packed uint8_t b3_reserved118_5_7     : 3;    //118 - ss_tch_high_res_prfl4 - reserved
	__packed uint8_t b2_ssTchFwAccCnt       : 2;    //119 - ss_tch_high_res_prfl5 - ss_tch_fw_acc_cnt
	__packed uint8_t b6_reserved119_2_7     : 6;    //119 - ss_tch_high_res_prfl5 - reserved
	uint16_t u16_ssTchHighResAccReset;              //11A - ss_tch_high_res_prfl6 - ss_tch_high_res_acc_reset
	uint8_t u8_reserved11C;                         //11C - reserved
	__packed uint8_t b1_msValTxMarkEn       : 1;    //11D - mutual_valid_cfg - ms_val_tx_mark_en
	__packed uint8_t b1_msValTxMinNumChMarkEn   : 1;    //11D - mutual_valid_cfg - ms_val_tx_min_num_ch_mark_en
	__packed uint8_t b6_reserved11D_2_7     : 6;    //11D - mutual_valid_cfg - reserved
	uint16_t u16_msValTxMarkPosThd;                 //11E - ms_val_tx_mark_pos_thd - ms_val_tx_mark_pos_thd
	uint16_t u16_msValTxMarkNegThd;                 //120 - ms_val_tx_mark_neg_thd - ms_val_tx_mark_neg_thd
	uint8_t u8_msValTxMarkGrwCnt;                   //122 - ms_val_tx_mark_grw_cnt - ms_val_tx_mark_grw_cnt
	uint8_t u8_msValTxMinNumChCnt;                  //123 - ms_val_tx_min_num_ch_cnt - ms_val_tx_min_num_ch_cnt
	__packed uint8_t b2_noisyDynamicFgrThresEn  : 2;    //124 - dynamic_fgr_thres_en - noisy_dynamic_fgr_thres_en
	__packed uint8_t b6_reserved124_2_7     : 6;    //124 - dynamic_fgr_thres_en - reserved
	uint8_t u8_noisyDynamicFgrThresPer;             //125 - noisy_dynamic_fgr_thres_per - noisy_dynamic_fgr_thres_per
	uint8_t u8_dynamicFgrThresPer;                  //126 - dynamic_fgr_thres_per - dynamic_fgr_thres_per
	uint8_t u8_txMarkChKeepDbnc;                    //127 - tx_mark_ch_keep_dbnc - tx_mark_ch_keep_dbnc
	uint8_t u8_reserved128;                         //128 - reserved
	uint8_t u8_reserved129;                         //129 - reserved
	__packed uint8_t b1_tuneMsScrCx2En      : 1;    //12A - tune_ms_scr_cfg - tune_ms_scr_cx2_en
	__packed uint8_t b1_tuneMsScrDiffCx2OptimizationEn  : 1;    //12A - tune_ms_scr_cfg - tune_ms_scr_diff_cx2_optimization_en
	__packed uint8_t b1_tuneMsScrDiffParallelCx2TuneEn  : 1;    //12A - tune_ms_scr_cfg - tune_ms_scr_diff_parallel_cx2_tune_en
	__packed uint8_t b1_tuneMsScrDiffCx2OptimizationEdgeEn  : 1;    //12A - tune_ms_scr_cfg - tune_ms_scr_diff_cx2_optimization_edge_en
	__packed uint8_t b4_tuneMsScrCx2RetuneCnt   : 4;    //12A - tune_ms_scr_cfg - tune_ms_scr_cx2_retune_cnt
	__packed uint8_t b1_tuneMsScrCx2LogEn   : 1;    //12B - tune_ms_scr_log_cfg - tune_ms_scr_cx2_log_en
	__packed uint8_t b1_tuneMsScrCx2LogDataEn   : 1;    //12B - tune_ms_scr_log_cfg - tune_ms_scr_cx2_log_data_en
	__packed uint8_t b1_tuneMsScrDiffParallelCx2SequenceRetuneEn    : 1;    //12B - tune_ms_scr_log_cfg - tune_ms_scr_diff_parallel_cx2_sequence_retune_en
	__packed uint8_t b5_reserved12B_3_7     : 5;    //12B - tune_ms_scr_log_cfg - reserved
	uint16_t u16_tuneMsScrCx2StopCode;              //12C - tune_ms_scr_cx2_stop_code - tune_ms_scr_cx2_stop_code
	uint8_t u8_reserved12E;                         //12E - reserved
	uint8_t u8_reserved12F;                         //12F - reserved
	__packed uint8_t b1_tuneMsScrLpCx2En    : 1;    //130 - tune_ms_scr_lp_cfg - tune_ms_scr_lp_cx2_en
	__packed uint8_t b1_tuneMsScrLpCx2StartIndexEn  : 1;    //130 - tune_ms_scr_lp_cfg - tune_ms_scr_lp_cx2_start_index_en
	__packed uint8_t b6_reserved130_2_7     : 6;    //130 - tune_ms_scr_lp_cfg - reserved
	__packed uint8_t b1_tuneMsScrLpCx2LogEn : 1;    //131 - tune_ms_scr_lp_log_cfg - tune_ms_scr_lp_cx2_log_en
	__packed uint8_t b1_tuneMsScrLpCx2LogDataEn : 1;    //131 - tune_ms_scr_lp_log_cfg - tune_ms_scr_lp_cx2_log_data_en
	__packed uint8_t b6_reserved131_2_7     : 6;    //131 - tune_ms_scr_lp_log_cfg - reserved
	uint16_t u16_tuneMsScrLpCx2StopCode;            //132 - tune_ms_scr_lp_cx2_stop_code - tune_ms_scr_lp_cx2_stop_code
	uint8_t u8_tuneMsScrLpCx2StIdxValidCh;          //134 - tune_ms_scr_lp_cx2_st_idx_valid_ch - tune_ms_scr_lp_cx2_st_idx_valid_ch
	uint8_t u8_tuneMsScrLpCx2StIdxUnvalidCh;        //135 - tune_ms_scr_lp_cx2_st_idx_unvalid_ch - tune_ms_scr_lp_cx2_st_idx_unvalid_ch
	uint8_t u8_reserved136;                         //136 - reserved
	uint8_t u8_reserved137;                         //137 - reserved
	__packed uint8_t b1_tuneSsTchIx0En      : 1;    //138 - tune_ss_tch_cfg - tune_ss_tch_ix0_en
	__packed uint8_t b1_tuneSsTchIx1En      : 1;    //138 - tune_ss_tch_cfg - tune_ss_tch_ix1_en
	__packed uint8_t b1_tuneSsTchIx2En      : 1;    //138 - tune_ss_tch_cfg - tune_ss_tch_ix2_en
	__packed uint8_t b1_tuneSsTchCx2En      : 1;    //138 - tune_ss_tch_cfg - tune_ss_tch_cx2_en
	__packed uint8_t b1_tuneSsTch240hzScanEn    : 1;    //138 - tune_ss_tch_cfg - tune_ss_tch_240Hz_scan_en
	__packed uint8_t b1_tuneSsTchTuneDgbEn  : 1;    //138 - tune_ss_tch_cfg - tune_ss_tch_tune_dgb_en
	__packed uint8_t b1_reserved138_6_6     : 1;    //138 - tune_ss_tch_cfg - reserved
	__packed uint8_t b1_tuneSsTchCx2SingleEndEn : 1;    //138 - tune_ss_tch_cfg - tune_ss_tch_cx2_single_end_en
	__packed uint16_t u16_tuneSsTchIx0StopCode;     //139 - tune_ss_tch_ix0_stop_code - tune_ss_tch_ix0_stop_code
	__packed uint16_t u16_tuneSsTchIx1StopCode;     //13B - tune_ss_tch_ix1_stop_code - tune_ss_tch_ix1_stop_code
	__packed uint16_t u16_tuneSsTchIx2StopCode;     //13D - tune_ss_tch_ix2_stop_code - tune_ss_tch_ix2_stop_code
	__packed uint16_t u16_tuneSsTchCx2StopCode;     //13F - tune_ss_tch_cx2_stop_code - tune_ss_tch_cx2_stop_code
	uint8_t u8_tuneSsTchFIx0ManualTuneVal;          //141 - tune_ss_tch_f_ix0_manual_tune_val - tune_ss_tch_f_ix0_manual_tune_val
	uint8_t u8_tuneSsTchSIx0ManualTuneVal;          //142 - tune_ss_tch_s_ix0_manual_tune_val - tune_ss_tch_s_ix0_manual_tune_val
	uint8_t u8_tuneSsTchFIx1ManualTuneVal;          //143 - tune_ss_tch_f_ix1_manual_tune_val - tune_ss_tch_f_ix1_manual_tune_val
	uint8_t u8_tuneSsTchSIx1ManualTuneVal;          //144 - tune_ss_tch_s_ix1_manual_tune_val - tune_ss_tch_s_ix1_manual_tune_val
	uint8_t u8_tuneSsTchIx0AdjOffset;               //145 - tune_ss_tch_ix0_adj_offset - tune_ss_tch_ix0_adj_offset
	uint8_t u8_tuneSsTchIx1AdjOffset;               //146 - tune_ss_tch_ix1_adj_offset - tune_ss_tch_ix1_adj_offset
	uint8_t u8_tuneSsTchIx2AdjOffset;               //147 - tune_ss_tch_ix2_adj_offset - tune_ss_tch_ix2_adj_offset
	uint8_t u8_tuneSsTchDiffCx2SweepSt;             //148 - tune_ss_tch_diff_cx2_sweep_st - tune_ss_tch_diff_cx2_sweep_st
	uint8_t u8_tuneSsTchFIx2StVal;                  //149 - tune_ss_tch_f_ix2_st_val - tune_ss_tch_f_ix2_st_val
	uint8_t u8_tuneSsTchSIx2StVal;                  //14A - tune_ss_tch_s_ix2_st_val - tune_ss_tch_s_ix2_st_val
	uint8_t u8_reserved14B;                         //14B - reserved
	__packed uint8_t b1_tuneSsDetIx0En      : 1;    //14C - tune_ss_det_cfg - tune_ss_det_ix0_en
	__packed uint8_t b1_tuneSsDetIx1En      : 1;    //14C - tune_ss_det_cfg - tune_ss_det_ix1_en
	__packed uint8_t b1_tuneSsDetIx2En      : 1;    //14C - tune_ss_det_cfg - tune_ss_det_ix2_en
	__packed uint8_t b1_tuneSsDetCx2En      : 1;    //14C - tune_ss_det_cfg - tune_ss_det_cx2_en
	__packed uint8_t b1_tuneSsDet240hzScanEn    : 1;    //14C - tune_ss_det_cfg - tune_ss_det_240Hz_scan_en
	__packed uint8_t b1_tuneSsDetTuneDgbEn  : 1;    //14C - tune_ss_det_cfg - tune_ss_det_tune_dgb_en
	__packed uint8_t b1_tuneSsDetEquSsTchEn : 1;    //14C - tune_ss_det_cfg - tune_ss_det_equ_ss_tch_en
	__packed uint8_t b1_tuneSsDetCx2SingleEndEn : 1;    //14C - tune_ss_det_cfg - tune_ss_det_cx2_single_end_en
	__packed uint16_t u16_tuneSsDetIx0StopCode;     //14D - tune_ss_det_ix0_stop_code - tune_ss_det_ix0_stop_code
	__packed uint16_t u16_tuneSsDetIx1StopCode;     //14F - tune_ss_det_ix1_stop_code - tune_ss_det_ix1_stop_code
	__packed uint16_t u16_tuneSsDetIx2StopCode;     //151 - tune_ss_det_ix2_stop_code - tune_ss_det_ix2_stop_code
	__packed uint16_t u16_tuneSsDetCx2StopCode;     //153 - tune_ss_det_cx2_stop_code - tune_ss_det_cx2_stop_code
	uint8_t u8_tuneSsDetFIx0ManualTuneVal;          //155 - tune_ss_det_f_ix0_manual_tune_val - tune_ss_det_f_ix0_manual_tune_val
	uint8_t u8_tuneSsDetSIx0ManualTuneVal;          //156 - tune_ss_det_s_ix0_manual_tune_val - tune_ss_det_s_ix0_manual_tune_val
	uint8_t u8_tuneSsDetFIx1ManualTuneVal;          //157 - tune_ss_det_f_ix1_manual_tune_val - tune_ss_det_f_ix1_manual_tune_val
	uint8_t u8_tuneSsDetSIx1ManualTuneVal;          //158 - tune_ss_det_s_ix1_manual_tune_val - tune_ss_det_s_ix1_manual_tune_val
	uint8_t u8_tuneSsDetIx0AdjOffset;               //159 - tune_ss_det_ix0_adj_offset - tune_ss_det_ix0_adj_offset
	uint8_t u8_tuneSsDetFIx2StVal;                  //15A - tune_ss_det_f_ix2_st_val - tune_ss_det_f_ix2_st_val
	uint8_t u8_tuneSsDetSIx2StVal;                  //15B - tune_ss_det_s_ix2_st_val - tune_ss_det_s_ix2_st_val
	uint8_t u8_tuneSsDetIx1AdjOffset;               //15C - tune_ss_det_ix1_adj_offset - tune_ss_det_ix1_adj_offset
	uint8_t u8_tuneSsDetIx2AdjOffset;               //15D - tune_ss_det_ix2_adj_offset - tune_ss_det_ix2_adj_offset
	uint8_t u8_tuneSsDetDiffCx2SweepSt;             //15E - tune_ss_det_diff_cx2_sweep_st - tune_ss_det_diff_cx2_sweep_st
	uint8_t u8_reserved15F;                         //15F - reserved
	uint8_t u8_reserved160;                         //160 - reserved
	__packed uint8_t b1_tuneSsFrctchIx0En   : 1;    //161 - tune_ss_frctch_cfg - tune_ss_frctch_ix0_en
	__packed uint8_t b1_tuneSsFrctchIx1En   : 1;    //161 - tune_ss_frctch_cfg - tune_ss_frctch_ix1_en
	__packed uint8_t b1_tuneSsFrctchIx2En   : 1;    //161 - tune_ss_frctch_cfg - tune_ss_frctch_ix2_en
	__packed uint8_t b1_tuneSsFrctchCx2En   : 1;    //161 - tune_ss_frctch_cfg - tune_ss_frctch_cx2_en
	__packed uint8_t b1_tuneSsFrctch240hzScanEn : 1;    //161 - tune_ss_frctch_cfg - tune_ss_frctch_240Hz_scan_en
	__packed uint8_t b3_reserved161_5_7     : 3;    //161 - tune_ss_frctch_cfg - reserved
	uint16_t u16_tuneSsFrctchIx0StopCode;           //162 - tune_ss_frctch_ix0_stop_code - tune_ss_frctch_ix0_stop_code
	uint16_t u16_tuneSsFrctchIx1StopCode;           //164 - tune_ss_frctch_ix1_stop_code - tune_ss_frctch_ix1_stop_code
	uint16_t u16_tuneSsFrctchIx2StopCode;           //166 - tune_ss_frctch_ix2_stop_code - tune_ss_frctch_ix2_stop_code
	uint16_t u16_tuneSsFrctchCx2StopCode;           //168 - tune_ss_frctch_cx2_stop_code - tune_ss_frctch_cx2_stop_code
	uint8_t u8_tuneSsFrctchFIx0ManualTuneVal;       //16A - tune_ss_frctch_f_ix0_manual_tune_val - tune_ss_frctch_f_ix0_manual_tune_val
	uint8_t u8_tuneSsFrctchSIx0ManualTuneVal;       //16B - tune_ss_frctch_s_ix0_manual_tune_val - tune_ss_frctch_s_ix0_manual_tune_val
	uint8_t u8_tuneSsFrctchFIx1ManualTuneVal;       //16C - tune_ss_frctch_f_ix1_manual_tune_val - tune_ss_frctch_f_ix1_manual_tune_val
	uint8_t u8_tuneSsFrctchSIx1ManualTuneVal;       //16D - tune_ss_frctch_s_ix1_manual_tune_val - tune_ss_frctch_s_ix1_manual_tune_val
	uint8_t u8_tuneSsFrctchIx0AdjOffset;            //16E - tune_ss_frctch_ix0_adj_offset - tune_ss_frctch_ix0_adj_offset
	uint8_t u8_tuneSsFrctchIx1AdjOffset;            //16F - tune_ss_frctch_ix1_adj_offset - tune_ss_frctch_ix1_adj_offset
	uint8_t u8_tuneSsFrctchDiffCx2SweepSt;          //170 - tune_ss_frctch_diff_cx2_sweep_st - tune_ss_frctch_diff_cx2_sweep_st
	__packed uint8_t b1_ssDiffCx2SequenceStepRetunEn    : 1;    //171 - ss_retune_cfg0 - ss_diff_cx2_sequence_step_retun_en
	__packed uint8_t b1_ssCx2InvalidRetuneEn    : 1;    //171 - ss_retune_cfg0 - ss_cx2_invalid_retune_en
	__packed uint8_t b6_reserved171_2_7     : 6;    //171 - ss_retune_cfg0 - reserved
	uint8_t u8_ssCx2InvalidRetuneThres;             //172 - ss_cx2_invalid_retune_thres - ss_cx2_invalid_retune_thres
	uint8_t u8_ssCx2InvalidRetuneIx2CompValue;      //173 - ss_cx2_invalid_retune_comp_abs_value - ss_cx2_invalid_retune_ix2_comp_value
	__packed uint8_t b1_nmonEn              : 1;    //174 - nmon_cfg - nmon_en
	__packed uint8_t b1_noiseLvl1En         : 1;    //174 - nmon_cfg - noise_lvl1_en
	__packed uint8_t b1_noiseLvl2En         : 1;    //174 - nmon_cfg - noise_lvl2_en
	__packed uint8_t b1_noiseLvl3En         : 1;    //174 - nmon_cfg - noise_lvl3_en
	__packed uint8_t b1_slowStddevReduceEn  : 1;    //174 - nmon_cfg - slow_stddev_reduce_en
	__packed uint8_t b1_msMrnUpdateMaxStddevEn  : 1;    //174 - nmon_cfg - ms_mrn_update_max_stddev_en
	__packed uint8_t b2_reserved174_6_7     : 2;    //174 - nmon_cfg - reserved
	__packed uint8_t b2_msMrnCnt            : 2;    //175 - ms_mrn_cfg1 - ms_mrn_cnt
	__packed uint8_t b2_msMrnCntNl1         : 2;    //175 - ms_mrn_cfg1 - ms_mrn_cnt_nl1
	__packed uint8_t b2_msMrnCntNl2         : 2;    //175 - ms_mrn_cfg1 - ms_mrn_cnt_nl2
	__packed uint8_t b1_msNmonPreSeqSsScanEn    : 1;    //175 - ms_mrn_cfg1 - ms_nmon_pre_seq_ss_scan_en
	__packed uint8_t b1_msMrnStepScanEn     : 1;    //175 - ms_mrn_cfg1 - ms_mrn_step_scan_en
	__packed uint8_t b2_reserved176_0_1     : 2;    //176 - ms_mrn_cfg2 - reserved
	__packed uint8_t b1_msNoiseEntryRawEn   : 1;    //176 - ms_mrn_cfg2 - ms_noise_entry_raw_en
	__packed uint8_t b1_noiseLvl2MinChkEn   : 1;    //176 - ms_mrn_cfg2 - noise_lvl2_min_chk_en
	__packed uint8_t b1_msNmonSlpAvgCmmEn   : 1;    //176 - ms_mrn_cfg2 - ms_nmon_slp_avg_cmm_en
	__packed uint8_t b1_reserved176_5_5     : 1;    //176 - ms_mrn_cfg2 - reserved
	__packed uint8_t b1_msMrnAdjRxStddevEn  : 1;    //176 - ms_mrn_cfg2 - ms_mrn_adj_rx_stddev_en
	__packed uint8_t b1_dummyMrnDlyEn       : 1;    //176 - ms_mrn_cfg2 - dummy_mrn_dly_en
	uint8_t u8_msMrnRCycSel0;                       //177 - ms_mrn_r_cyc_sel0 - ms_mrn_r_cyc_sel0
	uint8_t u8_msMrnRCycSel1;                       //178 - ms_mrn_r_cyc_sel1 - ms_mrn_r_cyc_sel1
	uint8_t u8_msMrnRCycSel2;                       //179 - ms_mrn_r_cyc_sel2 - ms_mrn_r_cyc_sel2
	uint8_t u8_msMrnRCycSel3;                       //17A - ms_mrn_r_cyc_sel3 - ms_mrn_r_cyc_sel3
	uint8_t u8_nlvlEnterDbnc;                       //17B - nlvl_dbnc - nlvl_enter_dbnc
	uint8_t u8_nlvlLeaveDbnc;                       //17B - nlvl_dbnc - nlvl_leave_dbnc
	__packed uint16_t u16_nlvl1StddevThres;         //17D - nlvl1_stddev_thres - nlvl1_stddev_thres
	__packed uint16_t u16_nlvl2StddevThres;         //17F - nlvl2_stddev_thres - nlvl2_stddev_thres
	__packed uint16_t u16_nlvl3StddevThres;         //181 - nlvl3_stddev_thres - nlvl3_stddev_thres
	__packed uint16_t u16_styNlvl1StddevThres;      //183 - sty_nlvl1_stddev_thres - sty_nlvl1_stddev_thres
	__packed uint16_t u16_styNlvl2StddevThres;      //185 - sty_nlvl2_stddev_thres - sty_nlvl2_stddev_thres
	__packed uint16_t u16_styNlvl3StddevThres;      //187 - sty_nlvl3_stddev_thres - sty_nlvl3_stddev_thres
	__packed uint16_t u16_msNmonCmmPosThres;        //189 - ms_noise_cmm_pos_thres - ms_nmon_cmm_pos_thres
	__packed uint16_t u16_msNmonCmmNegThres;        //18B - ms_noise_cmm_neg_thres - ms_nmon_cmm_neg_thres
	uint8_t u8_msMrnSwitchRThres;                   //18D - ms_mrn_switch_r_thres - ms_mrn_switch_r_thres
	__packed uint8_t b4_msMrnAdpGainDnmtr   : 4;    //18E - ms_mrn_switch_r_thres_adp_gain - ms_mrn_adp_gain_dnmtr
	__packed uint8_t b4_msMrnAdpGainNmtr    : 4;    //18E - ms_mrn_switch_r_thres_adp_gain - ms_mrn_adp_gain_nmtr
	uint8_t u8_msMrnMinStddev;                      //18F - ms_mrn_min_stddev - ms_mrn_min_stddev
	uint16_t u16_nlvl1StddevGapThres;               //190 - nlvl1_stddev_gap_thres - nlvl1_stddev_gap_thres
	uint16_t u16_freqHopFrmDropMaxNmon;             //192 - freq_hop_frm_drop_max_nmon - freq_hop_frm_drop_max_nmon
	uint8_t u8_msMrnStepVal;                        //194 - ms_mrn_step_val - ms_mrn_step_val
	uint8_t u8_nlvl2EnterDbnc;                      //195 - nlv2l_dbnc - nlvl2_enter_dbnc
	uint8_t u8_nlvl2LeaveDbnc;                      //195 - nlv2l_dbnc - nlvl2_leave_dbnc
	__packed uint8_t b1_msScrClipNmonEn     : 1;    //197 - ms_scr_clip_nmon_cfg - ms_scr_clip_nmon_en
	__packed uint8_t b7_reserved197_1_7     : 7;    //197 - ms_scr_clip_nmon_cfg - reserved
	uint8_t u8_msScrClipNlvl2Thres;                 //198 - ms_scr_clip_nlvl2_thres - ms_scr_clip_nlvl2_thres
	uint8_t u8_msScrClipNlvl2TslotCnt;              //199 - ms_scr_clip_nlvl2_tslot_cnt - ms_scr_clip_nlvl2_tslot_cnt
	uint8_t u8_reserved19A;                         //19A - reserved
	uint8_t u8_reserved19B;                         //19B - reserved
	__packed uint16_t b1_ssTchNmonEn        : 1;    //19C - ss_tch_nmon_cfg - ss_tch_nmon_en
	__packed uint16_t b1_ssTchNoiseLvl1En   : 1;    //19C - ss_tch_nmon_cfg - ss_tch_noise_lvl1_en
	__packed uint16_t b1_ssTchNoiseLvl2En   : 1;    //19C - ss_tch_nmon_cfg - ss_tch_noise_lvl2_en
	__packed uint16_t b1_ssNoiseCntDbncOutOnTouch   : 1;    //19C - ss_tch_nmon_cfg - ss_noise_cnt_dbnc_out_on_touch
	__packed uint16_t b1_ssKeepNoiseModeInChargerEn : 1;    //19C - ss_tch_nmon_cfg - ss_keep_noise_mode_in_charger_en
	__packed uint16_t b1_ssNmonCmmEn        : 1;    //19C - ss_tch_nmon_cfg - ss_nmon_cmm_en
	__packed uint16_t b1_ssTchFramedropBurstEn  : 1;    //19C - ss_tch_nmon_cfg - ss_tch_framedrop_burst_en
	__packed uint16_t b9_reserved19C_7_15   : 9;    //19C - ss_tch_nmon_cfg - reserved
	uint16_t u16_ssTchNlvl1DevThres;                //19E - ss_tch_nlvl1_dev_thres - ss_tch_nlvl1_dev_thres
	uint16_t u16_ssTchNlvl2DevThres;                //1A0 - ss_tch_nlvl2_dev_thres - ss_tch_nlvl2_dev_thres
	uint8_t u8_ssTchNoiseDevIncIirWgh0;             //1A2 - ss_tch_noise_dev_inc_iir_wgh0 - ss_tch_noise_dev_inc_iir_wgh0
	uint8_t u8_ssTchNoiseDevDecIirWgh0;             //1A3 - ss_tch_noise_dev_dec_iir_wgh0 - ss_tch_noise_dev_dec_iir_wgh0
	uint8_t u8_ssTchNlvlEnterDbnc;                  //1A4 - ss_tch_nlvl_dbnc - ss_tch_nlvl_enter_dbnc
	uint8_t u8_ssTchNlvlLeaveDbnc;                  //1A4 - ss_tch_nlvl_dbnc - ss_tch_nlvl_leave_dbnc
	uint16_t u16_ssTchStyNlvl1DevThres;             //1A6 - ss_tch_sty_nlvl1_dev_thres - ss_tch_sty_nlvl1_dev_thres
	uint16_t u16_ssTchStyNlvl2DevThres;             //1A8 - ss_tch_sty_nlvl2_dev_thres - ss_tch_sty_nlvl2_dev_thres
	uint16_t u16_ssNoiseCmmPosThres;                //1AA - ss_noise_cmm_pos_thres - ss_noise_cmm_pos_thres
	uint16_t u16_ssNoiseCmmNegThres;                //1AC - ss_noise_cmm_neg_thres - ss_noise_cmm_neg_thres
	uint16_t u16_ssTchNoisePosThresBurst;           //1AE - ss_tch_noise_pos_thres_burst - ss_tch_noise_pos_thres_burst
	uint8_t u8_reserved1B0;                         //1B0 - reserved
	uint8_t u8_ssTchBitmapEdgeTchNodeLimitThres;    //1B1 - ss_tch_bitmap_edge_tch_node_limit_thres - ss_tch_bitmap_edge_tch_node_limit_thres
	__packed uint16_t b1_ssTchMsDiffBitmapEn    : 1;    //1B2 - ss_tch_cfg - ss_tch_ms_diff_bitmap_en
	__packed uint16_t b1_ssTchMsBitmapEn    : 1;    //1B2 - ss_tch_cfg - ss_tch_ms_bitmap_en
	__packed uint16_t b2_ssTchMsBitmapChSel : 2;    //1B2 - ss_tch_cfg - ss_tch_ms_bitmap_ch_sel
	__packed uint16_t b1_ssTchIntgStrCorrEn : 1;    //1B2 - ss_tch_cfg - ss_tch_intg_str_corr_en
	__packed uint16_t b1_ssTchFIntgLnrCmmEn : 1;    //1B2 - ss_tch_cfg - ss_tch_f_intg_lnr_cmm_en
	__packed uint16_t b1_ssTchSIntgLnrCmmEn : 1;    //1B2 - ss_tch_cfg - ss_tch_s_intg_lnr_cmm_en
	__packed uint16_t b1_ssDiffLnrCmmEn     : 1;    //1B2 - ss_tch_cfg - ss_diff_lnr_cmm_en
	__packed uint16_t b1_ssTchMsNoisyBitmapEn   : 1;    //1B2 - ss_tch_cfg - ss_tch_ms_noisy_bitmap_en
	__packed uint16_t b2_reserved1B2_9_10   : 2;    //1B2 - ss_tch_cfg - reserved
	__packed uint16_t b1_ssTchMsWtrBitmapEn : 1;    //1B2 - ss_tch_cfg - ss_tch_ms_wtr_bitmap_en
	__packed uint16_t b1_reserved1B2_12_12  : 1;    //1B2 - ss_tch_cfg - reserved
	__packed uint16_t b1_ssTchAdaptiveNoiseScanEn   : 1;    //1B2 - ss_tch_cfg - ss_tch_adaptive_noise_scan_en
	__packed uint16_t b1_ssTchAdaptiveScanEn    : 1;    //1B2 - ss_tch_cfg - ss_tch_adaptive_scan_en
	__packed uint16_t b1_reserved1B2_15_15  : 1;    //1B2 - ss_tch_cfg - reserved
	uint16_t u16_ssTchDetThres;                     //1B4 - ss_tch_det_thres - ss_tch_det_thres
	uint16_t u16_ssTchDetThresNoisy;                //1B6 - ss_tch_det_thres_noisy - ss_tch_det_thres_noisy
	uint16_t u16_ssTchWatershedThres;               //1B8 - ss_tch_watershed_thres - ss_tch_watershed_thres
	uint8_t u8_ssTchCentroidLen;                    //1BA - ss_tch_centroid_cfg - ss_tch_centroid_len
	__packed uint16_t u16_ssBitmapFgrThres;         //1BB - ss_bitmap_fgr_thres - ss_bitmap_fgr_thres
	__packed uint16_t u16_ssBitmapStyThres;         //1BD - ss_bitmap_sty_thres - ss_bitmap_sty_thres
	__packed uint16_t u16_ssBitmapGlvThres;         //1BF - ss_bitmap_glv_thres - ss_bitmap_glv_thres
	__packed uint16_t u16_ssBitmapWtrFgrThres;      //1C1 - ss_bitmap_wtr_fgr_thres - ss_bitmap_wtr_fgr_thres
	uint8_t u8_ssTchBitmapTchCntLimitThres;         //1C3 - ss_tch_bitmap_tch_cnt_limit_thres - ss_tch_bitmap_tch_cnt_limit_thres
	uint8_t u8_ssTchAdaptiveScanDbnc;               //1C4 - ss_tch_adaptive_scan_dbnc - ss_tch_adaptive_scan_dbnc
	__packed uint16_t u16_ssIntgLnrCmmSlpThres;     //1C5 - ss_intg_lnr_cmm_slp_thres - ss_intg_lnr_cmm_slp_thres
	__packed uint16_t u16_ssIntgLnrCmmAvgThres;     //1C7 - ss_intg_lnr_cmm_avg_thres - ss_intg_lnr_cmm_avg_thres
	uint8_t u8_reserved1C9;                         //1C9 - reserved
	uint16_t u16_ssLnrCmmSmpLevelThres;             //1CA - ss_lnr_cmm_smp_level_thres - ss_lnr_cmm_smp_level_thres
	uint16_t u16_ssLnrCmmSmpLevelNoisyThres;        //1CC - ss_lnr_cmm_smp_level_noisy_thres - ss_lnr_cmm_smp_level_noisy_thres
	uint16_t u16_ssLnrCmmSmpDiffThres;              //1CE - ss_lnr_cmm_smp_diff_thres - ss_lnr_cmm_smp_diff_thres
	uint16_t u16_ssLnrCmmSmpDiffNoisyThres;         //1D0 - ss_lnr_cmm_smp_diff_noisy_thres - ss_lnr_cmm_smp_diff_noisy_thres
	uint8_t u8_ssLnrCmmSmpCntThres;                 //1D2 - ss_lnr_cmm_smp_cnt_thres - ss_lnr_cmm_smp_cnt_thres
	uint8_t u8_ssLnrCmmSmpCntThresHyst;             //1D3 - ss_lnr_cmm_smp_cnt_thres_hyst - ss_lnr_cmm_smp_cnt_thres_hyst
	uint8_t u8_ssLnrCmmSmpCntMvaThres;              //1D4 - ss_lnr_cmm_smp_cnt_mva_thres - ss_lnr_cmm_smp_cnt_mva_thres
	__packed uint16_t u16_ssLnrCmmCompLimitDiffThres;   //1D5 - ss_lnr_cmm_comp_limit_diff_thres - ss_lnr_cmm_comp_limit_diff_thres
	__packed uint16_t u16_ssLnrCmmCompLimitIntgThres;   //1D7 - ss_lnr_cmm_comp_limit_intg_thres - ss_lnr_cmm_comp_limit_intg_thres
	__packed uint16_t u16_ssLnrCmmCompLimitMvaThres;    //1D9 - ss_lnr_cmm_comp_limit_mva_thres - ss_lnr_cmm_comp_limit_mva_thres
	uint8_t u8_ssLnrCmmRxErodeCnt;                  //1DB - ss_lnr_cmm_rx_erode_cnt - ss_lnr_cmm_rx_erode_cnt
	uint8_t u8_ssLnrCmmTxErodeCnt;                  //1DC - ss_lnr_cmm_tx_erode_cnt - ss_lnr_cmm_tx_erode_cnt
	uint8_t u8_ssLnrCmmMvaChExpandCnt;              //1DD - ss_lnr_cmm_mva_ch_expand_cnt - ss_lnr_cmm_mva_ch_expand_cnt
	uint8_t u8_reserved1DE;                         //1DE - reserved
	__packed uint16_t u16_sfLnrCmmSmpLevelThres;    //1DF - sf_lnr_cmm_smp_level_thres - sf_lnr_cmm_smp_level_thres
	__packed uint16_t u16_sfLnrCmmSmpLevelNoisyThres;   //1E1 - sf_lnr_cmm_smp_level_noisy_thres - sf_lnr_cmm_smp_level_noisy_thres
	__packed uint16_t u16_sfLnrCmmSmpDiffThres;     //1E3 - sf_lnr_cmm_smp_diff_thres - sf_lnr_cmm_smp_diff_thres
	__packed uint16_t u16_sfLnrCmmSmpDiffNoisyThres;    //1E5 - sf_lnr_cmm_smp_diff_noisy_thres - sf_lnr_cmm_smp_diff_noisy_thres
	uint8_t u8_sfLnrCmmSmpCntThres;                 //1E7 - sf_lnr_cmm_smp_cnt_thres - sf_lnr_cmm_smp_cnt_thres
	uint8_t u8_sfLnrCmmSmpCntThresHyst;             //1E8 - sf_lnr_cmm_smp_cnt_thres_hyst - sf_lnr_cmm_smp_cnt_thres_hyst
	uint8_t u8_sfLnrCmmSmpCntMvaThres;              //1E9 - sf_lnr_cmm_smp_cnt_mva_thres - sf_lnr_cmm_smp_cnt_mva_thres
	uint16_t u16_sfLnrCmmCompLimitDiffThres;        //1EA - sf_lnr_cmm_comp_limit_diff_thres - sf_lnr_cmm_comp_limit_diff_thres
	uint16_t u16_sfLnrCmmCompLimitIntgThres;        //1EC - sf_lnr_cmm_comp_limit_intg_thres - sf_lnr_cmm_comp_limit_intg_thres
	uint16_t u16_sfLnrCmmCompLimitMvaThres;         //1EE - sf_lnr_cmm_comp_limit_mva_thres - sf_lnr_cmm_comp_limit_mva_thres
	uint8_t u8_sfLnrCmmRxErodeCnt;                  //1F0 - sf_lnr_cmm_rx_erode_cnt - sf_lnr_cmm_rx_erode_cnt
	uint8_t u8_sfLnrCmmTxErodeCnt;                  //1F1 - sf_lnr_cmm_tx_erode_cnt - sf_lnr_cmm_tx_erode_cnt
	uint8_t u8_sfLnrCmmMvaChExpandCnt;              //1F2 - sf_lnr_cmm_mva_ch_expand_cnt - sf_lnr_cmm_mva_ch_expand_cnt
	uint8_t u8_reserved1F3;                         //1F3 - reserved
	__packed uint8_t b1_ssDetCmmEn          : 1;    //1F4 - ss_det_cfg - ss_det_cmm_en
	__packed uint8_t b1_ssDetNegDetEn       : 1;    //1F4 - ss_det_cfg - ss_det_neg_det_en
	__packed uint8_t b1_ssDetSpatialEn      : 1;    //1F4 - ss_det_cfg - ss_det_spatial_en
	__packed uint8_t b1_idleAcalNoiseScanEn : 1;    //1F4 - ss_det_cfg - idle_acal_noise_scan_en
	__packed uint8_t b1_ssDetDiffLnrCmmEn   : 1;    //1F4 - ss_det_cfg - ss_det_diff_lnr_cmm_en
	__packed uint8_t b1_ssDetSIntgLnrCmmEn  : 1;    //1F4 - ss_det_cfg - ss_det_s_intg_lnr_cmm_en
	__packed uint8_t b1_ssDetIntgStrCorrEn  : 1;    //1F4 - ss_det_cfg - ss_det_intg_str_corr_en
	__packed uint8_t b1_reserved1F4_7_7     : 1;    //1F4 - ss_det_cfg - reserved
	uint8_t u8_ssDetNodeCnt;                        //1F5 - ss_det_node_cnt - ss_det_node_cnt
	uint16_t u16_ssDetThres;                        //1F6 - ss_det_thres - ss_det_thres
	uint16_t u16_ssDetThresGlv;                     //1F8 - ss_det_thres_glv - ss_det_thres_glv
	uint16_t u16_ssLpDetThres;                      //1FA - ss_lp_det_thres - ss_lp_det_thres
	uint16_t u16_ssDetCmmPosThres;                  //1FC - ss_det_cmm_pos_thres - ss_det_cmm_pos_thres
	uint16_t u16_ssDetCmmNegThres;                  //1FE - ss_det_cmm_neg_thres - ss_det_cmm_neg_thres
	__packed uint16_t b1_ssWtrEn            : 1;    //200 - ss_wtr_cfg - ss_wtr_en
	__packed uint16_t b1_ssDefaultWtrMode   : 1;    //200 - ss_wtr_cfg - ss_default_wtr_mode
	__packed uint16_t b1_msRomCalibDiffChkEn    : 1;    //200 - ss_wtr_cfg - ms_rom_calib_diff_chk_en
	__packed uint16_t b1_ssCalibDiffChkEn   : 1;    //200 - ss_wtr_cfg - ss_calib_diff_chk_en
	__packed uint16_t b2_msWtrSpatialFltrSel    : 2;    //200 - ss_wtr_cfg - ms_wtr_spatial_fltr_sel
	__packed uint16_t b2_reserved200_6_7    : 2;    //200 - ss_wtr_cfg - reserved
	__packed uint16_t b1_ssWtrSepEn         : 1;    //200 - ss_wtr_cfg - ss_wtr_sep_en
	__packed uint16_t b1_reserved200_9_9    : 1;    //200 - ss_wtr_cfg - reserved
	__packed uint16_t b1_msWtrSpatialEn     : 1;    //200 - ss_wtr_cfg - ms_wtr_spatial_en
	__packed uint16_t b1_wtrDynamicFgrThresEn   : 1;    //200 - ss_wtr_cfg - wtr_dynamic_fgr_thres_en
	__packed uint16_t b1_msWtrIslandSumRatioRejEn   : 1;    //200 - ss_wtr_cfg - ms_wtr_island_sum_ratio_rej_en
	__packed uint16_t b1_grvWtrChkEn        : 1;    //200 - ss_wtr_cfg - grv_wtr_chk_en
	__packed uint16_t b1_wtrSsDynamicFgrThresEn : 1;    //200 - ss_wtr_cfg - wtr_ss_dynamic_fgr_thres_en
	__packed uint16_t b1_wtrCalibOffsetTrkEn    : 1;    //200 - ss_wtr_cfg - wtr_calib_offset_trk_en
	__packed uint8_t b4_ssWtrDbncIn         : 4;    //202 - ss_wtr_dbnc - ss_wtr_dbnc_in
	__packed uint8_t b4_ssWtrDbncOut        : 4;    //202 - ss_wtr_dbnc - ss_wtr_dbnc_out
	__packed uint8_t b4_ssWtrTchInDly       : 4;    //203 - ss_wtr_tch_in_dly - ss_wtr_tch_in_dly
	__packed uint8_t b4_ssWtrTchInDly2      : 4;    //203 - ss_wtr_tch_in_dly - ss_wtr_tch_in_dly_2
	__packed uint8_t b4_ssWtrTchOutDly      : 4;    //204 - ss_wtr_tch_out_dly - ss_wtr_tch_out_dly
	__packed uint8_t b4_reserved204_4_7     : 4;    //204 - ss_wtr_tch_out_dly - reserved
	__packed uint16_t u16_ssWtrMsDetThres;          //205 - ss_wtr_ms_det_thres - ss_wtr_ms_det_thres
	__packed uint16_t u16_ssWtrMsDetThresHyst;      //207 - ss_wtr_ms_det_thres_hyst - ss_wtr_ms_det_thres_hyst
	uint8_t u8_ssWtrMinThres;                       //209 - ss_wtr_min_thres - ss_wtr_min_thres
	uint16_t u16_lpSsWtrMsDetThres;                 //20A - lp_ss_wtr_ms_det_thres - lp_ss_wtr_ms_det_thres
	uint16_t u16_lpSsWtrMsDetThresHyst;             //20C - lp_ss_wtr_ms_det_thres_hyst - lp_ss_wtr_ms_det_thres_hyst
	uint16_t u16_wtrEntryMtTrigThd;                 //20E - wtr_entry_mt_trig_thd - wtr_entry_mt_trig_thd
	uint16_t u16_wtrEntrySsTrigThd;                 //210 - wtr_entry_ss_trig_thd - wtr_entry_ss_trig_thd
	uint16_t u16_wtrEntryMsNegFcalThd;              //212 - wtr_entry_ms_neg_fcal_thd - wtr_entry_ms_neg_fcal_thd
	uint16_t u16_wtrEntryMsPosFcalThd;              //214 - wtr_entry_ms_pos_fcal_thd - wtr_entry_ms_pos_fcal_thd
	uint16_t u16_wtrEntryMsNegNodeCnt;              //216 - wtr_entry_ms_neg_node_cnt - wtr_entry_ms_neg_node_cnt
	uint16_t u16_wtrExitCalibOffsetPosThd;          //218 - wtr_exit_calib_offset_pos_thd - wtr_exit_calib_offset_pos_thd
	uint16_t u16_wtrExitCalibOffsetNegThd;          //21A - wtr_exit_calib_offset_neg_thd - wtr_exit_calib_offset_neg_thd
	__packed uint8_t b4_wtrNodeAcalNoTchCnt : 4;    //21C - wtr_node_acal_frm_cnt - wtr_node_acal_no_tch_cnt
	__packed uint8_t b4_reserved21C_4_7     : 4;    //21C - wtr_node_acal_frm_cnt - reserved
	uint8_t u8_wtrNodeAcalWgh;                      //21D - wtr_node_acal_wgh - wtr_node_acal_wgh
	uint16_t u16_wtrExitNegThres;                   //21E - wtr_exit_neg_thres - wtr_exit_neg_thres
	uint16_t u16_wtrMsSpatialThd;                   //220 - wtr_ms_spatial_thd - wtr_ms_spatial_thd
	uint16_t u16_wtrEntryMtTrigThdHyst;             //222 - wtr_entry_mt_trig_thd_hyst - wtr_entry_mt_trig_thd_hyst
	uint8_t u8_wtrDynamicFgrThresPer;               //224 - wtr_dynamic_fgr_thres_per - wtr_dynamic_fgr_thres_per
	__packed uint16_t u16_msWtrIslandSumRatioReject;    //225 - ms_wtr_island_sum_ratio_reject - ms_wtr_island_sum_ratio_reject
	uint8_t u8_wtrSsDynamicFgrThresPer;             //227 - wtr_ss_dynamic_fgr_thres_per - wtr_ss_dynamic_fgr_thres_per
	uint16_t u16_wtrMinTrkRad;                      //228 - wtr_min_trk_rad - wtr_min_trk_rad
	uint8_t u8_wtrTrkRadMul;                        //22A - wtr_trk_rad_mul - wtr_trk_rad_mul
	__packed uint16_t u16_wtrTchMrgDist;            //22B - wtr_tch_mrg_dist - wtr_tch_mrg_dist
	__packed uint16_t u16_wtrTchMrgDistHyst;        //22D - wtr_tch_mrg_dist_hyst - wtr_tch_mrg_dist_hyst
	uint8_t u8_msWtrSpatialFltrPeakExtendWgh;       //22F - ms_wtr_spatial_fltr_peak_extend_wgh - ms_wtr_spatial_fltr_peak_extend_wgh
	uint16_t u16_actEdgeTchIslandThres;             //230 - act_edge_tch_island_thres - act_edge_tch_island_thres
	uint16_t u16_horiScrTchIslandThres;             //232 - hori_scr_tch_island_thres - hori_scr_tch_island_thres
	__packed uint16_t b1_frmIirEn           : 1;    //234 - tch_preprocess_cfg - frm_iir_en
	__packed uint16_t b1_msDiffLnrCmmEn     : 1;    //234 - tch_preprocess_cfg - ms_diff_lnr_cmm_en
	__packed uint16_t b1_msIntgStrCorrEn    : 1;    //234 - tch_preprocess_cfg - ms_intg_str_corr_en
	__packed uint16_t b1_msIntgLnrCmmEn     : 1;    //234 - tch_preprocess_cfg - ms_intg_lnr_cmm_en
	__packed uint16_t b1_msAllChannelAdjEn  : 1;    //234 - tch_preprocess_cfg - ms_all_channel_adj_en
	__packed uint16_t b1_msSenseSortingEn   : 1;    //234 - tch_preprocess_cfg - ms_sense_sorting_en
	__packed uint16_t b1_msAvgCmmGloveEn    : 1;    //234 - tch_preprocess_cfg - ms_avg_cmm_glove_en
	__packed uint16_t b1_msAvgCmmEn         : 1;    //234 - tch_preprocess_cfg - ms_avg_cmm_en
	__packed uint16_t b1_msPreWtrDetEn      : 1;    //234 - tch_preprocess_cfg - ms_pre_wtr_det_en
	__packed uint16_t b1_reserved234_9_9    : 1;    //234 - tch_preprocess_cfg - reserved
	__packed uint16_t b1_msStrFltStaChk     : 1;    //234 - tch_preprocess_cfg - ms_str_flt_sta_chk
	__packed uint16_t b1_msFltrdataOffsetRemove : 1;    //234 - tch_preprocess_cfg - ms_fltrdata_offset_remove
	__packed uint16_t b1_msFltrdataNoiseLevelRemove : 1;    //234 - tch_preprocess_cfg - ms_fltrdata_noise_level_remove
	__packed uint16_t b1_msResStrFltEn      : 1;    //234 - tch_preprocess_cfg - ms_res_str_flt_en
	__packed uint16_t b1_msFIndvSlpAdjEn    : 1;    //234 - tch_preprocess_cfg - ms_f_indv_slp_adj_en
	__packed uint16_t b1_msSIndvSlpAdjEn    : 1;    //234 - tch_preprocess_cfg - ms_s_indv_slp_adj_en
	uint16_t u16_frmIirStddev0;                     //236 - frm_iir_stddev0 - frm_iir_stddev0
	uint16_t u16_frmIirStddev1;                     //238 - frm_iir_stddev1 - frm_iir_stddev1
	uint16_t u16_frmIirNoisyStddev0;                //23A - frm_iir_noisy_stddev0 - frm_iir_noisy_stddev0
	uint16_t u16_frmIirNoisyStddev1;                //23C - frm_iir_noisy_stddev1 - frm_iir_noisy_stddev1
	__packed uint8_t b4_frmIirWgh0          : 4;    //23E - frm_iir_wgh - frm_iir_wgh0
	__packed uint8_t b4_frmIirWgh1          : 4;    //23E - frm_iir_wgh - frm_iir_wgh1
	__packed uint8_t b4_frmIirNoisyWgh0     : 4;    //23F - frm_iir_noisy_wgh - frm_iir_noisy_wgh0
	__packed uint8_t b4_frmIirNoisyWgh1     : 4;    //23F - frm_iir_noisy_wgh - frm_iir_noisy_wgh1
	__packed uint8_t b4_notchFrmIirWgh0     : 4;    //240 - notch_frm_iir_wgh - notch_frm_iir_wgh0
	__packed uint8_t b4_reserved240_4_7     : 4;    //240 - notch_frm_iir_wgh - reserved
	__packed uint16_t u16_msWatershedThres;         //241 - ms_watershed_thres - ms_watershed_thres
	__packed uint16_t u16_tchIslandThres;           //243 - tch_island_thres - tch_island_thres
	__packed uint16_t u16_tchIslandThresWtr;        //245 - tch_island_thres_wtr - tch_island_thres_wtr
	__packed uint16_t u16_tchIslandThresGlv;        //247 - tch_island_thres_glv - tch_island_thres_glv
	__packed uint16_t u16_msAvgCmmThres;            //249 - ms_avg_cmm_thres - ms_avg_cmm_thres
	__packed uint16_t u16_msLnrCmmCompLimitDiffThres;   //24B - ms_lnr_cmm_comp_limit_diff_thres - ms_lnr_cmm_comp_limit_diff_thres
	__packed uint16_t u16_msLnrCmmCompLimitIntgThres;   //24D - ms_lnr_cmm_comp_limit_intg_thres - ms_lnr_cmm_comp_limit_intg_thres
	__packed uint16_t u16_msLnrCmmCompLimitMvaThres;    //24F - ms_lnr_cmm_comp_limit_mva_thres - ms_lnr_cmm_comp_limit_mva_thres
	__packed uint16_t u16_msLnrCmmSmpLevelThres;    //251 - ms_lnr_cmm_smp_level_thres - ms_lnr_cmm_smp_level_thres
	__packed uint16_t u16_msLnrCmmSmpLevelNoisyThres;   //253 - ms_lnr_cmm_smp_level_noisy_thres - ms_lnr_cmm_smp_level_noisy_thres
	__packed uint16_t u16_msLnrCmmSmpDiffThres;     //255 - ms_lnr_cmm_smp_diff_thres - ms_lnr_cmm_smp_diff_thres
	__packed uint16_t u16_msLnrCmmSmpDiffNoisyThres;    //257 - ms_lnr_cmm_smp_diff_noisy_thres - ms_lnr_cmm_smp_diff_noisy_thres
	uint8_t u8_msLnrCmmSmpCntThres;                 //259 - ms_lnr_cmm_smp_cnt_thres - ms_lnr_cmm_smp_cnt_thres
	uint8_t u8_msLnrCmmSmpCntThresHyst;             //25A - ms_lnr_cmm_smp_cnt_thres_hyst - ms_lnr_cmm_smp_cnt_thres_hyst
	uint8_t u8_msLnrCmmSmpCntMvaThres;              //25B - ms_lnr_cmm_smp_cnt_mva_thres - ms_lnr_cmm_smp_cnt_mva_thres
	uint8_t u8_msLnrCmmRxErodeCnt;                  //25C - ms_lnr_cmm_rx_erode_cnt - ms_lnr_cmm_rx_erode_cnt
	uint8_t u8_msLnrCmmTxErodeCnt;                  //25D - ms_lnr_cmm_tx_erode_cnt - ms_lnr_cmm_tx_erode_cnt
	uint8_t u8_msLnrCmmMvaChExpandCnt;              //25E - ms_lnr_cmm_mva_ch_expand_cnt - ms_lnr_cmm_mva_ch_expand_cnt
	uint8_t u8_msAllChAdjVal;                       //25F - ms_all_ch_adj_val - ms_all_ch_adj_val
	uint16_t u16_newTchCntFrameDropMsNegDetTrhesNoisy;  //260 - tch_cnt_frame_drop_ms_neg_det_trhes_noisy - new_tch_cnt_frame_drop_ms_neg_det_trhes_noisy
	uint16_t u16_newTchCntFrameDropMsNegSumTrhesNoisy;  //262 - tch_cnt_frame_drop_ms_neg_sum_trhes_noisy - new_tch_cnt_frame_drop_ms_neg_sum_trhes_noisy
	__packed uint8_t b4_frmIirWirelessWgh0  : 4;    //264 - frm_iir_wireless_wgh - frm_iir_wireless_wgh0
	__packed uint8_t b4_frmIirWirelessWgh1  : 4;    //264 - frm_iir_wireless_wgh - frm_iir_wireless_wgh1
	uint8_t u8_reserved265;                         //265 - reserved
	__packed uint16_t b1_msDropNoisyFrameEn : 1;    //266 - frame_check_cfg - ms_drop_noisy_frame_en
	__packed uint16_t b1_msDropNoisyFrameFcalEn : 1;    //266 - frame_check_cfg - ms_drop_noisy_frame_fcal_en
	__packed uint16_t b2_reserved266_2_3    : 2;    //266 - frame_check_cfg - reserved
	__packed uint16_t b1_newTchCntFrameDropEn   : 1;    //266 - frame_check_cfg - new_tch_cnt_frame_drop_en
	__packed uint16_t b1_msDropNoisyChkEn   : 1;    //266 - frame_check_cfg - ms_drop_noisy_chk_en
	__packed uint16_t b10_reserved266_6_15  : 10;   //266 - frame_check_cfg - reserved
	uint8_t u8_msDropNoisyFrameFcalDbnc;            //268 - ms_drop_noisy_frame_fcal_dbnc - ms_drop_noisy_frame_fcal_dbnc
	__packed uint16_t u16_msDiffValidPosThresWtr;   //269 - ms_diff_valid_pos_thres_wtr - ms_diff_valid_pos_thres_wtr
	__packed uint16_t u16_newTchCntFrameDropMsNegDetTrhes;  //26B - tch_cnt_frame_drop_ms_neg_det_trhes - new_tch_cnt_frame_drop_ms_neg_det_trhes
	__packed uint16_t u16_newTchCntFrameDropMsNegSumTrhes;  //26D - tch_cnt_frame_drop_ms_neg_sum_trhes - new_tch_cnt_frame_drop_ms_neg_sum_trhes
	__packed uint16_t u16_msDiffValidPosThresQtoNoisy;  //26F - ms_diff_valid_pos_thres_qto_noisy - ms_diff_valid_pos_thres_qto_noisy
	__packed uint16_t u16_msDiffValidPosThresQto;   //271 - ms_diff_valid_pos_thres_qto - ms_diff_valid_pos_thres_qto
	__packed uint16_t u16_msDiffValidPosThres;      //273 - ms_diff_valid_pos_thres - ms_diff_valid_pos_thres
	__packed uint16_t u16_msDiffValidPosThresNlvl1; //275 - ms_diff_valid_pos_thres_nlvl1 - ms_diff_valid_pos_thres_nlvl1
	__packed uint16_t u16_msDiffValidPosThresNlvl2; //277 - ms_diff_valid_pos_thres_nlvl2 - ms_diff_valid_pos_thres_nlvl2
	__packed uint16_t u16_msDiffFatalErrStrThres;   //279 - ms_diff_fatal_err_str_thres - ms_diff_fatal_err_str_thres
	uint8_t u8_msDiffFatalErrNodeNumThres;          //27B - ms_diff_fatal_err_node_num_thres - ms_diff_fatal_err_node_num_thres
	uint16_t u16_dynamicIslandMinThresLp;           //27C - dynamic_island_min_thres_lp - dynamic_island_min_thres_lp
	uint16_t u16_dynamicIslandMaxThresLp;           //27E - dynamic_island_max_thres_lp - dynamic_island_max_thres_lp
	__packed uint16_t b1_grvConflictChkEn   : 1;    //280 - tch_islnd_process_cfg - grv_conflict_chk_en
	__packed uint16_t b1_normPeakEn         : 1;    //280 - tch_islnd_process_cfg - norm_peak_en
	__packed uint16_t b1_grvChkEn           : 1;    //280 - tch_islnd_process_cfg - grv_chk_en
	__packed uint16_t b1_grvMrgChkEn        : 1;    //280 - tch_islnd_process_cfg - grv_mrg_chk_en
	__packed uint16_t b1_grvMergeAxisIncXEn : 1;    //280 - tch_islnd_process_cfg - grv_merge_axis_inc_x_en
	__packed uint16_t b1_grvMergeAxisIncYEn : 1;    //280 - tch_islnd_process_cfg - grv_merge_axis_inc_y_en
	__packed uint16_t b1_grvSpeedLimitEn    : 1;    //280 - tch_islnd_process_cfg - grv_speed_limit_en
	__packed uint16_t b1_grvFgrMaxAreaChkEn : 1;    //280 - tch_islnd_process_cfg - grv_fgr_max_area_chk_en
	__packed uint16_t b1_grvTrkEn           : 1;    //280 - tch_islnd_process_cfg - grv_trk_en
	__packed uint16_t b1_grvWtrTailCutEn    : 1;    //280 - tch_islnd_process_cfg - grv_wtr_tail_cut_en
	__packed uint16_t b1_reserved280_10_10  : 1;    //280 - tch_islnd_process_cfg - reserved
	__packed uint16_t b1_islandShrinkEn     : 1;    //280 - tch_islnd_process_cfg - island_shrink_en
	__packed uint16_t b1_lpAxisGrvChkEn     : 1;    //280 - tch_islnd_process_cfg - lp_axis_grv_chk_en
	__packed uint16_t b1_lpGrvChkEn         : 1;    //280 - tch_islnd_process_cfg - lp_grv_chk_en
	__packed uint16_t b1_dynamicIslandThreEn    : 1;    //280 - tch_islnd_process_cfg - dynamic_island_thre_en
	__packed uint16_t b1_axisGrvChkEn       : 1;    //280 - tch_islnd_process_cfg - axis_grv_chk_en
	uint16_t u16_spatialPeakThres;                  //282 - spatial_peak_thres - spatial_peak_thres
	uint8_t u8_normThresPercent;                    //284 - norm_thres_percent - norm_thres_percent
	uint8_t u8_grvNormPercent;                      //285 - grv_norm_percent - grv_norm_percent
	uint16_t u16_grvTolHoriVert;                    //286 - grv_tol_hori_vert - grv_tol_hori_vert
	uint16_t u16_grvTolDiag;                        //288 - grv_tol_diag - grv_tol_diag
	uint16_t u16_grvMinTchSepDist;                  //28A - grv_min_tch_sep_dist - grv_min_tch_sep_dist
	uint8_t u8_grvMinArea;                          //28C - grv_min_area - grv_min_area
	uint8_t u8_grvAxisIncPercent;                   //28D - grv_axis_inc_percent - grv_axis_inc_percent
	uint16_t u16_grvSpeedLimit;                     //28E - grv_speed_limit - grv_speed_limit
	uint16_t u16_grvNoisySpeedLimit;                //290 - grv_noisy_speed_limit - grv_noisy_speed_limit
	uint8_t u8_grvWtrTailCutMinStrRate;             //292 - grv_wtr_tail_cut_min_str_rate - grv_wtr_tail_cut_min_str_rate
	uint8_t u8_wtrGrvNormPercent;                   //293 - wtr_grv_norm_percent - wtr_grv_norm_percent
	uint16_t u16_wtrGrvTolHoriVert;                 //294 - wtr_grv_tol_hori_vert - wtr_grv_tol_hori_vert
	uint16_t u16_wtrGrvTolDiag;                     //296 - wtr_grv_tol_diag - wtr_grv_tol_diag
	uint16_t u16_tchDetFrmGrvTolHoriVert;           //298 - tch_frm_grv_tol_hori_vert - tch_det_frm_grv_tol_hori_vert
	uint16_t u16_tchDetFrmGrvTolDiag;               //29A - tch_frm_grv_tol_diag - tch_det_frm_grv_tol_diag
	uint8_t u8_grvTchDetFrmCnt;                     //29C - grv_tch_frm_cnt - grv_tch_det_frm_cnt
	__packed uint16_t u16_dynamicIslandMaxStrThres; //29D - dynamic_island_max_str_thres - dynamic_island_max_str_thres
	__packed uint16_t u16_dynamicIslandMaxThres;    //29F - dynamic_island_max_thres - dynamic_island_max_thres
	uint8_t u8_dynamicIslandMinThres;               //2A1 - dynamic_island_min_thres - dynamic_island_min_thres
	uint16_t u16_dynamicSumStrMaxThres;             //2A2 - dynamic_sum_str_max_thres - dynamic_sum_str_max_thres
	uint16_t u16_dynamicSumStrMinThres;             //2A4 - dynamic_sum_str_min_thres - dynamic_sum_str_min_thres
	uint16_t u16_fgrEccenGameMaxThres;              //2A6 - fgr_eccen_game_max_thres - fgr_eccen_game_max_thres
	uint16_t u16_fgrEccenGameMinThres;              //2A8 - fgr_eccen_game_min_thres - fgr_eccen_game_min_thres
	__packed uint16_t b1_msPalmDetEn        : 1;    //2AA - palm_det_cfg - ms_palm_det_en
	__packed uint16_t b15_reserved2AA_1_15  : 15;   //2AA - palm_det_cfg - reserved
	uint16_t u16_palmMtDetThres;                    //2AC - palm_mt_det_thres - palm_mt_det_thres
	uint8_t u8_palmMaxForceLen;                     //2AE - palm_max_force_len - palm_max_force_len
	uint8_t u8_palmMinSenseLen;                     //2AF - palm_min_sense_len - palm_min_sense_len
	uint8_t u8_palmMinContSenseArea;                //2B0 - palm_min_cont_sense_area - palm_min_cont_sense_area
	__packed uint16_t u16_palmSsDiffSlpTol;         //2B1 - palm_ss_diff_slp_tol - palm_ss_diff_slp_tol
	__packed uint8_t b4_palmDbncIn          : 4;    //2B3 - palm_det_dbnc - palm_dbnc_in
	__packed uint8_t b4_palmDbncOut         : 4;    //2B3 - palm_det_dbnc - palm_dbnc_out
	uint16_t u16_lpEdgeFgrThresHyst;                //2B4 - lp_edge_fgr_thres_hyst - lp_edge_fgr_thres_hyst
	uint16_t u16_lpFgrThres;                        //2B6 - lp_fgr_thres - lp_fgr_thres
	uint8_t u8_lpFgrThresHyst;                      //2B8 - lp_fgr_thres_hyst - lp_fgr_thres_hyst
	__packed uint16_t u16_fgrThres;                 //2B9 - fgr_thres - fgr_thres
	uint8_t u8_fgrThresHyst;                        //2BB - fgr_thres_hyst - fgr_thres_hyst
	uint8_t u8_noiseAddFgrThres;                    //2BC - noise_add_fgr_thres - noise_add_fgr_thres
	__packed uint16_t u16_fgrThresNl2;              //2BD - fgr_thres_nl2 - fgr_thres_nl2
	uint8_t u8_fgrMinArea;                          //2BF - fgr_min_area - fgr_min_area
	uint8_t u8_fgrMaxArea;                          //2C0 - fgr_max_area - fgr_max_area
	uint8_t u8_fgrMaxIslandLen;                     //2C1 - fgr_max_island_len - fgr_max_island_len
	uint8_t u8_noiseAddMinFgrArea;                  //2C2 - noise_add_min_fgr_area - noise_add_min_fgr_area
	uint8_t u8_noiseAddMinFgrAreaCorner;            //2C3 - noise_add_min_fgr_area_corner - noise_add_min_fgr_area_corner
	uint16_t u16_fgrEccenThres;                     //2C4 - fgr_eccen_thres - fgr_eccen_thres
	uint16_t u16_fgrEccenNoiseThres;                //2C6 - fgr_eccen_noise_thres - fgr_eccen_noise_thres
	uint8_t u8_fgrSepMaxArea;                       //2C8 - fgr_sep_max_area - fgr_sep_max_area
	__packed uint16_t u16_fgrPeakIslandThres;       //2C9 - fgr_peak_island_thres - fgr_peak_island_thres
	__packed uint16_t u16_fgrPeakEdgeIslandThres;   //2CB - fgr_peak_edge_island_thres - fgr_peak_edge_island_thres
	__packed uint16_t u16_glvPeakIslandThres;       //2CD - glv_peak_island_thres - glv_peak_island_thres
	__packed uint16_t u16_lpEdgeFgrThres;           //2CF - lp_edge_fgr_thres - lp_edge_fgr_thres
	uint8_t u8_reserved2D1;                         //2D1 - reserved
	__packed uint16_t b1_styEn              : 1;    //2D2 - sty_cfg - sty_en
	__packed uint16_t b1_styRmfCoorEn       : 1;    //2D2 - sty_cfg - sty_rmf_coor_en
	__packed uint16_t b1_styRmfGaussianEn   : 1;    //2D2 - sty_cfg - sty_rmf_gaussian_en
	__packed uint16_t b1_styDsblGaussianEdge    : 1;    //2D2 - sty_cfg - sty_dsbl_gaussian_edge
	__packed uint16_t b12_reserved2D2_4_15  : 12;   //2D2 - sty_cfg - reserved
	uint16_t u16_styThres;                          //2D4 - sty_thres - sty_thres
	uint8_t u8_styThresHyst;                        //2D6 - sty_thres_hyst - sty_thres_hyst
	uint8_t u8_noiseAddStyThres;                    //2D7 - noise_add_sty_thres - noise_add_sty_thres
	uint16_t u16_styMaxSumStr;                      //2D8 - sty_max_sum_str - sty_max_sum_str
	uint8_t u8_styMaxTchAreaNl1;                    //2DA - sty_max_tch_area_nl1 - sty_max_tch_area_nl1
	uint8_t u8_styMinArea;                          //2DB - sty_min_area - sty_min_area
	uint8_t u8_noiseAddMinStyArea;                  //2DC - noise_add_min_sty_area - noise_add_min_sty_area
	uint8_t u8_styMaxArea;                          //2DD - sty_max_area - sty_max_area
	uint8_t u8_styMaxEdgeArea;                      //2DE - sty_max_edge_area - sty_max_edge_area
	__packed uint8_t b4_rmfCenMinStrWgh     : 4;    //2DF - rmf_cen_wgh - rmf_cen_min_str_wgh
	__packed uint8_t b4_rmfCenMaxStrWgh     : 4;    //2DF - rmf_cen_wgh - rmf_cen_max_str_wgh
	uint16_t u16_rmfCenMinStr;                      //2E0 - rmf_cen_min_str - rmf_cen_min_str
	uint16_t u16_rmfCenMaxStr;                      //2E2 - rmf_cen_max_str - rmf_cen_max_str
	uint16_t u16_mtAxisMrgMaxDistGameThres;         //2E4 - mt_axis_mrg_max_dist_game_thres - mt_axis_mrg_max_dist_game_thres
	__packed uint16_t b1_glvEn              : 1;    //2E6 - glove_cfg - glv_en
	__packed uint16_t b1_glvTchAreaChkEn    : 1;    //2E6 - glove_cfg - glv_tch_area_chk_en
	__packed uint16_t b2_reserved2E6_2_3    : 2;    //2E6 - glove_cfg - reserved
	__packed uint16_t b1_glvTchSepEn        : 1;    //2E6 - glove_cfg - glv_tch_sep_en
	__packed uint16_t b11_reserved2E6_5_15  : 11;   //2E6 - glove_cfg - reserved
	uint16_t u16_glvThres;                          //2E8 - glv_thres - glv_thres
	uint8_t u8_glvThresHyst;                        //2EA - glv_thres_hyst - glv_thres_hyst
	uint8_t u8_noiseAddGlvThres;                    //2EB - noise_add_glv_thres - noise_add_glv_thres
	uint8_t u8_glvMinAreaGlvMode;                   //2EC - glv_min_area_glv_mode - glv_min_area_glv_mode
	uint8_t u8_glvMinAreaTchMode;                   //2ED - glv_min_area_tch_mode - glv_min_area_tch_mode
	uint8_t u8_glvEdgeMinAreaGlvMode;               //2EE - glv_edge_min_area_glv_mode - glv_edge_min_area_glv_mode
	uint8_t u8_glvEdgeMinAreaTchMode;               //2EF - glv_edge_min_area_tch_mode - glv_edge_min_area_tch_mode
	uint8_t u8_noiseAddMinGlvArea;                  //2F0 - noise_add_min_glv_area - noise_add_min_glv_area

	__packed uint8_t b4_glvInDlyTchMode     : 4;    //2F1 - glv_tch_in_out_dly - glv_in_dly_tch_mode
	__packed uint8_t b4_glvTchOutAddDly     : 4;    //2F1 - glv_tch_in_out_dly - glv_tch_out_add_dly
	__packed uint8_t b4_glvInDlyGlvMode     : 4;    //2F2 - glv_in_dly_glv_mode - glv_in_dly_glv_mode
	__packed uint8_t b4_glvInDlyGlvMode2    : 4;    //2F2 - glv_in_dly_glv_mode - glv_in_dly_glv_mode_2
	__packed uint8_t b4_glvInDlyGlvModeNoisy    : 4;    //2F3 - glv_in_dly_glv_mode_noisy - glv_in_dly_glv_mode_noisy
	__packed uint8_t b4_glvInDlyGlvModeNoisy2   : 4;    //2F3 - glv_in_dly_glv_mode_noisy - glv_in_dly_glv_mode_noisy_2
	uint16_t u16_glvTchGroupPeakThres;              //2F4 - glv_tch_group_peak_thres - glv_tch_group_peak_thres
	uint8_t u8_glvTchGroupPeakThresHyst;            //2F6 - glv_tch_group_peak_thres_hyst - glv_tch_group_peak_thres_hyst
	uint8_t u8_glvTchAreaCnt;                       //2F7 - glv_tch_area_cnt - glv_tch_area_cnt
	uint16_t u16_glvTchMaxPeakThres;                //2F8 - glv_tch_max_peak_thres - glv_tch_max_peak_thres
	uint8_t u8_glvModeFgrThresHyst;                 //2FA - glv_mode_fgr_thres_hyst - glv_mode_fgr_thres_hyst
	__packed uint16_t u16_glvTchAreaThres;          //2FB - glv_tch_area_thres - glv_tch_area_thres
	uint8_t u8_glvMaxTchArea;                       //2FD - glv_max_tch_area - glv_max_tch_area
	uint8_t u8_fgrToGlvDbnceCnt;                    //2FE - fgr_to_glv_dbnce_cnt - fgr_to_glv_dbnce_cnt
	uint8_t u8_glvCmmValidChHiThres;                //2FF - glv_cmm_valid_ch_hi_thres - glv_cmm_valid_ch_hi_thres
	uint8_t u8_glvCmmValidChLowThres;               //300 - glv_cmm_valid_ch_low_thres - glv_cmm_valid_ch_low_thres
	__packed uint16_t u16_glvModeFgrThres;          //301 - glv_mode_fgr_thres - glv_mode_fgr_thres
	uint8_t u8_glvTchAreaCntHyst;                   //303 - glv_tch_area_cnt_hyst - glv_tch_area_cnt_hyst
	uint16_t u16_glvMsAvgCmmThres;                  //304 - glv_ms_avg_cmm_thres - glv_ms_avg_cmm_thres
	uint16_t u16_glvModeBlkStrThres;                //306 - glv_mode_blk_str_thres - glv_mode_blk_str_thres
	uint8_t u8_glvModeBlkTimeMs;                    //308 - glv_mode_blk_time_ms - glv_mode_blk_time_ms
	__packed uint16_t u16_glvDisSelfForceBaselineP2p;   //309 - glv_dis_self_force_baseline_p2p - glv_dis_self_force_baseline_p2p
	uint8_t u8_coorIirTolThres;                     //30B - coor_iir_tol - coor_iir_tol_thres
	__packed uint16_t b1_tchMrgChkEn        : 1;    //30C - tch_post_process_cfg - tch_mrg_chk_en
	__packed uint16_t b1_lvcEn              : 1;    //30C - tch_post_process_cfg - lvc_en
	__packed uint16_t b1_tchBtwFltrEn       : 1;    //30C - tch_post_process_cfg - tch_btw_fltr_en
	__packed uint16_t b1_tchKmfltrEn        : 1;    //30C - tch_post_process_cfg - tch_kmfltr_en
	__packed uint16_t b1_reserved30C_4_4    : 1;    //30C - tch_post_process_cfg - reserved
	__packed uint16_t b1_tchCoorIirEn       : 1;    //30C - tch_post_process_cfg - tch_coor_iir_en
	__packed uint16_t b1_tchMtolEn          : 1;    //30C - tch_post_process_cfg - tch_mtol_en
	__packed uint16_t b1_tchMtolAlwysRptEn  : 1;    //30C - tch_post_process_cfg - tch_mtol_alwys_rpt_en
	__packed uint16_t b1_tchFastSwipeCoorEn : 1;    //30C - tch_post_process_cfg - tch_fast_swipe_coor_en
	__packed uint16_t b1_tchFastSwipeIirEn  : 1;    //30C - tch_post_process_cfg - tch_fast_swipe_iir_en
	__packed uint16_t b1_noiseBlkWeakTchEn  : 1;    //30C - tch_post_process_cfg - noise_blk_weak_tch_en
	__packed uint16_t b1_tchMtolRefUpdateEn : 1;    //30C - tch_post_process_cfg - tch_mtol_ref_update_en
	__packed uint16_t b1_tchInCoorRptEn     : 1;    //30C - tch_post_process_cfg - tch_in_coor_rpt_en
	__packed uint16_t b1_trkFastSwipeEn     : 1;    //30C - tch_post_process_cfg - trk_fast_swipe_en
	__packed uint16_t b1_tchCurveFitEn      : 1;    //30C - tch_post_process_cfg - tch_curve_fit_en
	__packed uint16_t b1_curveEstimateForTrackEn    : 1;    //30C - tch_post_process_cfg - curve_estimate_for_track_en
	uint16_t u16_minTrkRad;                         //30E - min_trk_rad - min_trk_rad
	uint16_t u16_minTrkRadAftrFrmDrop;              //310 - min_trk_rad_aftr_frm_drop - min_trk_rad_aftr_frm_drop
	uint16_t u16_noiseMinTrkRad;                    //312 - noise_min_trk_rad - noise_min_trk_rad
	uint16_t u16_noiseAddMinTrkRad;                 //314 - noise_add_min_trk_rad - noise_add_min_trk_rad
	uint16_t u16_noiseTrkSpeedThres;                //316 - noise_trk_speed_thres - noise_trk_speed_thres
	uint8_t u8_trkRadMul;                           //318 - trk_rad_mul - trk_rad_mul
	__packed uint16_t u16_minTrkRadAftrTouchOn;     //319 - min_trk_rad_aftr_touch_on - min_trk_rad_aftr_touch_on
	uint8_t u8_trkPredictFastTchSpeed;              //31B - trk_predict_fast_tch_speed - trk_predict_fast_tch_speed
	uint8_t u8_trkRadFastSwipeMul12;                //31C - trk_rad_fast_swipe_mul_12 - trk_rad_fast_swipe_mul_12
	uint8_t u8_trkRadFastSwipeMul23;                //31D - trk_rad_fast_swipe_mul_23 - trk_rad_fast_swipe_mul_23
	uint8_t u8_trkFastSwipeSpeed;                   //31E - trk_fast_swipe_speed - trk_fast_swipe_speed
	uint8_t u8_trkRadMulFastSwipe;                  //31F - trk_rad_mul_fast_swipe - trk_rad_mul_fast_swipe
	uint8_t u8_trkFastSwipeDbncOut;                 //320 - trk_fast_swipe_dbnc_out - trk_fast_swipe_dbnc_out
	__packed uint16_t u16_tchFastSwipeMinDist;      //321 - tch_fast_swipe_min_dist - tch_fast_swipe_min_dist
	__packed uint16_t u16_tchFastSwipeMinDistNoisy; //323 - tch_fast_swipe_min_dist_noisy - tch_fast_swipe_min_dist_noisy
	__packed uint16_t u16_tchFastSwipeSpeed;        //325 - tch_fast_swipe_speed - tch_fast_swipe_speed
	__packed uint16_t u16_tchFastSwipeSpeedNoisy;   //327 - tch_fast_swipe_noisy_speed - tch_fast_swipe_speed_noisy
	uint8_t u8_tchOutMrgChkDbnc;                    //329 - tch_out_mrg_chk_dbnc - tch_out_mrg_chk_dbnc
	uint16_t u16_tchMrgDist;                        //32A - tch_mrg_dist - tch_mrg_dist
	uint16_t u16_tchMrgDistHyst;                    //32C - tch_mrg_dist_hyst - tch_mrg_dist_hyst
	uint16_t u16_tchDetFrmCntMrgDist;               //32E - tch_det_frm_cnt_mrg_dist - tch_det_frm_cnt_mrg_dist
	uint8_t u8_tchMrgDistDetFrmCnt;                 //330 - tch_mrg_dist_det_frm_cnt - tch_mrg_dist_det_frm_cnt
	__packed uint8_t b5_tchCurfitOtpSplIdx  : 5;    //331 - tch_curfit_otp_spl_idx - tch_curfit_otp_spl_idx
	__packed uint8_t b1_tchCurfitOtpHalfSpl : 1;    //331 - tch_curfit_otp_spl_idx - tch_curfit_otp_half_spl
	__packed uint8_t b2_reserved331_6_7     : 2;    //331 - tch_curfit_otp_spl_idx - reserved
	__packed uint8_t b5_tchCurfitOtpSplIdxNoisy : 5;    //332 - tch_curfit_otp_spl_idx_noisy - tch_curfit_otp_spl_idx_noisy
	__packed uint8_t b3_reserved332_5_7     : 3;    //332 - tch_curfit_otp_spl_idx_noisy - reserved
	__packed uint8_t b4_tchInDly            : 4;    //333 - tch_in_dly - tch_in_dly
	__packed uint8_t b4_tchInDly2           : 4;    //333 - tch_in_dly - tch_in_dly_2
	__packed uint8_t b4_tchInDlyNoisy       : 4;    //334 - tch_in_dly_noisy - tch_in_dly_noisy
	__packed uint8_t b4_tchInDly2Noisy      : 4;    //334 - tch_in_dly_noisy - tch_in_dly_2_noisy
	__packed uint8_t b4_tchInAddDlyLngShape : 4;    //335 - tch_in_add_dly_lng_shape - tch_in_add_dly_lng_shape
	__packed uint8_t b4_tchInDly3           : 4;    //335 - tch_in_add_dly_lng_shape - tch_in_dly_3
	__packed uint8_t b4_tchInAddDlyEdge     : 4;    //336 - tch_in_add_dly_edge - tch_in_add_dly_edge
	__packed uint8_t b4_reserved336_4_7     : 4;    //336 - tch_in_add_dly_edge - reserved
	__packed uint8_t b4_hiddenTchInDly      : 4;    //337 - hidden_tch_in_dly - hidden_tch_in_dly
	__packed uint8_t b4_reserved337_4_7     : 4;    //337 - hidden_tch_in_dly - reserved
	__packed uint8_t b4_tchOutDly           : 4;    //338 - tch_out_dly - tch_out_dly
	__packed uint8_t b4_tchOutDlyNoisy      : 4;    //338 - tch_out_dly - tch_out_dly_noisy
	__packed uint8_t b4_tchOutDlyLngTapCnt  : 4;    //339 - tch_out_dly_lng_tap - tch_out_dly_lng_tap_cnt
	__packed uint8_t b4_tchOutAddDlyLngTap  : 4;    //339 - tch_out_dly_lng_tap - tch_out_add_dly_lng_tap
	__packed uint8_t b4_hiddenTchOutDly     : 4;    //33A - hidden_tch_out_dly - hidden_tch_out_dly
	__packed uint8_t b4_reserved33A_4_7     : 4;    //33A - hidden_tch_out_dly - reserved
	__packed uint8_t b4_lvcVelIirWgh        : 4;    //33B - lvc_vel_iir_wgh - lvc_vel_iir_wgh
	__packed uint8_t b4_reserved33B_4_7     : 4;    //33B - lvc_vel_iir_wgh - reserved
	uint16_t u16_lvcMaxCalcRptTime;                 //33C - lvc_max_calc_rpt_time - lvc_max_calc_rpt_time
	uint8_t u8_lvcVelScalePer;                      //33E - lvc_vel_scale_per - lvc_vel_scale_per
	__packed uint8_t b4_btwCutoffIdxStep    : 4;    //33F - btw_cfg - btw_cutoff_idx_step
	__packed uint8_t b4_btwStartIdx         : 4;    //33F - btw_cfg - btw_start_idx
	__packed uint8_t b4_glvBtwCutoffIdx     : 4;    //340 - btw_cutoff_idx - glv_btw_cutoff_idx
	__packed uint8_t b4_mrgTchBtwCutoffIdx  : 4;    //340 - btw_cutoff_idx - mrg_tch_btw_cutoff_idx
	__packed uint16_t u16_btwSpeedThresHi;          //341 - btw_speed_thres_hi - btw_speed_thres_hi
	__packed uint16_t u16_btwSpeedThresLo;          //343 - btw_speed_thres_lo - btw_speed_thres_lo
	uint8_t u8_btwMinCutoffIdx;                     //345 - btw_min_cutoff_idx - btw_min_cutoff_idx
	uint8_t u8_btwMaxCutoffIdx;                     //346 - btw_max_cutoff_idx - btw_max_cutoff_idx
	uint8_t u8_btwMultiTchMaxCutoffIdx;             //347 - btw_multi_tch_max_cutoff_idx - btw_multi_tch_max_cutoff_idx
	uint8_t u8_btwMaxCutoffIdxNoise;                //348 - btw_max_cutoff_idx_noise - btw_max_cutoff_idx_noise
	__packed uint32_t u32_kmEzSqScaled;             //349 - km_ez_sq_scaled - km_ez_sq_scaled
	__packed uint16_t u16_kmExSq;                   //34D - km_ex_sq - km_ex_sq
	uint8_t u8_kmAccFltrW0;                         //34F - km_acc_fltr_w0 - km_acc_fltr_w0
	uint8_t u8_tchMtolFtapCnt;                      //350 - tch_mtol_ftap_cnt - tch_mtol_ftap_cnt
	uint8_t u8_tchMtolFtapXyTol2;                   //351 - tch_mtol_ftap_xy_tol2 - tch_mtol_ftap_xy_tol2
	uint8_t u8_tchMtolFtapCntNoise;                 //352 - tch_mtol_ftap_cnt_noise - tch_mtol_ftap_cnt_noise
	uint8_t u8_tchMtolFtapXyTol2Noise;              //353 - tch_mtol_ftap_xy_tol2_noise - tch_mtol_ftap_xy_tol2_noise
	uint8_t u8_tchMtolXyTol1;                       //354 - tch_mtol_xy_tol1 - tch_mtol_xy_tol1
	uint8_t u8_tchMtolXyTol2;                       //355 - tch_mtol_xy_tol2 - tch_mtol_xy_tol2
	__packed uint8_t b4_tchMtolMinWgh       : 4;    //356 - tch_mtol_wgh - tch_mtol_min_wgh
	__packed uint8_t b4_tchMtolMaxWgh       : 4;    //356 - tch_mtol_wgh - tch_mtol_max_wgh
	uint8_t u8_tchMtolXyTol1Noise;                  //357 - tch_mtol_xy_tol1_noise - tch_mtol_xy_tol1_noise
	uint8_t u8_tchMtolXyTol2Noise;                  //358 - tch_mtol_xy_tol2_noise - tch_mtol_xy_tol2_noise
	__packed uint8_t b4_tchMtolMinWghNoise  : 4;    //359 - tch_mtol_wgh_noise - tch_mtol_min_wgh_noise
	__packed uint8_t b4_tchMtolMaxWghNoise  : 4;    //359 - tch_mtol_wgh_noise - tch_mtol_max_wgh_noise
	uint8_t u8_mrgTchMtolXyTol1;                    //35A - mrg_tch_mtol_xy_tol1 - mrg_tch_mtol_xy_tol1
	uint8_t u8_mrgTchMtolXyTol2;                    //35B - mrg_tch_mtol_xy_tol2 - mrg_tch_mtol_xy_tol2
	__packed uint8_t b4_mrgTchMtolMinWgh    : 4;    //35C - mrg_tch_mtol_wgh - mrg_tch_mtol_min_wgh
	__packed uint8_t b4_mrgTchMtolMaxWgh    : 4;    //35C - mrg_tch_mtol_wgh - mrg_tch_mtol_max_wgh
	uint8_t u8_mrgTchMtolXyTol1Noise;               //35D - mrg_tch_mtol_xy_tol1_noise - mrg_tch_mtol_xy_tol1_noise
	uint8_t u8_mrgTchMtolXyTol2Noise;               //35E - mrg_tch_mtol_xy_tol2_noise - mrg_tch_mtol_xy_tol2_noise
	__packed uint8_t b4_mrgTchMtolMinWghNoise   : 4;    //35F - mrg_tch_mtol_wgh_noise - mrg_tch_mtol_min_wgh_noise
	__packed uint8_t b4_mrgTchMtolMaxWghNoise   : 4;    //35F - mrg_tch_mtol_wgh_noise - mrg_tch_mtol_max_wgh_noise
	uint8_t u8_tchMtolRefUpdateCnt;                 //360 - tch_mtol_ref_update_cnt - tch_mtol_ref_update_cnt
	uint8_t u8_tchMtolRefUpdateCntNoise;            //361 - tch_mtol_ref_update_cnt_noise - tch_mtol_ref_update_cnt_noise
	__packed uint8_t b4_minGlvXyWghEdge     : 4;    //362 - glv_xy_wgh_edge - min_glv_xy_wgh_edge
	__packed uint8_t b4_maxGlvXyWghEdge     : 4;    //362 - glv_xy_wgh_edge - max_glv_xy_wgh_edge
	__packed uint8_t b4_minTchXyWghEdge     : 4;    //363 - tch_xy_wgh_edge - min_tch_xy_wgh_edge
	__packed uint8_t b4_maxTchXyWghEdge     : 4;    //363 - tch_xy_wgh_edge - max_tch_xy_wgh_edge
	__packed uint8_t b4_minTchXyWghNoisyEdge    : 4;    //364 - tch_xy_wgh_noisy_edge - min_tch_xy_wgh_noisy_edge
	__packed uint8_t b4_maxTchXyWghNoisyEdge    : 4;    //364 - tch_xy_wgh_noisy_edge - max_tch_xy_wgh_noisy_edge
	__packed uint8_t b4_minTchXyWghNoisy    : 4;    //365 - tch_xy_wgh_noisy - min_tch_xy_wgh_noisy
	__packed uint8_t b4_maxTchXyWghNoisy    : 4;    //365 - tch_xy_wgh_noisy - max_tch_xy_wgh_noisy
	__packed uint8_t b4_minTchXyWghNoisyMultif  : 4;    //366 - tch_xy_wgh_noisy_multif - min_tch_xy_wgh_noisy_multif
	__packed uint8_t b4_maxTchXyWghNoisyMultif  : 4;    //366 - tch_xy_wgh_noisy_multif - max_tch_xy_wgh_noisy_multif
	__packed uint16_t u16_minTchXySpeedNoisy;       //367 - min_tch_xy_speed_noisy - min_tch_xy_speed_noisy
	__packed uint16_t u16_maxTchXySpeedNoisy;       //369 - max_tch_xy_speed_noisy - max_tch_xy_speed_noisy
	__packed uint8_t b4_minWtrXyWgh         : 4;    //36B - wtr_xy_wgh - min_wtr_xy_wgh
	__packed uint8_t b4_maxWtrXyWgh         : 4;    //36B - wtr_xy_wgh - max_wtr_xy_wgh
	__packed uint8_t b4_minWtrXyWghMultif   : 4;    //36C - wtr_xy_wgh_multif - min_wtr_xy_wgh_multif
	__packed uint8_t b4_maxWtrXyWghMultif   : 4;    //36C - wtr_xy_wgh_multif - max_wtr_xy_wgh_multif
	__packed uint16_t u16_minWtrXySpeed;            //36D - min_wtr_xy_speed - min_wtr_xy_speed
	__packed uint16_t u16_maxWtrXySpeed;            //36F - max_wtr_xy_speed - max_wtr_xy_speed
	__packed uint8_t b4_minFltXyWgh         : 4;    //371 - flt_xy_wgh - min_flt_xy_wgh
	__packed uint8_t b4_maxFltXyWgh         : 4;    //371 - flt_xy_wgh - max_flt_xy_wgh
	__packed uint8_t b4_minFltXyWghMultif   : 4;    //372 - flt_xy_wgh_multf - min_flt_xy_wgh_multif
	__packed uint8_t b4_maxFltXyWghMultif   : 4;    //372 - flt_xy_wgh_multf - max_flt_xy_wgh_multif
	__packed uint16_t u16_minFltXySpeed;            //373 - min_flt_xy_speed - min_flt_xy_speed
	__packed uint16_t u16_maxFltXySpeed;            //375 - max_flt_xy_speed - max_flt_xy_speed
	__packed uint8_t b4_minFgrXyWgh         : 4;    //377 - fgr_xy_wgh - min_fgr_xy_wgh
	__packed uint8_t b4_maxFgrXyWgh         : 4;    //377 - fgr_xy_wgh - max_fgr_xy_wgh
	__packed uint8_t b4_minFgrXyWghMultif   : 4;    //378 - fgr_xy_wgh_multif - min_fgr_xy_wgh_multif
	__packed uint8_t b4_maxFgrXyWghMultif   : 4;    //378 - fgr_xy_wgh_multif - max_fgr_xy_wgh_multif
	__packed uint8_t b4_minStyXyWgh         : 4;    //379 - sty_xy_wgh - min_sty_xy_wgh
	__packed uint8_t b4_maxStyXyWgh         : 4;    //379 - sty_xy_wgh - max_sty_xy_wgh
	__packed uint8_t b4_minGlvXyWgh         : 4;    //37A - glv_xy_wgh - min_glv_xy_wgh
	__packed uint8_t b4_maxGlvXyWgh         : 4;    //37A - glv_xy_wgh - max_glv_xy_wgh
	__packed uint8_t b4_tchZWgh             : 4;    //37B - tch_wgh0 - tch_z_wgh
	__packed uint8_t b4_tchXyWghStep        : 4;    //37B - tch_wgh0 - tch_xy_wgh_step
	__packed uint8_t b4_fastSwipeXyWgh      : 4;    //37C - tch_wgh1 - fast_swipe_xy_wgh
	__packed uint8_t b4_fastSwipeXyWghNoisy : 4;    //37C - tch_wgh1 - fast_swipe_xy_wgh_noisy
	__packed uint16_t u16_minTchXySpeed;            //37D - min_tch_xy_speed - min_tch_xy_speed
	__packed uint16_t u16_maxTchXySpeed;            //37F - max_tch_xy_speed - max_tch_xy_speed
	__packed uint16_t u16_minGlvXySpeed;            //381 - min_glv_xy_speed - min_glv_xy_speed
	__packed uint16_t u16_maxGlvXySpeed;            //383 - max_glv_xy_speed - max_glv_xy_speed
	__packed uint8_t b1_firstSlpIirEn       : 1;    //385 - tch_iir_en - first_slp_iir_en
	__packed uint8_t b1_speedIirEn          : 1;    //385 - tch_iir_en - speed_iir_en
	__packed uint8_t b6_reserved385_2_7     : 6;    //385 - tch_iir_en - reserved
	__packed uint8_t b4_firstSlpIirStep     : 4;    //386 - tch_iir_step - first_slp_iir_step
	__packed uint8_t b4_preSlpIirWgh        : 4;    //386 - tch_iir_step - pre_slp_iir_wgh
	uint8_t u8_firstSlpLimitSpeed;                  //387 - first_slp_limit_speed - first_slp_limit_speed
	__packed uint8_t b4_decSpeedIirWgh      : 4;    //388 - speed_iir_wgh - dec_speed_iir_wgh
	__packed uint8_t b4_incSpeedIirWgh      : 4;    //388 - speed_iir_wgh - inc_speed_iir_wgh
	uint8_t u8_noiseTchBlkAvgPerc;                  //389 - noise_tch_blk_avg_perc - noise_tch_blk_avg_perc
	uint16_t u16_noiseTchBlkMinPeakStr;             //38A - noise_tch_blk_min_peak_str - noise_tch_blk_min_peak_str
	uint8_t u8_tchInCoorRptXThres;                  //38C - tch_in_coor_rpt_x_thres - tch_in_coor_rpt_x_thres
	uint8_t u8_tchInCoorRptYThres;                  //38D - tch_in_coor_rpt_y_thres - tch_in_coor_rpt_y_thres
	uint16_t u16_tchMrgDistNoisy;                   //38E - tch_mrg_dist_noisy - tch_mrg_dist_noisy
	uint16_t u16_tchMrgDistHystNoisy;               //390 - tch_mrg_dist_hyst_noisy - tch_mrg_dist_hyst_noisy
	uint16_t u16_coorIirEdgeXTopWidth;              //392 - coor_iir_edge_x_top_width - coor_iir_edge_x_top_width
	uint16_t u16_coorIirEdgeXBtmWidth;              //394 - coor_iir_edge_x_btm_width - coor_iir_edge_x_btm_width
	uint16_t u16_coorIirEdgeYTopWidth;              //396 - coor_iir_edge_y_top_width - coor_iir_edge_y_top_width
	uint16_t u16_coorIirEdgeYBtmWidth;              //398 - coor_iir_edge_y_btm_width - coor_iir_edge_y_btm_width
	__packed uint8_t b1_chkBncBackEn        : 1;    //39A - chk_bnc_back_en - chk_bnc_back_en
	__packed uint8_t b1_rptBorderLimitEn    : 1;    //39A - chk_bnc_back_en - rpt_border_limit_en
	__packed uint8_t b6_reserved39A_2_7     : 6;    //39A - chk_bnc_back_en - reserved
	__packed uint16_t u16_bncBackAddSpeed;          //39B - bnc_back_add_speed - bnc_back_add_speed
	uint8_t u8_tchTypeBorderLeft;                   //39D - border_limit_area - tch_type_border_left
	uint8_t u8_tchTypeBorderRight;                  //39D - border_limit_area - tch_type_border_right
	uint8_t u8_tchTypeBorderTop;                    //39D - border_limit_area - tch_type_border_top
	uint8_t u8_tchTypeBorderBottom;                 //39D - border_limit_area - tch_type_border_bottom
	__packed uint8_t b5_tchCurfitOptSplIdxAxisMrg   : 5;    //3A1 - mt_axis_cfg - tch_curfit_opt_spl_idx_axis_mrg
	__packed uint8_t b2_reserved3A1_5_6     : 2;    //3A1 - mt_axis_cfg - reserved
	__packed uint8_t b1_mtAxisMrgEn         : 1;    //3A1 - mt_axis_cfg - mt_axis_mrg_en
	uint8_t u8_mtAxisSumRowThres;                   //3A2 - mt_axis_avg_row_thres - mt_axis_sum_row_thres
	uint8_t u8_mtAxisSumColThres;                   //3A3 - mt_axis_avg_col_thres - mt_axis_sum_col_thres
	uint8_t u8_mtAxisSumIirWgh;                     //3A4 - mt_axis_avg_iir_wgh - mt_axis_sum_iir_wgh
	uint8_t u8_mtAxisMrgMaxTchCnt;                  //3A5 - mt_axis_mrg_max_node_cnt - mt_axis_mrg_max_tch_cnt
	uint16_t u16_mtAxisGrvThres;                    //3A6 - mt_axis_grv_thres - mt_axis_grv_thres
	uint16_t u16_mtAxisSumMaxThres;                 //3A8 - mt_axis_sum_max_thres - mt_axis_sum_max_thres
	uint16_t u16_mtAxisSumMaxHyst;                  //3AA - mt_axis_sum_max_hyst - mt_axis_sum_max_hyst
	uint16_t u16_mtAxisMrgMaxDistThres;             //3AC - mt_axis_mrg_max_dist_thres - mt_axis_mrg_max_dist_thres
	uint16_t u16_mtAxisMrgMaxDistHyst;              //3AE - mt_axis_mrg_max_dist_hyst - mt_axis_mrg_max_dist_hyst
	uint8_t u8_mtAxisMrgMaxBoundCnt;                //3B0 - mt_axis_mrg_max_bound_cnt - mt_axis_mrg_max_bound_cnt
	uint8_t u8_mtAxisMrgMaxBoundCntNoisy;           //3B1 - mt_axis_mrg_max_bound_cnt_noisy - mt_axis_mrg_max_bound_cnt_noisy
	uint16_t u16_mtAxisSumMaxThresNoisy;            //3B2 - mt_axis_sum_max_thres_noisy - mt_axis_sum_max_thres_noisy
	uint16_t u16_mtAxisMrgMaxDistThresNoisy;        //3B4 - mt_axis_mrg_max_dist_thres_noisy - mt_axis_mrg_max_dist_thres_noisy
	uint16_t u16_mtAxisGrvThresNoisy;               //3B6 - mt_axis_grv_thres_noisy - mt_axis_grv_thres_noisy
	uint16_t u16_mtAxisSumPeakThres;                //3B8 - mt_axis_sum_peak_thres - mt_axis_sum_peak_thres
	uint16_t u16_mtAxisSumPeakThresNoisy;           //3BA - mt_axis_sum_peak_thres_noisy - mt_axis_sum_peak_thres_noisy
	uint16_t u16_mtAxisMrgMultiDistThres;           //3BC - mt_axis_mrg_multi_dist_thres - mt_axis_mrg_multi_dist_thres
	uint16_t u16_mtAxisSumMultiBoundMaxThres;       //3BE - mt_axis_sum_multi_bnd_max_thres - mt_axis_sum_multi_bound_max_thres
	uint8_t u8_mtAxisPeakIslandCnt;                 //3C0 - mt_axis_peak_island_cnt - mt_axis_peak_island_cnt
	uint8_t u8_axisMtExpandNode;                    //3C1 - axis_mt_expand_node - axis_mt_expand_node
	uint8_t u8_mtAxisSsSenseStrThres;               //3C2 - mt_axis_ss_sense_str_thres - mt_axis_ss_sense_str_thres
	uint8_t u8_mtAxisSsForceStrThres;               //3C3 - mt_axis_ss_force_str_thres - mt_axis_ss_force_str_thres
	uint16_t u16_mtAxisSsGrvThres;                  //3C4 - mt_axis_ss_grv_thres - mt_axis_ss_grv_thres
	uint8_t u8_reserved3C6;                         //3C6 - reserved
	uint8_t u8_msResStrCh;                          //3C7 - ms_res_str_ch - ms_res_str_ch
	uint16_t u16_msResStrFltThresLow;               //3C8 - ms_res_str_flt_thres_low - ms_res_str_flt_thres_low
	uint16_t u16_msResStrFltThresHigh;              //3CA - ms_res_str_flt_thres_high - ms_res_str_flt_thres_high
	uint16_t u16_msResStrFltPeakThresLow;           //3CC - ms_res_str_flt_peak_thres_low - ms_res_str_flt_peak_thres_low
	uint16_t u16_msResStrFltPeakThresHigh;          //3CE - ms_res_str_flt_peak_thres_high - ms_res_str_flt_peak_thres_high
	uint16_t u16_msResStrFltThresGap;               //3D0 - ms_res_str_flt_thres_gap - ms_res_str_flt_thres_gap
	uint16_t u16_msResStrFltThresGapR0;             //3D2 - ms_res_str_flt_thres_gap_r0 - ms_res_str_flt_thres_gap_r0
	uint8_t u8_tchMtol2AccXTolGameLowSpeed;         //3D4 - tch_mtol2_acc_xy_tol_game_low_speed - tch_mtol2_acc_x_tol_game_low_speed
	uint8_t u8_tchMtol2AccYTolGameLowSpeed;         //3D4 - tch_mtol2_acc_xy_tol_game_low_speed - tch_mtol2_acc_y_tol_game_low_speed
	__packed uint16_t b1_tchAccMtol2En      : 1;    //3D6 - mtol_2_cfg - tch_acc_mtol2_en
	__packed uint16_t b1_tchFtapMtol2En     : 1;    //3D6 - mtol_2_cfg - tch_ftap_mtol2_en
	__packed uint16_t b5_reserved3D6_2_6    : 5;    //3D6 - mtol_2_cfg - reserved
	__packed uint16_t b1_tchInCoorEn        : 1;    //3D6 - mtol_2_cfg - tch_in_coor_en
	__packed uint16_t b8_reserved3D6_8_15   : 8;    //3D6 - mtol_2_cfg - reserved
	uint8_t u8_ftapMtol2EdgeTchTo;                  //3D8 - ftap_mtol2_edge_tch_to - ftap_mtol2_edge_tch_to
	uint8_t u8_ftapMtol2To;                         //3D9 - ftap_mtol2_to - ftap_mtol2_to
	uint8_t u8_ftapMtol2SlowTchSpeedThres;          //3DA - ftap_mtol2_slow_tch_speed_thres - ftap_mtol2_slow_tch_speed_thres
	uint8_t u8_ftapMtol2SlowTchRptRangePercent;     //3DB - ftap_mtol2_slow_tch_rpt_range_percent - ftap_mtol2_slow_tch_rpt_range_percent
	uint8_t u8_ftapMtol2SlowGapCompStep;            //3DC - ftap_mtol2_slow_gap_comp_step - ftap_mtol2_slow_gap_comp_step
	__packed uint8_t b4_tchMtol2FtapIirStep : 4;    //3DD - tch_mtol2_ftap_iir_step - tch_mtol2_ftap_iir_step
	__packed uint8_t b4_reserved3DD_4_7     : 4;    //3DD - tch_mtol2_ftap_iir_step - reserved
	uint8_t u8_tchMtol2FtapXTol;                    //3DE - tch_mtol2_ftap_xy_tol - tch_mtol2_ftap_x_tol
	uint8_t u8_tchMtol2FtapYTol;                    //3DE - tch_mtol2_ftap_xy_tol - tch_mtol2_ftap_y_tol
	uint8_t u8_tchMtol2FtapXTolNoisy;               //3E0 - tch_mtol2_ftap_xy_tol_noisy - tch_mtol2_ftap_x_tol_noisy
	uint8_t u8_tchMtol2FtapYTolNoisy;               //3E0 - tch_mtol2_ftap_xy_tol_noisy - tch_mtol2_ftap_y_tol_noisy
	uint8_t u8_minMtol2FtapXySpeed;                 //3E2 - ftap_xy_speed - min_mtol2_ftap_xy_speed
	uint8_t u8_maxMtol2FtapXySpeed;                 //3E2 - ftap_xy_speed - max_mtol2_ftap_xy_speed
	uint8_t u8_minMtol2FtapXySpeedNoisy;            //3E4 - ftap_xy_speed_noisy - min_mtol2_ftap_xy_speed_noisy
	uint8_t u8_maxMtol2FtapXySpeedNoisy;            //3E4 - ftap_xy_speed_noisy - max_mtol2_ftap_xy_speed_noisy
	__packed uint8_t b4_minMtol2FtapXyWgh   : 4;    //3E6 - ftap_xy_wgh - min_mtol2_ftap_xy_wgh
	__packed uint8_t b4_maxMtol2FtapXyWgh   : 4;    //3E6 - ftap_xy_wgh - max_mtol2_ftap_xy_wgh
	__packed uint8_t b4_minMtol2FtapXyWghNoisy  : 4;    //3E7 - ftap_xy_wgh_noisy - min_mtol2_ftap_xy_wgh_noisy
	__packed uint8_t b4_maxMtol2FtapXyWghNoisy  : 4;    //3E7 - ftap_xy_wgh_noisy - max_mtol2_ftap_xy_wgh_noisy
	uint8_t u8_tchMtol2AccXTolLowSpeed;             //3E8 - tch_mtol2_acc_xy_tol_low_speed - tch_mtol2_acc_x_tol_low_speed
	uint8_t u8_tchMtol2AccYTolLowSpeed;             //3E8 - tch_mtol2_acc_xy_tol_low_speed - tch_mtol2_acc_y_tol_low_speed
	uint8_t u8_tchMtol2AccXTolNoisyLowSpeed;        //3EA - tch_mtol2_acc_xy_tol_noisy_low_speed - tch_mtol2_acc_x_tol_noisy_low_speed
	uint8_t u8_tchMtol2AccYTolNoisyLowSpeed;        //3EA - tch_mtol2_acc_xy_tol_noisy_low_speed - tch_mtol2_acc_y_tol_noisy_low_speed
	uint8_t u8_tchMtol2AccMinComp;                  //3EC - tch_mtol2_acc_min_comp - tch_mtol2_acc_min_comp
	uint8_t u8_tchMtol2AccMaxComp;                  //3ED - tch_mtol2_acc_max_comp - tch_mtol2_acc_max_comp
	uint8_t u8_tchMtol2AccCompMinSpeed;             //3EE - tch_mtol2_acc_comp_min_speed - tch_mtol2_acc_comp_min_speed
	uint8_t u8_tchMtol2AccCompMaxSpeed;             //3EF - tch_mtol2_acc_comp_max_speed - tch_mtol2_acc_comp_max_speed
	uint8_t u8_tchMtol2AccEdge2centerTo;            //3F0 - tch_mtol2_acc_edge2center_to - tch_mtol2_acc_edge2center_to
	uint8_t u8_tchMtol2AccXTolGameHighSpeed;        //3F1 - tch_mtol2_acc_xy_tol_game_high_speed - tch_mtol2_acc_x_tol_game_high_speed
	uint8_t u8_tchMtol2AccYTolGameHighSpeed;        //3F1 - tch_mtol2_acc_xy_tol_game_high_speed - tch_mtol2_acc_y_tol_game_high_speed
	__packed uint8_t b1_fgrLnzEn            : 1;    //3F3 - ms_lnz_cfg - fgr_lnz_en
	__packed uint8_t b1_styLnzEn            : 1;    //3F3 - ms_lnz_cfg - sty_lnz_en
	__packed uint8_t b1_glvLnzEn            : 1;    //3F3 - ms_lnz_cfg - glv_lnz_en
	__packed uint8_t b1_grpLnzEn            : 1;    //3F3 - ms_lnz_cfg - grp_lnz_en
	__packed uint8_t b1_trenchLnzEn         : 1;    //3F3 - ms_lnz_cfg - trench_lnz_en
	__packed uint8_t b3_reserved3F3_5_7     : 3;    //3F3 - ms_lnz_cfg - reserved
	uint16_t u16_trenchLnzSBorder;                  //3F4 - trench_lnz_s_border - trench_lnz_s_border
	uint16_t u16_trenchLnzFBorder;                  //3F6 - trench_lnz_f_border - trench_lnz_f_border
	uint8_t u8_msLnzSEntryCnt;                      //3F8 - ms_lnz_table_cfg0 - ms_lnz_s_entry_cnt
	uint8_t u8_msLnzFEntryCnt;                      //3F9 - ms_lnz_table_cfg1 - ms_lnz_f_entry_cnt
	uint8_t u8_fgrLnzTableOffset;                   //3FA - ms_lnz_table_cfg2 - fgr_lnz_table_offset
	uint8_t u8_styLnzTableOffset;                   //3FB - ms_lnz_table_cfg3 - sty_lnz_table_offset
	uint8_t u8_glvLnzTableOffset;                   //3FC - ms_lnz_table_cfg4 - glv_lnz_table_offset
	uint8_t u8_selfLnzTableOffset;                  //3FD - ms_lnz_table_cfg5 - self_lnz_table_offset
	uint8_t u8_grpLnzTableOffset;                   //3FE - ms_lnz_table_cfg6 - grp_lnz_table_offset
	__packed uint16_t u16_msLnzEntry0;              //3FF - ms_lnz_entry_0 - ms_lnz_entry_0
	__packed uint16_t u16_msLnzEntry1;              //401 - ms_lnz_entry_1 - ms_lnz_entry_1
	__packed uint16_t u16_msLnzEntry2;              //403 - ms_lnz_entry_2 - ms_lnz_entry_2
	__packed uint16_t u16_msLnzEntry3;              //405 - ms_lnz_entry_3 - ms_lnz_entry_3
	__packed uint16_t u16_msLnzEntry4;              //407 - ms_lnz_entry_4 - ms_lnz_entry_4
	__packed uint16_t u16_msLnzEntry5;              //409 - ms_lnz_entry_5 - ms_lnz_entry_5
	__packed uint16_t u16_msLnzEntry6;              //40B - ms_lnz_entry_6 - ms_lnz_entry_6
	__packed uint16_t u16_msLnzEntry7;              //40D - ms_lnz_entry_7 - ms_lnz_entry_7
	__packed uint16_t u16_msLnzEntry8;              //40F - ms_lnz_entry_8 - ms_lnz_entry_8
	__packed uint16_t u16_msLnzEntry9;              //411 - ms_lnz_entry_9 - ms_lnz_entry_9
	__packed uint16_t u16_msLnzEntry10;             //413 - ms_lnz_entry_10 - ms_lnz_entry_10
	__packed uint16_t u16_msLnzEntry11;             //415 - ms_lnz_entry_11 - ms_lnz_entry_11
	__packed uint16_t u16_msLnzEntry12;             //417 - ms_lnz_entry_12 - ms_lnz_entry_12
	__packed uint16_t u16_msLnzEntry13;             //419 - ms_lnz_entry_13 - ms_lnz_entry_13
	__packed uint16_t u16_msLnzEntry14;             //41B - ms_lnz_entry_14 - ms_lnz_entry_14
	__packed uint16_t u16_msLnzEntry15;             //41D - ms_lnz_entry_15 - ms_lnz_entry_15
	__packed uint16_t u16_msLnzEntry16;             //41F - ms_lnz_entry_16 - ms_lnz_entry_16
	__packed uint16_t u16_msLnzEntry17;             //421 - ms_lnz_entry_17 - ms_lnz_entry_17
	__packed uint16_t u16_msLnzEntry18;             //423 - ms_lnz_entry_18 - ms_lnz_entry_18
	__packed uint16_t u16_msLnzEntry19;             //425 - ms_lnz_entry_19 - ms_lnz_entry_19
	__packed uint16_t u16_msLnzEntry20;             //427 - ms_lnz_entry_20 - ms_lnz_entry_20
	__packed uint16_t u16_msLnzEntry21;             //429 - ms_lnz_entry_21 - ms_lnz_entry_21
	__packed uint16_t u16_msLnzEntry22;             //42B - ms_lnz_entry_22 - ms_lnz_entry_22
	__packed uint16_t u16_msLnzEntry23;             //42D - ms_lnz_entry_23 - ms_lnz_entry_23
	__packed uint16_t u16_msLnzEntry24;             //42F - ms_lnz_entry_24 - ms_lnz_entry_24
	__packed uint16_t u16_msLnzEntry25;             //431 - ms_lnz_entry_25 - ms_lnz_entry_25
	__packed uint16_t u16_msLnzEntry26;             //433 - ms_lnz_entry_26 - ms_lnz_entry_26
	__packed uint16_t u16_msLnzEntry27;             //435 - ms_lnz_entry_27 - ms_lnz_entry_27
	__packed uint16_t u16_msLnzEntry28;             //437 - ms_lnz_entry_28 - ms_lnz_entry_28
	__packed uint16_t u16_msLnzEntry29;             //439 - ms_lnz_entry_29 - ms_lnz_entry_29
	__packed uint16_t u16_msLnzEntry30;             //43B - ms_lnz_entry_30 - ms_lnz_entry_30
	__packed uint16_t u16_msLnzEntry31;             //43D - ms_lnz_entry_31 - ms_lnz_entry_31
	__packed uint16_t u16_msLnzEntry32;             //43F - ms_lnz_entry_32 - ms_lnz_entry_32
	__packed uint16_t u16_msLnzEntry33;             //441 - ms_lnz_entry_33 - ms_lnz_entry_33
	__packed uint16_t u16_msLnzEntry34;             //443 - ms_lnz_entry_34 - ms_lnz_entry_34
	__packed uint16_t u16_msLnzEntry35;             //445 - ms_lnz_entry_35 - ms_lnz_entry_35
	__packed uint16_t u16_msLnzEntry36;             //447 - ms_lnz_entry_36 - ms_lnz_entry_36
	__packed uint16_t u16_msLnzEntry37;             //449 - ms_lnz_entry_37 - ms_lnz_entry_37
	__packed uint16_t u16_msLnzEntry38;             //44B - ms_lnz_entry_38 - ms_lnz_entry_38
	__packed uint16_t u16_msLnzEntry39;             //44D - ms_lnz_entry_39 - ms_lnz_entry_39
	__packed uint16_t u16_msLnzEntry40;             //44F - ms_lnz_entry_40 - ms_lnz_entry_40
	__packed uint16_t u16_msLnzEntry41;             //451 - ms_lnz_entry_41 - ms_lnz_entry_41
	__packed uint16_t u16_msLnzEntry42;             //453 - ms_lnz_entry_42 - ms_lnz_entry_42
	__packed uint16_t u16_msLnzEntry43;             //455 - ms_lnz_entry_43 - ms_lnz_entry_43
	__packed uint16_t u16_msLnzEntry44;             //457 - ms_lnz_entry_44 - ms_lnz_entry_44
	__packed uint16_t u16_msLnzEntry45;             //459 - ms_lnz_entry_45 - ms_lnz_entry_45
	__packed uint16_t u16_msLnzEntry46;             //45B - ms_lnz_entry_46 - ms_lnz_entry_46
	__packed uint16_t u16_msLnzEntry47;             //45D - ms_lnz_entry_47 - ms_lnz_entry_47
	__packed uint16_t u16_msLnzEntry48;             //45F - ms_lnz_entry_48 - ms_lnz_entry_48
	__packed uint16_t u16_msLnzEntry49;             //461 - ms_lnz_entry_49 - ms_lnz_entry_49
	__packed uint16_t u16_msLnzEntry50;             //463 - ms_lnz_entry_50 - ms_lnz_entry_50
	__packed uint16_t u16_msLnzEntry51;             //465 - ms_lnz_entry_51 - ms_lnz_entry_51
	__packed uint16_t u16_msLnzEntry52;             //467 - ms_lnz_entry_52 - ms_lnz_entry_52
	__packed uint16_t u16_msLnzEntry53;             //469 - ms_lnz_entry_53 - ms_lnz_entry_53
	__packed uint16_t u16_msLnzEntry54;             //46B - ms_lnz_entry_54 - ms_lnz_entry_54
	__packed uint16_t u16_msLnzEntry55;             //46D - ms_lnz_entry_55 - ms_lnz_entry_55
	__packed uint16_t u16_msLnzEntry56;             //46F - ms_lnz_entry_56 - ms_lnz_entry_56
	__packed uint16_t u16_msLnzEntry57;             //471 - ms_lnz_entry_57 - ms_lnz_entry_57
	__packed uint16_t u16_msLnzEntry58;             //473 - ms_lnz_entry_58 - ms_lnz_entry_58
	__packed uint16_t u16_msLnzEntry59;             //475 - ms_lnz_entry_59 - ms_lnz_entry_59
	__packed uint16_t u16_msLnzEntry60;             //477 - ms_lnz_entry_60 - ms_lnz_entry_60
	__packed uint16_t u16_msLnzEntry61;             //479 - ms_lnz_entry_61 - ms_lnz_entry_61
	__packed uint16_t u16_msLnzEntry62;             //47B - ms_lnz_entry_62 - ms_lnz_entry_62
	__packed uint16_t u16_msLnzEntry63;             //47D - ms_lnz_entry_63 - ms_lnz_entry_63
	__packed uint16_t u16_msLnzEntry64;             //47F - ms_lnz_entry_64 - ms_lnz_entry_64
	__packed uint16_t u16_msLnzEntry65;             //481 - ms_lnz_entry_65 - ms_lnz_entry_65
	__packed uint16_t u16_msLnzEntry66;             //483 - ms_lnz_entry_66 - ms_lnz_entry_66
	__packed uint16_t u16_msLnzEntry67;             //485 - ms_lnz_entry_67 - ms_lnz_entry_67
	__packed uint16_t u16_msLnzEntry68;             //487 - ms_lnz_entry_68 - ms_lnz_entry_68
	__packed uint16_t u16_msLnzEntry69;             //489 - ms_lnz_entry_69 - ms_lnz_entry_69
	__packed uint16_t u16_msLnzEntry70;             //48B - ms_lnz_entry_70 - ms_lnz_entry_70
	__packed uint16_t u16_msLnzEntry71;             //48D - ms_lnz_entry_71 - ms_lnz_entry_71
	__packed uint16_t u16_msLnzEntry72;             //48F - ms_lnz_entry_72 - ms_lnz_entry_72
	__packed uint16_t u16_msLnzEntry73;             //491 - ms_lnz_entry_73 - ms_lnz_entry_73
	__packed uint16_t u16_msLnzEntry74;             //493 - ms_lnz_entry_74 - ms_lnz_entry_74
	__packed uint16_t u16_msLnzEntry75;             //495 - ms_lnz_entry_75 - ms_lnz_entry_75
	__packed uint16_t u16_msLnzEntry76;             //497 - ms_lnz_entry_76 - ms_lnz_entry_76
	__packed uint16_t u16_msLnzEntry77;             //499 - ms_lnz_entry_77 - ms_lnz_entry_77
	__packed uint16_t u16_msLnzEntry78;             //49B - ms_lnz_entry_78 - ms_lnz_entry_78
	__packed uint16_t u16_msLnzEntry79;             //49D - ms_lnz_entry_79 - ms_lnz_entry_79
	__packed uint16_t u16_msLnzEntry80;             //49F - ms_lnz_entry_80 - ms_lnz_entry_80
	__packed uint16_t u16_msLnzEntry81;             //4A1 - ms_lnz_entry_81 - ms_lnz_entry_81
	__packed uint16_t u16_msLnzEntry82;             //4A3 - ms_lnz_entry_82 - ms_lnz_entry_82
	__packed uint16_t u16_msLnzEntry83;             //4A5 - ms_lnz_entry_83 - ms_lnz_entry_83
	__packed uint16_t u16_msLnzEntry84;             //4A7 - ms_lnz_entry_84 - ms_lnz_entry_84
	__packed uint16_t u16_msLnzEntry85;             //4A9 - ms_lnz_entry_85 - ms_lnz_entry_85
	__packed uint16_t u16_msLnzEntry86;             //4AB - ms_lnz_entry_86 - ms_lnz_entry_86
	__packed uint16_t u16_msLnzEntry87;             //4AD - ms_lnz_entry_87 - ms_lnz_entry_87
	__packed uint16_t u16_msLnzEntry88;             //4AF - ms_lnz_entry_88 - ms_lnz_entry_88
	__packed uint16_t u16_msLnzEntry89;             //4B1 - ms_lnz_entry_89 - ms_lnz_entry_89
	__packed uint16_t u16_msLnzEntry90;             //4B3 - ms_lnz_entry_90 - ms_lnz_entry_90
	__packed uint16_t u16_msLnzEntry91;             //4B5 - ms_lnz_entry_91 - ms_lnz_entry_91
	__packed uint16_t u16_msLnzEntry92;             //4B7 - ms_lnz_entry_92 - ms_lnz_entry_92
	__packed uint16_t u16_msLnzEntry93;             //4B9 - ms_lnz_entry_93 - ms_lnz_entry_93
	__packed uint16_t u16_msLnzEntry94;             //4BB - ms_lnz_entry_94 - ms_lnz_entry_94
	__packed uint16_t u16_msLnzEntry95;             //4BD - ms_lnz_entry_95 - ms_lnz_entry_95
	__packed uint16_t u16_msLnzEntry96;             //4BF - ms_lnz_entry_96 - ms_lnz_entry_96
	__packed uint16_t u16_msLnzEntry97;             //4C1 - ms_lnz_entry_97 - ms_lnz_entry_97
	__packed uint16_t u16_msLnzEntry98;             //4C3 - ms_lnz_entry_98 - ms_lnz_entry_98
	__packed uint16_t u16_msLnzEntry99;             //4C5 - ms_lnz_entry_99 - ms_lnz_entry_99
	__packed uint16_t u16_msLnzEntry100;            //4C7 - ms_lnz_entry_100 - ms_lnz_entry_100
	__packed uint16_t u16_msLnzEntry101;            //4C9 - ms_lnz_entry_101 - ms_lnz_entry_101
	__packed uint16_t u16_msLnzEntry102;            //4CB - ms_lnz_entry_102 - ms_lnz_entry_102
	__packed uint16_t u16_msLnzEntry103;            //4CD - ms_lnz_entry_103 - ms_lnz_entry_103
	__packed uint16_t u16_msLnzEntry104;            //4CF - ms_lnz_entry_104 - ms_lnz_entry_104
	__packed uint16_t u16_msLnzEntry105;            //4D1 - ms_lnz_entry_105 - ms_lnz_entry_105
	__packed uint16_t u16_msLnzEntry106;            //4D3 - ms_lnz_entry_106 - ms_lnz_entry_106
	__packed uint16_t u16_msLnzEntry107;            //4D5 - ms_lnz_entry_107 - ms_lnz_entry_107
	__packed uint16_t u16_msLnzEntry108;            //4D7 - ms_lnz_entry_108 - ms_lnz_entry_108
	__packed uint16_t u16_msLnzEntry109;            //4D9 - ms_lnz_entry_109 - ms_lnz_entry_109
	__packed uint16_t u16_msLnzEntry110;            //4DB - ms_lnz_entry_110 - ms_lnz_entry_110
	__packed uint16_t u16_msLnzEntry111;            //4DD - ms_lnz_entry_111 - ms_lnz_entry_111
	__packed uint16_t u16_msLnzEntry112;            //4DF - ms_lnz_entry_112 - ms_lnz_entry_112
	__packed uint16_t u16_msLnzEntry113;            //4E1 - ms_lnz_entry_113 - ms_lnz_entry_113
	__packed uint16_t u16_msLnzEntry114;            //4E3 - ms_lnz_entry_114 - ms_lnz_entry_114
	__packed uint16_t u16_msLnzEntry115;            //4E5 - ms_lnz_entry_115 - ms_lnz_entry_115
	__packed uint16_t u16_msLnzEntry116;            //4E7 - ms_lnz_entry_116 - ms_lnz_entry_116
	__packed uint16_t u16_msLnzEntry117;            //4E9 - ms_lnz_entry_117 - ms_lnz_entry_117
	__packed uint16_t u16_msLnzEntry118;            //4EB - ms_lnz_entry_118 - ms_lnz_entry_118
	__packed uint16_t u16_msLnzEntry119;            //4ED - ms_lnz_entry_119 - ms_lnz_entry_119
	__packed uint16_t u16_msLnzEntry120;            //4EF - ms_lnz_entry_120 - ms_lnz_entry_120
	__packed uint16_t u16_msLnzEntry121;            //4F1 - ms_lnz_entry_121 - ms_lnz_entry_121
	__packed uint16_t u16_msLnzEntry122;            //4F3 - ms_lnz_entry_122 - ms_lnz_entry_122
	__packed uint16_t u16_msLnzEntry123;            //4F5 - ms_lnz_entry_123 - ms_lnz_entry_123
	__packed uint16_t u16_msLnzEntry124;            //4F7 - ms_lnz_entry_124 - ms_lnz_entry_124
	__packed uint16_t u16_msLnzEntry125;            //4F9 - ms_lnz_entry_125 - ms_lnz_entry_125
	__packed uint16_t u16_msLnzEntry126;            //4FB - ms_lnz_entry_126 - ms_lnz_entry_126
	__packed uint16_t u16_msLnzEntry127;            //4FD - ms_lnz_entry_127 - ms_lnz_entry_127
	__packed uint16_t u16_msLnzEntry128;            //4FF - ms_lnz_entry_128 - ms_lnz_entry_128
	__packed uint16_t u16_msLnzEntry129;            //501 - ms_lnz_entry_129 - ms_lnz_entry_129
	__packed uint16_t u16_msLnzEntry130;            //503 - ms_lnz_entry_130 - ms_lnz_entry_130
	__packed uint16_t u16_msLnzEntry131;            //505 - ms_lnz_entry_131 - ms_lnz_entry_131
	__packed uint16_t u16_msLnzEntry132;            //507 - ms_lnz_entry_132 - ms_lnz_entry_132
	__packed uint16_t u16_msLnzEntry133;            //509 - ms_lnz_entry_133 - ms_lnz_entry_133
	__packed uint16_t u16_msLnzEntry134;            //50B - ms_lnz_entry_134 - ms_lnz_entry_134
	__packed uint16_t u16_msLnzEntry135;            //50D - ms_lnz_entry_135 - ms_lnz_entry_135
	__packed uint16_t u16_msLnzEntry136;            //50F - ms_lnz_entry_136 - ms_lnz_entry_136
	__packed uint16_t u16_msLnzEntry137;            //511 - ms_lnz_entry_137 - ms_lnz_entry_137
	__packed uint16_t u16_msLnzEntry138;            //513 - ms_lnz_entry_138 - ms_lnz_entry_138
	__packed uint16_t u16_msLnzEntry139;            //515 - ms_lnz_entry_139 - ms_lnz_entry_139
	__packed uint16_t u16_msLnzEntry140;            //517 - ms_lnz_entry_140 - ms_lnz_entry_140
	__packed uint16_t u16_msLnzEntry141;            //519 - ms_lnz_entry_141 - ms_lnz_entry_141
	__packed uint16_t u16_msLnzEntry142;            //51B - ms_lnz_entry_142 - ms_lnz_entry_142
	__packed uint16_t u16_msLnzEntry143;            //51D - ms_lnz_entry_143 - ms_lnz_entry_143
	__packed uint16_t u16_msLnzEntry144;            //51F - ms_lnz_entry_144 - ms_lnz_entry_144
	__packed uint16_t u16_msLnzEntry145;            //521 - ms_lnz_entry_145 - ms_lnz_entry_145
	__packed uint16_t u16_msLnzEntry146;            //523 - ms_lnz_entry_146 - ms_lnz_entry_146
	__packed uint16_t u16_msLnzEntry147;            //525 - ms_lnz_entry_147 - ms_lnz_entry_147
	__packed uint16_t u16_msLnzEntry148;            //527 - ms_lnz_entry_148 - ms_lnz_entry_148
	__packed uint16_t u16_msLnzEntry149;            //529 - ms_lnz_entry_149 - ms_lnz_entry_149
	__packed uint16_t u16_msLnzEntry150;            //52B - ms_lnz_entry_150 - ms_lnz_entry_150
	__packed uint16_t u16_msLnzEntry151;            //52D - ms_lnz_entry_151 - ms_lnz_entry_151
	__packed uint16_t u16_msLnzEntry152;            //52F - ms_lnz_entry_152 - ms_lnz_entry_152
	__packed uint16_t u16_msLnzEntry153;            //531 - ms_lnz_entry_153 - ms_lnz_entry_153
	__packed uint16_t u16_msLnzEntry154;            //533 - ms_lnz_entry_154 - ms_lnz_entry_154
	__packed uint16_t u16_msLnzEntry155;            //535 - ms_lnz_entry_155 - ms_lnz_entry_155
	__packed uint16_t u16_msLnzEntry156;            //537 - ms_lnz_entry_156 - ms_lnz_entry_156
	__packed uint16_t u16_msLnzEntry157;            //539 - ms_lnz_entry_157 - ms_lnz_entry_157
	__packed uint16_t u16_msLnzEntry158;            //53B - ms_lnz_entry_158 - ms_lnz_entry_158
	__packed uint16_t u16_msLnzEntry159;            //53D - ms_lnz_entry_159 - ms_lnz_entry_159
	__packed uint16_t u16_msLnzEntry160;            //53F - ms_lnz_entry_160 - ms_lnz_entry_160
	__packed uint16_t u16_msLnzEntry161;            //541 - ms_lnz_entry_161 - ms_lnz_entry_161
	__packed uint16_t u16_msLnzEntry162;            //543 - ms_lnz_entry_162 - ms_lnz_entry_162
	__packed uint16_t u16_msLnzEntry163;            //545 - ms_lnz_entry_163 - ms_lnz_entry_163
	__packed uint16_t u16_msLnzEntry164;            //547 - ms_lnz_entry_164 - ms_lnz_entry_164
	__packed uint16_t u16_msLnzEntry165;            //549 - ms_lnz_entry_165 - ms_lnz_entry_165
	__packed uint16_t u16_msLnzEntry166;            //54B - ms_lnz_entry_166 - ms_lnz_entry_166
	__packed uint16_t u16_msLnzEntry167;            //54D - ms_lnz_entry_167 - ms_lnz_entry_167
	__packed uint16_t u16_msLnzEntry168;            //54F - ms_lnz_entry_168 - ms_lnz_entry_168
	__packed uint16_t u16_msLnzEntry169;            //551 - ms_lnz_entry_169 - ms_lnz_entry_169
	__packed uint16_t u16_msLnzEntry170;            //553 - ms_lnz_entry_170 - ms_lnz_entry_170
	__packed uint16_t u16_msLnzEntry171;            //555 - ms_lnz_entry_171 - ms_lnz_entry_171
	__packed uint16_t u16_msLnzEntry172;            //557 - ms_lnz_entry_172 - ms_lnz_entry_172
	__packed uint16_t u16_msLnzEntry173;            //559 - ms_lnz_entry_173 - ms_lnz_entry_173
	__packed uint16_t u16_msLnzEntry174;            //55B - ms_lnz_entry_174 - ms_lnz_entry_174
	__packed uint16_t u16_msLnzEntry175;            //55D - ms_lnz_entry_175 - ms_lnz_entry_175
	__packed uint16_t u16_msLnzEntry176;            //55F - ms_lnz_entry_176 - ms_lnz_entry_176
	__packed uint16_t u16_msLnzEntry177;            //561 - ms_lnz_entry_177 - ms_lnz_entry_177
	__packed uint16_t u16_msLnzEntry178;            //563 - ms_lnz_entry_178 - ms_lnz_entry_178
	__packed uint16_t u16_msLnzEntry179;            //565 - ms_lnz_entry_179 - ms_lnz_entry_179
	__packed uint16_t u16_msLnzEntry180;            //567 - ms_lnz_entry_180 - ms_lnz_entry_180
	__packed uint16_t u16_msLnzEntry181;            //569 - ms_lnz_entry_181 - ms_lnz_entry_181
	__packed uint16_t u16_msLnzEntry182;            //56B - ms_lnz_entry_182 - ms_lnz_entry_182
	__packed uint16_t u16_msLnzEntry183;            //56D - ms_lnz_entry_183 - ms_lnz_entry_183
	__packed uint16_t u16_msLnzEntry184;            //56F - ms_lnz_entry_184 - ms_lnz_entry_184
	__packed uint16_t u16_msLnzEntry185;            //571 - ms_lnz_entry_185 - ms_lnz_entry_185
	__packed uint16_t u16_msLnzEntry186;            //573 - ms_lnz_entry_186 - ms_lnz_entry_186
	__packed uint16_t u16_msLnzEntry187;            //575 - ms_lnz_entry_187 - ms_lnz_entry_187
	__packed uint16_t u16_msLnzEntry188;            //577 - ms_lnz_entry_188 - ms_lnz_entry_188
	__packed uint16_t u16_msLnzEntry189;            //579 - ms_lnz_entry_189 - ms_lnz_entry_189
	__packed uint16_t u16_msLnzEntry190;            //57B - ms_lnz_entry_190 - ms_lnz_entry_190
	__packed uint16_t u16_msLnzEntry191;            //57D - ms_lnz_entry_191 - ms_lnz_entry_191
	__packed uint16_t u16_msLnzEntry192;            //57F - ms_lnz_entry_192 - ms_lnz_entry_192
	__packed uint16_t u16_msLnzEntry193;            //581 - ms_lnz_entry_193 - ms_lnz_entry_193
	__packed uint16_t u16_msLnzEntry194;            //583 - ms_lnz_entry_194 - ms_lnz_entry_194
	__packed uint16_t u16_msLnzEntry195;            //585 - ms_lnz_entry_195 - ms_lnz_entry_195
	__packed uint16_t u16_msLnzEntry196;            //587 - ms_lnz_entry_196 - ms_lnz_entry_196
	__packed uint16_t u16_msLnzEntry197;            //589 - ms_lnz_entry_197 - ms_lnz_entry_197
	__packed uint16_t u16_msLnzEntry198;            //58B - ms_lnz_entry_198 - ms_lnz_entry_198
	__packed uint16_t u16_msLnzEntry199;            //58D - ms_lnz_entry_199 - ms_lnz_entry_199
	uint8_t u8_reserved58F;                         //58F - reserved
	uint8_t u8_reserved590;                         //590 - reserved
	uint8_t u8_osCoefMsScrCnt;                      //591 - os_coef_cfg0 - os_coef_ms_scr_cnt
	uint8_t u8_osCoefMsScrOffset;                   //592 - os_coef_cfg1 - os_coef_ms_scr_offset
	uint8_t u8_osCoefMsScrNoisyCnt;                 //593 - os_coef_cfg2 - os_coef_ms_scr_noisy_cnt
	uint8_t u8_osCoefMsScrNoisyOffset;              //594 - os_coef_cfg3 - os_coef_ms_scr_noisy_offset
	uint8_t u8_osCoefMsScrLpCnt;                    //595 - os_coef_cfg4 - os_coef_ms_scr_lp_cnt
	uint8_t u8_osCoefMsScrLpOffset;                 //596 - os_coef_cfg5 - os_coef_ms_scr_lp_offset
	uint8_t u8_osCoefSsTchCnt;                      //597 - os_coef_cfg6 - os_coef_ss_tch_cnt
	uint8_t u8_osCoefSsTchOffset;                   //598 - os_coef_cfg7 - os_coef_ss_tch_offset
	uint8_t u8_osCoefSsDetCnt;                      //599 - os_coef_cfg8 - os_coef_ss_det_cnt
	uint8_t u8_osCoefSsDetOffset;                   //59A - os_coef_cfg9 - os_coef_ss_det_offset
	uint8_t u8_osCoefMsKeyCnt;                      //59B - os_coef_cfg10 - os_coef_ms_key_cnt
	uint8_t u8_osCoefMsKeyOffset;                   //59C - os_coef_cfg11 - os_coef_ms_key_offset
	uint8_t u8_osCoefSsFrctchCnt;                   //59D - os_coef_cfg12 - os_coef_ss_frctch_cnt
	uint8_t u8_osCoefSsFrctchOffset;                //59E - os_coef_cfg13 - os_coef_ss_frctch_offset
	uint8_t u8_osCoefMsMultiAccNoisyCnt;            //59F - os_coef_cfg14 - os_coef_ms_multi_acc_noisy_cnt
	uint8_t u8_osCoefMsMultiAccNoisyOffset;         //5A0 - os_coef_cfg15 - os_coef_ms_multi_acc_noisy_offset
	uint8_t u8_osCoefItoCnt;                        //5A1 - os_coef_cfg16 - os_coef_ito_cnt
	uint8_t u8_osCoefItoOffset;                     //5A2 - os_coef_cfg17 - os_coef_ito_offset
	uint8_t u8_osCoefItoLowCnt;                     //5A3 - os_coef_cfg18 - os_coef_ito_low_cnt
	uint8_t u8_osCoefItoLowOffset;                  //5A4 - os_coef_cfg19 - os_coef_ito_low_offset
	__packed uint16_t u16_osCoef0;                  //5A5 - os_coef_0 - os_coef_0
	__packed uint16_t u16_osCoef1;                  //5A7 - os_coef_1 - os_coef_1
	__packed uint16_t u16_osCoef2;                  //5A9 - os_coef_2 - os_coef_2
	__packed uint16_t u16_osCoef3;                  //5AB - os_coef_3 - os_coef_3
	__packed uint16_t u16_osCoef4;                  //5AD - os_coef_4 - os_coef_4
	__packed uint16_t u16_osCoef5;                  //5AF - os_coef_5 - os_coef_5
	__packed uint16_t u16_osCoef6;                  //5B1 - os_coef_6 - os_coef_6
	__packed uint16_t u16_osCoef7;                  //5B3 - os_coef_7 - os_coef_7
	__packed uint16_t u16_osCoef8;                  //5B5 - os_coef_8 - os_coef_8
	__packed uint16_t u16_osCoef9;                  //5B7 - os_coef_9 - os_coef_9
	__packed uint16_t u16_osCoef10;                 //5B9 - os_coef_10 - os_coef_10
	__packed uint16_t u16_osCoef11;                 //5BB - os_coef_11 - os_coef_11
	__packed uint16_t u16_osCoef12;                 //5BD - os_coef_12 - os_coef_12
	__packed uint16_t u16_osCoef13;                 //5BF - os_coef_13 - os_coef_13
	__packed uint16_t u16_osCoef14;                 //5C1 - os_coef_14 - os_coef_14
	__packed uint16_t u16_osCoef15;                 //5C3 - os_coef_15 - os_coef_15
	__packed uint16_t u16_osCoef16;                 //5C5 - os_coef_16 - os_coef_16
	__packed uint16_t u16_osCoef17;                 //5C7 - os_coef_17 - os_coef_17
	__packed uint16_t u16_osCoef18;                 //5C9 - os_coef_18 - os_coef_18
	__packed uint16_t u16_osCoef19;                 //5CB - os_coef_19 - os_coef_19
	__packed uint16_t u16_osCoef20;                 //5CD - os_coef_20 - os_coef_20
	__packed uint16_t u16_osCoef21;                 //5CF - os_coef_21 - os_coef_21
	__packed uint16_t u16_osCoef22;                 //5D1 - os_coef_22 - os_coef_22
	__packed uint16_t u16_osCoef23;                 //5D3 - os_coef_23 - os_coef_23
	__packed uint16_t u16_osCoef24;                 //5D5 - os_coef_24 - os_coef_24
	__packed uint16_t u16_osCoef25;                 //5D7 - os_coef_25 - os_coef_25
	__packed uint16_t u16_osCoef26;                 //5D9 - os_coef_26 - os_coef_26
	__packed uint16_t u16_osCoef27;                 //5DB - os_coef_27 - os_coef_27
	__packed uint16_t u16_osCoef28;                 //5DD - os_coef_28 - os_coef_28
	__packed uint16_t u16_osCoef29;                 //5DF - os_coef_29 - os_coef_29
	__packed uint16_t u16_osCoef30;                 //5E1 - os_coef_30 - os_coef_30
	__packed uint16_t u16_osCoef31;                 //5E3 - os_coef_31 - os_coef_31
	__packed uint16_t u16_osCoef32;                 //5E5 - os_coef_32 - os_coef_32
	__packed uint16_t u16_osCoef33;                 //5E7 - os_coef_33 - os_coef_33
	__packed uint16_t u16_osCoef34;                 //5E9 - os_coef_34 - os_coef_34
	__packed uint16_t u16_osCoef35;                 //5EB - os_coef_35 - os_coef_35
	__packed uint16_t u16_osCoef36;                 //5ED - os_coef_36 - os_coef_36
	__packed uint16_t u16_osCoef37;                 //5EF - os_coef_37 - os_coef_37
	__packed uint16_t u16_osCoef38;                 //5F1 - os_coef_38 - os_coef_38
	__packed uint16_t u16_osCoef39;                 //5F3 - os_coef_39 - os_coef_39
	__packed uint16_t u16_osCoef40;                 //5F5 - os_coef_40 - os_coef_40
	__packed uint16_t u16_osCoef41;                 //5F7 - os_coef_41 - os_coef_41
	__packed uint16_t u16_osCoef42;                 //5F9 - os_coef_42 - os_coef_42
	__packed uint16_t u16_osCoef43;                 //5FB - os_coef_43 - os_coef_43
	__packed uint16_t u16_osCoef44;                 //5FD - os_coef_44 - os_coef_44
	__packed uint16_t u16_osCoef45;                 //5FF - os_coef_45 - os_coef_45
	__packed uint16_t u16_osCoef46;                 //601 - os_coef_46 - os_coef_46
	__packed uint16_t u16_osCoef47;                 //603 - os_coef_47 - os_coef_47
	__packed uint16_t u16_osCoef48;                 //605 - os_coef_48 - os_coef_48
	__packed uint16_t u16_osCoef49;                 //607 - os_coef_49 - os_coef_49
	__packed uint16_t u16_osCoef50;                 //609 - os_coef_50 - os_coef_50
	__packed uint16_t u16_osCoef51;                 //60B - os_coef_51 - os_coef_51
	__packed uint16_t u16_osCoef52;                 //60D - os_coef_52 - os_coef_52
	__packed uint16_t u16_osCoef53;                 //60F - os_coef_53 - os_coef_53
	__packed uint16_t u16_osCoef54;                 //611 - os_coef_54 - os_coef_54
	__packed uint16_t u16_osCoef55;                 //613 - os_coef_55 - os_coef_55
	__packed uint16_t u16_osCoef56;                 //615 - os_coef_56 - os_coef_56
	__packed uint16_t u16_osCoef57;                 //617 - os_coef_57 - os_coef_57
	__packed uint16_t u16_osCoef58;                 //619 - os_coef_58 - os_coef_58
	__packed uint16_t u16_osCoef59;                 //61B - os_coef_59 - os_coef_59
	__packed uint16_t u16_osCoef60;                 //61D - os_coef_60 - os_coef_60
	__packed uint16_t u16_osCoef61;                 //61F - os_coef_61 - os_coef_61
	__packed uint16_t u16_osCoef62;                 //621 - os_coef_62 - os_coef_62
	__packed uint16_t u16_osCoef63;                 //623 - os_coef_63 - os_coef_63
	uint8_t u8_reserved625;                         //625 - reserved
	uint8_t u8_reserved626;                         //626 - reserved
	__packed uint8_t b1_ssDetCpSel          : 1;    //627 - ss_det_afe_cfg0 - ss_det_cp_sel
	__packed uint8_t b1_ssDetTxCpSel        : 1;    //627 - ss_det_afe_cfg0 - ss_det_tx_cp_sel
	__packed uint8_t b1_reserved627_2_2     : 1;    //627 - ss_det_afe_cfg0 - reserved
	__packed uint8_t b1_ssDetAcxEn          : 1;    //627 - ss_det_afe_cfg0 - ss_det_acx_en
	__packed uint8_t b1_reserved627_4_4     : 1;    //627 - ss_det_afe_cfg0 - reserved
	__packed uint8_t b1_ssDetDataFilterEn   : 1;    //627 - ss_det_afe_cfg0 - ss_det_data_filter_en
	__packed uint8_t b1_ssDetOsFilterEn     : 1;    //627 - ss_det_afe_cfg0 - ss_det_os_filter_en
	__packed uint8_t b1_ssDetAzEn           : 1;    //627 - ss_det_afe_cfg0 - ss_det_az_en
	__packed uint8_t b1_ssDetIoffEn         : 1;    //628 - ss_det_afe_cfg1 - ss_det_ioff_en
	__packed uint8_t b2_ssDetIoffStrength   : 2;    //628 - ss_det_afe_cfg1 - ss_det_ioff_strength
	__packed uint8_t b2_reserved628_3_4     : 2;    //628 - ss_det_afe_cfg1 - reserved
	__packed uint8_t b1_ssDetFastScanEn     : 1;    //628 - ss_det_afe_cfg1 - ss_det_fast_scan_en
	__packed uint8_t b2_ssDetDataModeSel    : 2;    //628 - ss_det_afe_cfg1 - ss_det_data_mode_sel
	__packed uint8_t b1_ssDetC2iSingleEndEn : 1;    //629 - ss_det_afe_cfg2 - ss_det_c2i_single_end_en
	__packed uint8_t b1_ssDetC2iFloatEn     : 1;    //629 - ss_det_afe_cfg2 - ss_det_c2i_float_en
	__packed uint8_t b2_ssDetC2iLcSel       : 2;    //629 - ss_det_afe_cfg2 - ss_det_c2i_lc_sel
	__packed uint8_t b1_reserved629_4_4     : 1;    //629 - ss_det_afe_cfg2 - reserved
	__packed uint8_t b1_ssDetBootsStrapEn   : 1;    //629 - ss_det_afe_cfg2 - ss_det_boots_strap_en
	__packed uint8_t b2_reserved629_6_7     : 2;    //629 - ss_det_afe_cfg2 - reserved
	uint8_t u8_ssDetCpTune;                         //62A - ss_det_afe_cfg3 - ss_det_cp_tune
	__packed uint8_t b4_reserved62B_0_3     : 4;    //62B - ss_det_afe_cfg4 - reserved
	__packed uint8_t b4_ssDetCxCnt          : 4;    //62B - ss_det_afe_cfg4 - ss_det_cx_cnt
	__packed uint8_t b8_reserved62C_0_7     : 8;    //62C - ss_det_afe_cfg5 - reserved
	__packed uint16_t u16_ssDetRCyc;                //62D - ss_det_r_cyc - ss_det_r_cyc
	__packed uint16_t u16_ssDetTCyc;                //62F - ss_det_t_cyc - ss_det_t_cyc
	__packed uint16_t u16_ssDetRlCyc;               //631 - ss_det_rl_cyc - ss_det_rl_cyc
	__packed uint16_t u16_ssDetOsDly;               //633 - ss_det_os_dly - ss_det_os_dly
	__packed uint8_t b1_ssDetFIxLoRange     : 1;    //635 - ss_det_f_ix_range_cfg_0 - ss_det_f_ix_lo_range
	__packed uint8_t b3_reserved635_1_3     : 3;    //635 - ss_det_f_ix_range_cfg_0 - reserved
	__packed uint8_t b4_ssDetFIx0Range      : 4;    //635 - ss_det_f_ix_range_cfg_0 - ss_det_f_ix0_range
	__packed uint8_t b4_ssDetFIx1Range      : 4;    //636 - ss_det_f_ix_range_cfg_1 - ss_det_f_ix1_range
	__packed uint8_t b4_ssDetFIx2Range      : 4;    //636 - ss_det_f_ix_range_cfg_1 - ss_det_f_ix2_range
	__packed uint8_t b1_ssDetSIxLoRange     : 1;    //637 - ss_det_s_ix_range_cfg_0 - ss_det_s_ix_lo_range
	__packed uint8_t b3_reserved637_1_3     : 3;    //637 - ss_det_s_ix_range_cfg_0 - reserved
	__packed uint8_t b4_ssDetSIx0Range      : 4;    //637 - ss_det_s_ix_range_cfg_0 - ss_det_s_ix0_range
	__packed uint8_t b4_ssDetSIx1Range      : 4;    //638 - ss_det_s_ix_range_cfg_1 - ss_det_s_ix1_range
	__packed uint8_t b4_ssDetSIx2Range      : 4;    //638 - ss_det_s_ix_range_cfg_1 - ss_det_s_ix2_range
	uint8_t u8_ssDetHighResAnalogAcc;               //639 - ss_det_high_res_prfl0 - ss_det_high_res_analog_acc
	__packed uint8_t b4_ssDetHighResDigAcc  : 4;    //63A - ss_det_high_res_prfl1 - ss_det_high_res_dig_acc
	__packed uint8_t b4_reserved63A_4_7     : 4;    //63A - ss_det_high_res_prfl1 - reserved
	__packed uint8_t b2_ssDetHighResFCa     : 2;    //63B - ss_det_high_res_prfl2 - ss_det_high_res_f_ca
	__packed uint8_t b2_ssDetHighResFDiv    : 2;    //63B - ss_det_high_res_prfl2 - ss_det_high_res_f_div
	__packed uint8_t b2_ssDetHighResSCa     : 2;    //63B - ss_det_high_res_prfl2 - ss_det_high_res_s_ca
	__packed uint8_t b2_ssDetHighResSDiv    : 2;    //63B - ss_det_high_res_prfl2 - ss_det_high_res_s_div
	__packed uint8_t b5_ssDetHighResOsCnt   : 5;    //63C - ss_det_high_res_prfl3 - ss_det_high_res_os_cnt
	__packed uint8_t b3_ssDetHighResDummySampleCnt  : 3;    //63C - ss_det_high_res_prfl3 - ss_det_high_res_dummy_sample_cnt
	__packed uint8_t b5_ssDetHighResOsAcc   : 5;    //63D - ss_det_high_res_prfl4 - ss_det_high_res_os_acc
	__packed uint8_t b3_reserved63D_5_7     : 3;    //63D - ss_det_high_res_prfl4 - reserved
	__packed uint8_t b8_reserved63E_0_7     : 8;    //63E - ss_det_high_res_prfl5 - reserved
	__packed uint16_t u16_ssDetHighResAccReset;     //63F - ss_det_high_res_prfl6 - ss_det_high_res_acc_reset
	uint8_t u8_reserved641;                         //641 - reserved
	uint8_t u8_reserved642;                         //642 - reserved
	uint8_t u8_reserved643;                         //643 - reserved
	uint8_t u8_reserved644;                         //644 - reserved
	uint8_t u8_gesDbltap1stTapLeaveTo;              //645 - ges_dbltap_1st_tap_leave_to - ges_dbltap_1st_tap_leave_to
	uint8_t u8_gesDbltap2ndTapEnterTo;              //646 - ges_dbltap_2nd_tap_enter_to - ges_dbltap_2nd_tap_enter_to
	uint8_t u8_gesDbltap2ndTapLeaveTo;              //647 - ges_dbltap_2nd_tap_leave_to - ges_dbltap_2nd_tap_leave_to
	uint8_t u8_gesDbltapBoundarySkipX;              //648 - ges_dbltap_boundary_skip_x - ges_dbltap_boundary_skip_x
	uint8_t u8_gesDbltapBoundarySkipY;              //649 - ges_dbltap_boundary_skip_y - ges_dbltap_boundary_skip_y
	uint8_t u8_gesDbltapTchAreaMax;                 //64A - ges_dbltap_tch_area_max - ges_dbltap_tch_area_max
	uint8_t u8_gesDbltapAreaDiffThres;              //64B - ges_dbltap_area_diff_thres - ges_dbltap_area_diff_thres
	uint8_t u8_gesDbltapCoorDistThres;              //64C - ges_dbltap_coor_dist_thres - ges_dbltap_coor_dist_thres
	uint8_t u8_gesShpTchTo;                         //64D - ges_shp_tch_to - ges_shp_tch_to
	uint8_t u8_gesShpTchAreaMax;                    //64E - ges_shp_tch_area_max - ges_shp_tch_area_max
	uint8_t u8_gesShpLineMinInput;                  //64F - ges_shp_line_min_input - ges_shp_line_min_input
	uint8_t u8_gesShpHlineMinDeltaX;                //650 - ges_shp_hline_min_delta_x - ges_shp_hline_min_delta_x
	uint8_t u8_gesShpHlineMaxDeltaY;                //651 - ges_shp_hline_max_delta_y - ges_shp_hline_max_delta_y
	uint8_t u8_gesShpVlineMaxDeltaX;                //652 - ges_shp_vline_max_delta_x - ges_shp_vline_max_delta_x
	uint8_t u8_gesShpVlineMinDeltaY;                //653 - ges_shp_vline_min_delta_y - ges_shp_vline_min_delta_y
	uint8_t u8_gesShpAvgLineErrThres;               //654 - ges_shp_avg_line_err_thres - ges_shp_avg_line_err_thres
	uint8_t u8_gesShpMaxLineErrThres;               //655 - ges_shp_max_line_err_thres - ges_shp_max_line_err_thres
	__packed uint8_t b1_gesShpLtrOrientvEn  : 1;    //656 - ges_shp_ltr_cfg - ges_shp_ltr_orientv_en
	__packed uint8_t b7_reserved656_1_7     : 7;    //656 - ges_shp_ltr_cfg - reserved
	uint8_t u8_gesShpLtrMinInput;                   //657 - ges_shp_ltr_min_input - ges_shp_ltr_min_input
	uint8_t u8_gesShpLtrMinDeltaX;                  //658 - ges_shp_ltr_min_delta_x - ges_shp_ltr_min_delta_x
	uint8_t u8_gesShpLtrMinDeltaY;                  //659 - ges_shp_ltr_min_delta_y - ges_shp_ltr_min_delta_y
	__packed uint8_t b4_gesShpV2hMaxRatio   : 4;    //65A - ges_shp_ltr_aspect_ratio_chk - ges_shp_v2h_max_ratio
	__packed uint8_t b4_gesShpH2vMaxRatio   : 4;    //65A - ges_shp_ltr_aspect_ratio_chk - ges_shp_h2v_max_ratio
	uint8_t u8_gesShpPredMatchThres;                //65B - ges_shp_pred_match_thres - ges_shp_pred_match_thres
	uint8_t u8_gesShpPredDirErrThres;               //65C - ges_shp_pred_dir_err_thres - ges_shp_pred_dir_err_thres
	__packed uint8_t b1_gesShpRptTraceEn    : 1;    //65D - ges_shp_rpt_cfg - ges_shp_rpt_trace_en
	__packed uint8_t b7_reserved65D_1_7     : 7;    //65D - ges_shp_rpt_cfg - reserved
	uint8_t u8_gesShpRptTraceMin;                   //65E - ges_shp_rpt_trace_min - ges_shp_rpt_trace_min
	uint8_t u8_gesShpRptTraceMax;                   //65F - ges_shp_rpt_trace_max - ges_shp_rpt_trace_max
	uint8_t u8_reserved660;                         //660 - reserved
	uint8_t u8_gesShpCStartEndDistThres;            //661 - ges_shp_c_start_end_dist_thres - ges_shp_c_start_end_dist_thres
	uint8_t u8_reserved662;                         //662 - reserved
	uint8_t u8_reserved663;                         //663 - reserved
	uint8_t u8_fgrThumbXyWghThres;                  //664 - fgr_thumb_xy_wgh_thres - fgr_thumb_xy_wgh_thres
	__packed uint8_t b4_minFgrThumbXyWgh    : 4;    //665 - fgr_thumb_xy_wgh - min_fgr_thumb_xy_wgh
	__packed uint8_t b4_maxFgrThumbXyWgh    : 4;    //665 - fgr_thumb_xy_wgh - max_fgr_thumb_xy_wgh
	uint16_t u16_minFgrThumbXySpeed;                //666 - min_fgr_thumb_xy_speed - min_fgr_thumb_xy_speed
	uint16_t u16_maxFgrThumbXySpeed;                //668 - max_fgr_thumb_xy_speed - max_fgr_thumb_xy_speed
	uint8_t u8_fgrThumbXyWghGameThres;              //66A - fgr_thumb_xy_wgh_game_thres - fgr_thumb_xy_wgh_game_thres
	__packed uint8_t b4_minFgrThumbXyWghGame    : 4;    //66B - fgr_thumb_xy_wgh_game - min_fgr_thumb_xy_wgh_game
	__packed uint8_t b4_maxFgrThumbXyWghGame    : 4;    //66B - fgr_thumb_xy_wgh_game - max_fgr_thumb_xy_wgh_game
	__packed uint8_t b4_decThumbSpeedIirWgh : 4;    //66C - thumb_speed_iir_wgh - dec_thumb_speed_iir_wgh
	__packed uint8_t b4_incThumbSpeedIirWgh : 4;    //66C - thumb_speed_iir_wgh - inc_thumb_speed_iir_wgh
	uint8_t u8_reserved66D;                         //66D - reserved
	uint8_t u8_reserved66E;                         //66E - reserved
	uint8_t u8_reserved66F;                         //66F - reserved
	__packed uint8_t b1_1dGrvChkEn          : 1;    //670 - 1d_grv_cfg - 1d_grv_chk_en
	__packed uint8_t b1_1dGrvMtolEn         : 1;    //670 - 1d_grv_cfg - 1d_grv_mtol_en
	__packed uint8_t b1_1dGrvSsPeakChkEn    : 1;    //670 - 1d_grv_cfg - 1d_grv_ss_peak_chk_en
	__packed uint8_t b5_reserved670_3_7     : 5;    //670 - 1d_grv_cfg - reserved
	__packed uint16_t u16_1dGrvIslndThres;          //671 - 1d_grv_islnd_thres - 1d_grv_islnd_thres
	uint8_t u8_1dGrvMinArea;                        //673 - 1d_grv_min_area - 1d_grv_min_area
	uint16_t u16_1dGrvMaxIslandSumStr;              //674 - 1d_grv_max_island_sum_str - 1d_grv_max_island_sum_str
	uint8_t u8_1dGrvMaxIslandLen;                   //676 - 1d_grv_max_island_len - 1d_grv_max_island_len
	uint8_t u8_1dDiagGrvTol;                        //677 - 1d_diag_grv_tol - 1d_diag_grv_tol
	uint16_t u16_1dGrvTol;                          //678 - 1d_grv_tol - 1d_grv_tol
	__packed uint8_t b4_1dGrvTchBtwCutoffIdx    : 4;    //67A - 1d_grv_tch_btw_cutoff_idx - 1d_grv_tch_btw_cutoff_idx
	__packed uint8_t b4_reserved67A_4_7     : 4;    //67A - 1d_grv_tch_btw_cutoff_idx - reserved
	uint8_t u8_1dGrvTchMtolFtapCnt;                 //67B - 1d_grv_tch_mtol_ftap_cnt - 1d_grv_tch_mtol_ftap_cnt
	uint8_t u8_1dGrvTchMtolFtapXyTol2;              //67C - 1d_grv_tch_mtol_ftap_xy_tol2 - 1d_grv_tch_mtol_ftap_xy_tol2
	uint8_t u8_1dGrvTchMtolXyTol2;                  //67D - 1d_grv_tch_mtol_xy_tol2 - 1d_grv_tch_mtol_xy_tol2
	uint8_t u8_1dGrvTchMtolXyTol1;                  //67E - 1d_grv_tch_mtol_xy_tol1 - 1d_grv_tch_mtol_xy_tol1
	__packed uint8_t b4_1dGrvTchMtolMinWgh  : 4;    //67F - 1d_grv_mtol_wgh - 1d_grv_tch_mtol_min_wgh
	__packed uint8_t b4_1dGrvTchMtolMaxWgh  : 4;    //67F - 1d_grv_mtol_wgh - 1d_grv_tch_mtol_max_wgh
	uint8_t u8_reserved680;                         //680 - reserved
	uint8_t u8_reserved681;                         //681 - reserved
	uint8_t u8_msCmmGroupRxDisbleCnt00;             //682 - ms_cmm_group_rx_disble_cnt_00 - ms_cmm_group_rx_disble_cnt_00
	uint8_t u8_msCmmGroupRxDisbleCnt01;             //683 - ms_cmm_group_rx_disble_cnt_01 - ms_cmm_group_rx_disble_cnt_01
	uint8_t u8_msCmmGroupRxDisbleCnt02;             //684 - ms_cmm_group_rx_disble_cnt_02 - ms_cmm_group_rx_disble_cnt_02
	uint8_t u8_msCmmGroupTxCh00;                    //685 - ms_cmm_group_tx_ch_00 - ms_cmm_group_tx_ch_00
	uint8_t u8_msCmmGroupTxCh01;                    //686 - ms_cmm_group_tx_ch_01 - ms_cmm_group_tx_ch_01
	uint8_t u8_msCmmGroupTxCh02;                    //687 - ms_cmm_group_tx_ch_02 - ms_cmm_group_tx_ch_02
	uint16_t u16_osciTrimFallCnt;                   //688 - osci_trim_fall_cnt - osci_trim_fall_cnt
	uint16_t u16_osciTrimTimerCnt;                  //68A - osci_trim_timer_cnt - osci_trim_timer_cnt
	uint8_t u8_reserved68C;                         //68C - reserved
	__packed uint8_t b1_aoffsetCa2TrimEn    : 1;    //68D - aoffset_ca2_cfg - aoffset_ca2_trim_en
	__packed uint8_t b1_aoffsetCa2DisableChTrimEn   : 1;    //68D - aoffset_ca2_cfg - aoffset_ca2_disable_ch_trim_en
	__packed uint8_t b6_reserved68D_2_7     : 6;    //68D - aoffset_ca2_cfg - reserved
	uint8_t u8_aoffsetCa2FullMax;                   //68E - aoffset_ca2_full_max - aoffset_ca2_full_max
	uint8_t u8_aoffsetCa2FullMin;                   //68F - aoffset_ca2_full_min - aoffset_ca2_full_min
	uint8_t u8_aoffsetCa2HalfMax;                   //690 - aoffset_ca2_half_max - aoffset_ca2_half_max
	uint8_t u8_aoffsetCa2HalfMin;                   //691 - aoffset_ca2_half_min - aoffset_ca2_half_min
	uint8_t u8_aoffsetCa2QuarMax;                   //692 - aoffset_ca2_quar_max - aoffset_ca2_quar_max
	uint8_t u8_aoffsetCa2QuarMin;                   //693 - aoffset_ca2_quar_min - aoffset_ca2_quar_min
	uint8_t u8_aoffsetCa2TrimRetry;                 //694 - aoffset_ca2_trim_retry_cnt - aoffset_ca2_trim_retry
	uint8_t u8_reserved695;                         //695 - reserved
	uint8_t u8_reserved696;                         //696 - reserved
	uint8_t u8_adcCoefMsScrCnt;                     //697 - adc_coef_cfg0 - adc_coef_ms_scr_cnt
	uint16_t u16_adcCoefMsScrOffset;                //698 - adc_coef_cfg1 - adc_coef_ms_scr_offset
	uint8_t u8_adcCoefMsScrNoisyCnt;                //69A - adc_coef_cfg2 - adc_coef_ms_scr_noisy_cnt
	__packed uint16_t u16_adcCoefMsScrNoisyOffset;  //69B - adc_coef_cfg3 - adc_coef_ms_scr_noisy_offset
	uint8_t u8_adcCoefMsScrLpCnt;                   //69D - adc_coef_cfg4 - adc_coef_ms_scr_lp_cnt
	uint16_t u16_adcCoefMsScrLpOffset;              //69E - adc_coef_cfg5 - adc_coef_ms_scr_lp_offset
	uint8_t u8_adcCoefSsTchCnt;                     //6A0 - adc_coef_cfg6 - adc_coef_ss_tch_cnt
	__packed uint16_t u16_adcCoefSsTchOffset;       //6A1 - adc_coef_cfg7 - adc_coef_ss_tch_offset
	uint8_t u8_adcCoefSsDetCnt;                     //6A3 - adc_coef_cfg8 - adc_coef_ss_det_cnt
	uint16_t u16_adcCoefSsDetOffset;                //6A4 - adc_coef_cfg9 - adc_coef_ss_det_offset
	uint8_t u8_adcCoefMsKeyCnt;                     //6A6 - adc_coef_cfg10 - adc_coef_ms_key_cnt
	__packed uint16_t u16_adcCoefMsKeyOffset;       //6A7 - adc_coef_cfg11 - adc_coef_ms_key_offset
	uint8_t u8_adcCoefSsFrctchCnt;                  //6A9 - adc_coef_cfg12 - adc_coef_ss_frctch_cnt
	uint16_t u16_adcCoefSsFrctchOffset;             //6AA - adc_coef_cfg13 - adc_coef_ss_frctch_offset
	uint8_t u8_adcCoefMsMultiAccCnt;                //6AC - adc_coef_cfg14 - adc_coef_ms_multi_acc_cnt
	__packed uint16_t u16_adcCoefMsMultiAccOffset;  //6AD - adc_coef_cfg15 - adc_coef_ms_multi_acc_offset
	uint8_t u8_adcCoefMsMultiAccNoisyCnt;           //6AF - adc_coef_cfg16 - adc_coef_ms_multi_acc_noisy_cnt
	uint16_t u16_adcCoefMsMultiAccNoisyOffset;      //6B0 - adc_coef_cfg17 - adc_coef_ms_multi_acc_noisy_offset
	uint16_t u16_adcCoef0;                          //6B2 - adc_coef_0 - adc_coef_0
	uint16_t u16_adcCoef1;                          //6B4 - adc_coef_1 - adc_coef_1
	uint16_t u16_adcCoef2;                          //6B6 - adc_coef_2 - adc_coef_2
	uint16_t u16_adcCoef3;                          //6B8 - adc_coef_3 - adc_coef_3
	uint16_t u16_adcCoef4;                          //6BA - adc_coef_4 - adc_coef_4
	uint16_t u16_adcCoef5;                          //6BC - adc_coef_5 - adc_coef_5
	uint16_t u16_adcCoef6;                          //6BE - adc_coef_6 - adc_coef_6
	uint16_t u16_adcCoef7;                          //6C0 - adc_coef_7 - adc_coef_7
	uint16_t u16_adcCoef8;                          //6C2 - adc_coef_8 - adc_coef_8
	uint16_t u16_adcCoef9;                          //6C4 - adc_coef_9 - adc_coef_9
	uint16_t u16_adcCoef10;                         //6C6 - adc_coef_10 - adc_coef_10
	uint16_t u16_adcCoef11;                         //6C8 - adc_coef_11 - adc_coef_11
	uint16_t u16_adcCoef12;                         //6CA - adc_coef_12 - adc_coef_12
	uint16_t u16_adcCoef13;                         //6CC - adc_coef_13 - adc_coef_13
	uint16_t u16_adcCoef14;                         //6CE - adc_coef_14 - adc_coef_14
	uint16_t u16_adcCoef15;                         //6D0 - adc_coef_15 - adc_coef_15
	uint16_t u16_adcCoef16;                         //6D2 - adc_coef_16 - adc_coef_16
	uint16_t u16_adcCoef17;                         //6D4 - adc_coef_17 - adc_coef_17
	uint16_t u16_adcCoef18;                         //6D6 - adc_coef_18 - adc_coef_18
	uint16_t u16_adcCoef19;                         //6D8 - adc_coef_19 - adc_coef_19
	uint16_t u16_adcCoef20;                         //6DA - adc_coef_20 - adc_coef_20
	uint16_t u16_adcCoef21;                         //6DC - adc_coef_21 - adc_coef_21
	uint16_t u16_adcCoef22;                         //6DE - adc_coef_22 - adc_coef_22
	uint16_t u16_adcCoef23;                         //6E0 - adc_coef_23 - adc_coef_23
	uint16_t u16_adcCoef24;                         //6E2 - adc_coef_24 - adc_coef_24
	uint16_t u16_adcCoef25;                         //6E4 - adc_coef_25 - adc_coef_25
	uint16_t u16_adcCoef26;                         //6E6 - adc_coef_26 - adc_coef_26
	uint16_t u16_adcCoef27;                         //6E8 - adc_coef_27 - adc_coef_27
	uint16_t u16_adcCoef28;                         //6EA - adc_coef_28 - adc_coef_28
	uint16_t u16_adcCoef29;                         //6EC - adc_coef_29 - adc_coef_29
	uint16_t u16_adcCoef30;                         //6EE - adc_coef_30 - adc_coef_30
	uint16_t u16_adcCoef31;                         //6F0 - adc_coef_31 - adc_coef_31
	uint16_t u16_adcCoef32;                         //6F2 - adc_coef_32 - adc_coef_32
	uint16_t u16_adcCoef33;                         //6F4 - adc_coef_33 - adc_coef_33
	uint16_t u16_adcCoef34;                         //6F6 - adc_coef_34 - adc_coef_34
	uint16_t u16_adcCoef35;                         //6F8 - adc_coef_35 - adc_coef_35
	uint16_t u16_adcCoef36;                         //6FA - adc_coef_36 - adc_coef_36
	uint16_t u16_adcCoef37;                         //6FC - adc_coef_37 - adc_coef_37
	uint16_t u16_adcCoef38;                         //6FE - adc_coef_38 - adc_coef_38
	uint16_t u16_adcCoef39;                         //700 - adc_coef_39 - adc_coef_39
	uint16_t u16_adcCoef40;                         //702 - adc_coef_40 - adc_coef_40
	uint16_t u16_adcCoef41;                         //704 - adc_coef_41 - adc_coef_41
	uint16_t u16_adcCoef42;                         //706 - adc_coef_42 - adc_coef_42
	uint16_t u16_adcCoef43;                         //708 - adc_coef_43 - adc_coef_43
	uint16_t u16_adcCoef44;                         //70A - adc_coef_44 - adc_coef_44
	uint16_t u16_adcCoef45;                         //70C - adc_coef_45 - adc_coef_45
	uint16_t u16_adcCoef46;                         //70E - adc_coef_46 - adc_coef_46
	uint16_t u16_adcCoef47;                         //710 - adc_coef_47 - adc_coef_47
	uint16_t u16_adcCoef48;                         //712 - adc_coef_48 - adc_coef_48
	uint16_t u16_adcCoef49;                         //714 - adc_coef_49 - adc_coef_49
	uint16_t u16_adcCoef50;                         //716 - adc_coef_50 - adc_coef_50
	uint16_t u16_adcCoef51;                         //718 - adc_coef_51 - adc_coef_51
	uint16_t u16_adcCoef52;                         //71A - adc_coef_52 - adc_coef_52
	uint16_t u16_adcCoef53;                         //71C - adc_coef_53 - adc_coef_53
	uint16_t u16_adcCoef54;                         //71E - adc_coef_54 - adc_coef_54
	uint16_t u16_adcCoef55;                         //720 - adc_coef_55 - adc_coef_55
	uint16_t u16_adcCoef56;                         //722 - adc_coef_56 - adc_coef_56
	uint16_t u16_adcCoef57;                         //724 - adc_coef_57 - adc_coef_57
	uint16_t u16_adcCoef58;                         //726 - adc_coef_58 - adc_coef_58
	uint16_t u16_adcCoef59;                         //728 - adc_coef_59 - adc_coef_59
	uint16_t u16_adcCoef60;                         //72A - adc_coef_60 - adc_coef_60
	uint16_t u16_adcCoef61;                         //72C - adc_coef_61 - adc_coef_61
	uint16_t u16_adcCoef62;                         //72E - adc_coef_62 - adc_coef_62
	uint16_t u16_adcCoef63;                         //730 - adc_coef_63 - adc_coef_63
	uint16_t u16_adcCoef64;                         //732 - adc_coef_64 - adc_coef_64
	uint16_t u16_adcCoef65;                         //734 - adc_coef_65 - adc_coef_65
	uint16_t u16_adcCoef66;                         //736 - adc_coef_66 - adc_coef_66
	uint16_t u16_adcCoef67;                         //738 - adc_coef_67 - adc_coef_67
	uint16_t u16_adcCoef68;                         //73A - adc_coef_68 - adc_coef_68
	uint16_t u16_adcCoef69;                         //73C - adc_coef_69 - adc_coef_69
	uint16_t u16_adcCoef70;                         //73E - adc_coef_70 - adc_coef_70
	uint16_t u16_adcCoef71;                         //740 - adc_coef_71 - adc_coef_71
	uint16_t u16_adcCoef72;                         //742 - adc_coef_72 - adc_coef_72
	uint16_t u16_adcCoef73;                         //744 - adc_coef_73 - adc_coef_73
	uint16_t u16_adcCoef74;                         //746 - adc_coef_74 - adc_coef_74
	uint16_t u16_adcCoef75;                         //748 - adc_coef_75 - adc_coef_75
	uint16_t u16_adcCoef76;                         //74A - adc_coef_76 - adc_coef_76
	uint16_t u16_adcCoef77;                         //74C - adc_coef_77 - adc_coef_77
	uint16_t u16_adcCoef78;                         //74E - adc_coef_78 - adc_coef_78
	uint16_t u16_adcCoef79;                         //750 - adc_coef_79 - adc_coef_79
	uint16_t u16_adcCoef80;                         //752 - adc_coef_80 - adc_coef_80
	uint16_t u16_adcCoef81;                         //754 - adc_coef_81 - adc_coef_81
	uint16_t u16_adcCoef82;                         //756 - adc_coef_82 - adc_coef_82
	uint16_t u16_adcCoef83;                         //758 - adc_coef_83 - adc_coef_83
	uint16_t u16_adcCoef84;                         //75A - adc_coef_84 - adc_coef_84
	uint16_t u16_adcCoef85;                         //75C - adc_coef_85 - adc_coef_85
	uint16_t u16_adcCoef86;                         //75E - adc_coef_86 - adc_coef_86
	uint16_t u16_adcCoef87;                         //760 - adc_coef_87 - adc_coef_87
	uint16_t u16_adcCoef88;                         //762 - adc_coef_88 - adc_coef_88
	uint16_t u16_adcCoef89;                         //764 - adc_coef_89 - adc_coef_89
	uint16_t u16_adcCoef90;                         //766 - adc_coef_90 - adc_coef_90
	uint16_t u16_adcCoef91;                         //768 - adc_coef_91 - adc_coef_91
	uint16_t u16_adcCoef92;                         //76A - adc_coef_92 - adc_coef_92
	uint16_t u16_adcCoef93;                         //76C - adc_coef_93 - adc_coef_93
	uint16_t u16_adcCoef94;                         //76E - adc_coef_94 - adc_coef_94
	uint16_t u16_adcCoef95;                         //770 - adc_coef_95 - adc_coef_95
	uint16_t u16_adcCoef96;                         //772 - adc_coef_96 - adc_coef_96
	uint16_t u16_adcCoef97;                         //774 - adc_coef_97 - adc_coef_97
	uint16_t u16_adcCoef98;                         //776 - adc_coef_98 - adc_coef_98
	uint16_t u16_adcCoef99;                         //778 - adc_coef_99 - adc_coef_99
	uint16_t u16_adcCoef100;                        //77A - adc_coef_100 - adc_coef_100
	uint16_t u16_adcCoef101;                        //77C - adc_coef_101 - adc_coef_101
	uint16_t u16_adcCoef102;                        //77E - adc_coef_102 - adc_coef_102
	uint16_t u16_adcCoef103;                        //780 - adc_coef_103 - adc_coef_103
	uint16_t u16_adcCoef104;                        //782 - adc_coef_104 - adc_coef_104
	uint16_t u16_adcCoef105;                        //784 - adc_coef_105 - adc_coef_105
	uint16_t u16_adcCoef106;                        //786 - adc_coef_106 - adc_coef_106
	uint16_t u16_adcCoef107;                        //788 - adc_coef_107 - adc_coef_107
	uint16_t u16_adcCoef108;                        //78A - adc_coef_108 - adc_coef_108
	uint16_t u16_adcCoef109;                        //78C - adc_coef_109 - adc_coef_109
	uint16_t u16_adcCoef110;                        //78E - adc_coef_110 - adc_coef_110
	uint16_t u16_adcCoef111;                        //790 - adc_coef_111 - adc_coef_111
	uint16_t u16_adcCoef112;                        //792 - adc_coef_112 - adc_coef_112
	uint16_t u16_adcCoef113;                        //794 - adc_coef_113 - adc_coef_113
	uint16_t u16_adcCoef114;                        //796 - adc_coef_114 - adc_coef_114
	uint16_t u16_adcCoef115;                        //798 - adc_coef_115 - adc_coef_115
	uint16_t u16_adcCoef116;                        //79A - adc_coef_116 - adc_coef_116
	uint16_t u16_adcCoef117;                        //79C - adc_coef_117 - adc_coef_117
	uint16_t u16_adcCoef118;                        //79E - adc_coef_118 - adc_coef_118
	uint16_t u16_adcCoef119;                        //7A0 - adc_coef_119 - adc_coef_119
	uint16_t u16_adcCoef120;                        //7A2 - adc_coef_120 - adc_coef_120
	uint16_t u16_adcCoef121;                        //7A4 - adc_coef_121 - adc_coef_121
	uint16_t u16_adcCoef122;                        //7A6 - adc_coef_122 - adc_coef_122
	uint16_t u16_adcCoef123;                        //7A8 - adc_coef_123 - adc_coef_123
	uint16_t u16_adcCoef124;                        //7AA - adc_coef_124 - adc_coef_124
	uint16_t u16_adcCoef125;                        //7AC - adc_coef_125 - adc_coef_125
	uint16_t u16_adcCoef126;                        //7AE - adc_coef_126 - adc_coef_126
	uint16_t u16_adcCoef127;                        //7B0 - adc_coef_127 - adc_coef_127
	uint16_t u16_adcCoef128;                        //7B2 - adc_coef_128 - adc_coef_128
	uint16_t u16_adcCoef129;                        //7B4 - adc_coef_129 - adc_coef_129
	uint16_t u16_adcCoef130;                        //7B6 - adc_coef_130 - adc_coef_130
	uint16_t u16_adcCoef131;                        //7B8 - adc_coef_131 - adc_coef_131
	uint16_t u16_adcCoef132;                        //7BA - adc_coef_132 - adc_coef_132
	uint16_t u16_adcCoef133;                        //7BC - adc_coef_133 - adc_coef_133
	uint16_t u16_adcCoef134;                        //7BE - adc_coef_134 - adc_coef_134
	uint16_t u16_adcCoef135;                        //7C0 - adc_coef_135 - adc_coef_135
	uint16_t u16_adcCoef136;                        //7C2 - adc_coef_136 - adc_coef_136
	uint16_t u16_adcCoef137;                        //7C4 - adc_coef_137 - adc_coef_137
	uint16_t u16_adcCoef138;                        //7C6 - adc_coef_138 - adc_coef_138
	uint16_t u16_adcCoef139;                        //7C8 - adc_coef_139 - adc_coef_139
	uint16_t u16_adcCoef140;                        //7CA - adc_coef_140 - adc_coef_140
	uint16_t u16_adcCoef141;                        //7CC - adc_coef_141 - adc_coef_141
	uint16_t u16_adcCoef142;                        //7CE - adc_coef_142 - adc_coef_142
	uint16_t u16_adcCoef143;                        //7D0 - adc_coef_143 - adc_coef_143
	uint16_t u16_adcCoef144;                        //7D2 - adc_coef_144 - adc_coef_144
	uint16_t u16_adcCoef145;                        //7D4 - adc_coef_145 - adc_coef_145
	uint16_t u16_adcCoef146;                        //7D6 - adc_coef_146 - adc_coef_146
	uint16_t u16_adcCoef147;                        //7D8 - adc_coef_147 - adc_coef_147
	uint16_t u16_adcCoef148;                        //7DA - adc_coef_148 - adc_coef_148
	uint16_t u16_adcCoef149;                        //7DC - adc_coef_149 - adc_coef_149
	uint16_t u16_adcCoef150;                        //7DE - adc_coef_150 - adc_coef_150
	uint16_t u16_adcCoef151;                        //7E0 - adc_coef_151 - adc_coef_151
	uint16_t u16_adcCoef152;                        //7E2 - adc_coef_152 - adc_coef_152
	uint16_t u16_adcCoef153;                        //7E4 - adc_coef_153 - adc_coef_153
	uint16_t u16_adcCoef154;                        //7E6 - adc_coef_154 - adc_coef_154
	uint16_t u16_adcCoef155;                        //7E8 - adc_coef_155 - adc_coef_155
	uint16_t u16_adcCoef156;                        //7EA - adc_coef_156 - adc_coef_156
	uint16_t u16_adcCoef157;                        //7EC - adc_coef_157 - adc_coef_157
	uint16_t u16_adcCoef158;                        //7EE - adc_coef_158 - adc_coef_158
	uint16_t u16_adcCoef159;                        //7F0 - adc_coef_159 - adc_coef_159
	uint16_t u16_adcCoef160;                        //7F2 - adc_coef_160 - adc_coef_160
	uint16_t u16_adcCoef161;                        //7F4 - adc_coef_161 - adc_coef_161
	uint16_t u16_adcCoef162;                        //7F6 - adc_coef_162 - adc_coef_162
	uint16_t u16_adcCoef163;                        //7F8 - adc_coef_163 - adc_coef_163
	uint16_t u16_adcCoef164;                        //7FA - adc_coef_164 - adc_coef_164
	uint16_t u16_adcCoef165;                        //7FC - adc_coef_165 - adc_coef_165
	uint16_t u16_adcCoef166;                        //7FE - adc_coef_166 - adc_coef_166
	uint16_t u16_adcCoef167;                        //800 - adc_coef_167 - adc_coef_167
	uint16_t u16_adcCoef168;                        //802 - adc_coef_168 - adc_coef_168
	uint16_t u16_adcCoef169;                        //804 - adc_coef_169 - adc_coef_169
	uint16_t u16_adcCoef170;                        //806 - adc_coef_170 - adc_coef_170
	uint16_t u16_adcCoef171;                        //808 - adc_coef_171 - adc_coef_171
	uint16_t u16_adcCoef172;                        //80A - adc_coef_172 - adc_coef_172
	uint16_t u16_adcCoef173;                        //80C - adc_coef_173 - adc_coef_173
	uint16_t u16_adcCoef174;                        //80E - adc_coef_174 - adc_coef_174
	uint16_t u16_adcCoef175;                        //810 - adc_coef_175 - adc_coef_175
	uint16_t u16_adcCoef176;                        //812 - adc_coef_176 - adc_coef_176
	uint16_t u16_adcCoef177;                        //814 - adc_coef_177 - adc_coef_177
	uint16_t u16_adcCoef178;                        //816 - adc_coef_178 - adc_coef_178
	uint16_t u16_adcCoef179;                        //818 - adc_coef_179 - adc_coef_179
	uint16_t u16_adcCoef180;                        //81A - adc_coef_180 - adc_coef_180
	uint16_t u16_adcCoef181;                        //81C - adc_coef_181 - adc_coef_181
	uint16_t u16_adcCoef182;                        //81E - adc_coef_182 - adc_coef_182
	uint16_t u16_adcCoef183;                        //820 - adc_coef_183 - adc_coef_183
	uint16_t u16_adcCoef184;                        //822 - adc_coef_184 - adc_coef_184
	uint16_t u16_adcCoef185;                        //824 - adc_coef_185 - adc_coef_185
	uint16_t u16_adcCoef186;                        //826 - adc_coef_186 - adc_coef_186
	uint16_t u16_adcCoef187;                        //828 - adc_coef_187 - adc_coef_187
	uint16_t u16_adcCoef188;                        //82A - adc_coef_188 - adc_coef_188
	uint16_t u16_adcCoef189;                        //82C - adc_coef_189 - adc_coef_189
	uint16_t u16_adcCoef190;                        //82E - adc_coef_190 - adc_coef_190
	uint16_t u16_adcCoef191;                        //830 - adc_coef_191 - adc_coef_191
	uint16_t u16_adcCoef192;                        //832 - adc_coef_192 - adc_coef_192
	uint16_t u16_adcCoef193;                        //834 - adc_coef_193 - adc_coef_193
	uint16_t u16_adcCoef194;                        //836 - adc_coef_194 - adc_coef_194
	uint16_t u16_adcCoef195;                        //838 - adc_coef_195 - adc_coef_195
	uint16_t u16_adcCoef196;                        //83A - adc_coef_196 - adc_coef_196
	uint16_t u16_adcCoef197;                        //83C - adc_coef_197 - adc_coef_197
	uint16_t u16_adcCoef198;                        //83E - adc_coef_198 - adc_coef_198
	uint16_t u16_adcCoef199;                        //840 - adc_coef_199 - adc_coef_199
	uint16_t u16_adcCoef200;                        //842 - adc_coef_200 - adc_coef_200
	uint16_t u16_adcCoef201;                        //844 - adc_coef_201 - adc_coef_201
	uint16_t u16_adcCoef202;                        //846 - adc_coef_202 - adc_coef_202
	uint16_t u16_adcCoef203;                        //848 - adc_coef_203 - adc_coef_203
	uint16_t u16_adcCoef204;                        //84A - adc_coef_204 - adc_coef_204
	uint16_t u16_adcCoef205;                        //84C - adc_coef_205 - adc_coef_205
	uint16_t u16_adcCoef206;                        //84E - adc_coef_206 - adc_coef_206
	uint16_t u16_adcCoef207;                        //850 - adc_coef_207 - adc_coef_207
	uint16_t u16_adcCoef208;                        //852 - adc_coef_208 - adc_coef_208
	uint16_t u16_adcCoef209;                        //854 - adc_coef_209 - adc_coef_209
	uint16_t u16_adcCoef210;                        //856 - adc_coef_210 - adc_coef_210
	uint16_t u16_adcCoef211;                        //858 - adc_coef_211 - adc_coef_211
	uint16_t u16_adcCoef212;                        //85A - adc_coef_212 - adc_coef_212
	uint16_t u16_adcCoef213;                        //85C - adc_coef_213 - adc_coef_213
	uint16_t u16_adcCoef214;                        //85E - adc_coef_214 - adc_coef_214
	uint16_t u16_adcCoef215;                        //860 - adc_coef_215 - adc_coef_215
	uint16_t u16_adcCoef216;                        //862 - adc_coef_216 - adc_coef_216
	uint16_t u16_adcCoef217;                        //864 - adc_coef_217 - adc_coef_217
	uint16_t u16_adcCoef218;                        //866 - adc_coef_218 - adc_coef_218
	uint16_t u16_adcCoef219;                        //868 - adc_coef_219 - adc_coef_219
	uint16_t u16_adcCoef220;                        //86A - adc_coef_220 - adc_coef_220
	uint16_t u16_adcCoef221;                        //86C - adc_coef_221 - adc_coef_221
	uint16_t u16_adcCoef222;                        //86E - adc_coef_222 - adc_coef_222
	uint16_t u16_adcCoef223;                        //870 - adc_coef_223 - adc_coef_223
	uint16_t u16_adcCoef224;                        //872 - adc_coef_224 - adc_coef_224
	uint16_t u16_adcCoef225;                        //874 - adc_coef_225 - adc_coef_225
	uint16_t u16_adcCoef226;                        //876 - adc_coef_226 - adc_coef_226
	uint16_t u16_adcCoef227;                        //878 - adc_coef_227 - adc_coef_227
	uint16_t u16_adcCoef228;                        //87A - adc_coef_228 - adc_coef_228
	uint16_t u16_adcCoef229;                        //87C - adc_coef_229 - adc_coef_229
	uint16_t u16_adcCoef230;                        //87E - adc_coef_230 - adc_coef_230
	uint16_t u16_adcCoef231;                        //880 - adc_coef_231 - adc_coef_231
	uint16_t u16_adcCoef232;                        //882 - adc_coef_232 - adc_coef_232
	uint16_t u16_adcCoef233;                        //884 - adc_coef_233 - adc_coef_233
	uint16_t u16_adcCoef234;                        //886 - adc_coef_234 - adc_coef_234
	uint16_t u16_adcCoef235;                        //888 - adc_coef_235 - adc_coef_235
	uint16_t u16_adcCoef236;                        //88A - adc_coef_236 - adc_coef_236
	uint16_t u16_adcCoef237;                        //88C - adc_coef_237 - adc_coef_237
	uint16_t u16_adcCoef238;                        //88E - adc_coef_238 - adc_coef_238
	uint16_t u16_adcCoef239;                        //890 - adc_coef_239 - adc_coef_239
	uint16_t u16_adcCoef240;                        //892 - adc_coef_240 - adc_coef_240
	uint16_t u16_adcCoef241;                        //894 - adc_coef_241 - adc_coef_241
	uint16_t u16_adcCoef242;                        //896 - adc_coef_242 - adc_coef_242
	uint16_t u16_adcCoef243;                        //898 - adc_coef_243 - adc_coef_243
	uint16_t u16_adcCoef244;                        //89A - adc_coef_244 - adc_coef_244
	uint16_t u16_adcCoef245;                        //89C - adc_coef_245 - adc_coef_245
	uint16_t u16_adcCoef246;                        //89E - adc_coef_246 - adc_coef_246
	uint16_t u16_adcCoef247;                        //8A0 - adc_coef_247 - adc_coef_247
	uint16_t u16_adcCoef248;                        //8A2 - adc_coef_248 - adc_coef_248
	uint16_t u16_adcCoef249;                        //8A4 - adc_coef_249 - adc_coef_249
	uint16_t u16_adcCoef250;                        //8A6 - adc_coef_250 - adc_coef_250
	uint16_t u16_adcCoef251;                        //8A8 - adc_coef_251 - adc_coef_251
	uint16_t u16_adcCoef252;                        //8AA - adc_coef_252 - adc_coef_252
	uint16_t u16_adcCoef253;                        //8AC - adc_coef_253 - adc_coef_253
	uint16_t u16_adcCoef254;                        //8AE - adc_coef_254 - adc_coef_254
	uint16_t u16_adcCoef255;                        //8B0 - adc_coef_255 - adc_coef_255
	uint16_t u16_adcCoef256;                        //8B2 - adc_coef_256 - adc_coef_256
	uint16_t u16_adcCoef257;                        //8B4 - adc_coef_257 - adc_coef_257
	uint16_t u16_adcCoef258;                        //8B6 - adc_coef_258 - adc_coef_258
	uint16_t u16_adcCoef259;                        //8B8 - adc_coef_259 - adc_coef_259
	uint16_t u16_adcCoef260;                        //8BA - adc_coef_260 - adc_coef_260
	uint16_t u16_adcCoef261;                        //8BC - adc_coef_261 - adc_coef_261
	uint16_t u16_adcCoef262;                        //8BE - adc_coef_262 - adc_coef_262
	uint16_t u16_adcCoef263;                        //8C0 - adc_coef_263 - adc_coef_263
	uint16_t u16_adcCoef264;                        //8C2 - adc_coef_264 - adc_coef_264
	uint16_t u16_adcCoef265;                        //8C4 - adc_coef_265 - adc_coef_265
	uint16_t u16_adcCoef266;                        //8C6 - adc_coef_266 - adc_coef_266
	uint16_t u16_adcCoef267;                        //8C8 - adc_coef_267 - adc_coef_267
	uint16_t u16_adcCoef268;                        //8CA - adc_coef_268 - adc_coef_268
	uint16_t u16_adcCoef269;                        //8CC - adc_coef_269 - adc_coef_269
	uint16_t u16_adcCoef270;                        //8CE - adc_coef_270 - adc_coef_270
	uint16_t u16_adcCoef271;                        //8D0 - adc_coef_271 - adc_coef_271
	uint16_t u16_adcCoef272;                        //8D2 - adc_coef_272 - adc_coef_272
	uint16_t u16_adcCoef273;                        //8D4 - adc_coef_273 - adc_coef_273
	uint16_t u16_adcCoef274;                        //8D6 - adc_coef_274 - adc_coef_274
	uint16_t u16_adcCoef275;                        //8D8 - adc_coef_275 - adc_coef_275
	uint16_t u16_adcCoef276;                        //8DA - adc_coef_276 - adc_coef_276
	uint16_t u16_adcCoef277;                        //8DC - adc_coef_277 - adc_coef_277
	uint16_t u16_adcCoef278;                        //8DE - adc_coef_278 - adc_coef_278
	uint16_t u16_adcCoef279;                        //8E0 - adc_coef_279 - adc_coef_279
	uint16_t u16_adcCoef280;                        //8E2 - adc_coef_280 - adc_coef_280
	uint16_t u16_adcCoef281;                        //8E4 - adc_coef_281 - adc_coef_281
	uint16_t u16_adcCoef282;                        //8E6 - adc_coef_282 - adc_coef_282
	uint16_t u16_adcCoef283;                        //8E8 - adc_coef_283 - adc_coef_283
	uint16_t u16_adcCoef284;                        //8EA - adc_coef_284 - adc_coef_284
	uint16_t u16_adcCoef285;                        //8EC - adc_coef_285 - adc_coef_285
	uint16_t u16_adcCoef286;                        //8EE - adc_coef_286 - adc_coef_286
	uint16_t u16_adcCoef287;                        //8F0 - adc_coef_287 - adc_coef_287
	uint16_t u16_adcCoef288;                        //8F2 - adc_coef_288 - adc_coef_288
	uint16_t u16_adcCoef289;                        //8F4 - adc_coef_289 - adc_coef_289
	uint16_t u16_adcCoef290;                        //8F6 - adc_coef_290 - adc_coef_290
	uint16_t u16_adcCoef291;                        //8F8 - adc_coef_291 - adc_coef_291
	uint16_t u16_adcCoef292;                        //8FA - adc_coef_292 - adc_coef_292
	uint16_t u16_adcCoef293;                        //8FC - adc_coef_293 - adc_coef_293
	uint16_t u16_adcCoef294;                        //8FE - adc_coef_294 - adc_coef_294
	uint16_t u16_adcCoef295;                        //900 - adc_coef_295 - adc_coef_295
	uint16_t u16_adcCoef296;                        //902 - adc_coef_296 - adc_coef_296
	uint16_t u16_adcCoef297;                        //904 - adc_coef_297 - adc_coef_297
	uint16_t u16_adcCoef298;                        //906 - adc_coef_298 - adc_coef_298
	uint16_t u16_adcCoef299;                        //908 - adc_coef_299 - adc_coef_299
	uint16_t u16_adcCoef300;                        //90A - adc_coef_300 - adc_coef_300
	uint16_t u16_adcCoef301;                        //90C - adc_coef_301 - adc_coef_301
	uint16_t u16_adcCoef302;                        //90E - adc_coef_302 - adc_coef_302
	uint16_t u16_adcCoef303;                        //910 - adc_coef_303 - adc_coef_303
	uint16_t u16_adcCoef304;                        //912 - adc_coef_304 - adc_coef_304
	uint16_t u16_adcCoef305;                        //914 - adc_coef_305 - adc_coef_305
	uint16_t u16_adcCoef306;                        //916 - adc_coef_306 - adc_coef_306
	uint16_t u16_adcCoef307;                        //918 - adc_coef_307 - adc_coef_307
	uint16_t u16_adcCoef308;                        //91A - adc_coef_308 - adc_coef_308
	uint16_t u16_adcCoef309;                        //91C - adc_coef_309 - adc_coef_309
	uint16_t u16_adcCoef310;                        //91E - adc_coef_310 - adc_coef_310
	uint16_t u16_adcCoef311;                        //920 - adc_coef_311 - adc_coef_311
	uint16_t u16_adcCoef312;                        //922 - adc_coef_312 - adc_coef_312
	uint16_t u16_adcCoef313;                        //924 - adc_coef_313 - adc_coef_313
	uint16_t u16_adcCoef314;                        //926 - adc_coef_314 - adc_coef_314
	uint16_t u16_adcCoef315;                        //928 - adc_coef_315 - adc_coef_315
	uint16_t u16_adcCoef316;                        //92A - adc_coef_316 - adc_coef_316
	uint16_t u16_adcCoef317;                        //92C - adc_coef_317 - adc_coef_317
	uint16_t u16_adcCoef318;                        //92E - adc_coef_318 - adc_coef_318
	uint16_t u16_adcCoef319;                        //930 - adc_coef_319 - adc_coef_319
	uint16_t u16_adcCoef320;                        //932 - adc_coef_320 - adc_coef_320
	uint16_t u16_adcCoef321;                        //934 - adc_coef_321 - adc_coef_321
	uint16_t u16_adcCoef322;                        //936 - adc_coef_322 - adc_coef_322
	uint16_t u16_adcCoef323;                        //938 - adc_coef_323 - adc_coef_323
	uint16_t u16_adcCoef324;                        //93A - adc_coef_324 - adc_coef_324
	uint16_t u16_adcCoef325;                        //93C - adc_coef_325 - adc_coef_325
	uint16_t u16_adcCoef326;                        //93E - adc_coef_326 - adc_coef_326
	uint16_t u16_adcCoef327;                        //940 - adc_coef_327 - adc_coef_327
	uint16_t u16_adcCoef328;                        //942 - adc_coef_328 - adc_coef_328
	uint16_t u16_adcCoef329;                        //944 - adc_coef_329 - adc_coef_329
	uint16_t u16_adcCoef330;                        //946 - adc_coef_330 - adc_coef_330
	uint16_t u16_adcCoef331;                        //948 - adc_coef_331 - adc_coef_331
	uint16_t u16_adcCoef332;                        //94A - adc_coef_332 - adc_coef_332
	uint16_t u16_adcCoef333;                        //94C - adc_coef_333 - adc_coef_333
	uint16_t u16_adcCoef334;                        //94E - adc_coef_334 - adc_coef_334
	uint16_t u16_adcCoef335;                        //950 - adc_coef_335 - adc_coef_335
	uint16_t u16_adcCoef336;                        //952 - adc_coef_336 - adc_coef_336
	uint16_t u16_adcCoef337;                        //954 - adc_coef_337 - adc_coef_337
	uint16_t u16_adcCoef338;                        //956 - adc_coef_338 - adc_coef_338
	uint16_t u16_adcCoef339;                        //958 - adc_coef_339 - adc_coef_339
	uint16_t u16_adcCoef340;                        //95A - adc_coef_340 - adc_coef_340
	uint16_t u16_adcCoef341;                        //95C - adc_coef_341 - adc_coef_341
	uint16_t u16_adcCoef342;                        //95E - adc_coef_342 - adc_coef_342
	uint16_t u16_adcCoef343;                        //960 - adc_coef_343 - adc_coef_343
	uint16_t u16_adcCoef344;                        //962 - adc_coef_344 - adc_coef_344
	uint16_t u16_adcCoef345;                        //964 - adc_coef_345 - adc_coef_345
	uint16_t u16_adcCoef346;                        //966 - adc_coef_346 - adc_coef_346
	uint16_t u16_adcCoef347;                        //968 - adc_coef_347 - adc_coef_347
	uint16_t u16_adcCoef348;                        //96A - adc_coef_348 - adc_coef_348
	uint16_t u16_adcCoef349;                        //96C - adc_coef_349 - adc_coef_349
	uint16_t u16_adcCoef350;                        //96E - adc_coef_350 - adc_coef_350
	uint16_t u16_adcCoef351;                        //970 - adc_coef_351 - adc_coef_351
	uint16_t u16_adcCoef352;                        //972 - adc_coef_352 - adc_coef_352
	uint16_t u16_adcCoef353;                        //974 - adc_coef_353 - adc_coef_353
	uint16_t u16_adcCoef354;                        //976 - adc_coef_354 - adc_coef_354
	uint16_t u16_adcCoef355;                        //978 - adc_coef_355 - adc_coef_355
	uint16_t u16_adcCoef356;                        //97A - adc_coef_356 - adc_coef_356
	uint16_t u16_adcCoef357;                        //97C - adc_coef_357 - adc_coef_357
	uint16_t u16_adcCoef358;                        //97E - adc_coef_358 - adc_coef_358
	uint16_t u16_adcCoef359;                        //980 - adc_coef_359 - adc_coef_359
	uint16_t u16_adcCoef360;                        //982 - adc_coef_360 - adc_coef_360
	uint16_t u16_adcCoef361;                        //984 - adc_coef_361 - adc_coef_361
	uint16_t u16_adcCoef362;                        //986 - adc_coef_362 - adc_coef_362
	uint16_t u16_adcCoef363;                        //988 - adc_coef_363 - adc_coef_363
	uint16_t u16_adcCoef364;                        //98A - adc_coef_364 - adc_coef_364
	uint16_t u16_adcCoef365;                        //98C - adc_coef_365 - adc_coef_365
	uint16_t u16_adcCoef366;                        //98E - adc_coef_366 - adc_coef_366
	uint16_t u16_adcCoef367;                        //990 - adc_coef_367 - adc_coef_367
	uint16_t u16_adcCoef368;                        //992 - adc_coef_368 - adc_coef_368
	uint16_t u16_adcCoef369;                        //994 - adc_coef_369 - adc_coef_369
	uint16_t u16_adcCoef370;                        //996 - adc_coef_370 - adc_coef_370
	uint16_t u16_adcCoef371;                        //998 - adc_coef_371 - adc_coef_371
	uint16_t u16_adcCoef372;                        //99A - adc_coef_372 - adc_coef_372
	uint16_t u16_adcCoef373;                        //99C - adc_coef_373 - adc_coef_373
	uint16_t u16_adcCoef374;                        //99E - adc_coef_374 - adc_coef_374
	uint16_t u16_adcCoef375;                        //9A0 - adc_coef_375 - adc_coef_375
	uint16_t u16_adcCoef376;                        //9A2 - adc_coef_376 - adc_coef_376
	uint16_t u16_adcCoef377;                        //9A4 - adc_coef_377 - adc_coef_377
	uint16_t u16_adcCoef378;                        //9A6 - adc_coef_378 - adc_coef_378
	uint16_t u16_adcCoef379;                        //9A8 - adc_coef_379 - adc_coef_379
	uint16_t u16_adcCoef380;                        //9AA - adc_coef_380 - adc_coef_380
	uint16_t u16_adcCoef381;                        //9AC - adc_coef_381 - adc_coef_381
	uint16_t u16_adcCoef382;                        //9AE - adc_coef_382 - adc_coef_382
	uint16_t u16_adcCoef383;                        //9B0 - adc_coef_383 - adc_coef_383
	uint16_t u16_adcCoef384;                        //9B2 - adc_coef_384 - adc_coef_384
	uint16_t u16_adcCoef385;                        //9B4 - adc_coef_385 - adc_coef_385
	uint16_t u16_adcCoef386;                        //9B6 - adc_coef_386 - adc_coef_386
	uint16_t u16_adcCoef387;                        //9B8 - adc_coef_387 - adc_coef_387
	uint16_t u16_adcCoef388;                        //9BA - adc_coef_388 - adc_coef_388
	uint16_t u16_adcCoef389;                        //9BC - adc_coef_389 - adc_coef_389
	uint16_t u16_adcCoef390;                        //9BE - adc_coef_390 - adc_coef_390
	uint16_t u16_adcCoef391;                        //9C0 - adc_coef_391 - adc_coef_391
	uint16_t u16_adcCoef392;                        //9C2 - adc_coef_392 - adc_coef_392
	uint16_t u16_adcCoef393;                        //9C4 - adc_coef_393 - adc_coef_393
	uint16_t u16_adcCoef394;                        //9C6 - adc_coef_394 - adc_coef_394
	uint16_t u16_adcCoef395;                        //9C8 - adc_coef_395 - adc_coef_395
	uint16_t u16_adcCoef396;                        //9CA - adc_coef_396 - adc_coef_396
	uint16_t u16_adcCoef397;                        //9CC - adc_coef_397 - adc_coef_397
	uint16_t u16_adcCoef398;                        //9CE - adc_coef_398 - adc_coef_398
	uint16_t u16_adcCoef399;                        //9D0 - adc_coef_399 - adc_coef_399
	uint16_t u16_adcCoef400;                        //9D2 - adc_coef_400 - adc_coef_400
	uint16_t u16_adcCoef401;                        //9D4 - adc_coef_401 - adc_coef_401
	uint16_t u16_adcCoef402;                        //9D6 - adc_coef_402 - adc_coef_402
	uint16_t u16_adcCoef403;                        //9D8 - adc_coef_403 - adc_coef_403
	uint16_t u16_adcCoef404;                        //9DA - adc_coef_404 - adc_coef_404
	uint16_t u16_adcCoef405;                        //9DC - adc_coef_405 - adc_coef_405
	uint16_t u16_adcCoef406;                        //9DE - adc_coef_406 - adc_coef_406
	uint16_t u16_adcCoef407;                        //9E0 - adc_coef_407 - adc_coef_407
	uint16_t u16_adcCoef408;                        //9E2 - adc_coef_408 - adc_coef_408
	uint16_t u16_adcCoef409;                        //9E4 - adc_coef_409 - adc_coef_409
	uint16_t u16_adcCoef410;                        //9E6 - adc_coef_410 - adc_coef_410
	uint16_t u16_adcCoef411;                        //9E8 - adc_coef_411 - adc_coef_411
	uint16_t u16_adcCoef412;                        //9EA - adc_coef_412 - adc_coef_412
	uint16_t u16_adcCoef413;                        //9EC - adc_coef_413 - adc_coef_413
	uint16_t u16_adcCoef414;                        //9EE - adc_coef_414 - adc_coef_414
	uint16_t u16_adcCoef415;                        //9F0 - adc_coef_415 - adc_coef_415
	uint16_t u16_adcCoef416;                        //9F2 - adc_coef_416 - adc_coef_416
	uint16_t u16_adcCoef417;                        //9F4 - adc_coef_417 - adc_coef_417
	uint16_t u16_adcCoef418;                        //9F6 - adc_coef_418 - adc_coef_418
	uint16_t u16_adcCoef419;                        //9F8 - adc_coef_419 - adc_coef_419
	__packed uint8_t b1_bdrRejCfg           : 1;    //9FA - bdr_rej_cfg - bdr_rej_cfg
	__packed uint8_t b7_reserved9FA_1_7     : 7;    //9FA - bdr_rej_cfg - reserved
	__packed uint16_t u16_bdrRejTopCoor;            //9FB - bdr_rej_top_coor - bdr_rej_top_coor
	__packed uint16_t u16_bdrRejBtmCoor;            //9FD - bdr_rej_btm_coor - bdr_rej_btm_coor
	uint8_t u8_reserved9FF;                         //9FF - reserved

	uint8_t u8_gripReportTapCnt;                    //A00 - grip_report_tap_cnt - grip_report_tap_cnt
	uint8_t u8_gripReportMoveDistance;              //A01 - grip_report_move_distance - grip_report_move_distance
	uint16_t u16_edgeRejCoor;                       //A02 - edge_rej_coor - edge_rej_coor
	uint16_t u16_edgeRejCentreXSt;                  //A04 - edge_rej_centre_x_st - edge_rej_centre_x_st
	uint16_t u16_edgeRejCentreXEnd;                 //A06 - edge_rej_centre_x_end - edge_rej_centre_x_end
	uint16_t u16_edgeRejCenterCoor;                 //A08 - edge_rej_center_coor - edge_rej_center_coor
	uint8_t u8_reservedA0A;                         //A0A - reserved
	__packed uint8_t b1_msTchNegDetLpFcalEn : 1;    //A0B - post_frm_cfg2 - ms_tch_neg_det_lp_fcal_en
	__packed uint8_t b1_msPureLnrCmmRxCheckEn   : 1;    //A0B - post_frm_cfg2 - ms_pure_lnr_cmm_rx_check_en
	__packed uint8_t b3_msPureIgnoreSpecificNodesEn : 3;    //A0B - post_frm_cfg2 - ms_pure_ignore_specific_nodes_en
	__packed uint8_t b3_reservedA0B_5_7     : 3;    //A0B - post_frm_cfg2 - reserved
	__packed uint8_t b1_msScrPureRawFcalEn  : 1;    //A0C - post_frm_cfg - ms_scr_pure_raw_fcal_en
	__packed uint8_t b1_invalidMtFcalEn     : 1;    //A0C - post_frm_cfg - invalid_mt_fcal_en
	__packed uint8_t b1_invalidSsFcalEn     : 1;    //A0C - post_frm_cfg - invalid_ss_fcal_en
	__packed uint8_t b1_invalidSsFrcFcalEn  : 1;    //A0C - post_frm_cfg - invalid_ss_frc_fcal_en
	__packed uint8_t b1_fcalMsScrDirtyCalibCheckEn  : 1;    //A0C - post_frm_cfg - fcal_ms_scr_dirty_calib_check_en
	__packed uint8_t b1_ssTchNegSumLowTempFcalEn    : 1;    //A0C - post_frm_cfg - ss_tch_neg_sum_low_temp_fcal_en
	__packed uint8_t b1_msPureIgnoreChEn    : 1;    //A0C - post_frm_cfg - ms_pure_ignore_ch_en
	__packed uint8_t b1_msTchNegDetFcalEn   : 1;    //A0C - post_frm_cfg - ms_tch_neg_det_fcal_en
	__packed uint16_t u16_msPureRawStrThres;        //A0D - ms_pure_raw_str_thres - ms_pure_raw_str_thres
	__packed uint16_t u16_msPureRawDiffThres;       //A0F - ms_pure_raw_diff_thres - ms_pure_raw_diff_thres
	uint8_t u8_msPureRawFcalMinNodes;               //A11 - ms_pure_raw_fcal_min_nodes - ms_pure_raw_fcal_min_nodes
	uint8_t u8_msPureRawFcalDbnc;                   //A12 - ms_pure_raw_fcal_dbnc - ms_pure_raw_fcal_dbnc
	uint8_t u8_msPureRawFcalExceptTblNum;           //A13 - ms_pure_raw_fcal_except_tbl_num - ms_pure_raw_fcal_except_tbl_num
	uint8_t u8_msPureRawFcalExceptCh01;             //A14 - ms_pure_raw_fcal_except_ch_01 - ms_pure_raw_fcal_except_ch_01
	uint8_t u8_msPureRawFcalExceptCh02;             //A15 - ms_pure_raw_fcal_except_ch_02 - ms_pure_raw_fcal_except_ch_02
	uint16_t u16_msPureRawStrGlvThres;              //A16 - ms_pure_raw_str_glv_thres - ms_pure_raw_str_glv_thres
	uint16_t u16_invMtSsDetThres;                   //A18 - inv_mt_ss_det_thres - inv_mt_ss_det_thres
	uint16_t u16_invMtMtDetThres;                   //A1A - inv_mt_mt_det_thres - inv_mt_mt_det_thres
	uint8_t u8_invMtFcalMinNodes;                   //A1C - inv_mt_fcal_min_nodes - inv_mt_fcal_min_nodes
	uint8_t u8_invMtFcalDbnc;                       //A1D - inv_mt_fcal_dbnc - inv_mt_fcal_dbnc
	uint16_t u16_invSsMtDetThres;                   //A1E - inv_ss_mt_det_thres - inv_ss_mt_det_thres
	uint16_t u16_invSsSsDetThres;                   //A20 - inv_ss_ss_det_thres - inv_ss_ss_det_thres
	uint8_t u8_invSsFcalMinNodes;                   //A22 - inv_ss_fcal_min_nodes - inv_ss_fcal_min_nodes
	uint8_t u8_invSsFcalDbnc;                       //A23 - inv_ss_fcal_dbnc - inv_ss_fcal_dbnc
	uint16_t u16_msNegSumThreForCalibDirty;         //A24 - ms_neg_str_thre_for_calib_dirty - ms_neg_sum_thre_for_calib_dirty
	uint16_t u16_msNegSumThresForCalibDirtyHyst;    //A26 - ms_neg_sum_thre_hys_for_calib_dirty - ms_neg_sum_thres_for_calib_dirty_hyst
	uint8_t u8_msNodeCntForCalibDirty;              //A28 - ms_node_cnt_for_calib_dirty - ms_node_cnt_for_calib_dirty
	uint8_t u8_msNodeCntForCalibDirtyHyst;          //A29 - ms_node_cnt_hys_for_calib_dirty - ms_node_cnt_for_calib_dirty_hyst
	uint8_t u8_tchInAddDlyDirtyCalib;               //A2A - tch_in_add_dly_dirty_calib - tch_in_add_dly_dirty_calib
	__packed uint16_t u16_ssTchNegSumPosStrThres;   //A2B - ss_tch_neg_sum_pos_str_thres - ss_tch_neg_sum_pos_str_thres
	__packed uint16_t u16_ssTchNegSumNegStrThres;   //A2D - ss_tch_neg_sum_neg_str_thres - ss_tch_neg_sum_neg_str_thres
	uint8_t u8_ssTchNegSumLowTempFcalDbnc;          //A2F - ss_tch_neg_sum_low_temp_fcal_dbnc - ss_tch_neg_sum_low_temp_fcal_dbnc
	uint8_t u8_msPureIgnoreStCh;                    //A30 - ms_pure_ignore_st_ch - ms_pure_ignore_st_ch
	uint8_t u8_msPureIgnoreEndCh;                   //A31 - ms_pure_ignore_end_ch - ms_pure_ignore_end_ch
	__packed uint8_t b1_msScrPureRawStddevStrFilterFcalEn   : 1;    //A32 - ms_pure_raw_stddev_cfg - ms_scr_pure_raw_stddev_str_filter_fcal_en
	__packed uint8_t b1_msScrPureRawStddevFilterPureFcalEn  : 1;    //A32 - ms_pure_raw_stddev_cfg - ms_scr_pure_raw_stddev_filter_pure_fcal_en
	__packed uint8_t b6_reservedA32_2_7     : 6;    //A32 - ms_pure_raw_stddev_cfg - reserved
	__packed uint16_t u16_msPureRawStddevMaxPureThres;  //A33 - ms_pure_raw_stddev_max_pure_thres - ms_pure_raw_stddev_max_pure_thres
	__packed uint16_t u16_msPureRawStddevInvalidStrFilterCenterRatioThres;  //A35 - ms_pure_raw_stddev_invalid_str_filter_center_ratio_thres - ms_pure_raw_stddev_invalid_str_filter_center_ratio_thres
	__packed uint16_t u16_msPureRawStddevInvalidStrFilterEdgeRatioThres;    //A37 - ms_pure_raw_stddev_invalid_str_filter_edge_ratio_thres - ms_pure_raw_stddev_invalid_str_filter_edge_ratio_thres
	__packed uint16_t u16_msPureRawStddevInvalidFilterPureRatioThres;   //A39 - ms_pure_raw_stddev_invalid_filter_pure_ratio_thres - ms_pure_raw_stddev_invalid_filter_pure_ratio_thres
	uint8_t u8_msPureRawStddevFcalDbnc;             //A3B - ms_pure_raw_stddev_fcal_dbnc - ms_pure_raw_stddev_fcal_dbnc
	uint16_t u16_msPureRawSlpCmmPosThres;           //A3C - ms_pure_raw_slp_cmm_pos_thres - ms_pure_raw_slp_cmm_pos_thres
	uint16_t u16_msPureRawSlpCmmNegThres;           //A3E - ms_pure_raw_slp_cmm_neg_thres - ms_pure_raw_slp_cmm_neg_thres
	uint16_t u16_msPureRawStddevFilterOnlyThres;    //A40 - ms_pure_raw_stddev_filter_only_thres - ms_pure_raw_stddev_filter_only_thres
	uint16_t u16_msPureRawStddevStrOnlyThres;       //A42 - ms_pure_raw_stddev_str_only_thres - ms_pure_raw_stddev_str_only_thres
	__packed uint8_t b1_notchStrCmpEn       : 1;    //A44 - notch_str_cmp_cfg - notch_str_cmp_en
	__packed uint8_t b7_reservedA44_1_7     : 7;    //A44 - notch_str_cmp_cfg - reserved
	uint8_t u8_notchStrGauSampleThres;              //A45 - north_str_cmp_percent - notch_str_gau_sample_thres
	uint8_t u8_notchStrCmpGauTopWgh01;              //A46 - notch_str_cmp_gau_top_wgh_01 - notch_str_cmp_gau_top_wgh_01
	uint8_t u8_notchStrCmpGauTopWgh02;              //A47 - notch_str_cmp_gau_top_wgh_02 - notch_str_cmp_gau_top_wgh_02
	uint8_t u8_notchStrCmpGauTopWgh03;              //A48 - notch_str_cmp_gau_top_wgh_03 - notch_str_cmp_gau_top_wgh_03
	uint8_t u8_notchStrCmpGauCentWgh01;             //A49 - notch_str_cmp_gau_cent_wgh_01 - notch_str_cmp_gau_cent_wgh_01
	uint8_t u8_notchStrCmpGauCentWgh02;             //A4A - notch_str_cmp_gau_cent_wgh_02 - notch_str_cmp_gau_cent_wgh_02
	uint8_t u8_notchStrCmpGauCentWgh03;             //A4B - notch_str_cmp_gau_cent_wgh_03 - notch_str_cmp_gau_cent_wgh_03
	uint8_t u8_notchStrCmpGauBtmWgh01;              //A4C - notch_str_cmp_gau_btm_wgh_01 - notch_str_cmp_gau_btm_wgh_01
	uint8_t u8_notchStrCmpGauBtmWgh02;              //A4D - notch_str_cmp_gau_btm_wgh_02 - notch_str_cmp_gau_btm_wgh_02
	uint8_t u8_notchStrCmpGauBtmWgh03;              //A4E - notch_str_cmp_gau_btm_wgh_03 - notch_str_cmp_gau_btm_wgh_03
	__packed uint16_t u16_msPureRawFcalR1RawShiftThres; //A4F - ms_pure_raw_fcal_r1_raw_shift_thres - ms_pure_raw_fcal_r1_raw_shift_thres
	__packed uint16_t u16_msPureRawFcalRlastRawShiftThres;  //A51 - ms_pure_raw_fcal_rlast_raw_shift_thres - ms_pure_raw_fcal_rlast_raw_shift_thres
	__packed uint8_t b1_tempInfoEn          : 1;    //A53 - temp_info_cfg - temp_info_en
	__packed uint8_t b1_tempTestEn          : 1;    //A53 - temp_info_cfg - temp_test_en
	__packed uint8_t b6_reservedA53_2_7     : 6;    //A53 - temp_info_cfg - reserved
	uint8_t u8_lowTempEntryThres;                   //A54 - low_temp_entry_thres - low_temp_entry_thres
	uint8_t u8_lowTempExitThres;                    //A55 - low_temp_exit_thres - low_temp_exit_thres
	uint16_t u16_lowTempFgrThres;                   //A56 - low_temp_fgr_thres - low_temp_fgr_thres
	uint8_t u8_lowTempFgrThresHyst;                 //A58 - low_temp_fgr_thres_hyst - low_temp_fgr_thres_hyst
	__packed uint16_t u16_msPureRawDiffMaxThres;    //A59 - ms_pure_raw_diff_max_thres - ms_pure_raw_diff_max_thres
	__packed uint16_t u16_grpCorner0MinXCoor;       //A5B - grp_corner_0_min_x_coor - grp_corner_0_min_x_coor
	__packed uint16_t u16_grpCorner0MinYCoor;       //A5D - grp_corner_0_min_y_coor - grp_corner_0_min_y_coor
	__packed uint16_t u16_grpCorner0MaxXCoor;       //A5F - grp_corner_0_max_x_coor - grp_corner_0_max_x_coor
	__packed uint16_t u16_grpCorner0MaxYCoor;       //A61 - grp_corner_0_max_y_coor - grp_corner_0_max_y_coor
	__packed uint16_t u16_grpCorner1MinXCoor;       //A63 - grp_corner_1_min_x_coor - grp_corner_1_min_x_coor
	__packed uint16_t u16_grpCorner1MinYCoor;       //A65 - grp_corner_1_min_y_coor - grp_corner_1_min_y_coor
	__packed uint16_t u16_grpCorner1MaxXCoor;       //A67 - grp_corner_1_max_x_coor - grp_corner_1_max_x_coor
	__packed uint16_t u16_grpCorner1MaxYCoor;       //A69 - grp_corner_1_max_y_coor - grp_corner_1_max_y_coor
	__packed uint16_t u16_grpCorner2MinXCoor;       //A6B - grp_corner_2_min_x_coor - grp_corner_2_min_x_coor
	__packed uint16_t u16_grpCorner2MinYCoor;       //A6D - grp_corner_2_min_y_coor - grp_corner_2_min_y_coor
	__packed uint16_t u16_grpCorner2MaxXCoor;       //A6F - grp_corner_2_max_x_coor - grp_corner_2_max_x_coor
	__packed uint16_t u16_grpCorner2MaxYCoor;       //A71 - grp_corner_2_max_y_coor - grp_corner_2_max_y_coor
	__packed uint16_t u16_grpCorner3MinXCoor;       //A73 - grp_corner_3_min_x_coor - grp_corner_3_min_x_coor
	__packed uint16_t u16_grpCorner3MinYCoor;       //A75 - grp_corner_3_min_y_coor - grp_corner_3_min_y_coor
	__packed uint16_t u16_grpCorner3MaxXCoor;       //A77 - grp_corner_3_max_x_coor - grp_corner_3_max_x_coor
	__packed uint16_t u16_grpCorner3MaxYCoor;       //A79 - grp_corner_3_max_y_coor - grp_corner_3_max_y_coor
	uint8_t u8_reservedA7B;                         //A7B - reserved
	uint16_t u16_grpDeadZoneLeftMinXCoor;           //A7C - grp_dead_zone_left_min_x_coor - grp_dead_zone_left_min_x_coor
	uint16_t u16_grpDeadZoneLeftMinYCoor;           //A7E - grp_dead_zone_left_min_y_coor - grp_dead_zone_left_min_y_coor
	uint16_t u16_grpDeadZoneLeftMaxXCoor;           //A80 - grp_dead_zone_left_max_x_coor - grp_dead_zone_left_max_x_coor
	uint16_t u16_grpDeadZoneLeftMaxYCoor;           //A82 - grp_dead_zone_left_max_y_coor - grp_dead_zone_left_max_y_coor
	uint16_t u16_grpEdgeZoneLeftMinXCoor;           //A84 - grp_edge_zone_left_min_x_coor - grp_edge_zone_left_min_x_coor
	uint16_t u16_grpEdgeZoneLeftMinYCoor;           //A86 - grp_edge_zone_left_min_y_coor - grp_edge_zone_left_min_y_coor
	uint16_t u16_grpEdgeZoneLeftMaxXCoor;           //A88 - grp_edge_zone_left_max_x_coor - grp_edge_zone_left_max_x_coor
	uint16_t u16_grpEdgeZoneLeftMaxYCoor;           //A8A - grp_edge_zone_left_max_y_coor - grp_edge_zone_left_max_y_coor
	uint16_t u16_grpDeadZoneRightMinXCoor;          //A8C - grp_dead_zone_right_min_x_coor - grp_dead_zone_right_min_x_coor
	uint16_t u16_grpDeadZoneRightMinYCoor;          //A8E - grp_dead_zone_right_min_y_coor - grp_dead_zone_right_min_y_coor
	uint16_t u16_grpDeadZoneRightMaxXCoor;          //A90 - grp_dead_zone_right_max_x_coor - grp_dead_zone_right_max_x_coor
	uint16_t u16_grpDeadZoneRightMaxYCoor;          //A92 - grp_dead_zone_right_max_y_coor - grp_dead_zone_right_max_y_coor
	uint16_t u16_grpEdgeZoneRightMinXCoor;          //A94 - grp_edge_zone_right_min_x_coor - grp_edge_zone_right_min_x_coor
	uint16_t u16_grpEdgeZoneRightMinYCoor;          //A96 - grp_edge_zone_right_min_y_coor - grp_edge_zone_right_min_y_coor
	uint16_t u16_grpEdgeZoneRightMaxXCoor;          //A98 - grp_edge_zone_right_max_x_coor - grp_edge_zone_right_max_x_coor
	uint16_t u16_grpEdgeZoneRightMaxYCoor;          //A9A - grp_edge_zone_right_max_y_coor - grp_edge_zone_right_max_y_coor
	uint16_t u16_grpDeadZoneTopMinXCoor;            //A9C - grp_dead_zone_top_min_x_coor - grp_dead_zone_top_min_x_coor
	uint16_t u16_grpDeadZoneTopMinYCoor;            //A9E - grp_dead_zone_top_min_y_coor - grp_dead_zone_top_min_y_coor
	uint16_t u16_grpDeadZoneTopMaxXCoor;            //AA0 - grp_dead_zone_top_max_x_coor - grp_dead_zone_top_max_x_coor
	uint16_t u16_grpDeadZoneTopMaxYCoor;            //AA2 - grp_dead_zone_top_max_y_coor - grp_dead_zone_top_max_y_coor
	uint16_t u16_grpEdgeZoneTopMinXCoor;            //AA4 - grp_edge_zone_top_min_x_coor - grp_edge_zone_top_min_x_coor
	uint16_t u16_grpEdgeZoneTopMinYCoor;            //AA6 - grp_edge_zone_top_min_y_coor - grp_edge_zone_top_min_y_coor
	uint16_t u16_grpEdgeZoneTopMaxXCoor;            //AA8 - grp_edge_zone_top_max_x_coor - grp_edge_zone_top_max_x_coor
	uint16_t u16_grpEdgeZoneTopMaxYCoor;            //AAA - grp_edge_zone_top_max_y_coor - grp_edge_zone_top_max_y_coor
	uint16_t u16_grpDeadZoneBtmMinXCoor;            //AAC - grp_dead_zone_btm_min_x_coor - grp_dead_zone_btm_min_x_coor
	uint16_t u16_grpDeadZoneBtmMinYCoor;            //AAE - grp_dead_zone_btm_min_y_coor - grp_dead_zone_btm_min_y_coor
	uint16_t u16_grpDeadZoneBtmMaxXCoor;            //AB0 - grp_dead_zone_btm_max_x_coor - grp_dead_zone_btm_max_x_coor
	uint16_t u16_grpDeadZoneBtmMaxYCoor;            //AB2 - grp_dead_zone_btm_max_y_coor - grp_dead_zone_btm_max_y_coor
	uint16_t u16_grpEdgeZoneBtmMinXCoor;            //AB4 - grp_edge_zone_btm_min_x_coor - grp_edge_zone_btm_min_x_coor
	uint16_t u16_grpEdgeZoneBtmMinYCoor;            //AB6 - grp_edge_zone_btm_min_y_coor - grp_edge_zone_btm_min_y_coor
	uint16_t u16_grpEdgeZoneBtmMaxXCoor;            //AB8 - grp_edge_zone_btm_max_x_coor - grp_edge_zone_btm_max_x_coor
	uint16_t u16_grpEdgeZoneBtmMaxYCoor;            //ABA - grp_edge_zone_btm_max_y_coor - grp_edge_zone_btm_max_y_coor
	__packed uint8_t b1_msMrnRIdxStepChangeEn   : 1;    //ABC - ms_hop_raw_offset_dbg - ms_mrn_r_idx_step_change_en
	__packed uint8_t b2_msMrnRIdxStepPos1Neg2Change : 2;    //ABC - ms_hop_raw_offset_dbg - ms_mrn_r_idx_step_pos_1_neg2_change
	__packed uint8_t b1_reservedABC_3_3     : 1;    //ABC - ms_hop_raw_offset_dbg - reserved
	__packed uint8_t b1_msMrnRIdxChangeEn   : 1;    //ABC - ms_hop_raw_offset_dbg - ms_mrn_r_idx_change_en
	__packed uint8_t b2_msMrnRIdx           : 2;    //ABC - ms_hop_raw_offset_dbg - ms_mrn_r_idx
	__packed uint8_t b1_reservedABC_7_7     : 1;    //ABC - ms_hop_raw_offset_dbg - reserved
	__packed uint8_t b1_multiRCalibAcalEn   : 1;    //ABD - ms_hop_raw_offset_cfg_01 - multi_r_calib_acal_en
	__packed uint8_t b3_msHopRawOffsetRxCnt : 3;    //ABD - ms_hop_raw_offset_cfg_01 - ms_hop_raw_offset_rx_cnt
	__packed uint8_t b1_reservedABD_4_4     : 1;    //ABD - ms_hop_raw_offset_cfg_01 - reserved
	__packed uint8_t b1_panelTargetStrCompEn    : 1;    //ABD - ms_hop_raw_offset_cfg_01 - panel_target_str_comp_en
	__packed uint8_t b2_reservedABD_6_7     : 2;    //ABD - ms_hop_raw_offset_cfg_01 - reserved
	uint16_t u16_msPureRawDiffHiaaThres;            //ABE - ms_pure_raw_diff_hiaa_thres - ms_pure_raw_diff_hiaa_thres
	uint16_t u16_msPureRawStddevForceEnableFrames;  //AC0 - ms_pure_raw_stddev_force_enable_frames - ms_pure_raw_stddev_force_enable_frames
	uint16_t u16_msPureRawStddevMaxCoorSpeed;       //AC2 - ms_pure_raw_stddev_max_coor_speed - ms_pure_raw_stddev_max_coor_speed
	uint16_t u16_msPureRawStddevMaxDiffStr;         //AC4 - ms_pure_raw_stddev_max_diff_str - ms_pure_raw_stddev_max_diff_str
	uint16_t u16_msPureRawDiffSpecialThres;         //AC6 - ms_pure_raw_diff_special_thres - ms_pure_raw_diff_special_thres
	__packed uint8_t b1_islandSumRejEn      : 1;    //AC8 - island_sum_cfg - island_sum_rej_en
	__packed uint8_t b1_islandSumNormalDynamicThdEn : 1;    //AC8 - island_sum_cfg - island_sum_normal_dynamic_thd_en
	__packed uint8_t b1_lpIslandSumRejEn    : 1;    //AC8 - island_sum_cfg - lp_island_sum_rej_en
	__packed uint8_t b5_reservedAC8_3_7     : 5;    //AC8 - island_sum_cfg - reserved
	__packed uint16_t u16_islandSumMotionActiveThres;   //AC9 - island_sum_motion_active_thres - island_sum_motion_active_thres
	__packed uint16_t u16_islandSumGameModeMotionActiveThres;   //ACB - island_sum_game_mode_motion_active_thres - island_sum_game_mode_motion_active_thres
	uint8_t u8_islandSumRptNumLimit;                //ACD - island_sum_rpt_num_limit - island_sum_rpt_num_limit
	uint16_t u16_islandSumBaseThres;                //ACE - island_sum_base_thres - island_sum_base_thres
	uint16_t u16_edgeIslandSumBaseThres;            //AD0 - edge_island_sum_base_thres - edge_island_sum_base_thres
	uint16_t u16_islandSumBaseThresHyst;            //AD2 - island_sum_base_thres_hyst - island_sum_base_thres_hyst
	uint16_t u16_edgeIslandSumBaseThresHyst;        //AD4 - edge_island_sum_base_thres_hyst - edge_island_sum_base_thres_hyst
	uint16_t u16_islandSumGameModeBaseThres;        //AD6 - island_sum_game_mode_base_thres - island_sum_game_mode_base_thres
	uint16_t u16_edgeIslandSumGameModeBaseThres;    //AD8 - edge_island_sum_game_mode_base_thres - edge_island_sum_game_mode_base_thres
	uint16_t u16_islandSumGameModeBaseThresHyst;    //ADA - island_sum_game_mode_base_thres_hyst - island_sum_game_mode_base_thres_hyst
	uint16_t u16_edgeIslandSumGameModeBaseThresHyst;    //ADC - edge_island_sum_game_mode_base_thres_hyst - edge_island_sum_game_mode_base_thres_hyst
	uint16_t u16_islandSumMaxLimitThres;            //ADE - island_sum_max_limit_thres - island_sum_max_limit_thres
	uint16_t u16_edgeIslandSumMaxLimitThres;        //AE0 - edge_island_sum_max_limit_thres - edge_island_sum_max_limit_thres
	uint16_t u16_islandSumGameModeMaxLimitThres;    //AE2 - island_sum_game_mode_max_limit_thres - island_sum_game_mode_max_limit_thres
	uint16_t u16_edgeIslandSumGameModeMaxLimitThres;    //AE4 - edge_island_sum_game_mode_max_limit_thres - edge_island_sum_game_mode_max_limit_thres
	uint16_t u16_islandSumMaxAddHiddenLimitThres;   //AE6 - island_sum_max_add_hidden_limit_thres - island_sum_max_add_hidden_limit_thres
	uint16_t u16_lslandSumSpeedChkBlkStrSumThres;   //AE8 - lsland_sum_speed_chk_blk_str_sum_thres - lsland_sum_speed_chk_blk_str_sum_thres
	uint8_t u8_islandSumSpeedLowThres;              //AEA - island_sum_speed_low_thres - island_sum_speed_low_thres
	uint8_t u8_islandSumSpeedHighThres;             //AEB - island_sum_speed_high_thres - island_sum_speed_high_thres
	uint8_t u8_islandSumDynamicThresMinPer;         //AEC - island_sum_dynamic_thres_min_per - island_sum_dynamic_thres_min_per
	uint8_t u8_islandSumDynamicThresMaxPer;         //AED - island_sum_dynamic_thres_max_per - island_sum_dynamic_thres_max_per
	uint8_t u8_islandSumDynamicThresAddPerInHidden; //AEE - island_sum_dynamic_thres_add_per_in_hidden - island_sum_dynamic_thres_add_per_in_hidden
	__packed uint16_t u16_lslandSumSpeedChkBlkStrSumMinThres;   //AEF - lsland_sum_speed_chk_blk_str_sum_min_thres - lsland_sum_speed_chk_blk_str_sum_min_thres
	uint8_t u8_msPureRawFcalEdgeDiffR2r35AdjustRatio;   //AF1 - ms_pure_raw_fcal_edge_diff_r2r35_adjust_ratio - ms_pure_raw_fcal_edge_diff_r2r35_adjust_ratio
	uint8_t u8_reservedAF2;                         //AF2 - reserved
	uint8_t u8_reservedAF3;                         //AF3 - reserved
	uint16_t u16_msRawCmmThres;                     //AF4 - ms_raw_cmm_thres - ms_raw_cmm_thres
	uint16_t u16_msRawCmmMaxMinDiffThres;           //AF6 - ms_raw_cmm_max_min_diff_thres - ms_raw_cmm_max_min_diff_thres
	uint16_t u16_msRawCmmDiffThres;                 //AF8 - ms_raw_cmm_diff_thres - ms_raw_cmm_diff_thres
	uint8_t u8_msIntgBndLnrCmmCh;                   //AFA - ms_intg_bnd_lnr_cmm_ch - ms_intg_bnd_lnr_cmm_ch
	uint8_t u8_msDiffLnrCmm1stNotchCoefWgh;         //AFB - ms_diff_lnr_cmm_1st_notch_coef_wgh - ms_diff_lnr_cmm_1st_notch_coef_wgh
	uint8_t u8_msDiffLnrCmm2ndNotchCoefWgh;         //AFC - ms_diff_lnr_cmm_2nd_notch_coef_wgh - ms_diff_lnr_cmm_2nd_notch_coef_wgh
	uint8_t u8_reservedAFD;                         //AFD - reserved
	__packed uint8_t b1_itoCpSel            : 1;    //AFE - ito_afe_cfg0 - ito_cp_sel
	__packed uint8_t b1_reservedAFE_1_1     : 1;    //AFE - ito_afe_cfg0 - reserved
	__packed uint8_t b1_itoDrv3xEn          : 1;    //AFE - ito_afe_cfg0 - ito_drv_3x_en
	__packed uint8_t b1_itoAcxEn            : 1;    //AFE - ito_afe_cfg0 - ito_acx_en
	__packed uint8_t b1_reservedAFE_4_4     : 1;    //AFE - ito_afe_cfg0 - reserved
	__packed uint8_t b1_itoDataFilterEn     : 1;    //AFE - ito_afe_cfg0 - ito_data_filter_en
	__packed uint8_t b1_itoOsFilterEn       : 1;    //AFE - ito_afe_cfg0 - ito_os_filter_en
	__packed uint8_t b1_itoAzEn             : 1;    //AFE - ito_afe_cfg0 - ito_az_en
	__packed uint8_t b1_itoIoffEn           : 1;    //AFF - ito_afe_cfg1 - ito_ioff_en
	__packed uint8_t b2_itoIoffStrength     : 2;    //AFF - ito_afe_cfg1 - ito_ioff_strength
	__packed uint8_t b1_reservedAFF_3_3     : 1;    //AFF - ito_afe_cfg1 - reserved
	__packed uint8_t b1_itoCgEn             : 1;    //AFF - ito_afe_cfg1 - ito_cg_en
	__packed uint8_t b2_itoDtoMode          : 2;    //AFF - ito_afe_cfg1 - ito_dto_mode
	__packed uint8_t b1_reservedAFF_7_7     : 1;    //AFF - ito_afe_cfg1 - reserved
	__packed uint8_t b1_itoC2iSingleEndEn   : 1;    //B00 - ito_afe_cfg2 - ito_c2i_single_end_en
	__packed uint8_t b1_itoC2iFloatEn       : 1;    //B00 - ito_afe_cfg2 - ito_c2i_float_en
	__packed uint8_t b2_itoC2iLcSel         : 2;    //B00 - ito_afe_cfg2 - ito_c2i_lc_sel
	__packed uint8_t b4_reservedB00_4_7     : 4;    //B00 - ito_afe_cfg2 - reserved
	uint8_t u8_itoCpTune;                           //B01 - ito_afe_cfg3 - ito_cp_tune
	__packed uint8_t b4_itoRlOfRt           : 4;    //B02 - ito_afe_cfg4 - ito_rl_of_rt
	__packed uint8_t b4_itoCxCnt            : 4;    //B02 - ito_afe_cfg4 - ito_cx_cnt
	__packed uint8_t b8_reservedB03_0_7     : 8;    //B03 - ito_afe_cfg5 - reserved
	uint16_t u16_itoTCyc;                           //B04 - ito_t_cyc - ito_t_cyc
	uint16_t u16_itoRCyc;                           //B06 - ito_r_cyc - ito_r_cyc
	uint16_t u16_itoOsDly;                          //B08 - ito_os_dly - ito_os_dly
	uint8_t u8_itoHighResAnalogAcc;                 //B0A - ito_high_res_prfl0 - ito_high_res_analog_acc
	__packed uint8_t b4_itoHighResDigAcc    : 4;    //B0B - ito_high_res_prfl1 - ito_high_res_dig_acc
	__packed uint8_t b2_itoHighResCa        : 2;    //B0B - ito_high_res_prfl1 - ito_high_res_ca
	__packed uint8_t b2_itoHighResDiv       : 2;    //B0B - ito_high_res_prfl1 - ito_high_res_div
	__packed uint8_t b4_itoHighResRstcCnt   : 4;    //B0C - ito_high_res_prfl2 - ito_high_res_rstc_cnt
	__packed uint8_t b4_reservedB0C_4_7     : 4;    //B0C - ito_high_res_prfl2 - reserved
	__packed uint8_t b5_itoHighResOsCnt     : 5;    //B0D - ito_high_res_prfl3 - ito_high_res_os_cnt
	__packed uint8_t b3_reservedB0D_5_7     : 3;    //B0D - ito_high_res_prfl3 - reserved
	__packed uint8_t b5_itoHighResOsAcc     : 5;    //B0E - ito_high_res_prfl4 - ito_high_res_os_acc
	__packed uint8_t b3_reservedB0E_5_7     : 3;    //B0E - ito_high_res_prfl4 - reserved
	__packed uint8_t b8_reservedB0F_0_7     : 8;    //B0F - ito_high_res_prfl5 - reserved
	uint16_t u16_itoHighResAccReset;                //B10 - ito_high_res_prfl6 - ito_high_res_acc_reset
	uint8_t u8_itoPanelOpenThres;                   //B12 - ito_panel_open_threshold - ito_panel_open_thres
	uint8_t u8_itoKeyOpenThres;                     //B13 - ito_key_open_threshold - ito_key_open_thres
	uint8_t u8_itoResistorSettingValue;             //B14 - ito_resistor_setting_value - ito_resistor_setting_value
	uint8_t u8_reservedB15;                         //B15 - reserved
	uint16_t u16_itoHiFreqMsKeyOpenThres;           //B16 - ito_hi_freq_ms_key_open_thres - ito_hi_freq_ms_key_open_thres
	__packed uint8_t b1_itoLowCpSel         : 1;    //B18 - ito_low_afe_cfg0 - ito_low_cp_sel
	__packed uint8_t b1_reservedB18_1_1     : 1;    //B18 - ito_low_afe_cfg0 - reserved
	__packed uint8_t b1_itoLowDrv3xEn       : 1;    //B18 - ito_low_afe_cfg0 - ito_low_drv_3x_en
	__packed uint8_t b1_itoLowAcxEn         : 1;    //B18 - ito_low_afe_cfg0 - ito_low_acx_en
	__packed uint8_t b1_reservedB18_4_4     : 1;    //B18 - ito_low_afe_cfg0 - reserved
	__packed uint8_t b1_itoLowDataFilterEn  : 1;    //B18 - ito_low_afe_cfg0 - ito_low_data_filter_en
	__packed uint8_t b1_itoLowOsFilterEn    : 1;    //B18 - ito_low_afe_cfg0 - ito_low_os_filter_en
	__packed uint8_t b1_itoLowAzEn          : 1;    //B18 - ito_low_afe_cfg0 - ito_low_az_en
	__packed uint8_t b1_itoLowIoffEn        : 1;    //B19 - ito_low_afe_cfg1 - ito_low_ioff_en
	__packed uint8_t b2_itoLowIoffStrength  : 2;    //B19 - ito_low_afe_cfg1 - ito_low_ioff_strength
	__packed uint8_t b1_reservedB19_3_3     : 1;    //B19 - ito_low_afe_cfg1 - reserved
	__packed uint8_t b1_itoLowCgEn          : 1;    //B19 - ito_low_afe_cfg1 - ito_low_cg_en
	__packed uint8_t b2_itoLowDtoMode       : 2;    //B19 - ito_low_afe_cfg1 - ito_low_dto_mode
	__packed uint8_t b1_reservedB19_7_7     : 1;    //B19 - ito_low_afe_cfg1 - reserved
	__packed uint8_t b1_itoLowC2iSingleEndEn    : 1;    //B1A - ito_low_afe_cfg2 - ito_low_c2i_single_end_en
	__packed uint8_t b1_itoLowC2iFloatEn    : 1;    //B1A - ito_low_afe_cfg2 - ito_low_c2i_float_en
	__packed uint8_t b2_itoLowC2iLcSel      : 2;    //B1A - ito_low_afe_cfg2 - ito_low_c2i_lc_sel
	__packed uint8_t b4_reservedB1A_4_7     : 4;    //B1A - ito_low_afe_cfg2 - reserved
	uint8_t u8_itoLowCpTune;                        //B1B - ito_low_afe_cfg3 - ito_low_cp_tune
	__packed uint8_t b4_itoLowRlOfRt        : 4;    //B1C - ito_low_afe_cfg4 - ito_low_rl_of_rt
	__packed uint8_t b4_itoLowCxCnt         : 4;    //B1C - ito_low_afe_cfg4 - ito_low_cx_cnt
	__packed uint8_t b8_reservedB1D_0_7     : 8;    //B1D - ito_low_afe_cfg5 - reserved
	uint16_t u16_itoLowTCyc;                        //B1E - ito_low_t_cyc - ito_low_t_cyc
	uint16_t u16_itoLowRCyc;                        //B20 - ito_low_r_cyc - ito_low_r_cyc
	uint16_t u16_itoLowOsDly;                       //B22 - ito_low_os_dly - ito_low_os_dly
	uint8_t u8_itoLowResAnalogAcc;                  //B24 - ito_low_res_prfl0 - ito_low_res_analog_acc
	__packed uint8_t b4_itoLowResDigAcc     : 4;    //B25 - ito_low_res_prfl1 - ito_low_res_dig_acc
	__packed uint8_t b2_itoLowResCa         : 2;    //B25 - ito_low_res_prfl1 - ito_low_res_ca
	__packed uint8_t b2_itoLowResDiv        : 2;    //B25 - ito_low_res_prfl1 - ito_low_res_div
	__packed uint8_t b4_itoLowResRstcCnt    : 4;    //B26 - ito_low_res_prfl2 - ito_low_res_rstc_cnt
	__packed uint8_t b4_reservedB26_4_7     : 4;    //B26 - ito_low_res_prfl2 - reserved
	__packed uint8_t b5_itoLowResOsCnt      : 5;    //B27 - ito_low_res_prfl3 - ito_low_res_os_cnt
	__packed uint8_t b3_reservedB27_5_7     : 3;    //B27 - ito_low_res_prfl3 - reserved
	__packed uint8_t b5_itoLowResOsAcc      : 5;    //B28 - ito_low_res_prfl4 - ito_low_res_os_acc
	__packed uint8_t b3_reservedB28_5_7     : 3;    //B28 - ito_low_res_prfl4 - reserved
	__packed uint8_t b8_reservedB29_0_7     : 8;    //B29 - ito_low_res_prfl5 - reserved
	uint16_t u16_itoLowResAccReset;                 //B2A - ito_low_res_prfl6 - ito_low_res_acc_reset
	uint8_t u8_reservedB2C;                         //B2C - reserved
	__packed uint8_t b1_msSenseStrAdjEn     : 1;    //B2D - ms_adj_str_cfg - ms_sense_str_adj_en
	__packed uint8_t b1_msSenseStrAdjCornerEn   : 1;    //B2D - ms_adj_str_cfg - ms_sense_str_adj_corner_en
	__packed uint8_t b1_msSenseStrAdjHoleEn : 1;    //B2D - ms_adj_str_cfg - ms_sense_str_adj_hole_en
	__packed uint8_t b5_reservedB2D_3_7     : 5;    //B2D - ms_adj_str_cfg - reserved
	uint8_t u8_r0MsSenseCenStrAdj0;                 //B2E - r0_ms_sense_cen_str_adj_0 - r0_ms_sense_cen_str_adj_0
	uint8_t u8_r0MsSenseCenStrAdj1;                 //B2F - r0_ms_sense_cen_str_adj_1 - r0_ms_sense_cen_str_adj_1
	uint8_t u8_r0MsSenseCenStrAdj2;                 //B30 - r0_ms_sense_cen_str_adj_2 - r0_ms_sense_cen_str_adj_2
	uint8_t u8_r0MsSenseCenStrAdj3;                 //B31 - r0_ms_sense_cen_str_adj_3 - r0_ms_sense_cen_str_adj_3
	uint8_t u8_r0MsSenseCenStrAdj4;                 //B32 - r0_ms_sense_cen_str_adj_4 - r0_ms_sense_cen_str_adj_4
	uint8_t u8_r0MsSenseCenStrAdj5;                 //B33 - r0_ms_sense_cen_str_adj_5 - r0_ms_sense_cen_str_adj_5
	uint8_t u8_r0MsSenseCenStrAdj6;                 //B34 - r0_ms_sense_cen_str_adj_6 - r0_ms_sense_cen_str_adj_6
	uint8_t u8_r0MsSenseCenStrAdj7;                 //B35 - r0_ms_sense_cen_str_adj_7 - r0_ms_sense_cen_str_adj_7
	uint8_t u8_r0MsSenseCenStrAdj8;                 //B36 - r0_ms_sense_cen_str_adj_8 - r0_ms_sense_cen_str_adj_8
	uint8_t u8_r0MsSenseCenStrAdj9;                 //B37 - r0_ms_sense_cen_str_adj_9 - r0_ms_sense_cen_str_adj_9
	uint8_t u8_r0MsSenseCenStrAdj10;                //B38 - r0_ms_sense_cen_str_adj_10 - r0_ms_sense_cen_str_adj_10
	uint8_t u8_r0MsSenseCenStrAdj11;                //B39 - r0_ms_sense_cen_str_adj_11 - r0_ms_sense_cen_str_adj_11
	uint8_t u8_r0MsSenseCenStrAdj12;                //B3A - r0_ms_sense_cen_str_adj_12 - r0_ms_sense_cen_str_adj_12
	uint8_t u8_r0MsSenseCenStrAdj13;                //B3B - r0_ms_sense_cen_str_adj_13 - r0_ms_sense_cen_str_adj_13
	uint8_t u8_r0MsSenseCenStrAdj14;                //B3C - r0_ms_sense_cen_str_adj_14 - r0_ms_sense_cen_str_adj_14
	uint8_t u8_r0MsSenseCenStrAdj15;                //B3D - r0_ms_sense_cen_str_adj_15 - r0_ms_sense_cen_str_adj_15
	uint8_t u8_r0MsSenseCenStrAdj16;                //B3E - r0_ms_sense_cen_str_adj_16 - r0_ms_sense_cen_str_adj_16
	uint8_t u8_r0MsSenseCenStrAdj17;                //B3F - r0_ms_sense_cen_str_adj_17 - r0_ms_sense_cen_str_adj_17
	uint8_t u8_r0MsSenseCenStrAdj18;                //B40 - r0_ms_sense_cen_str_adj_18 - r0_ms_sense_cen_str_adj_18
	uint8_t u8_r0MsSenseCenStrAdj19;                //B41 - r0_ms_sense_cen_str_adj_19 - r0_ms_sense_cen_str_adj_19
	uint8_t u8_r0MsSenseCenStrAdj20;                //B42 - r0_ms_sense_cen_str_adj_20 - r0_ms_sense_cen_str_adj_20
	uint8_t u8_r0MsSenseCenStrAdj21;                //B43 - r0_ms_sense_cen_str_adj_21 - r0_ms_sense_cen_str_adj_21
	uint8_t u8_r0MsSenseCenStrAdj22;                //B44 - r0_ms_sense_cen_str_adj_22 - r0_ms_sense_cen_str_adj_22
	uint8_t u8_r0MsSenseCenStrAdj23;                //B45 - r0_ms_sense_cen_str_adj_23 - r0_ms_sense_cen_str_adj_23
	uint8_t u8_r0MsSenseCenStrAdj24;                //B46 - r0_ms_sense_cen_str_adj_24 - r0_ms_sense_cen_str_adj_24
	uint8_t u8_r0MsSenseCenStrAdj25;                //B47 - r0_ms_sense_cen_str_adj_25 - r0_ms_sense_cen_str_adj_25
	uint8_t u8_r0MsSenseCenStrAdj26;                //B48 - r0_ms_sense_cen_str_adj_26 - r0_ms_sense_cen_str_adj_26
	uint8_t u8_r0MsSenseCenStrAdj27;                //B49 - r0_ms_sense_cen_str_adj_27 - r0_ms_sense_cen_str_adj_27
	uint8_t u8_r0MsSenseCenStrAdj28;                //B4A - r0_ms_sense_cen_str_adj_28 - r0_ms_sense_cen_str_adj_28
	uint8_t u8_r0MsSenseCenStrAdj29;                //B4B - r0_ms_sense_cen_str_adj_29 - r0_ms_sense_cen_str_adj_29
	uint8_t u8_r0MsSenseCenStrAdj30;                //B4C - r0_ms_sense_cen_str_adj_30 - r0_ms_sense_cen_str_adj_30
	uint8_t u8_r0MsSenseCenStrAdj31;                //B4D - r0_ms_sense_cen_str_adj_31 - r0_ms_sense_cen_str_adj_31
	uint8_t u8_r0MsSenseCenStrAdj32;                //B4E - r0_ms_sense_cen_str_adj_32 - r0_ms_sense_cen_str_adj_32
	uint8_t u8_r0MsSenseCenStrAdj33;                //B4F - r0_ms_sense_cen_str_adj_33 - r0_ms_sense_cen_str_adj_33
	uint8_t u8_r0MsSenseCenStrAdj34;                //B50 - r0_ms_sense_cen_str_adj_34 - r0_ms_sense_cen_str_adj_34
	uint8_t u8_r0MsSenseCenStrAdj35;                //B51 - r0_ms_sense_cen_str_adj_35 - r0_ms_sense_cen_str_adj_35
	uint8_t u8_r0MsSenseCenStrAdj36;                //B52 - r0_ms_sense_cen_str_adj_36 - r0_ms_sense_cen_str_adj_36
	uint8_t u8_r0MsSenseCenStrAdj37;                //B53 - r0_ms_sense_cen_str_adj_37 - r0_ms_sense_cen_str_adj_37
	uint8_t u8_r0MsSenseCenStrAdj38;                //B54 - r0_ms_sense_cen_str_adj_38 - r0_ms_sense_cen_str_adj_38
	uint8_t u8_r0MsSenseCenStrAdj39;                //B55 - r0_ms_sense_cen_str_adj_39 - r0_ms_sense_cen_str_adj_39
	uint8_t u8_r1MsSenseCenStrAdj0;                 //B56 - r1_ms_sense_cen_str_adj_0 - r1_ms_sense_cen_str_adj_0
	uint8_t u8_r1MsSenseCenStrAdj1;                 //B57 - r1_ms_sense_cen_str_adj_1 - r1_ms_sense_cen_str_adj_1
	uint8_t u8_r1MsSenseCenStrAdj2;                 //B58 - r1_ms_sense_cen_str_adj_2 - r1_ms_sense_cen_str_adj_2
	uint8_t u8_r1MsSenseCenStrAdj3;                 //B59 - r1_ms_sense_cen_str_adj_3 - r1_ms_sense_cen_str_adj_3
	uint8_t u8_r1MsSenseCenStrAdj4;                 //B5A - r1_ms_sense_cen_str_adj_4 - r1_ms_sense_cen_str_adj_4
	uint8_t u8_r1MsSenseCenStrAdj5;                 //B5B - r1_ms_sense_cen_str_adj_5 - r1_ms_sense_cen_str_adj_5
	uint8_t u8_r1MsSenseCenStrAdj6;                 //B5C - r1_ms_sense_cen_str_adj_6 - r1_ms_sense_cen_str_adj_6
	uint8_t u8_r1MsSenseCenStrAdj7;                 //B5D - r1_ms_sense_cen_str_adj_7 - r1_ms_sense_cen_str_adj_7
	uint8_t u8_r1MsSenseCenStrAdj8;                 //B5E - r1_ms_sense_cen_str_adj_8 - r1_ms_sense_cen_str_adj_8
	uint8_t u8_r1MsSenseCenStrAdj9;                 //B5F - r1_ms_sense_cen_str_adj_9 - r1_ms_sense_cen_str_adj_9
	uint8_t u8_r1MsSenseCenStrAdj10;                //B60 - r1_ms_sense_cen_str_adj_10 - r1_ms_sense_cen_str_adj_10
	uint8_t u8_r1MsSenseCenStrAdj11;                //B61 - r1_ms_sense_cen_str_adj_11 - r1_ms_sense_cen_str_adj_11
	uint8_t u8_r1MsSenseCenStrAdj12;                //B62 - r1_ms_sense_cen_str_adj_12 - r1_ms_sense_cen_str_adj_12
	uint8_t u8_r1MsSenseCenStrAdj13;                //B63 - r1_ms_sense_cen_str_adj_13 - r1_ms_sense_cen_str_adj_13
	uint8_t u8_r1MsSenseCenStrAdj14;                //B64 - r1_ms_sense_cen_str_adj_14 - r1_ms_sense_cen_str_adj_14
	uint8_t u8_r1MsSenseCenStrAdj15;                //B65 - r1_ms_sense_cen_str_adj_15 - r1_ms_sense_cen_str_adj_15
	uint8_t u8_r1MsSenseCenStrAdj16;                //B66 - r1_ms_sense_cen_str_adj_16 - r1_ms_sense_cen_str_adj_16
	uint8_t u8_r1MsSenseCenStrAdj17;                //B67 - r1_ms_sense_cen_str_adj_17 - r1_ms_sense_cen_str_adj_17
	uint8_t u8_r1MsSenseCenStrAdj18;                //B68 - r1_ms_sense_cen_str_adj_18 - r1_ms_sense_cen_str_adj_18
	uint8_t u8_r1MsSenseCenStrAdj19;                //B69 - r1_ms_sense_cen_str_adj_19 - r1_ms_sense_cen_str_adj_19
	uint8_t u8_r1MsSenseCenStrAdj20;                //B6A - r1_ms_sense_cen_str_adj_20 - r1_ms_sense_cen_str_adj_20
	uint8_t u8_r1MsSenseCenStrAdj21;                //B6B - r1_ms_sense_cen_str_adj_21 - r1_ms_sense_cen_str_adj_21
	uint8_t u8_r1MsSenseCenStrAdj22;                //B6C - r1_ms_sense_cen_str_adj_22 - r1_ms_sense_cen_str_adj_22
	uint8_t u8_r1MsSenseCenStrAdj23;                //B6D - r1_ms_sense_cen_str_adj_23 - r1_ms_sense_cen_str_adj_23
	uint8_t u8_r1MsSenseCenStrAdj24;                //B6E - r1_ms_sense_cen_str_adj_24 - r1_ms_sense_cen_str_adj_24
	uint8_t u8_r1MsSenseCenStrAdj25;                //B6F - r1_ms_sense_cen_str_adj_25 - r1_ms_sense_cen_str_adj_25
	uint8_t u8_r1MsSenseCenStrAdj26;                //B70 - r1_ms_sense_cen_str_adj_26 - r1_ms_sense_cen_str_adj_26
	uint8_t u8_r1MsSenseCenStrAdj27;                //B71 - r1_ms_sense_cen_str_adj_27 - r1_ms_sense_cen_str_adj_27
	uint8_t u8_r1MsSenseCenStrAdj28;                //B72 - r1_ms_sense_cen_str_adj_28 - r1_ms_sense_cen_str_adj_28
	uint8_t u8_r1MsSenseCenStrAdj29;                //B73 - r1_ms_sense_cen_str_adj_29 - r1_ms_sense_cen_str_adj_29
	uint8_t u8_r1MsSenseCenStrAdj30;                //B74 - r1_ms_sense_cen_str_adj_30 - r1_ms_sense_cen_str_adj_30
	uint8_t u8_r1MsSenseCenStrAdj31;                //B75 - r1_ms_sense_cen_str_adj_31 - r1_ms_sense_cen_str_adj_31
	uint8_t u8_r1MsSenseCenStrAdj32;                //B76 - r1_ms_sense_cen_str_adj_32 - r1_ms_sense_cen_str_adj_32
	uint8_t u8_r1MsSenseCenStrAdj33;                //B77 - r1_ms_sense_cen_str_adj_33 - r1_ms_sense_cen_str_adj_33
	uint8_t u8_r1MsSenseCenStrAdj34;                //B78 - r1_ms_sense_cen_str_adj_34 - r1_ms_sense_cen_str_adj_34
	uint8_t u8_r1MsSenseCenStrAdj35;                //B79 - r1_ms_sense_cen_str_adj_35 - r1_ms_sense_cen_str_adj_35
	uint8_t u8_r1MsSenseCenStrAdj36;                //B7A - r1_ms_sense_cen_str_adj_36 - r1_ms_sense_cen_str_adj_36
	uint8_t u8_r1MsSenseCenStrAdj37;                //B7B - r1_ms_sense_cen_str_adj_37 - r1_ms_sense_cen_str_adj_37
	uint8_t u8_r1MsSenseCenStrAdj38;                //B7C - r1_ms_sense_cen_str_adj_38 - r1_ms_sense_cen_str_adj_38
	uint8_t u8_r1MsSenseCenStrAdj39;                //B7D - r1_ms_sense_cen_str_adj_39 - r1_ms_sense_cen_str_adj_39
	uint8_t u8_r2MsSenseCenStrAdj0;                 //B7E - r2_ms_sense_cen_str_adj_0 - r2_ms_sense_cen_str_adj_0
	uint8_t u8_r2MsSenseCenStrAdj1;                 //B7F - r2_ms_sense_cen_str_adj_1 - r2_ms_sense_cen_str_adj_1
	uint8_t u8_r2MsSenseCenStrAdj2;                 //B80 - r2_ms_sense_cen_str_adj_2 - r2_ms_sense_cen_str_adj_2
	uint8_t u8_r2MsSenseCenStrAdj3;                 //B81 - r2_ms_sense_cen_str_adj_3 - r2_ms_sense_cen_str_adj_3
	uint8_t u8_r2MsSenseCenStrAdj4;                 //B82 - r2_ms_sense_cen_str_adj_4 - r2_ms_sense_cen_str_adj_4
	uint8_t u8_r2MsSenseCenStrAdj5;                 //B83 - r2_ms_sense_cen_str_adj_5 - r2_ms_sense_cen_str_adj_5
	uint8_t u8_r2MsSenseCenStrAdj6;                 //B84 - r2_ms_sense_cen_str_adj_6 - r2_ms_sense_cen_str_adj_6
	uint8_t u8_r2MsSenseCenStrAdj7;                 //B85 - r2_ms_sense_cen_str_adj_7 - r2_ms_sense_cen_str_adj_7
	uint8_t u8_r2MsSenseCenStrAdj8;                 //B86 - r2_ms_sense_cen_str_adj_8 - r2_ms_sense_cen_str_adj_8
	uint8_t u8_r2MsSenseCenStrAdj9;                 //B87 - r2_ms_sense_cen_str_adj_9 - r2_ms_sense_cen_str_adj_9
	uint8_t u8_r2MsSenseCenStrAdj10;                //B88 - r2_ms_sense_cen_str_adj_10 - r2_ms_sense_cen_str_adj_10
	uint8_t u8_r2MsSenseCenStrAdj11;                //B89 - r2_ms_sense_cen_str_adj_11 - r2_ms_sense_cen_str_adj_11
	uint8_t u8_r2MsSenseCenStrAdj12;                //B8A - r2_ms_sense_cen_str_adj_12 - r2_ms_sense_cen_str_adj_12
	uint8_t u8_r2MsSenseCenStrAdj13;                //B8B - r2_ms_sense_cen_str_adj_13 - r2_ms_sense_cen_str_adj_13
	uint8_t u8_r2MsSenseCenStrAdj14;                //B8C - r2_ms_sense_cen_str_adj_14 - r2_ms_sense_cen_str_adj_14
	uint8_t u8_r2MsSenseCenStrAdj15;                //B8D - r2_ms_sense_cen_str_adj_15 - r2_ms_sense_cen_str_adj_15
	uint8_t u8_r2MsSenseCenStrAdj16;                //B8E - r2_ms_sense_cen_str_adj_16 - r2_ms_sense_cen_str_adj_16
	uint8_t u8_r2MsSenseCenStrAdj17;                //B8F - r2_ms_sense_cen_str_adj_17 - r2_ms_sense_cen_str_adj_17
	uint8_t u8_r2MsSenseCenStrAdj18;                //B90 - r2_ms_sense_cen_str_adj_18 - r2_ms_sense_cen_str_adj_18
	uint8_t u8_r2MsSenseCenStrAdj19;                //B91 - r2_ms_sense_cen_str_adj_19 - r2_ms_sense_cen_str_adj_19
	uint8_t u8_r2MsSenseCenStrAdj20;                //B92 - r2_ms_sense_cen_str_adj_20 - r2_ms_sense_cen_str_adj_20
	uint8_t u8_r2MsSenseCenStrAdj21;                //B93 - r2_ms_sense_cen_str_adj_21 - r2_ms_sense_cen_str_adj_21
	uint8_t u8_r2MsSenseCenStrAdj22;                //B94 - r2_ms_sense_cen_str_adj_22 - r2_ms_sense_cen_str_adj_22
	uint8_t u8_r2MsSenseCenStrAdj23;                //B95 - r2_ms_sense_cen_str_adj_23 - r2_ms_sense_cen_str_adj_23
	uint8_t u8_r2MsSenseCenStrAdj24;                //B96 - r2_ms_sense_cen_str_adj_24 - r2_ms_sense_cen_str_adj_24
	uint8_t u8_r2MsSenseCenStrAdj25;                //B97 - r2_ms_sense_cen_str_adj_25 - r2_ms_sense_cen_str_adj_25
	uint8_t u8_r2MsSenseCenStrAdj26;                //B98 - r2_ms_sense_cen_str_adj_26 - r2_ms_sense_cen_str_adj_26
	uint8_t u8_r2MsSenseCenStrAdj27;                //B99 - r2_ms_sense_cen_str_adj_27 - r2_ms_sense_cen_str_adj_27
	uint8_t u8_r2MsSenseCenStrAdj28;                //B9A - r2_ms_sense_cen_str_adj_28 - r2_ms_sense_cen_str_adj_28
	uint8_t u8_r2MsSenseCenStrAdj29;                //B9B - r2_ms_sense_cen_str_adj_29 - r2_ms_sense_cen_str_adj_29
	uint8_t u8_r2MsSenseCenStrAdj30;                //B9C - r2_ms_sense_cen_str_adj_30 - r2_ms_sense_cen_str_adj_30
	uint8_t u8_r2MsSenseCenStrAdj31;                //B9D - r2_ms_sense_cen_str_adj_31 - r2_ms_sense_cen_str_adj_31
	uint8_t u8_r2MsSenseCenStrAdj32;                //B9E - r2_ms_sense_cen_str_adj_32 - r2_ms_sense_cen_str_adj_32
	uint8_t u8_r2MsSenseCenStrAdj33;                //B9F - r2_ms_sense_cen_str_adj_33 - r2_ms_sense_cen_str_adj_33
	uint8_t u8_r2MsSenseCenStrAdj34;                //BA0 - r2_ms_sense_cen_str_adj_34 - r2_ms_sense_cen_str_adj_34
	uint8_t u8_r2MsSenseCenStrAdj35;                //BA1 - r2_ms_sense_cen_str_adj_35 - r2_ms_sense_cen_str_adj_35
	uint8_t u8_r2MsSenseCenStrAdj36;                //BA2 - r2_ms_sense_cen_str_adj_36 - r2_ms_sense_cen_str_adj_36
	uint8_t u8_r2MsSenseCenStrAdj37;                //BA3 - r2_ms_sense_cen_str_adj_37 - r2_ms_sense_cen_str_adj_37
	uint8_t u8_r2MsSenseCenStrAdj38;                //BA4 - r2_ms_sense_cen_str_adj_38 - r2_ms_sense_cen_str_adj_38
	uint8_t u8_r2MsSenseCenStrAdj39;                //BA5 - r2_ms_sense_cen_str_adj_39 - r2_ms_sense_cen_str_adj_39
	uint8_t u8_r3MsSenseCenStrAdj0;                 //BA6 - r3_ms_sense_cen_str_adj_0 - r3_ms_sense_cen_str_adj_0
	uint8_t u8_r3MsSenseCenStrAdj1;                 //BA7 - r3_ms_sense_cen_str_adj_1 - r3_ms_sense_cen_str_adj_1
	uint8_t u8_r3MsSenseCenStrAdj2;                 //BA8 - r3_ms_sense_cen_str_adj_2 - r3_ms_sense_cen_str_adj_2
	uint8_t u8_r3MsSenseCenStrAdj3;                 //BA9 - r3_ms_sense_cen_str_adj_3 - r3_ms_sense_cen_str_adj_3
	uint8_t u8_r3MsSenseCenStrAdj4;                 //BAA - r3_ms_sense_cen_str_adj_4 - r3_ms_sense_cen_str_adj_4
	uint8_t u8_r3MsSenseCenStrAdj5;                 //BAB - r3_ms_sense_cen_str_adj_5 - r3_ms_sense_cen_str_adj_5
	uint8_t u8_r3MsSenseCenStrAdj6;                 //BAC - r3_ms_sense_cen_str_adj_6 - r3_ms_sense_cen_str_adj_6
	uint8_t u8_r3MsSenseCenStrAdj7;                 //BAD - r3_ms_sense_cen_str_adj_7 - r3_ms_sense_cen_str_adj_7
	uint8_t u8_r3MsSenseCenStrAdj8;                 //BAE - r3_ms_sense_cen_str_adj_8 - r3_ms_sense_cen_str_adj_8
	uint8_t u8_r3MsSenseCenStrAdj9;                 //BAF - r3_ms_sense_cen_str_adj_9 - r3_ms_sense_cen_str_adj_9
	uint8_t u8_r3MsSenseCenStrAdj10;                //BB0 - r3_ms_sense_cen_str_adj_10 - r3_ms_sense_cen_str_adj_10
	uint8_t u8_r3MsSenseCenStrAdj11;                //BB1 - r3_ms_sense_cen_str_adj_11 - r3_ms_sense_cen_str_adj_11
	uint8_t u8_r3MsSenseCenStrAdj12;                //BB2 - r3_ms_sense_cen_str_adj_12 - r3_ms_sense_cen_str_adj_12
	uint8_t u8_r3MsSenseCenStrAdj13;                //BB3 - r3_ms_sense_cen_str_adj_13 - r3_ms_sense_cen_str_adj_13
	uint8_t u8_r3MsSenseCenStrAdj14;                //BB4 - r3_ms_sense_cen_str_adj_14 - r3_ms_sense_cen_str_adj_14
	uint8_t u8_r3MsSenseCenStrAdj15;                //BB5 - r3_ms_sense_cen_str_adj_15 - r3_ms_sense_cen_str_adj_15
	uint8_t u8_r3MsSenseCenStrAdj16;                //BB6 - r3_ms_sense_cen_str_adj_16 - r3_ms_sense_cen_str_adj_16
	uint8_t u8_r3MsSenseCenStrAdj17;                //BB7 - r3_ms_sense_cen_str_adj_17 - r3_ms_sense_cen_str_adj_17
	uint8_t u8_r3MsSenseCenStrAdj18;                //BB8 - r3_ms_sense_cen_str_adj_18 - r3_ms_sense_cen_str_adj_18
	uint8_t u8_r3MsSenseCenStrAdj19;                //BB9 - r3_ms_sense_cen_str_adj_19 - r3_ms_sense_cen_str_adj_19
	uint8_t u8_r3MsSenseCenStrAdj20;                //BBA - r3_ms_sense_cen_str_adj_20 - r3_ms_sense_cen_str_adj_20
	uint8_t u8_r3MsSenseCenStrAdj21;                //BBB - r3_ms_sense_cen_str_adj_21 - r3_ms_sense_cen_str_adj_21
	uint8_t u8_r3MsSenseCenStrAdj22;                //BBC - r3_ms_sense_cen_str_adj_22 - r3_ms_sense_cen_str_adj_22
	uint8_t u8_r3MsSenseCenStrAdj23;                //BBD - r3_ms_sense_cen_str_adj_23 - r3_ms_sense_cen_str_adj_23
	uint8_t u8_r3MsSenseCenStrAdj24;                //BBE - r3_ms_sense_cen_str_adj_24 - r3_ms_sense_cen_str_adj_24
	uint8_t u8_r3MsSenseCenStrAdj25;                //BBF - r3_ms_sense_cen_str_adj_25 - r3_ms_sense_cen_str_adj_25
	uint8_t u8_r3MsSenseCenStrAdj26;                //BC0 - r3_ms_sense_cen_str_adj_26 - r3_ms_sense_cen_str_adj_26
	uint8_t u8_r3MsSenseCenStrAdj27;                //BC1 - r3_ms_sense_cen_str_adj_27 - r3_ms_sense_cen_str_adj_27
	uint8_t u8_r3MsSenseCenStrAdj28;                //BC2 - r3_ms_sense_cen_str_adj_28 - r3_ms_sense_cen_str_adj_28
	uint8_t u8_r3MsSenseCenStrAdj29;                //BC3 - r3_ms_sense_cen_str_adj_29 - r3_ms_sense_cen_str_adj_29
	uint8_t u8_r3MsSenseCenStrAdj30;                //BC4 - r3_ms_sense_cen_str_adj_30 - r3_ms_sense_cen_str_adj_30
	uint8_t u8_r3MsSenseCenStrAdj31;                //BC5 - r3_ms_sense_cen_str_adj_31 - r3_ms_sense_cen_str_adj_31
	uint8_t u8_r3MsSenseCenStrAdj32;                //BC6 - r3_ms_sense_cen_str_adj_32 - r3_ms_sense_cen_str_adj_32
	uint8_t u8_r3MsSenseCenStrAdj33;                //BC7 - r3_ms_sense_cen_str_adj_33 - r3_ms_sense_cen_str_adj_33
	uint8_t u8_r3MsSenseCenStrAdj34;                //BC8 - r3_ms_sense_cen_str_adj_34 - r3_ms_sense_cen_str_adj_34
	uint8_t u8_r3MsSenseCenStrAdj35;                //BC9 - r3_ms_sense_cen_str_adj_35 - r3_ms_sense_cen_str_adj_35
	uint8_t u8_r3MsSenseCenStrAdj36;                //BCA - r3_ms_sense_cen_str_adj_36 - r3_ms_sense_cen_str_adj_36
	uint8_t u8_r3MsSenseCenStrAdj37;                //BCB - r3_ms_sense_cen_str_adj_37 - r3_ms_sense_cen_str_adj_37
	uint8_t u8_r3MsSenseCenStrAdj38;                //BCC - r3_ms_sense_cen_str_adj_38 - r3_ms_sense_cen_str_adj_38
	uint8_t u8_r3MsSenseCenStrAdj39;                //BCD - r3_ms_sense_cen_str_adj_39 - r3_ms_sense_cen_str_adj_39
	uint8_t u8_r0MsSenseEdgeStrAdj0;                //BCE - r0_ms_sense_edge_str_adj_0 - r0_ms_sense_edge_str_adj_0
	uint8_t u8_r0MsSenseEdgeStrAdj1;                //BCF - r0_ms_sense_edge_str_adj_1 - r0_ms_sense_edge_str_adj_1
	uint8_t u8_r0MsSenseEdgeStrAdj2;                //BD0 - r0_ms_sense_edge_str_adj_2 - r0_ms_sense_edge_str_adj_2
	uint8_t u8_r0MsSenseEdgeStrAdj3;                //BD1 - r0_ms_sense_edge_str_adj_3 - r0_ms_sense_edge_str_adj_3
	uint8_t u8_r1MsSenseEdgeStrAdj0;                //BD2 - r1_ms_sense_edge_str_adj_0 - r1_ms_sense_edge_str_adj_0
	uint8_t u8_r1MsSenseEdgeStrAdj1;                //BD3 - r1_ms_sense_edge_str_adj_1 - r1_ms_sense_edge_str_adj_1
	uint8_t u8_r1MsSenseEdgeStrAdj2;                //BD4 - r1_ms_sense_edge_str_adj_2 - r1_ms_sense_edge_str_adj_2
	uint8_t u8_r1MsSenseEdgeStrAdj3;                //BD5 - r1_ms_sense_edge_str_adj_3 - r1_ms_sense_edge_str_adj_3
	uint8_t u8_r2MsSenseEdgeStrAdj0;                //BD6 - r2_ms_sense_edge_str_adj_0 - r2_ms_sense_edge_str_adj_0
	uint8_t u8_r2MsSenseEdgeStrAdj1;                //BD7 - r2_ms_sense_edge_str_adj_1 - r2_ms_sense_edge_str_adj_1
	uint8_t u8_r2MsSenseEdgeStrAdj2;                //BD8 - r2_ms_sense_edge_str_adj_2 - r2_ms_sense_edge_str_adj_2
	uint8_t u8_r2MsSenseEdgeStrAdj3;                //BD9 - r2_ms_sense_edge_str_adj_3 - r2_ms_sense_edge_str_adj_3
	uint8_t u8_r3MsSenseEdgeStrAdj0;                //BDA - r3_ms_sense_edge_str_adj_0 - r3_ms_sense_edge_str_adj_0
	uint8_t u8_r3MsSenseEdgeStrAdj1;                //BDB - r3_ms_sense_edge_str_adj_1 - r3_ms_sense_edge_str_adj_1
	uint8_t u8_r3MsSenseEdgeStrAdj2;                //BDC - r3_ms_sense_edge_str_adj_2 - r3_ms_sense_edge_str_adj_2
	uint8_t u8_r3MsSenseEdgeStrAdj3;                //BDD - r3_ms_sense_edge_str_adj_3 - r3_ms_sense_edge_str_adj_3
	uint8_t u8_reservedBDE;                         //BDE - reserved
	uint8_t u8_reservedBDF;                         //BDF - reserved
	uint16_t u16_lngShapeLengthThres;               //BE0 - lng_shape_length_thres - lng_shape_length_thres
	uint16_t u16_lngShapeWidthThres;                //BE2 - lng_shape_width_thres - lng_shape_width_thres
	uint16_t u16_lngShapeNodeThres;                 //BE4 - lng_shape_node_thres - lng_shape_node_thres
	uint16_t u16_lngShapeNodeDiffThres;             //BE6 - lng_shape_node_diff_thres - lng_shape_node_diff_thres
	uint16_t u16_lngShapeExtNode;                   //BE8 - lng_shape_ext_node - lng_shape_ext_node
	uint8_t u8_reservedBEA;                         //BEA - reserved
	uint8_t u8_reservedBEB;                         //BEB - reserved
	uint8_t u8_reservedBEC;                         //BEC - reserved
	uint8_t u8_reservedBED;                         //BED - reserved
	uint8_t u8_reservedBEE;                         //BEE - reserved
	uint8_t u8_reservedBEF;                         //BEF - reserved
	uint16_t u16_msResR01Ratio;                     //BF0 - ms_res_r01_ratio - ms_res_r01_ratio
	uint16_t u16_msResFgrr2Thres;                   //BF2 - ms_res_fgrR2_thres - ms_res_fgrR2_thres
	uint16_t u16_msResR12Ratio;                     //BF4 - ms_res_r12_ratio - ms_res_r12_ratio
	uint8_t u8_reservedBF6;                         //BF6 - reserved
	uint8_t u8_reservedBF7;                         //BF7 - reserved
	uint8_t u8_reservedBF8;                         //BF8 - reserved
	uint8_t u8_reservedBF9;                         //BF9 - reserved
	uint8_t u8_reservedBFA;                         //BFA - reserved
	uint8_t u8_reservedBFB;                         //BFB - reserved
	uint8_t u8_reservedBFC;                         //BFC - reserved
	uint8_t u8_reservedBFD;                         //BFD - reserved
	uint8_t u8_reservedBFE;                         //BFE - reserved
	uint8_t u8_reservedBFF;                         //BFF - reserved
	uint8_t u8_reservedC00;                         //C00 - reserved
	uint8_t u8_reservedC01;                         //C01 - reserved
	uint8_t u8_reservedC02;                         //C02 - reserved
	uint8_t u8_reservedC03;                         //C03 - reserved
	uint8_t u8_reservedC04;                         //C04 - reserved
	uint8_t u8_reservedC05;                         //C05 - reserved
	uint8_t u8_reservedC06;                         //C06 - reserved
	uint8_t u8_reservedC07;                         //C07 - reserved
	uint8_t u8_reservedC08;                         //C08 - reserved
	uint8_t u8_reservedC09;                         //C09 - reserved
	uint8_t u8_reservedC0A;                         //C0A - reserved
	uint8_t u8_reservedC0B;                         //C0B - reserved
	uint8_t u8_reservedC0C;                         //C0C - reserved
	uint8_t u8_reservedC0D;                         //C0D - reserved
	uint8_t u8_reservedC0E;                         //C0E - reserved
	uint8_t u8_reservedC0F;                         //C0F - reserved
	uint8_t u8_reservedC10;                         //C10 - reserved
	uint8_t u8_reservedC11;                         //C11 - reserved
	uint8_t u8_reservedC12;                         //C12 - reserved
	uint8_t u8_msSenseStrAddAdjWtr;                 //C13 - ms_sense_str_add_adj_wtr - ms_sense_str_add_adj_wtr
	uint8_t u8_msSenseStrAddAdjGlv;                 //C14 - ms_sense_str_add_adj_glv - ms_sense_str_add_adj_glv
	uint8_t u8_msSenseStrAdjCameraHoleIdxTx0;       //C15 - ms_sense_str_adj_camera_hole_idx_tx_0 - ms_sense_str_adj_camera_hole_idx_tx_0
	uint8_t u8_msSenseStrAdjCameraHoleIdxRx0;       //C16 - ms_sense_str_adj_camera_hole_idx_rx_0 - ms_sense_str_adj_camera_hole_idx_rx_0
	uint8_t u8_msSenseStrAdjCameraHoleIdxTx1;       //C17 - ms_sense_str_adj_camera_hole_idx_tx_1 - ms_sense_str_adj_camera_hole_idx_tx_1
	uint8_t u8_msSenseStrAdjCameraHoleIdxRx1;       //C18 - ms_sense_str_adj_camera_hole_idx_rx_1 - ms_sense_str_adj_camera_hole_idx_rx_1
	uint8_t u8_msSenseStrAdjCameraHoleIdxTx2;       //C19 - ms_sense_str_adj_camera_hole_idx_tx_2 - ms_sense_str_adj_camera_hole_idx_tx_2
	uint8_t u8_msSenseStrAdjCameraHoleIdxRx2;       //C1A - ms_sense_str_adj_camera_hole_idx_rx_2 - ms_sense_str_adj_camera_hole_idx_rx_2
	uint8_t u8_msSenseStrAdjCameraHoleIdxTx3;       //C1B - ms_sense_str_adj_camera_hole_idx_tx_3 - ms_sense_str_adj_camera_hole_idx_tx_3
	uint8_t u8_msSenseStrAdjCameraHoleIdxRx3;       //C1C - ms_sense_str_adj_camera_hole_idx_rx_3 - ms_sense_str_adj_camera_hole_idx_rx_3
	__packed uint8_t b1_strClearForHoleEn   : 1;    //C1D - ms_sense_adj_for_hole_config - str_clear_for_hole_en
	__packed uint8_t b7_reservedC1D_1_7     : 7;    //C1D - ms_sense_adj_for_hole_config - reserved
	uint8_t u8_reservedC1E;                         //C1E - reserved
	uint8_t u8_reservedC1F;                         //C1F - reserved
	uint8_t u8_msSrcSkipBitShift;                   //C20 - ms_src_skip_bit_shift - ms_src_skip_bit_shift
	uint8_t u8_msSrcHighResBitShift;                //C21 - ms_src_high_res_bit_shift - ms_src_high_res_bit_shift
	uint8_t u8_msSrcHighResMfsBitShift;             //C22 - ms_src_high_res_mfs_bit_shift - ms_src_high_res_mfs_bit_shift
	uint8_t u8_msSrcHighResFwaBitShift;             //C23 - ms_src_high_res_fwa_bit_shift - ms_src_high_res_fwa_bit_shift
	uint8_t u8_msSrcHighResFwaNoisyBitShift;        //C24 - ms_src_high_res_fwa_noisy_bit_shift - ms_src_high_res_fwa_noisy_bit_shift
	uint8_t u8_msSrcHighResFwaMfsBitShift;          //C25 - ms_src_high_res_fwa_mfs_bit_shift - ms_src_high_res_fwa_mfs_bit_shift
	uint8_t u8_msSrcHighResFwaGlvBitShift;          //C26 - ms_src_high_res_fwa_glv_bit_shift - ms_src_high_res_fwa_glv_bit_shift
	uint8_t u8_msSrcLpBitShift;                     //C27 - ms_src_lp_bit_shift - ms_src_lp_bit_shift
	uint8_t u8_msSrcCxBitShift;                     //C28 - ms_src_cx_bit_shift - ms_src_cx_bit_shift
	uint8_t u8_msSrcLpCxBitShift;                   //C29 - ms_src_lp_cx_bit_shift - ms_src_lp_cx_bit_shift
	uint8_t u8_msSrcItoBitShift;                    //C2A - ms_src_ito_bit_shift - ms_src_ito_bit_shift
	uint8_t u8_msSrcItoMicroBitShift;               //C2B - ms_src_ito_micro_bit_shift - ms_src_ito_micro_bit_shift
	uint8_t u8_msSrcIoffBitShift;                   //C2C - ms_src_ioff_bit_shift - ms_src_ioff_bit_shift
	uint8_t u8_msSrcAgingBitShift;                  //C2D - ms_src_aging_bit_shift - ms_src_aging_bit_shift
	uint8_t u8_msSrcAoffBitShift;                   //C2E - ms_src_aoff_bit_shift - ms_src_aoff_bit_shift
	uint8_t u8_msMrnSkipBitShift;                   //C2F - ms_mrn_skip_bit_shift - ms_mrn_skip_bit_shift
	uint8_t u8_msMrnDefaultBitShift;                //C30 - ms_mrn_default_bit_shift - ms_mrn_default_bit_shift
	uint8_t u8_msMrnMfsBitShift;                    //C31 - ms_mrn_mfs_bit_shift - ms_mrn_mfs_bit_shift
	uint8_t u8_msMrnMultiAccNoisyBitShift;          //C32 - ms_mrn_multi_acc_noisy_bit_shift - ms_mrn_multi_acc_noisy_bit_shift
	uint8_t u8_msMrnDummyBitShift;                  //C33 - ms_mrn_dummy_bit_shift - ms_mrn_dummy_bit_shift
	uint8_t u8_ssTchSkipBitShift;                   //C34 - ss_tch_skip_bit_shift - ss_tch_skip_bit_shift
	uint8_t u8_ssTchHighResBitShift;                //C35 - ss_tch_high_res_bit_shift - ss_tch_high_res_bit_shift
	uint8_t u8_ssTchCxBitShift;                     //C36 - ss_tch_cx_bit_shift - ss_tch_cx_bit_shift
	uint8_t u8_ssTchIxBitShift;                     //C37 - ss_tch_ix_bit_shift - ss_tch_ix_bit_shift
	uint8_t u8_ssTchIoffBitShift;                   //C38 - ss_tch_ioff_bit_shift - ss_tch_ioff_bit_shift
	uint8_t u8_ssTchJitterBitShift;                 //C39 - ss_tch_jitter_bit_shift - ss_tch_jitter_bit_shift
	uint8_t u8_ssDetSkipBitShift;                   //C3A - ss_det_skip_bit_shift - ss_det_skip_bit_shift
	uint8_t u8_ssDetHighResBitShift;                //C3B - ss_det_high_res_bit_shift - ss_det_high_res_bit_shift
	uint8_t u8_ssDetCxBitShift;                     //C3C - ss_det_cx_bit_shift - ss_det_cx_bit_shift
	uint8_t u8_ssDetIxBitShift;                     //C3D - ss_det_ix_bit_shift - ss_det_ix_bit_shift
	uint8_t u8_ssDetIoffBitShift;                   //C3E - ss_det_ioff_bit_shift - ss_det_ioff_bit_shift
	uint8_t u8_reservedC3F;                         //C3F - reserved
	uint8_t u8_gesLngPrsBigMtol;                    //C40 - ges_lng_prs_big_mtol - ges_lng_prs_big_mtol
	__packed uint16_t u16_gesLngPrsBigXStart;       //C41 - ges_lng_prs_big_x_start - ges_lng_prs_big_x_start
	__packed uint16_t u16_gesLngPrsBigXEnd;         //C43 - ges_lng_prs_big_x_end - ges_lng_prs_big_x_end
	__packed uint16_t u16_gesLngPrsBigYStart;       //C45 - ges_lng_prs_big_y_start - ges_lng_prs_big_y_start
	__packed uint16_t u16_gesLngPrsBigYEnd;         //C47 - ges_lng_prs_big_y_end - ges_lng_prs_big_y_end
	uint8_t u8_lpGesBigOverlapArea2LngprsAreaPer;   //C49 - lp_ges_big_overlap_area_2_lngprs_area_per - lp_ges_big_overlap_area_2_lngprs_area_per
	uint8_t u8_lpGesBigOverlapArea2TchAreaPer;      //C4A - lp_ges_big_overlap_area_2_tch_area_per - lp_ges_big_overlap_area_2_tch_area_per
	uint8_t u8_lpGesBigOverlapArea2LngprsAreaHystPer;   //C4B - lp_ges_big_overlap_area_2_lngprs_area_hyst_per - lp_ges_big_overlap_area_2_lngprs_area_hyst_per
	uint8_t u8_actGesBigOverlapArea2LngprsAreaPer;  //C4C - act_ges_big_overlap_area_2_lngprs_area_per - act_ges_big_overlap_area_2_lngprs_area_per
	uint8_t u8_actGesBigOverlapArea2TchAreaPer;     //C4D - act_ges_big_overlap_area_2_tch_area_per - act_ges_big_overlap_area_2_tch_area_per
	uint8_t u8_actGesBigOverlapArea2LngprsAreaHystPer;  //C4E - act_ges_big_overlap_area_2_lngprs_area_hyst_per - act_ges_big_overlap_area_2_lngprs_area_hyst_per
	uint8_t u8_reservedC4F;                         //C4F - reserved
	__packed uint8_t b1_gesLngPrsActiveModeEn   : 1;    //C50 - ges_lng_prs_cfg - ges_lng_prs_active_mode_en
	__packed uint8_t b7_reservedC50_1_7     : 7;    //C50 - ges_lng_prs_cfg - reserved
	uint8_t u8_gesLngPrsDur;                        //C51 - ges_lng_prs_dur - ges_lng_prs_dur
	uint8_t u8_gesLngPrsMtol;                       //C52 - ges_lng_prs_mtol - ges_lng_prs_mtol
	__packed uint16_t u16_gesLngPrsXStart;          //C53 - ges_lng_prs_x_start - ges_lng_prs_x_start
	__packed uint16_t u16_gesLngPrsXEnd;            //C55 - ges_lng_prs_x_end - ges_lng_prs_x_end
	__packed uint16_t u16_gesLngPrsYStart;          //C57 - ges_lng_prs_y_start - ges_lng_prs_y_start
	__packed uint16_t u16_gesLngPrsYEnd;            //C59 - ges_lng_prs_y_end - ges_lng_prs_y_end
	uint8_t u8_lpGesOverlapArea2LngPrsAreaPercent;  //C5B - lp_ges_overlap_area_2_lng_prs_area_percent - lp_ges_overlap_area_2_lng_prs_area_percent
	uint8_t u8_lpGesOverlapArea2TchAreaPercent;     //C5C - lp_ges_overlap_area_2_tch_area_percent - lp_ges_overlap_area_2_tch_area_percent
	uint8_t u8_activeGesOverlapArea2LngPrsAreaPercent;  //C5D - active_ges_overlap_area_2_lng_prs_area_percent - active_ges_overlap_area_2_lng_prs_area_percent
	uint8_t u8_activeGesOverlapArea2TchAreaPercent; //C5E - active_ges_overlap_area_2_tch_area_percent - active_ges_overlap_area_2_tch_area_percent
	uint8_t u8_gesLngPrsStrThresPercent;            //C5F - ges_lng_prs_strength_threshold_percent - ges_lng_prs_str_thres_percent
	uint8_t u8_gesLngPrsXStartOffset;               //C60 - ges_lng_prs_x_start_offset - ges_lng_prs_x_start_offset
	uint8_t u8_gesLngPrsXEndOffset;                 //C61 - ges_lng_prs_x_end_offset - ges_lng_prs_x_end_offset
	uint8_t u8_gesLngPrsYStartOffset;               //C62 - ges_lng_prs_y_start_offset - ges_lng_prs_y_start_offset
	uint8_t u8_gesLngPrsYEndOffset;                 //C63 - ges_lng_prs_y_end_offset - ges_lng_prs_y_end_offset
	uint8_t u8_lpGesOverlapArea2LngPrsAreaHystPercent;  //C64 - lp_ges_overlap_area_2_lng_prs_area_hyst_percent - lp_ges_overlap_area_2_lng_prs_area_hyst_percent
	uint8_t u8_activeGesOverlapArea2LngPrsAreaHystPercent;  //C65 - active_ges_overlap_area_2_lng_prs_area_hyst_percent - active_ges_overlap_area_2_lng_prs_area_hyst_percent
	uint8_t u8_reservedC66;                         //C66 - reserved
	__packed uint16_t u16_gesLngPrsCalAreaPerXStart;    //C67 - ges_lng_prs_cal_area_per_x_start - ges_lng_prs_cal_area_per_x_start
	__packed uint16_t u16_gesLngPrsCalAreaPerXEnd;  //C69 - ges_lng_prs_cal_area_per_x_end - ges_lng_prs_cal_area_per_x_end
	__packed uint16_t u16_gesLngPrsCalAreaPerYStart;    //C6B - ges_lng_prs_cal_area_per_y_start - ges_lng_prs_cal_area_per_y_start
	__packed uint16_t u16_gesLngPrsCalAreaPerYEnd;  //C6D - ges_lng_prs_cal_area_per_y_end - ges_lng_prs_cal_area_per_y_end
	uint8_t u8_reservedC6F;                         //C6F - reserved
	__packed uint16_t b1_grpEn              : 1;    //C70 - grp_cfg - grp_en
	__packed uint16_t b1_grpTchBorderStrRemovalEn   : 1;    //C70 - grp_cfg - grp_tch_border_str_removal_en
	__packed uint16_t b1_grpEdgeAxesDiffEn  : 1;    //C70 - grp_cfg - grp_edge_axes_diff_en
	__packed uint16_t b1_grpEdgeStyBlkEn    : 1;    //C70 - grp_cfg - grp_edge_sty_blk_en
	__packed uint16_t b1_grpEdgeThumbDet    : 1;    //C70 - grp_cfg - grp_edge_thumb_det
	__packed uint16_t b1_cornerCheckInNonGameModeEn : 1;    //C70 - grp_cfg - corner_check_in_non_game_mode_en
	__packed uint16_t b10_reservedC70_6_15  : 10;   //C70 - grp_cfg - reserved
	uint16_t u16_grpThres;                          //C72 - grp_thres - grp_thres
	uint8_t u8_grpThresHyst;                        //C74 - grp_thres_hyst - grp_thres_hyst
	uint8_t u8_grpNoisyAddThres;                    //C75 - grp_noisy_add_thres - grp_noisy_add_thres
	uint16_t u16_grpBndryMaxStr;                    //C76 - grp_bndry_max_str - grp_bndry_max_str
	uint8_t u8_grpBndryStrGainPerc;                 //C78 - grp_bndry_str_gain_perc - grp_bndry_str_gain_perc
	uint8_t u8_grpAxesDiffMinArea;                  //C79 - grp_axes_min_area - grp_axes_diff_min_area
	uint8_t u8_grpEdgeZoneDuration;                 //C7A - grp_edge_zone_duration - grp_edge_zone_duration
	uint8_t u8_grpEdgeZoneDurationHyst;             //C7B - grp_edge_zone_duration_hyst - grp_edge_zone_duration_hyst
	uint16_t u16_grpStableMinSumStr;                //C7C - grp_stable_min_sum_str - grp_stable_min_sum_str
	uint8_t u8_grpDeadZone;                         //C7E - grp_dead_zone - grp_dead_zone
	uint8_t u8_grpDeadZoneHyst;                     //C7F - grp_dead_zone_hyst - grp_dead_zone_hyst
	uint8_t u8_grpEdgeZoneRange;                    //C80 - grp_edge_zone_range - grp_edge_zone_range
	uint8_t u8_grpEdgeAxesDiff;                     //C81 - grp_edge_axes_diff - grp_edge_axes_diff
	uint8_t u8_grpEdgeZoneHyst;                     //C82 - grp_edge_zone_hyst - grp_edge_zone_hyst
	uint8_t u8_grpEdgeZone;                         //C83 - grp_edge_zone - grp_edge_zone
	uint8_t u8_grpEdgeBigThumbArea;                 //C84 - grp_edge_big_thumb_area - grp_edge_big_thumb_area
	uint8_t u8_grpEdgeThumbZone;                    //C85 - grp_edge_thumb_zone - grp_edge_thumb_zone
	uint8_t u8_grpMove2centerBigAreaThres;          //C86 - grp_move2center_big_area_thres - grp_move2center_big_area_thres
	uint8_t u8_grpMove2centerAddDly;                //C87 - grp_move2center_add_dly - grp_move2center_add_dly
	uint16_t u16_grpTopbtZoneTapMaxPeakThres;       //C88 - grp_topbt_zone_tap_max_peak_thres - grp_topbt_zone_tap_max_peak_thres
	uint8_t u8_grpEdgeZoneMinDuration;              //C8A - grp_edge_zone_min_duration - grp_edge_zone_min_duration
	uint8_t u8_grpCornRjtArea;                      //C8B - grp_corn_rjt_area - grp_corn_rjt_area
	uint8_t u8_grpEdgeTopbtmZone;                   //C8C - grp_edge_topbtm_zone - grp_edge_topbtm_zone
	__packed uint16_t u16_grpEdgeZoneTapMaxPeakThres;   //C8D - grp_edge_zone_tap_max_peak_thres - grp_edge_zone_tap_max_peak_thres
	uint8_t u8_grpFcalBlockTapFrameCnt;             //C8F - grp_fcal_block_tap_frame_cnt - grp_fcal_block_tap_frame_cnt
	uint16_t u16_grpEdgeMsMinThresFastTapOverEdgeLine;  //C90 - grp_edge_ms_min_thres_fast_tap_over_edge_line - grp_edge_ms_min_thres_fast_tap_over_edge_line
	uint16_t u16_grpMoveThres;                      //C92 - grp_move_thres - grp_move_thres
	uint16_t u16_grpMoveAngleThres;                 //C94 - grp_move_angle_thres - grp_move_angle_thres
	__packed uint8_t b1_palmRejEn           : 1;    //C96 - palm_rej_cfg - palm_rej_en
	__packed uint8_t b1_palmBlkEn           : 1;    //C96 - palm_rej_cfg - palm_blk_en
	__packed uint8_t b1_pocketPalmRejEn     : 1;    //C96 - palm_rej_cfg - pocket_palm_rej_en
	__packed uint8_t b5_reservedC96_3_7     : 5;    //C96 - palm_rej_cfg - reserved
	uint8_t u8_palmBlkDbncCnt;                      //C97 - palm_blk_dbnc_cnt - palm_blk_dbnc_cnt
	uint8_t u8_fgrPalmRelDbnc;                      //C98 - fgr_palm_rel_dbnc - fgr_palm_rel_dbnc
	uint8_t u8_grpEdgeBigThumbAreaSense;            //C99 - grp_edge_big_thumb_area_sense - grp_edge_big_thumb_area_sense
	__packed uint16_t b1_edgeLeftRightRejEn : 1;    //C9A - edge_rej_cfg - edge_left_right_rej_en
	__packed uint16_t b1_edgeTopBottomRejEn : 1;    //C9A - edge_rej_cfg - edge_top_bottom_rej_en
	__packed uint16_t b1_cornerBottomRejEn  : 1;    //C9A - edge_rej_cfg - corner_bottom_rej_en
	__packed uint16_t b1_cornerTopRejEn     : 1;    //C9A - edge_rej_cfg - corner_top_rej_en
	__packed uint16_t b1_cornerStrDynamicEn : 1;    //C9A - edge_rej_cfg - corner_str_dynamic_en
	__packed uint16_t b8_reservedC9A_5_12   : 8;    //C9A - edge_rej_cfg - reserved
	__packed uint16_t b1_gripAreaTapEn      : 1;    //C9A - edge_rej_cfg - grip_area_tap_en
	__packed uint16_t b1_rejRptRefCoorEn    : 1;    //C9A - edge_rej_cfg - rej_rpt_ref_coor_en
	__packed uint16_t b1_rejRptTchInCoorEn  : 1;    //C9A - edge_rej_cfg - rej_rpt_tch_in_coor_en
	uint8_t u8_reservedC9C;                         //C9C - reserved
	uint8_t u8_grpCorTchInZone;                     //C9D - grp_cor_tch_in_zone - grp_cor_tch_in_zone
	uint16_t u16_grpCorTchZoneHyst;                 //C9E - grp_cor_tch_zone_hyst - grp_cor_tch_zone_hyst
	__packed uint8_t b4_maxGrpCorXyWgh      : 4;    //CA0 - grp_cor_tch_wgh - max_grp_cor_xy_wgh
	__packed uint8_t b4_reservedCA0_4_7     : 4;    //CA0 - grp_cor_tch_wgh - reserved
	uint8_t u8_grpCorMaxWghFrameCnt;                //CA1 - grp_cor_max_wgh_frame_cnt - grp_cor_max_wgh_frame_cnt
	uint8_t u8_grpCorFrameCntDivider;               //CA2 - grp_cor_frame_cnt_divider - grp_cor_frame_cnt_divider
	uint8_t u8_reservedCA3;                         //CA3 - reserved
	uint8_t u8_reservedCA4;                         //CA4 - reserved
	uint8_t u8_grpCorOutDbnc;                       //CA5 - grp_cor_out_dbnc - grp_cor_out_dbnc
	uint8_t u8_reservedCA6;                         //CA6 - reserved
	uint8_t u8_reservedCA7;                         //CA7 - reserved
	uint16_t u16_grpTchBorderStrRemovalDbnc;        //CA8 - grp_tch_border_str_removal_dbnc - grp_tch_border_str_removal_dbnc
	uint8_t u8_grpTchBorderStrRemovalRxSt;          //CAA - grp_tch_border_str_removal_rx_st - grp_tch_border_str_removal_rx_st
	uint8_t u8_grpTchBorderStrRemovalRxEd;          //CAB - grp_tch_border_str_removal_rx_ed - grp_tch_border_str_removal_rx_ed
	uint8_t u8_reservedCAC;                         //CAC - reserved
	uint8_t u8_reservedCAD;                         //CAD - reserved
	uint8_t u8_reservedCAE;                         //CAE - reserved
	uint8_t u8_grpCorDynamicRejTxNodeRangeNorMod;   //CAF - grp_cor_dynamic_rej_tx_node_range_nor_mod - grp_cor_dynamic_rej_tx_node_range_nor_mod
	uint8_t u8_grpCorDynamicRejRxNodeRangeNorMod;   //CB0 - grp_cor_dynamic_rej_rx_node_range_nor_mod - grp_cor_dynamic_rej_rx_node_range_nor_mod
	uint8_t u8_grpCorDynamicRejThdPerNorMod;        //CB1 - grp_cor_dynamic_rej_thd_per_nor_mod - grp_cor_dynamic_rej_thd_per_nor_mod
	uint8_t u8_grpCorDynamicRejThdPerHystNorMod;    //CB2 - grp_cor_dynamic_rej_thd_per_hyst_nor_mod - grp_cor_dynamic_rej_thd_per_hyst_nor_mod
	uint8_t u8_reservedCB3;                         //CB3 - reserved
	uint8_t u8_pocketPalmRejArea;                   //CB4 - pocket_palm_rej_area - pocket_palm_rej_area
	uint8_t u8_pocketPalmRejAreaHyst;               //CB5 - pocket_palm_rej_area_hyst - pocket_palm_rej_area_hyst
	uint16_t u16_pocketPalmRejSsStrThres;           //CB6 - pocket_palm_rej_ss_str_thres - pocket_palm_rej_ss_str_thres
	uint8_t u8_pocketPalmRejSsNodeCntThres;         //CB8 - pocket_palm_rej_ss_node_cnt_thres - pocket_palm_rej_ss_node_cnt_thres
	uint8_t u8_pocketPalmRejSsNodeCntThresHyst;     //CB9 - pocket_palm_rej_ss_node_cnt_thres_hyst - pocket_palm_rej_ss_node_cnt_thres_hyst
	uint16_t u16_msTchNegDetPosThres;               //CBA - ms_tch_neg_det_pos_thres - ms_tch_neg_det_pos_thres
	uint16_t u16_msTchNegDetNegThres;               //CBC - ms_tch_neg_det_neg_thres - ms_tch_neg_det_neg_thres
	uint8_t u8_msTchNegDetFcalMinNodes;             //CBE - ms_tch_neg_det_fcal_min_nodes - ms_tch_neg_det_fcal_min_nodes
	uint8_t u8_msTchNegDetFcalDbnc;                 //CBF - ms_tch_neg_det_fcal_dbnc - ms_tch_neg_det_fcal_dbnc
	__packed uint16_t b1_msScrCxCmnCorrEn   : 1;    //CC0 - cx_cmn_corr_config - ms_scr_cx_cmn_corr_en
	__packed uint16_t b1_msScrLpCxCmnCorrEn : 1;    //CC0 - cx_cmn_corr_config - ms_scr_lp_cx_cmn_corr_en
	__packed uint16_t b1_ssTchCxCmnCorrEn   : 1;    //CC0 - cx_cmn_corr_config - ss_tch_cx_cmn_corr_en
	__packed uint16_t b1_ssDetCxCmnCorrEn   : 1;    //CC0 - cx_cmn_corr_config - ss_det_cx_cmn_corr_en
	__packed uint16_t b1_msKeyCxCmnCorrEn   : 1;    //CC0 - cx_cmn_corr_config - ms_key_cx_cmn_corr_en
	__packed uint16_t b3_reservedCC0_5_7    : 3;    //CC0 - cx_cmn_corr_config - reserved
	__packed uint16_t b1_msScrSaveRawEn     : 1;    //CC0 - cx_cmn_corr_config - ms_scr_save_raw_en
	__packed uint16_t b1_ssTchSaveRawEn     : 1;    //CC0 - cx_cmn_corr_config - ss_tch_save_raw_en
	__packed uint16_t b4_reservedCC0_10_13  : 4;    //CC0 - cx_cmn_corr_config - reserved
	__packed uint16_t b1_ssIoffAdjEn        : 1;    //CC0 - cx_cmn_corr_config - ss_ioff_adj_en
	__packed uint16_t b1_msIoffAdjEn        : 1;    //CC0 - cx_cmn_corr_config - ms_ioff_adj_en
	uint16_t u16_msScrRawUpThres;                   //CC2 - ms_scr_raw_up_thres - ms_scr_raw_up_thres
	uint16_t u16_msScrRawLowThres;                  //CC4 - ms_scr_raw_low_thres - ms_scr_raw_low_thres
	uint16_t u16_msScrCx2StepSize;                  //CC6 - ms_scr_cx2_step_size - ms_scr_cx2_step_size
	uint16_t u16_msScrLpRawUpThres;                 //CC8 - ms_scr_lp_raw_up_thres - ms_scr_lp_raw_up_thres
	uint16_t u16_msScrLpRawLowThres;                //CCA - ms_scr_lp_raw_low_thres - ms_scr_lp_raw_low_thres
	uint16_t u16_msScrLpCx2StepSize;                //CCC - ms_scr_lp_cx2_step_size - ms_scr_lp_cx2_step_size
	uint16_t u16_ssTchRawUpThres;                   //CCE - ss_tch_raw_up_thres - ss_tch_raw_up_thres
	uint16_t u16_ssTchRawLowThres;                  //CD0 - ss_tch_raw_low_thres - ss_tch_raw_low_thres
	uint16_t u16_ssTchIx2FStepSize;                 //CD2 - ss_tch_ix2_f_step_size - ss_tch_ix2_f_step_size
	uint16_t u16_ssTchIx2SStepSize;                 //CD4 - ss_tch_ix2_s_step_size - ss_tch_ix2_s_step_size
	uint16_t u16_ssDetRawUpThres;                   //CD6 - ss_det_raw_up_thres - ss_det_raw_up_thres
	uint16_t u16_ssDetRawLowThres;                  //CD8 - ss_det_raw_low_thres - ss_det_raw_low_thres
	uint16_t u16_ssDetIx2StepSize;                  //CDA - ss_det_ix2_step_size - ss_det_ix2_step_size
	uint16_t u16_msKeyRawUpThres;                   //CDC - ms_key_raw_up_thres - ms_key_raw_up_thres
	uint16_t u16_msKeyRawLowThres;                  //CDE - ms_key_raw_low_thres - ms_key_raw_low_thres
	uint16_t u16_msKeyCx2StepSize;                  //CE0 - ms_key_cx2_step_size - ms_key_cx2_step_size
	uint8_t u8_msScrIoffAdjWin;                     //CE2 - ms_scr_ioff_adj_win - ms_scr_ioff_adj_win
	uint8_t u8_ssTchIoffAdjWin;                     //CE3 - ss_tch_ioff_adj_win - ss_tch_ioff_adj_win
	uint8_t u8_ssDetIoffAdjWin;                     //CE4 - ss_det_ioff_adj_win - ss_det_ioff_adj_win
	__packed uint8_t b1_reportRateCfgByCmdEn    : 1;    //CE5 - report_rate_cfg - report_rate_cfg_by_cmd_en
	__packed uint8_t b7_reservedCE5_1_7     : 7;    //CE5 - report_rate_cfg - reserved
	uint8_t u8_reservedCE6;                         //CE6 - reserved
	uint8_t u8_reservedCE7;                         //CE7 - reserved
	uint16_t u16_grpCorZoneDur1;                    //CE8 - grp_cor_zone_dur1 - grp_cor_zone_dur1
	uint16_t u16_grpCorZoneDur2;                    //CEA - grp_cor_zone_dur2 - grp_cor_zone_dur2
	uint8_t u8_reservedCEC;                         //CEC - reserved
	__packed uint8_t b1_corPalmReportInT1En : 1;    //CED - corner_grp_cfg - cor_palm_report_in_t1_en
	__packed uint8_t b1_corPalmDueToCorPeak : 1;    //CED - corner_grp_cfg - cor_palm_due_to_cor_peak
	__packed uint8_t b6_reservedCED_2_7     : 6;    //CED - corner_grp_cfg - reserved
	uint16_t u16_grpCorValidAreaXStart;             //CEE - grp_cor_valid_area_x_start - grp_cor_valid_area_x_start
	uint16_t u16_grpCorValidAreaXEnd;               //CF0 - grp_cor_valid_area_x_end - grp_cor_valid_area_x_end
	uint16_t u16_grpCorValidAreaYStart;             //CF2 - grp_cor_valid_area_y_start - grp_cor_valid_area_y_start
	uint16_t u16_grpCorValidAreaYEnd;               //CF4 - grp_cor_valid_area_y_end - grp_cor_valid_area_y_end
	uint8_t u8_grpCorDeadZoneWidth;                 //CF6 - grp_cor_dead_zone_width - grp_cor_dead_zone_width
	uint8_t u8_grpCorValidFingerFrameCnt;           //CF7 - grp_cor_valid_finger_frame_cnt - grp_cor_valid_finger_frame_cnt
	uint8_t u8_grpCorValidFingerLeaveCnt;           //CF8 - grp_cor_valid_finger_leave_cnt - grp_cor_valid_finger_leave_cnt
	__packed uint16_t u16_grpCorShapePalmEnterThres;    //CF9 - grp_cor_shape_palm_enter_thres - grp_cor_shape_palm_enter_thres
	__packed uint16_t u16_grpCorShapePalmExitThres; //CFB - grp_cor_shape_palm_exit_thres - grp_cor_shape_palm_exit_thres
	__packed uint16_t u16_grpCorXyShapeRatioThres;  //CFD - grp_cor_xy_shape_ratio_thres - grp_cor_xy_shape_ratio_thres
	__packed uint16_t u16_grpCorYxShapeRatioThres;  //CFF - grp_cor_yx_shape_ratio_thres - grp_cor_yx_shape_ratio_thres
	uint8_t u8_grpCorRptTchInSpeedRange;            //D01 - grp_cor_rpt_tch_in_speed_range - grp_cor_rpt_tch_in_speed_range
	uint16_t u16_grpCorArea0XHeight;                //D02 - grp_cor_area0_x_height - grp_cor_area0_x_height
	uint16_t u16_grpCorArea0YWidth;                 //D04 - grp_cor_area0_y_width - grp_cor_area0_y_width
	uint16_t u16_grpCorArea1XHeight;                //D06 - grp_cor_area1_x_height - grp_cor_area1_x_height
	uint16_t u16_grpCorArea1YWidth;                 //D08 - grp_cor_area1_y_width - grp_cor_area1_y_width
	uint16_t u16_grpCorArea2XHeight;                //D0A - grp_cor_area2_x_height - grp_cor_area2_x_height
	uint16_t u16_grpCorArea2YWidth;                 //D0C - grp_cor_area2_y_width - grp_cor_area2_y_width
	uint16_t u16_grpCorArea3XHeight;                //D0E - grp_cor_area3_x_height - grp_cor_area3_x_height
	uint16_t u16_grpCorArea3YWidth;                 //D10 - grp_cor_area3_y_width - grp_cor_area3_y_width
	uint8_t u8_grpCorPalmDebounceOutCnt;            //D12 - grp_cor_palm_debounce_out_cnt - grp_cor_palm_debounce_out_cnt
	__packed uint16_t u16_grpCorCase2AreaYWidth;    //D13 - grp_cor_case2_area_y_width - grp_cor_case2_area_y_width
	__packed uint16_t u16_grpCorCase2AreaXHeight;   //D15 - grp_cor_case2_area_x_height - grp_cor_case2_area_x_height
	__packed uint16_t u16_grpDeadZoneTapPeakStrThres;   //D17 - grp_dead_zone_tap_peak_str_thres - grp_dead_zone_tap_peak_str_thres
	uint8_t u8_msPureRawFcalEdgeAvgPositiveThres;   //D19 - ms_pure_raw_fcal_edge_avg_positive_thres - ms_pure_raw_fcal_edge_avg_positive_thres
	uint8_t u8_msPureRawFcalEdgeAvgNegativeThres;   //D1A - ms_pure_raw_fcal_edge_avg_negative_thres - ms_pure_raw_fcal_edge_avg_negative_thres
	uint8_t u8_msPureRawFcalEdgeAvgNodeValRatioThres;   //D1B - ms_pure_raw_fcal_edge_avg_node_val_ratio_thres - ms_pure_raw_fcal_edge_avg_node_val_ratio_thres
	uint8_t u8_msPureRawFcalEdgeAvgNodeThres;       //D1C - ms_pure_raw_fcal_edge_avg_node_thres - ms_pure_raw_fcal_edge_avg_node_thres
	uint8_t u8_msPureRawFcalEdgeRawAdjustRatio;     //D1D - ms_pure_raw_fcal_edge_raw_adjust_ratio - ms_pure_raw_fcal_edge_raw_adjust_ratio
	uint8_t u8_msPureRawFcalEdgeDiffAdjustRatio;    //D1E - ms_pure_raw_fcal_edge_diff_adjust_ratio - ms_pure_raw_fcal_edge_diff_adjust_ratio
	uint8_t u8_tchMtol2AccXTolHighSpeed;            //D1F - tch_mtol2_acc_xy_tol_high_speed - tch_mtol2_acc_x_tol_high_speed
	uint8_t u8_tchMtol2AccYTolHighSpeed;            //D1F - tch_mtol2_acc_xy_tol_high_speed - tch_mtol2_acc_y_tol_high_speed
	uint8_t u8_tchMtol2AccXTolNoisyHighSpeed;       //D21 - tch_mtol2_acc_xy_tol_noisy_high_speed - tch_mtol2_acc_x_tol_noisy_high_speed
	uint8_t u8_tchMtol2AccYTolNoisyHighSpeed;       //D21 - tch_mtol2_acc_xy_tol_noisy_high_speed - tch_mtol2_acc_y_tol_noisy_high_speed
	uint8_t u8_tchMtol2AccCompSpeedLowThreshold;    //D23 - tch_mtol2_acc_xy_tol_speed_low_threshold - tch_mtol2_acc_comp_speed_low_threshold
	uint8_t u8_tchMtol2AccCompSpeedHighThreshold;   //D24 - tch_mtol2_acc_xy_tol_speed_high_threshold - tch_mtol2_acc_comp_speed_high_threshold
	uint8_t u8_tchMtol2AccCompSpeedTotalThreshold;  //D25 - tch_mtol2_acc_xy_tol_speed_total_threshold - tch_mtol2_acc_comp_speed_total_threshold
	uint8_t u8_tchMtol2AccCompSpeedIirWeight;       //D26 - tch_mtol2_acc_xy_tol_speed_iir - tch_mtol2_acc_comp_speed_iir_weight
	uint8_t u8_tchMtol2AccXyTolPercentAccInLowSpeed;    //D27 - tch_mtol2_acc_xy_tol_percent_acc_in_low_speed - tch_mtol2_acc_xy_tol_percent_acc_in_low_speed
	uint8_t u8_tchMtol2AccXTolEdgeLowSpeed;         //D28 - tch_mtol2_acc_xy_tol_edge_low_speed - tch_mtol2_acc_x_tol_edge_low_speed
	uint8_t u8_tchMtol2AccYTolEdgeLowSpeed;         //D28 - tch_mtol2_acc_xy_tol_edge_low_speed - tch_mtol2_acc_y_tol_edge_low_speed
	uint8_t u8_tchMtol2AccXTolEdgeHighSpeed;        //D2A - tch_mtol2_acc_xy_tol_edge_high_speed - tch_mtol2_acc_x_tol_edge_high_speed
	uint8_t u8_tchMtol2AccYTolEdgeHighSpeed;        //D2A - tch_mtol2_acc_xy_tol_edge_high_speed - tch_mtol2_acc_y_tol_edge_high_speed
	__packed uint8_t b1_wirelessChrgrModeEn : 1;    //D2C - wireless_chrgr_cfg - wireless_chrgr_mode_en
	__packed uint8_t b1_wirelessChrgrSsTchMsBitmapEn    : 1;    //D2C - wireless_chrgr_cfg - wireless_chrgr_ss_tch_ms_bitmap_en
	__packed uint8_t b6_reservedD2C_2_7     : 6;    //D2C - wireless_chrgr_cfg - reserved
	__packed uint16_t u16_wirelessChrgrGrvTolHoriVert;  //D2D - wireless_chrgr_grv_tol_hori_vert - wireless_chrgr_grv_tol_hori_vert
	__packed uint16_t u16_wirelessChrgrGrvTolDiag;  //D2F - wireless_chrgr_grv_tol_diag - wireless_chrgr_grv_tol_diag
	uint8_t u8_wirelessChrgrGrvNormPercent;         //D31 - wireless_chrgr_grv_norm_percent - wireless_chrgr_grv_norm_percent
	uint8_t u8_wirelessChrgrTchThresInc;            //D32 - wireless_chrgr_tch_thres_inc - wireless_chrgr_tch_thres_inc
	__packed uint16_t u16_wirelessChrgrTchMrgDist;  //D33 - wireless_chrgr_tch_mrg_dist - wireless_chrgr_tch_mrg_dist
	uint8_t u8_wirelessChrgrFgrThresHyst;           //D35 - wireless_chrgr_fgr_thres_hyst - wireless_chrgr_fgr_thres_hyst
	uint16_t u16_wirelessChrgrAcalMsScrUpThres;     //D36 - wireless_chrgr_acal_ms_scr_up_thres - wireless_chrgr_acal_ms_scr_up_thres
	uint16_t u16_wirelessChrgrAcalMsScrLowThres;    //D38 - wireless_chrgr_acal_ms_scr_low_thres - wireless_chrgr_acal_ms_scr_low_thres
	uint8_t u8_reservedD3A;                         //D3A - reserved
	__packed uint8_t b1_preDetGhostTchEn    : 1;    //D3B - pre_det_ghost_tch_cfg - pre_det_ghost_tch_en
	__packed uint8_t b7_reservedD3B_1_7     : 7;    //D3B - pre_det_ghost_tch_cfg - reserved
	uint16_t u16_preDetGhostTchThres;               //D3C - pre_det_ghost_tch_thres - pre_det_ghost_tch_thres
	uint16_t u16_preDetGhostTchMoveDis;             //D3E - pre_det_ghost_tch_move_dis - pre_det_ghost_tch_move_dis
	uint16_t u16_preDetGhostTchTimeOutCnt;          //D40 - pre_det_ghost_tch_time_out_cnt - pre_det_ghost_tch_time_out_cnt
	uint16_t u16_preDetGhostTchDbncCnt;             //D42 - pre_det_ghost_tch_dbnc_cnt - pre_det_ghost_tch_dbnc_cnt
	uint8_t u8_preDetGhostTchCnt;                   //D44 - pre_det_ghost_tch_cnt - pre_det_ghost_tch_cnt
	__packed uint16_t u16_preDetGhostTchDurFrmCnt;  //D45 - pre_det_ghost_tch_dur_frm_cnt - pre_det_ghost_tch_dur_frm_cnt
	__packed uint16_t u16_preDetGhostTchRstDbnc;    //D47 - pre_det_ghost_tch_rst_dbnc - pre_det_ghost_tch_rst_dbnc
	__packed uint16_t u16_preDetGhostTchCorZoneXLen;    //D49 - pre_det_ghost_tch_cor_zone_x_len - pre_det_ghost_tch_cor_zone_x_len
	__packed uint16_t u16_preDetGhostTchCorZoneYLen;    //D4B - pre_det_ghost_tch_cor_zone_y_len - pre_det_ghost_tch_cor_zone_y_len
	__packed uint16_t u16_preDetGhostTchCorZoneXShortLen;   //D4D - pre_det_ghost_tch_cor_zone_x_short_len - pre_det_ghost_tch_cor_zone_x_short_len
	__packed uint16_t u16_preDetGhostTchCorZoneYShortLen;   //D4F - pre_det_ghost_tch_cor_zone_y_short_len - pre_det_ghost_tch_cor_zone_y_short_len
	uint8_t u8_reservedD51;                         //D51 - reserved
	uint8_t u8_reservedD52;                         //D52 - reserved
	uint8_t u8_reservedD53;                         //D53 - reserved
	__packed uint8_t b1_acalChkEdgeChanelEn : 1;    //D54 - acal_ms_scr_new_cfg - acal_chk_edge_chanel_en
	__packed uint8_t b7_reservedD54_1_7     : 7;    //D54 - acal_ms_scr_new_cfg - reserved
	__packed uint16_t u16_acalMsScrPureRawThres;    //D55 - acal_ms_scr_pure_raw_thres - acal_ms_scr_pure_raw_thres
	__packed uint16_t u16_acalMsScrPureRawGlvThres; //D57 - acal_ms_scr_pure_raw_glv_thres - acal_ms_scr_pure_raw_glv_thres
	__packed uint16_t u16_acalMsScrUpNormThres;     //D59 - acal_ms_scr_up_norm_thres - acal_ms_scr_up_norm_thres
	__packed uint16_t u16_acalMsScrLowNormThres;    //D5B - acal_ms_scr_low_norm_thres - acal_ms_scr_low_norm_thres
	__packed uint16_t u16_acalMsScrUpNormGlvThres;  //D5D - acal_ms_scr_up_norm_glv_thres - acal_ms_scr_up_norm_glv_thres
	__packed uint16_t u16_acalMsScrLowNormGlvThres; //D5F - acal_ms_scr_low_norm_glv_thres - acal_ms_scr_low_norm_glv_thres
	__packed uint16_t u16_acalMsScrUpNormEdgeThres; //D61 - acal_ms_scr_up_norm_edge_thres - acal_ms_scr_up_norm_edge_thres
	__packed uint16_t u16_acalMsScrLowNormEdgeThres;    //D63 - acal_ms_scr_low_norm_edge_thres - acal_ms_scr_low_norm_edge_thres
	__packed uint16_t u16_acalMsScrUpNormEdgeR0Thres;   //D65 - acal_ms_scr_up_norm_edge_ro_thres - acal_ms_scr_up_norm_edge_r0_thres
	__packed uint16_t u16_acalMsScrLowNormEdgeR0Thres;  //D67 - acal_ms_scr_low_norm_edge_ro_thres - acal_ms_scr_low_norm_edge_r0_thres
	__packed uint16_t u16_acalMsScrPeakStrThres;    //D69 - acal_ms_scr_peak_str_thres - acal_ms_scr_peak_str_thres
	__packed uint16_t u16_acalMsScrPeakStrHystThres;    //D6B - acal_ms_scr_peak_str_hyst_thres - acal_ms_scr_peak_str_hyst_thres
	uint8_t u8_acalMsScrCenterRxChanlSt;            //D6D - acal_ms_scr_center_rx_chanl_st - acal_ms_scr_center_rx_chanl_st
	uint8_t u8_acalMsScrCenterRxChanlEd;            //D6E - acal_ms_scr_center_rx_chanl_ed - acal_ms_scr_center_rx_chanl_ed
	uint8_t u8_acalMsScrCenterTxChanlSt;            //D6F - acal_ms_scr_center_tx_chanl_st - acal_ms_scr_center_tx_chanl_st
	uint8_t u8_acalMsScrCenterTxChanlEd;            //D70 - acal_ms_scr_center_tx_chanl_ed - acal_ms_scr_center_tx_chanl_ed
	__packed uint16_t u16_acalMsScrUpFilterThres;   //D71 - acal_ms_scr_up_filter_thres - acal_ms_scr_up_filter_thres
	__packed uint16_t u16_acalMsScrLowFilterThres;  //D73 - acal_ms_scr_low_filter_thres - acal_ms_scr_low_filter_thres
	__packed uint16_t u16_acalMsScrUpFilterEdgeThres;   //D75 - acal_ms_scr_up_filter_edge_thres - acal_ms_scr_up_filter_edge_thres
	__packed uint16_t u16_acalMsScrLowFilterEdgeThres;  //D77 - acal_ms_scr_low_filter_edge_thres - acal_ms_scr_low_filter_edge_thres
	uint8_t u8_reservedD79;                         //D79 - reserved
	uint16_t u16_acalMsScrPureRawLpThres;           //D7A - acal_ms_scr_pure_raw_lp_thres - acal_ms_scr_pure_raw_lp_thres
	uint16_t u16_acalMsScrPeakStrLpThres;           //D7C - acal_ms_scr_peak_str_lp_thres - acal_ms_scr_peak_str_lp_thres
	uint16_t u16_acalMsScrPeakStrHystLpThres;       //D7E - acal_ms_scr_peak_str_hyst_lp_thres - acal_ms_scr_peak_str_hyst_lp_thres
	uint16_t u16_acalMsScrUpNormEdgeR0LpThres;      //D80 - acal_ms_scr_up_norm_edge_ro_lp_thres - acal_ms_scr_up_norm_edge_r0_lp_thres
	uint16_t u16_acalMsScrLowNormEdgeR0LpThres;     //D82 - acal_ms_scr_low_norm_edge_ro_lp_thres - acal_ms_scr_low_norm_edge_r0_lp_thres
	uint8_t u8_acalMsScrCenterRxChanlLpSt;          //D84 - acal_ms_scr_center_rx_chanl_lp_st - acal_ms_scr_center_rx_chanl_lp_st
	uint8_t u8_acalMsScrCenterRxChanlLpEd;          //D85 - acal_ms_scr_center_rx_chanl_lp_ed - acal_ms_scr_center_rx_chanl_lp_ed
	uint8_t u8_acalMsScrCenterTxChanlLpSt;          //D86 - acal_ms_scr_center_tx_chanl_lp_st - acal_ms_scr_center_tx_chanl_lp_st
	uint8_t u8_acalMsScrCenterTxChanlLpEd;          //D87 - acal_ms_scr_center_tx_chanl_lp_ed - acal_ms_scr_center_tx_chanl_lp_ed
	uint16_t u16_acalMsScrUpNormLpThres;            //D88 - acal_ms_scr_up_norm_lp_thres - acal_ms_scr_up_norm_lp_thres
	uint16_t u16_acalMsScrLowNormLpThres;           //D8A - acal_ms_scr_low_norm_lp_thres - acal_ms_scr_low_norm_lp_thres
	uint16_t u16_acalMsScrUpNormEdgeLpThres;        //D8C - acal_ms_scr_up_norm_edge_lp_thres - acal_ms_scr_up_norm_edge_lp_thres
	uint16_t u16_acalMsScrLowNormEdgeLpThres;       //D8E - acal_ms_scr_low_norm_edge_lp_thres - acal_ms_scr_low_norm_edge_lp_thres
	uint16_t u16_acalMsScrUpFilterLpThres;          //D90 - acal_ms_scr_up_filter_lp_thres - acal_ms_scr_up_filter_lp_thres
	uint16_t u16_acalMsScrLowFilterLpThres;         //D92 - acal_ms_scr_low_filter_lp_thres - acal_ms_scr_low_filter_lp_thres
	uint16_t u16_acalMsScrUpFilterEdgeLpThres;      //D94 - acal_ms_scr_up_filter_edge_lp_thres - acal_ms_scr_up_filter_edge_lp_thres
	uint16_t u16_acalMsScrLowFilterEdgeLpThres;     //D96 - acal_ms_scr_low_filter_edge_lp_thres - acal_ms_scr_low_filter_edge_lp_thres
	uint8_t u8_lpMsPureRawFcalDbnc;                 //D98 - lp_ms_pure_raw_fcal_dbnc - lp_ms_pure_raw_fcal_dbnc
	uint8_t u8_lpMsPureRawStddevFcalDbnc;           //D99 - lp_ms_pure_raw_stddev_fcal_dbnc - lp_ms_pure_raw_stddev_fcal_dbnc
	uint8_t u8_lpMsTchNegDetFcalDbnc;               //D9A - lp_ms_tch_neg_det_fcal_dbnc - lp_ms_tch_neg_det_fcal_dbnc
	uint8_t u8_lpInvMtFcalDbnc;                     //D9B - lp_inv_mt_fcal_dbnc - lp_inv_mt_fcal_dbnc
	uint8_t u8_lpInvSsFcalDbnc;                     //D9C - lp_inv_ss_fcal_dbnc - lp_inv_ss_fcal_dbnc
	uint8_t u8_reservedD9D;                         //D9D - reserved
	uint8_t u8_reservedD9E;                         //D9E - reserved
	__packed uint16_t u16_msPureRawFcalLnrCmmFiltPosThres;  //D9F - ms_pure_raw_fcal_lnr_cmm_filt_pos_thres - ms_pure_raw_fcal_lnr_cmm_filt_pos_thres
	__packed uint16_t u16_msPureRawFcalLnrCmmFiltNegThres;  //DA1 - ms_pure_raw_fcal_lnr_cmm_filt_neg_thres - ms_pure_raw_fcal_lnr_cmm_filt_neg_thres
	uint8_t u8_msPureFcalApplyCmmRxCh0;             //DA3 - ms_pure_fcal_apply_cmm_rx_ch_0 - ms_pure_fcal_apply_cmm_rx_ch_0
	uint8_t u8_msPureFcalApplyCmmRxCh1;             //DA4 - ms_pure_fcal_apply_cmm_rx_ch_1 - ms_pure_fcal_apply_cmm_rx_ch_1
	uint8_t u8_msPureFcalApplyCmmRxCh2;             //DA5 - ms_pure_fcal_apply_cmm_rx_ch_2 - ms_pure_fcal_apply_cmm_rx_ch_2
	uint8_t u8_msPureFcalApplyCmmRxCh3;             //DA6 - ms_pure_fcal_apply_cmm_rx_ch_3 - ms_pure_fcal_apply_cmm_rx_ch_3
	uint8_t u8_msPureFcalApplyCmmRxCh4;             //DA7 - ms_pure_fcal_apply_cmm_rx_ch_4 - ms_pure_fcal_apply_cmm_rx_ch_4
	uint8_t u8_msPureFcalApplyCmmRxCh5;             //DA8 - ms_pure_fcal_apply_cmm_rx_ch_5 - ms_pure_fcal_apply_cmm_rx_ch_5
	uint8_t u8_msPureFcalApplyCmmRxCh6;             //DA9 - ms_pure_fcal_apply_cmm_rx_ch_6 - ms_pure_fcal_apply_cmm_rx_ch_6
	uint8_t u8_msPureFcalApplyCmmRxCh7;             //DAA - ms_pure_fcal_apply_cmm_rx_ch_7 - ms_pure_fcal_apply_cmm_rx_ch_7
	uint8_t u8_msPureFcalApplyCmmRxCh8;             //DAB - ms_pure_fcal_apply_cmm_rx_ch_8 - ms_pure_fcal_apply_cmm_rx_ch_8
	uint8_t u8_msPureFcalApplyCmmRxCh9;             //DAC - ms_pure_fcal_apply_cmm_rx_ch_9 - ms_pure_fcal_apply_cmm_rx_ch_9
	uint8_t u8_reservedDAD;                         //DAD - reserved
	uint8_t u8_reservedDAE;                         //DAE - reserved
	uint8_t u8_reservedDAF;                         //DAF - reserved
	uint8_t u8_tchMtol2AccXTolGameMfgLowSpeed;      //DB0 - tch_mtol2_acc_xy_tol_game_mfg_low_speed - tch_mtol2_acc_x_tol_game_mfg_low_speed
	uint8_t u8_tchMtol2AccYTolGameMfgLowSpeed;      //DB0 - tch_mtol2_acc_xy_tol_game_mfg_low_speed - tch_mtol2_acc_y_tol_game_mfg_low_speed
	uint8_t u8_tchMtol2AccXTolGameMfgHighSpeed;     //DB2 - tch_mtol2_acc_xy_tol_game_mfg_high_speed - tch_mtol2_acc_x_tol_game_mfg_high_speed
	uint8_t u8_tchMtol2AccYTolGameMfgHighSpeed;     //DB2 - tch_mtol2_acc_xy_tol_game_mfg_high_speed - tch_mtol2_acc_y_tol_game_mfg_high_speed
	uint8_t u8_tchMtol2AccAreaThres;                //DB4 - tch_mtol2_acc_area_thres - tch_mtol2_acc_area_thres
	uint8_t u8_grpFtapDistThres;                    //DB5 - grp_ftap_dist_thres - grp_ftap_dist_thres
	uint8_t u8_grpTopBtmAddtTchOutDly;              //DB6 - grp_top_btm_addt_tch_out_dly - grp_top_btm_addt_tch_out_dly
	uint8_t u8_tchMtol2AccMfgMaxComp;               //DB7 - tch_mtol2_acc_mfg_max_comp - tch_mtol2_acc_mfg_max_comp
	__packed uint8_t b4_scaleUpScrResMul    : 4;    //DB8 - scale_up_scr_res_cfg - scale_up_scr_res_mul
	__packed uint8_t b4_reservedDB8_4_7     : 4;    //DB8 - scale_up_scr_res_cfg - reserved
	uint8_t u8_reservedDB9;                         //DB9 - reserved
	uint8_t u8_reservedDBA;                         //DBA - reserved
	uint8_t u8_reservedDBB;                         //DBB - reserved
	uint16_t u16_acalMsScrPureRawCalibDiffThres;    //DBC - acal_ms_scr_pure_raw_calib_diff_thres - acal_ms_scr_pure_raw_calib_diff_thres
	uint8_t u8_reservedDBE;                         //DBE - reserved
	uint8_t u8_reservedDBF;                         //DBF - reserved
	__packed uint8_t b1_msScrBitShiftAdjEn  : 1;    //DC0 - bit_shift_adj_cfg - ms_scr_bit_shift_adj_en
	__packed uint8_t b1_msMrnBitShiftAdjEn  : 1;    //DC0 - bit_shift_adj_cfg - ms_mrn_bit_shift_adj_en
	__packed uint8_t b1_msKeyBitShiftAdjEn  : 1;    //DC0 - bit_shift_adj_cfg - ms_key_bit_shift_adj_en
	__packed uint8_t b1_gsTchBitShiftAdjEn  : 1;    //DC0 - bit_shift_adj_cfg - gs_tch_bit_shift_adj_en
	__packed uint8_t b1_ssTchBitShiftAdjEn  : 1;    //DC0 - bit_shift_adj_cfg - ss_tch_bit_shift_adj_en
	__packed uint8_t b1_ssDetBitShiftAdjEn  : 1;    //DC0 - bit_shift_adj_cfg - ss_det_bit_shift_adj_en
	__packed uint8_t b1_ssFrcTchBitShiftAdjEn   : 1;    //DC0 - bit_shift_adj_cfg - ss_frc_tch_bit_shift_adj_en
	__packed uint8_t b1_ssHvrBitShiftAdjEn  : 1;    //DC0 - bit_shift_adj_cfg - ss_hvr_bit_shift_adj_en
	__packed uint8_t b3_msScrHighResAdjBitShift : 3;    //DC1 - ms_scr_bit_shift_setting0 - ms_scr_high_res_adj_bit_shift
	__packed uint8_t b1_msScrHighResLeftBitShift    : 1;    //DC1 - ms_scr_bit_shift_setting0 - ms_scr_high_res_left_bit_shift
	__packed uint8_t b3_msScrHighResFwaAdjBitShift  : 3;    //DC1 - ms_scr_bit_shift_setting0 - ms_scr_high_res_fwa_adj_bit_shift
	__packed uint8_t b1_msScrHighResFwaLeftBitShift : 1;    //DC1 - ms_scr_bit_shift_setting0 - ms_scr_high_res_fwa_left_bit_shift
	__packed uint8_t b3_msScrHighResFwaNoisyAdjBitShift : 3;    //DC2 - ms_scr_bit_shift_setting1 - ms_scr_high_res_fwa_noisy_adj_bit_shift
	__packed uint8_t b1_msScrHighResFwaNoisyLeftBitShift    : 1;    //DC2 - ms_scr_bit_shift_setting1 - ms_scr_high_res_fwa_noisy_left_bit_shift
	__packed uint8_t b3_msScrLpAdjBitShift  : 3;    //DC2 - ms_scr_bit_shift_setting1 - ms_scr_lp_adj_bit_shift
	__packed uint8_t b1_msScrLpLeftBitShift : 1;    //DC2 - ms_scr_bit_shift_setting1 - ms_scr_lp_left_bit_shift
	__packed uint8_t b3_msKeyHighResAdjBitShift : 3;    //DC3 - ms_key_bit_shift_setting0 - ms_key_high_res_adj_bit_shift
	__packed uint8_t b1_msKeyHighResLeftBitShift    : 1;    //DC3 - ms_key_bit_shift_setting0 - ms_key_high_res_left_bit_shift
	__packed uint8_t b4_reservedDC3_4_7     : 4;    //DC3 - ms_key_bit_shift_setting0 - reserved
	__packed uint8_t b3_msMrnAdjBitShift    : 3;    //DC4 - ms_mrn_bit_shift_setting0 - ms_mrn_adj_bit_shift
	__packed uint8_t b1_msMrnLeftBitShift   : 1;    //DC4 - ms_mrn_bit_shift_setting0 - ms_mrn_left_bit_shift
	__packed uint8_t b4_reservedDC4_4_7     : 4;    //DC4 - ms_mrn_bit_shift_setting0 - reserved
	__packed uint8_t b3_ssTchFHighResAdjBitShift    : 3;    //DC5 - ss_tch_bit_shift_setting0 - ss_tch_f_high_res_adj_bit_shift
	__packed uint8_t b1_ssTchFHighResLeftBitShift   : 1;    //DC5 - ss_tch_bit_shift_setting0 - ss_tch_f_high_res_left_bit_shift
	__packed uint8_t b3_ssTchSHighResAdjBitShift    : 3;    //DC5 - ss_tch_bit_shift_setting0 - ss_tch_s_high_res_adj_bit_shift
	__packed uint8_t b1_ssTchSHighResLeftBitShift   : 1;    //DC5 - ss_tch_bit_shift_setting0 - ss_tch_s_high_res_left_bit_shift
	__packed uint8_t b3_ssDetHighResAdjBitShift : 3;    //DC6 - ss_det_bit_shift_setting1 - ss_det_high_res_adj_bit_shift
	__packed uint8_t b1_ssDetHighResLeftBitShift    : 1;    //DC6 - ss_det_bit_shift_setting1 - ss_det_high_res_left_bit_shift
	__packed uint8_t b4_reservedDC6_4_7     : 4;    //DC6 - ss_det_bit_shift_setting1 - reserved
	__packed uint8_t b3_ssFrcTchHighResAdjBitShift  : 3;    //DC7 - ss_frc_tch_bit_shift_setting2 - ss_frc_tch_high_res_adj_bit_shift
	__packed uint8_t b1_ssFrcTchHighResLeftBitShift : 1;    //DC7 - ss_frc_tch_bit_shift_setting2 - ss_frc_tch_high_res_left_bit_shift
	__packed uint8_t b4_reservedDC7_4_7     : 4;    //DC7 - ss_frc_tch_bit_shift_setting2 - reserved
	__packed uint8_t b3_ssHvrHighResAdjBitShift : 3;    //DC8 - ss_hvr_bit_shift_setting3 - ss_hvr_high_res_adj_bit_shift
	__packed uint8_t b1_ssHvrHighResLeftBitShift    : 1;    //DC8 - ss_hvr_bit_shift_setting3 - ss_hvr_high_res_left_bit_shift
	__packed uint8_t b4_reservedDC8_4_7     : 4;    //DC8 - ss_hvr_bit_shift_setting3 - reserved
	__packed uint8_t b3_gsTchFHighResAdjBitShift    : 3;    //DC9 - gs_tch_bit_shift_setting0 - gs_tch_f_high_res_adj_bit_shift
	__packed uint8_t b1_gsTchFHighResLeftBitShift   : 1;    //DC9 - gs_tch_bit_shift_setting0 - gs_tch_f_high_res_left_bit_shift
	__packed uint8_t b3_gsTchSHighResAdjBitShift    : 3;    //DC9 - gs_tch_bit_shift_setting0 - gs_tch_s_high_res_adj_bit_shift
	__packed uint8_t b1_gsTchSHighResLeftBitShift   : 1;    //DC9 - gs_tch_bit_shift_setting0 - gs_tch_s_high_res_left_bit_shift
	uint8_t u8_reservedDCA;                         //DCA - reserved
	uint8_t u8_reservedDCB;                         //DCB - reserved
	uint8_t u8_frameRatePreTch;                     //DCC - frame_rate_pre_tch - frame_rate_pre_tch
	uint8_t u8_ssTchDummyAnaAcc;                    //DCD - ss_tch_dummy_ana_acc - ss_tch_dummy_ana_acc
	uint8_t u8_tchPredictTimeAdj;                   //DCE - tch_predict_time_adj - tch_predict_time_adj
	__packed uint8_t b5_reservedDCF_0_4     : 5;    //DCF - apwr_tch_480_rpt - reserved
	__packed uint8_t b1_tchLnrRegEn         : 1;    //DCF - apwr_tch_480_rpt - tch_lnr_reg_en
	__packed uint8_t b1_apwrTch480RptEn     : 1;    //DCF - apwr_tch_480_rpt - apwr_tch_480_rpt_en
	__packed uint8_t b1_reservedDCF_7_7     : 1;    //DCF - apwr_tch_480_rpt - reserved
	uint8_t u8_lnrRegTrkPredictFilterLen;           //DD0 - lnr_reg_trk_predict_filter_len - lnr_reg_trk_predict_filter_len
	uint8_t u8_lnrRegTrkPredictXIdx;                //DD1 - lnr_reg_trk_predict_x_idx - lnr_reg_trk_predict_x_idx
	uint8_t u8_lnrRegTrkPredictYIdx;                //DD2 - lnr_reg_trk_predict_y_idx - lnr_reg_trk_predict_y_idx
	__packed uint16_t u16_lnrRegTrkMinVarSpeed;     //DD3 - lnr_reg_trk_min_var_speed - lnr_reg_trk_min_var_speed
	__packed uint16_t u16_lnrRegTrkMaxVarSpeed;     //DD5 - lnr_reg_trk_max_var_speed - lnr_reg_trk_max_var_speed
	uint8_t u8_lnrRegPredictFrmIdxShift;            //DD7 - lnr_reg_predict_frm_idx_shift - lnr_reg_predict_frm_idx_shift
	uint8_t u8_ssJitterSkipChEn;                    //DD8 - ss_jitter_skip_ch_en - ss_jitter_skip_ch_en
	uint8_t u8_msFltrNoiseLevel;                    //DD9 - fltr_noise_level - ms_fltr_noise_level
	uint8_t u8_msMrnAdjStddevRatio;                 //DDA - ms_mrn_adj_stddev_ratio - ms_mrn_adj_stddev_ratio
	uint8_t u8_msMrnR0MinStddevThres;               //DDB - ms_mrn_r0_min_stddev_thres - ms_mrn_r0_min_stddev_thres
	uint8_t u8_trkRadMulCorTch;                     //DDC - trk_rad_mul_cor_tch - trk_rad_mul_cor_tch
	uint8_t u8_trkRadMulCorTchFrmCnt;               //DDD - trk_rad_mul_cor_tch_frm_cnt - trk_rad_mul_cor_tch_frm_cnt
	uint16_t u16_minTrkRadCorTch;                   //DDE - min_trk_rad_cor_tch - min_trk_rad_cor_tch
	uint16_t u16_grpEdgeValidAreaXStart;            //DE0 - grp_edge_valid_area_x_start - grp_edge_valid_area_x_start
	uint16_t u16_grpEdgeValidAreaXEnd;              //DE2 - grp_edge_valid_area_x_end - grp_edge_valid_area_x_end
	uint16_t u16_grpEdgeValidAreaYStart;            //DE4 - grp_edge_valid_area_y_start - grp_edge_valid_area_y_start
	uint16_t u16_grpEdgeValidAreaYEnd;              //DE6 - grp_edge_valid_area_y_end - grp_edge_valid_area_y_end
	uint32_t u32_palmRejPosStrThres;                //DE8 - palm_rej_pos_str_thres - palm_rej_pos_str_thres
	uint32_t u32_palmRejNegStrThres;                //DEC - palm_rej_neg_str_thres - palm_rej_neg_str_thres
	__packed uint8_t b4_tchInDlyLp          : 4;    //DF0 - tch_in_dly_lp - tch_in_dly_lp
	__packed uint8_t b4_tchInDly2Lp         : 4;    //DF0 - tch_in_dly_lp - tch_in_dly_2_lp
	uint8_t u8_gesDbltap2ndTapEnterMinTo;           //DF1 - ges_dbltap_2nd_tap_enter_min_to - ges_dbltap_2nd_tap_enter_min_to
	uint16_t u16_validTchPeakStrThres;              //DF2 - valid_tch_peak_str_thres - valid_tch_peak_str_thres
	uint8_t u8_noTchDebounceThres;                  //DF4 - no_tch_debounce_thres - no_tch_debounce_thres
	uint8_t u8_fodTxStartCh;                        //DF5 - fod_tx_start_ch - fod_tx_start_ch
	uint8_t u8_fodTxEndCh;                          //DF6 - fod_tx_end_ch - fod_tx_end_ch
	uint8_t u8_fodRxStartCh;                        //DF7 - fod_rx_start_ch - fod_rx_start_ch
	uint8_t u8_fodRxEndCh;                          //DF8 - fod_rx_end_ch - fod_rx_end_ch
	uint8_t u8_msTchNegDetFcalPosMinNodes;          //DF9 - ms_tch_neg_det_fcal_pos_min_nodes - ms_tch_neg_det_fcal_pos_min_nodes
	uint8_t u8_msTchNegDetFcalNegMinNodes;          //DFA - ms_tch_neg_det_fcal_neg_min_nodes - ms_tch_neg_det_fcal_neg_min_nodes
	uint8_t u8_msTchNegDetFcalPosNegRatio;          //DFB - ms_tch_neg_det_fcal_pos_neg_ratio - ms_tch_neg_det_fcal_pos_neg_ratio
	uint16_t u16_rptZMin;                           //DFC - rpt_z_min - rpt_z_min
	uint16_t u16_rptZMax;                           //DFE - rpt_z_max - rpt_z_max
	uint8_t u8_msLnrCmmBitmapIirStrThres;           //E00 - ms_lnr_cmm_bitmap_iir_str_thres - ms_lnr_cmm_bitmap_iir_str_thres
	uint8_t u8_reservedE01;                         //E01 - reserved
	uint8_t u8_reservedE02;                         //E02 - reserved
	uint8_t u8_reservedE03;                         //E03 - reserved
	uint16_t u16_msPureRawLnrCmmChkPosThres;        //E04 - ms_pure_raw_lnr_cmm_chk_pos_thres - ms_pure_raw_lnr_cmm_chk_pos_thres
	uint16_t u16_msPureRawLnrCmmChkNegThres;        //E06 - ms_pure_raw_lnr_cmm_chk_neg_thres - ms_pure_raw_lnr_cmm_chk_neg_thres
	uint8_t u8_msPureRawLnrCmmChkDiffThres;         //E08 - ms_pure_raw_lnr_cmm_chk_diff_thres - ms_pure_raw_lnr_cmm_chk_diff_thres
	uint8_t u8_msPureRawLnrCmmChkNodeThres;         //E09 - ms_pure_raw_lnr_cmm_chk_node_thres - ms_pure_raw_lnr_cmm_chk_node_thres
	uint16_t u16_msPureRawLnrCmmChkAvgThres;        //E0A - ms_pure_raw_lnr_cmm_chk_avg_thres - ms_pure_raw_lnr_cmm_chk_avg_thres
	uint16_t u16_msPureRawLnrCmmChkTchThres;        //E0C - ms_pure_raw_lnr_cmm_chk_tch_thres - ms_pure_raw_lnr_cmm_chk_tch_thres
	uint8_t u8_reservedE0E;                         //E0E - reserved
	uint8_t u8_reservedE0F;                         //E0F - reserved
	uint16_t u16_msResStrFltStrDiffThres;           //E10 - ms_res_str_flt_str_diff_thres - ms_res_str_flt_str_diff_thres
	uint16_t u16_msResStrFltAvgRatio;               //E12 - ms_res_str_flt_avg_ratio - ms_res_str_flt_avg_ratio
	uint16_t u16_msResStrFltNbrStrDiffThres;        //E14 - ms_res_str_flt_nbr_str_diff_thres - ms_res_str_flt_nbr_str_diff_thres
	uint16_t u16_msResStrFlt2ndNbrStrThres;         //E16 - ms_res_str_flt_2nd_nbr_str_thres - ms_res_str_flt_2nd_nbr_str_thres
	__packed uint8_t b1_msFltUpdownChkEn    : 1;    //E18 - ms_flt_chk_en - ms_flt_updown_chk_en
	__packed uint8_t b1_msFltLeftrightChkEn : 1;    //E18 - ms_flt_chk_en - ms_flt_leftright_chk_en
	__packed uint8_t b6_reservedE18_2_7     : 6;    //E18 - ms_flt_chk_en - reserved
	__packed uint16_t u16_msStrFltEnterMaxThres;    //E19 - ms_str_flt_enter_max_thres - ms_str_flt_enter_max_thres
	uint8_t u8_msStrFltLrEnterMinNodeThres;         //E1B - ms_str_flt_lr_enter_min_node_thres - ms_str_flt_lr_enter_min_node_thres
	uint8_t u8_fltMtAxisSumIirWgh;                  //E1C - flt_mt_axis_sum_iir_wgh - flt_mt_axis_sum_iir_wgh
	__packed uint16_t u16_fltMtAxisGrvThres;        //E1D - flt_mt_axis_grv_thres - flt_mt_axis_grv_thres
	__packed uint16_t u16_fltMtAxisMrgMaxDistThres; //E1F - flt_mt_axis_mrg_max_dist_thres - flt_mt_axis_mrg_max_dist_thres
	uint8_t u8_fltMtAxisMrgMaxBoundCnt;             //E21 - flt_mt_axis_mrg_max_bound_cnt - flt_mt_axis_mrg_max_bound_cnt
	uint8_t u8_fltMtAxisMrgMaxTchCnt;               //E22 - flt_mt_axis_mrg_max_tch_cnt - flt_mt_axis_mrg_max_tch_cnt
	__packed uint16_t u16_msStrFltNodeThres;        //E23 - ms_str_flt_node_thres - ms_str_flt_node_thres
	uint8_t u8_msStrFltTbEnterMinNodeThres;         //E25 - ms_str_flt_tb_enter_min_node_thres - ms_str_flt_tb_enter_min_node_thres
	uint8_t u8_msStrFltLrEnterMinNodeThresHyst;     //E26 - ms_str_flt_lr_enter_min_node_thres_hyst - ms_str_flt_lr_enter_min_node_thres_hyst
	uint8_t u8_msStrFltTbEnterMinNodeThresHyst;     //E27 - ms_str_flt_tb_enter_min_node_thres_hyst - ms_str_flt_tb_enter_min_node_thres_hyst
	uint16_t u16_msStrFltEnterMaxThresHyst;         //E28 - ms_str_flt_enter_max_thres_hyst - ms_str_flt_enter_max_thres_hyst
	uint8_t u8_msStrFltIslandCntThres;              //E2A - ms_str_flt_island_cnt_thres - ms_str_flt_island_cnt_thres
	__packed uint16_t u16_msStrFltIslandNodeRatio;  //E2B - ms_str_flt_island_node_ratio - ms_str_flt_island_node_ratio
	uint8_t u8_grpEdgeBigThumbAreaTotal;            //E2D - grp_edge_big_thumb_area_total - grp_edge_big_thumb_area_total
	uint16_t u16_grpEdgeBigThumbSumEccen;           //E2E - grp_edge_big_thumb_sum_eccen - grp_edge_big_thumb_sum_eccen
}fwCfg_t;



#define CFG_U32_CRC                         (fwCfgp->u32_crc)           //000 - crc
#define CFG_U32_LEN                         (fwCfgp->u32_len)           //004 - len
#define CFG_U32_CRC_N                       (fwCfgp->u32_crcN)          //008 - crc_n
#define CFG_U32_LEN_N                       (fwCfgp->u32_lenN)          //00C - len_n
#define CFG_U16_CFG_PROJECT_ID              (fwCfgp->u16_cfgProjectId)  //010 - cfg_project_id
#define CFG_U16_CFG_VER                     (fwCfgp->u16_cfgVer)        //012 - cfg_ver
#define CFG_U8_CFG_PART_ID                  (fwCfgp->u8_cfgPartId)      //014 - cfg_part_id
#define CFG_U8_CFG_AFE_VER                  (fwCfgp->u8_cfgAfeVer)      //015 - cfg_afe_ver
#define CFG_U8_EXT_RELEASE_BYTE0            (fwCfgp->u8_extReleaseByte0)    //018 - external_release_config0
#define CFG_U8_EXT_RELEASE_BYTE1            (fwCfgp->u8_extReleaseByte1)    //018 - external_release_config0
#define CFG_U8_EXT_RELEASE_BYTE2            (fwCfgp->u8_extReleaseByte2)    //018 - external_release_config0
#define CFG_U8_EXT_RELEASE_BYTE3            (fwCfgp->u8_extReleaseByte3)    //018 - external_release_config0
#define CFG_U8_EXT_RELEASE_BYTE4            (fwCfgp->u8_extReleaseByte4)    //01C - external_release_config1
#define CFG_U8_EXT_RELEASE_BYTE5            (fwCfgp->u8_extReleaseByte5)    //01C - external_release_config1
#define CFG_U8_EXT_RELEASE_BYTE6            (fwCfgp->u8_extReleaseByte6)    //01C - external_release_config1
#define CFG_U8_EXT_RELEASE_BYTE7            (fwCfgp->u8_extReleaseByte7)    //01C - external_release_config1
#define CFG_U8_SENSE0_EN                    (fwCfgp->u8_sense0En)       //020 - sense0_en
#define CFG_U8_SENSE1_EN                    (fwCfgp->u8_sense1En)       //021 - sense1_en
#define CFG_U8_SENSE2_EN                    (fwCfgp->u8_sense2En)       //022 - sense2_en
#define CFG_U8_SENSE3_EN                    (fwCfgp->u8_sense3En)       //023 - sense3_en
#define CFG_U8_SENSE4_EN                    (fwCfgp->u8_sense4En)       //024 - sense4_en
#define CFG_U8_SENSE5_EN                    (fwCfgp->u8_sense5En)       //025 - sense5_en
#define CFG_U8_SENSE6_EN                    (fwCfgp->u8_sense6En)       //026 - sense6_en
#define CFG_U8_SENSE7_EN                    (fwCfgp->u8_sense7En)       //027 - sense7_en
#define CFG_U8_FORCE0_EN                    (fwCfgp->u8_force0En)       //028 - force0_en
#define CFG_U8_FORCE1_EN                    (fwCfgp->u8_force1En)       //029 - force1_en
#define CFG_U8_FORCE2_EN                    (fwCfgp->u8_force2En)       //02A - force2_en
#define CFG_U8_FORCE3_EN                    (fwCfgp->u8_force3En)       //02B - force3_en
#define CFG_U8_FORCE4_EN                    (fwCfgp->u8_force4En)       //02C - force4_en
#define CFG_U8_FORCE5_EN                    (fwCfgp->u8_force5En)       //02D - force5_en
#define CFG_U8_FORCE6_EN                    (fwCfgp->u8_force6En)       //02E - force6_en
#define CFG_U8_FORCE7_EN                    (fwCfgp->u8_force7En)       //02F - force7_en
#define CFG_U8_SENSE_LEN                    (fwCfgp->u8_senseLen)       //030 - sense_len
#define CFG_U8_FORCE_LEN                    (fwCfgp->u8_forceLen)       //031 - force_len
#define CFG_U16_SCR_X_RES                   (fwCfgp->u16_scrXRes)       //032 - scr_x_res
#define CFG_U16_SCR_Y_RES                   (fwCfgp->u16_scrYRes)       //034 - scr_y_res
#define CFG_B1_ORIENT_SWAP                  (fwCfgp->b1_orientSwap)     //036 - scr_orient
#define CFG_B1_ORIENT_FORCE                 (fwCfgp->b1_orientForce)    //036 - scr_orient
#define CFG_B1_ORIENT_SENSE                 (fwCfgp->b1_orientSense)    //036 - scr_orient
#define CFG_B1_RPT_RES_SCALE_EN             (fwCfgp->b1_rptResScaleEn)  //036 - scr_orient
#define CFG_U16_RPT_X_RES                   (fwCfgp->u16_rptXRes)       //037 - rpt_x_res
#define CFG_U16_RPT_Y_RES                   (fwCfgp->u16_rptYRes)       //039 - rpt_y_res
#define CFG_U16_SCR_PPI                     (fwCfgp->u16_scrPpi)        //03B - scr_ppi
#define CFG_U8_ORIENT_RAWDATA               (fwCfgp->u8_orientRawdata)  //03D - orient_rawdata
#define CFG_U8_SCR_MULTIPLE                 (fwCfgp->u8_scrMultiple)    //03E - scr_multiple
#define CFG_B1_ACAL_EN                      (fwCfgp->b1_acalEn)         //040 - acal_cfg
#define CFG_B1_ACAL_IDLE_SS_EN              (fwCfgp->b1_acalIdleSsEn)   //040 - acal_cfg
#define CFG_U8_ACAL_SKIP_CNT                (fwCfgp->u8_acalSkipCnt)    //041 - acal_skip_cnt
#define CFG_U8_ACAL_IDLE_SKIP_CNT           (fwCfgp->u8_acalIdleSkipCnt)    //042 - acal_idle_skip_cnt
#define CFG_U8_ACAL_LP_SKIP_CNT             (fwCfgp->u8_acalLpSkipCnt)  //043 - acal_lp_skip_cnt
#define CFG_B4_ACAL_MS_SCR_WGH              (fwCfgp->b4_acalMsScrWgh)   //044 - acal_wgh
#define CFG_B4_ACAL_MS_SCR_LP_WGH           (fwCfgp->b4_acalMsScrLpWgh) //044 - acal_wgh
#define CFG_B4_ACAL_MS_KEY_WGH              (fwCfgp->b4_acalMsKeyWgh)   //044 - acal_wgh
#define CFG_B4_ACAL_SS_TCH_WGH              (fwCfgp->b4_acalSsTchWgh)   //044 - acal_wgh
#define CFG_U16_ACAL_MS_SCR_UP_THRES        (fwCfgp->u16_acalMsScrUpThres)  //046 - acal_ms_scr_up_thres
#define CFG_U16_ACAL_MS_SCR_LOW_THRES       (fwCfgp->u16_acalMsScrLowThres) //048 - acal_ms_scr_low_thres
#define CFG_U16_ACAL_MS_SCR_LP_UP_THRES     (fwCfgp->u16_acalMsScrLpUpThres)    //04A - acal_ms_scr_lp_up_thres
#define CFG_U16_ACAL_MS_SCR_LP_LOW_THRES    (fwCfgp->u16_acalMsScrLpLowThres)   //04C - acal_ms_scr_lp_low_thres
#define CFG_U16_ACAL_SS_TCH_F_UP_THRES      (fwCfgp->u16_acalSsTchFUpThres) //04E - acal_ss_tch_f_up_thres
#define CFG_U16_ACAL_SS_TCH_F_LOW_THRES     (fwCfgp->u16_acalSsTchFLowThres)    //050 - acal_ss_tch_f_low_thres
#define CFG_U16_ACAL_SS_TCH_S_UP_THRES      (fwCfgp->u16_acalSsTchSUpThres) //052 - acal_ss_tch_s_up_thres
#define CFG_U16_ACAL_SS_TCH_S_LOW_THRES     (fwCfgp->u16_acalSsTchSLowThres)    //054 - acal_ss_tch_s_low_thres
#define CFG_U16_ACAL_MS_KEY_UP_THRES        (fwCfgp->u16_acalMsKeyUpThres)  //056 - acal_ms_key_up_thres
#define CFG_U16_ACAL_MS_KEY_LOW_THRES       (fwCfgp->u16_acalMsKeyLowThres) //058 - acal_ms_key_low_thres
#define CFG_B4_ACAL_FRC_TCH_WGH             (fwCfgp->b4_acalFrcTchWgh)  //05A - frc_acal_wgh
#define CFG_U16_ACAL_FRC_TCH_UP_THRES       (fwCfgp->u16_acalFrcTchUpThres) //05B - acal_frc_tch_up_thres
#define CFG_U16_ACAL_FRC_TCH_LOW_THRES      (fwCfgp->u16_acalFrcTchLowThres)    //05D - acal_frc_tch_low_thres
#define CFG_U16_ACAL_MS_SCR_UP_THRES_GLV_LP (fwCfgp->u16_acalMsScrUpThresGlvLp) //05F - acal_ms_scr_up_thres_glv_lp
#define CFG_U16_ACAL_MS_SCR_LOW_THRES_GLV_LP    (fwCfgp->u16_acalMsScrLowThresGlvLp)    //061 - acal_ms_scr_low_thres_glv_lp
#define CFG_U16_ACAL_WTR_MS_SCR_UP_THRES    (fwCfgp->u16_acalWtrMsScrUpThres)   //063 - acal_wtr_ms_scr_up_thres
#define CFG_U16_ACAL_WTR_MS_SCR_LOW_THRES   (fwCfgp->u16_acalWtrMsScrLowThres)  //065 - acal_wtr_ms_scr_low_thres
#define CFG_U16_ACAL_MS_SCR_INTG_LOW_THRES  (fwCfgp->u16_acalMsScrIntgLowThres) //067 - acal_ms_scr_intg_low_thres
#define CFG_B1_FCAL_SS_TCH_DUMMY_SAMPLE_EN  (fwCfgp->b1_fcalSsTchDummySampleEn) //06B - fcal_cfg
#define CFG_B1_FCAL_SS_TCH_DUMMY_MS_SCR_EN  (fwCfgp->b1_fcalSsTchDummyMsScrEn)  //06B - fcal_cfg
#define CFG_B2_FCAL_MS_SCR_CNT              (fwCfgp->b2_fcalMsScrCnt)   //06C - fcal_samp_cnt
#define CFG_B2_FCAL_SS_TCH_CNT              (fwCfgp->b2_fcalSsTchCnt)   //06C - fcal_samp_cnt
#define CFG_B2_FCAL_MS_KEY_CNT              (fwCfgp->b2_fcalMsKeyCnt)   //06C - fcal_samp_cnt
#define CFG_B2_FCAL_FRC_TCH_CNT             (fwCfgp->b2_fcalFrcTchCnt)  //06C - fcal_samp_cnt
#define CFG_B4_ROM_RAW_MS_SCR_CNT           (fwCfgp->b4_romRawMsScrCnt) //06D - rom_raw_samp_cnt
#define CFG_B4_ROM_RAW_SS_TCH_CNT           (fwCfgp->b4_romRawSsTchCnt) //06D - rom_raw_samp_cnt
#define CFG_B4_LP_ITO_FCAL_RAW_MS_SCR_CNT   (fwCfgp->b4_lpItoFcalRawMsScrCnt)   //06E - lp_raw_samp_cnt
#define CFG_B1_APWR_IDLE_SCAN_MODE_EN       (fwCfgp->b1_apwrIdleScanModeEn) //071 - tsk_scan_config
#define CFG_B1_APWR_IDLE_SCAN_TIME_SCALE_EN (fwCfgp->b1_apwrIdleScanTimeScaleEn)    //071 - tsk_scan_config
#define CFG_B1_APWR_AFE_OFF_EN              (fwCfgp->b1_apwrAfeOffEn)   //071 - tsk_scan_config
#define CFG_B1_APWR_SHARE_SS_TCH_AFE_IDLE_EN    (fwCfgp->b1_apwrShareSsTchAfeIdleEn)    //071 - tsk_scan_config
#define CFG_B1_APWR_SHARE_MS_AFE_LP_EN      (fwCfgp->b1_apwrShareMsAfeLpEn) //071 - tsk_scan_config
#define CFG_B1_APWR_DEFAULT_RPT_240_EN      (fwCfgp->b1_apwrDefaultRpt240En)    //071 - tsk_scan_config
#define CFG_B1_APWR_DEFAULT_RPT_FW_ACC_EN   (fwCfgp->b1_apwrDefaultRptFwAccEn)  //071 - tsk_scan_config
#define CFG_B1_SCAN_TIMER_100US_RES_EN      (fwCfgp->b1_scanTimer100usResEn)    //071 - tsk_scan_config
#define CFG_U8_FRAME_RATE_TCH               (fwCfgp->u8_frameRateTch)   //072 - frame_rate_tch
#define CFG_U8_FRAME_RATE_IDLE              (fwCfgp->u8_frameRateIdle)  //073 - frame_rate_idle
#define CFG_U8_FRAME_RATE_LP_DET            (fwCfgp->u8_frameRateLpDet) //074 - frame_rate_lp_det
#define CFG_U8_FRAME_RATE_LP_ACTIVE         (fwCfgp->u8_frameRateLpActive)  //075 - frame_rate_lp_active
#define CFG_U8_APWR_NTCH_2_IDLE_DLY         (fwCfgp->u8_apwrNtch2IdleDly)   //076 - apwr_ntch_2_idle_dly
#define CFG_U8_APWR_TCH_2_NTCH_DLY          (fwCfgp->u8_apwrTch2NtchDly)    //077 - apwr_tch_2_ntch_dly
#define CFG_U8_APWR_LPA_2_LPI_DLY           (fwCfgp->u8_apwrLpa2LpiDly) //078 - apwr_lpa_2_lpi_dly
#define CFG_U8_APWR_NTCH_2_IDLE_DLY_SCALE   (fwCfgp->u8_apwrNtch2IdleDlyScale)  //079 - apwr_ntch_2_idle_dly_scale
#define CFG_U8_CMD_FRAME_RATE_TCH_180       (fwCfgp->u8_cmdFrameRateTch180) //07A - cmd_frame_rate_tch
#define CFG_U8_CMD_FRAME_RATE_TCH_240       (fwCfgp->u8_cmdFrameRateTch240) //07A - cmd_frame_rate_tch
#define CFG_B1_SYNC_EN                      (fwCfgp->b1_syncEn)         //07D - sync_cfg0
#define CFG_B1_SYNC_120HZ_SCAN_EN           (fwCfgp->b1_sync120hzScanEn)    //07D - sync_cfg0
#define CFG_B1_SYNC_SAMPLE_BTW_HSYN_EN      (fwCfgp->b1_syncSampleBtwHsynEn)    //07D - sync_cfg0
#define CFG_B2_SYNC_MODE                    (fwCfgp->b2_syncMode)       //07D - sync_cfg0
#define CFG_B1_SYNC_HSYN_POL                (fwCfgp->b1_syncHsynPol)    //07D - sync_cfg0
#define CFG_B1_SYNC_VSYN_POL                (fwCfgp->b1_syncVsynPol)    //07D - sync_cfg0
#define CFG_B1_SYNC_HSYN_TIMING_EN          (fwCfgp->b1_syncHsynTimingEn)   //07D - sync_cfg0
#define CFG_B1_SYNC_ITO_EN                  (fwCfgp->b1_syncItoEn)      //07E - sync_cfg1
#define CFG_B1_SELF_SYNC_EN                 (fwCfgp->b1_selfSyncEn)     //07E - sync_cfg1
#define CFG_B1_LP_SELF_SYNC_EN              (fwCfgp->b1_lpSelfSyncEn)   //07E - sync_cfg1
#define CFG_U16_SYNC_POST_HSYN_DLY          (fwCfgp->u16_syncPostHsynDly)   //07F - sync_post_hsyn_dly
#define CFG_B4_SYNC_SAMPLE_BTW_HSYN         (fwCfgp->b4_syncSampleBtwHsyn)  //081 - sync_sample_btw_hsyn
#define CFG_B3_SYNC_FRM_START_DLY           (fwCfgp->b3_syncFrmStartDly)    //081 - sync_sample_btw_hsyn
#define CFG_U16_SYNC_CNT_HSYN_THRES         (fwCfgp->u16_syncCntHsynThres)  //082 - sync_cnt_hsyn_threshold_0
#define CFG_B4_SYNC_HSYN_DLY                (fwCfgp->b4_syncHsynDly)    //084 - sync_hsyn_phase_setting
#define CFG_U16_SYNC_FRM_START_THRES        (fwCfgp->u16_syncFrmStartThres) //085 - sync_frm_start_thres
#define CFG_U16_SYNC_HW_POST_VSYN_DLY       (fwCfgp->u16_syncHwPostVsynDly) //087 - sync_hw_post_vsyn_dly
#define CFG_U8_SYNC_60HZ_SCAN_RATE          (fwCfgp->u8_sync60hzScanRate)   //089 - sync_60hz_scan_rate
#define CFG_U8_SYNC_120HZ_ODD_SCAN_RATE     (fwCfgp->u8_sync120hzOddScanRate)   //08A - sync_120hz_odd_scan_rate
#define CFG_U8_SYNC_120HZ_EVEN_SCAN_RATE    (fwCfgp->u8_sync120hzEvenScanRate)  //08B - sync_120hz_even_scan_rate
#define CFG_U8_SYNC_240HZ_SCAN_RATE         (fwCfgp->u8_sync240hzScanRate)  //08C - sync_240hz_scan_rate
#define CFG_B4_SS_TCH_SYNC_SAMPLE_BTW_HSYN  (fwCfgp->b4_ssTchSyncSampleBtwHsyn) //08D - ss_tch_hsyn_settings
#define CFG_B1_SS_TCH_SYNC_POST_HSYN_DLY_RAND_EN    (fwCfgp->b1_ssTchSyncPostHsynDlyRandEn) //08D - ss_tch_hsyn_settings
#define CFG_U16_SS_TCH_SYNC_POST_HSYN_DLY   (fwCfgp->u16_ssTchSyncPostHsynDly)  //08E - ss_tch_hsyn_settings_1
#define CFG_U16_SS_TCH_SYNC_POST_HSYN_DLY_RAND_MAX  (fwCfgp->u16_ssTchSyncPostHsynDlyRandMax)   //090 - ss_tch_sync_post_hsyn_dly_rand_max
#define CFG_U16_SS_TCH_SYNC_POST_HSYN_DLY_RAND_MIN  (fwCfgp->u16_ssTchSyncPostHsynDlyRandMin)   //092 - ss_tch_sync_post_hsyn_dly_rand_min
#define CFG_B3_SYNC_HSYNC_GPIO              (fwCfgp->b3_syncHsyncGpio)  //094 - sync_gpio_config
#define CFG_B3_SYNC_VSYNC_GPIO              (fwCfgp->b3_syncVsyncGpio)  //094 - sync_gpio_config
#define CFG_B1_RPT_SEC_EN                   (fwCfgp->b1_rptSecEn)       //09A - rpt_config
#define CFG_B1_RPT_STAT_EN                  (fwCfgp->b1_rptStatEn)      //09A - rpt_config
#define CFG_B1_RPT_DBG_EN                   (fwCfgp->b1_rptDbgEn)       //09A - rpt_config
#define CFG_B1_RPT_FW_PROCESS_EN            (fwCfgp->b1_rptFwProcessEn) //09A - rpt_config
#define CFG_B1_RPT_STAT_FRAME_DROP_EN       (fwCfgp->b1_rptStatFrameDropEn) //09A - rpt_config
#define CFG_B1_RPT_LP_DBG_EN                (fwCfgp->b1_rptLpDbgEn)     //09A - rpt_config
#define CFG_B1_RPT_STAT_LPFCAL_BLOCK_EN     (fwCfgp->b1_rptStatLpfcalBlockEn)   //09A - rpt_config
#define CFG_B1_RPT_STAT_ECHO_EN             (fwCfgp->b1_rptStatEchoEn)  //09A - rpt_config
#define CFG_B1_RPT_SEC_BRUSH_AREA_EN        (fwCfgp->b1_rptSecBrushAreaEn)  //09B - rpt_config1
#define CFG_B1_RPT_MAX_ENERGY_TO_HOST_EN    (fwCfgp->b1_rptMaxEnergyToHostEn)   //09B - rpt_config1
#define CFG_B1_RPT_TCH_ANGLE_EN             (fwCfgp->b1_rptTchAngleEn)  //09B - rpt_config1
#define CFG_U16_RPT_MAJOR_AXIS_MIN          (fwCfgp->u16_rptMajorAxisMin)   //09C - rpt_major_axis_min
#define CFG_U16_RPT_MAJOR_AXIS_MAX          (fwCfgp->u16_rptMajorAxisMax)   //09E - rpt_major_axis_max
#define CFG_U16_RPT_MINOR_AXIS_MIN          (fwCfgp->u16_rptMinorAxisMin)   //0A0 - rpt_minor_axis_min
#define CFG_U16_RPT_MINOR_AXIS_MAX          (fwCfgp->u16_rptMinorAxisMax)   //0A2 - rpt_minor_axis_max
#define CFG_U16_RPT_SEC_BRUSH_AREA_DEN      (fwCfgp->u16_rptSecBrushAreaDen)    //0A4 - rpt_sec_brush_area_den
#define CFG_U8_RPT_TCH_AREA_SCALE_NUMERATOR (fwCfgp->u8_rptTchAreaScaleNumerator)   //0A6 - rpt_tch_area_scale_numerator
#define CFG_U8_RPT_TCH_AREA_SCALE_DENOMINATOR   (fwCfgp->u8_rptTchAreaScaleDenominator) //0A7 - rpt_tch_area_scale_denominator
#define CFG_U8_RPT_TCH_AREA_OFFSET          (fwCfgp->u8_rptTchAreaOffset)   //0A8 - rpt_tch_area_offset
#define CFG_B1_CHRGR_MODE_EN                (fwCfgp->b1_chrgrModeEn)    //0AC - chrgr_cfg
#define CFG_B1_CHRGR_GPIO_EN                (fwCfgp->b1_chrgrGpioEn)    //0AC - chrgr_cfg
#define CFG_B1_CHRGR_SS_TCH_MS_BITMAP_EN    (fwCfgp->b1_chrgrSsTchMsBitmapEn)   //0AC - chrgr_cfg
#define CFG_B3_CHRGR_GPIO_NUM               (fwCfgp->b3_chrgrGpioNum)   //0AC - chrgr_cfg
#define CFG_U16_CHRGR_GRV_TOL_HORI_VERT     (fwCfgp->u16_chrgrGrvTolHoriVert)   //0AD - chrgr_grv_tol_hori_vert
#define CFG_U16_CHRGR_GRV_TOL_DIAG          (fwCfgp->u16_chrgrGrvTolDiag)   //0AF - chrgr_grv_tol_diag
#define CFG_U16_CHRGR_GRV_MIN_TCH_SEP_DIST  (fwCfgp->u16_chrgrGrvMinTchSepDist) //0B1 - chrgr_grv_min_tch_sep_dist
#define CFG_U8_CHRGR_GRV_NORM_PERCENT       (fwCfgp->u8_chrgrGrvNormPercent)    //0B3 - chrgr_grv_norm_percent
#define CFG_U8_CHRGR_TCH_THRES_INC          (fwCfgp->u8_chrgrTchThresInc)   //0B4 - chrgr_tch_thres_inc
#define CFG_U16_CHRGR_TCH_MRG_DIST          (fwCfgp->u16_chrgrTchMrgDist)   //0B5 - chrgr_tch_mrg_dist
#define CFG_U8_CHRGR_FGR_THRES_HYST         (fwCfgp->u8_chrgrFgrThresHyst)  //0B7 - chrgr_fgr_thres_hyst
#define CFG_B1_SS_FLT_EN                    (fwCfgp->b1_ssFltEn)        //0BA - ss_flt_cfg
#define CFG_U16_SS_FLT_GRV_BASE_THRES       (fwCfgp->u16_ssFltGrvBaseThres) //0BB - ss_flt_grv_base_thres
#define CFG_U16_SS_FLT_VALID_PEAK_THRES     (fwCfgp->u16_ssFltValidPeakThres)   //0BD - ss_flt_valid_peak_thres
#define CFG_U16_SS_FLT_GRV_TOL              (fwCfgp->u16_ssFltGrvTol)   //0BF - ss_flt_grv_tol
#define CFG_U8_SS_FLT_GRV_NORM_PERCENT      (fwCfgp->u8_ssFltGrvNormPercent)    //0C1 - ss_flt_grv_norm_percent
#define CFG_U16_CHRGR_ACAL_MS_SCR_UP_THRES  (fwCfgp->u16_chrgrAcalMsScrUpThres) //0C3 - chrgr_acal_ms_scr_up_thres
#define CFG_U16_CHRGR_ACAL_MS_SCR_LOW_THRES (fwCfgp->u16_chrgrAcalMsScrLowThres)    //0C5 - chrgr_acal_ms_scr_low_thres
#define CFG_B4_AFE_MS_SENSE_PAD_TUNE        (fwCfgp->b4_afeMsSensePadTune)  //0C9 - afe_ms_drive_ctrl
#define CFG_B4_AFE_MS_FORCE_PAD_TUNE        (fwCfgp->b4_afeMsForcePadTune)  //0C9 - afe_ms_drive_ctrl
#define CFG_B4_AFE_SS_SENSE_PAD_TUNE        (fwCfgp->b4_afeSsSensePadTune)  //0CA - afe_ss_drive_ctrl
#define CFG_B4_AFE_SS_FORCE_PAD_TUNE        (fwCfgp->b4_afeSsForcePadTune)  //0CA - afe_ss_drive_ctrl
#define CFG_B1_OSC_OVER_CLK_EN              (fwCfgp->b1_oscOverClkEn)   //0CC - osc_over_clk_cfg
#define CFG_B7_OSC_OFFSET_FINE              (fwCfgp->b7_oscOffsetFine)  //0CC - osc_over_clk_cfg
#define CFG_B1_MS_SCR_CP_SEL                (fwCfgp->b1_msScrCpSel)     //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SRC_HI_Z_EN               (fwCfgp->b1_msSrcHiZEn)     //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SCR_DRV_3X_EN             (fwCfgp->b1_msScrDrv3xEn)   //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SCR_ACX_EN                (fwCfgp->b1_msScrAcxEn)     //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SCR_CLIP_CNT_EN           (fwCfgp->b1_msScrClipCntEn) //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SCR_DATA_FILTER_EN        (fwCfgp->b1_msScrDataFilterEn)  //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SCR_OS_FILTER_EN          (fwCfgp->b1_msScrOsFilterEn)    //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SCR_AZ_EN                 (fwCfgp->b1_msScrAzEn)      //0CD - ms_scr_afe_cfg0
#define CFG_B1_MS_SCR_IOFF_EN               (fwCfgp->b1_msScrIoffEn)    //0CE - ms_scr_afe_cfg1
#define CFG_B2_MS_SCR_IOFF_STRENGTH         (fwCfgp->b2_msScrIoffStrength)  //0CE - ms_scr_afe_cfg1
#define CFG_B1_MS_SCR_CG_EN                 (fwCfgp->b1_msScrCgEn)      //0CE - ms_scr_afe_cfg1
#define CFG_B2_MS_SCR_DTO_MODE              (fwCfgp->b2_msScrDtoMode)   //0CE - ms_scr_afe_cfg1
#define CFG_B1_MS_SCR_FW_ACC_EN             (fwCfgp->b1_msScrFwAccEn)   //0CE - ms_scr_afe_cfg1
#define CFG_B1_MS_SCR_C2I_SINGLE_END_EN     (fwCfgp->b1_msScrC2iSingleEndEn)    //0CF - ms_scr_afe_cfg2
#define CFG_B1_MS_SCR_C2I_FLOAT_EN          (fwCfgp->b1_msScrC2iFloatEn)    //0CF - ms_scr_afe_cfg2
#define CFG_B2_MS_SCR_C2I_LC_SEL            (fwCfgp->b2_msScrC2iLcSel)  //0CF - ms_scr_afe_cfg2
#define CFG_B1_MS_SCR_FW_ACC_NOISY_RAW_QTO_PROC_EN  (fwCfgp->b1_msScrFwAccNoisyRawQtoProcEn)    //0CF - ms_scr_afe_cfg2
#define CFG_U8_MS_SCR_CP_TUNE               (fwCfgp->u8_msScrCpTune)    //0D0 - ms_scr_afe_cfg3
#define CFG_B4_MS_SCR_RL_OF_RT              (fwCfgp->b4_msScrRlOfRt)    //0D1 - ms_scr_afe_cfg4
#define CFG_B4_MS_SCR_CX_CNT                (fwCfgp->b4_msScrCxCnt)     //0D1 - ms_scr_afe_cfg4
#define CFG_B2_MS_SCR_DEFAULT_R_IDX         (fwCfgp->b2_msScrDefaultRIdx)   //0D2 - ms_scr_afe_cfg5
#define CFG_B2_MS_LP_SCR_DEFAULT_R_IDX      (fwCfgp->b2_msLpScrDefaultRIdx) //0D2 - ms_scr_afe_cfg5
#define CFG_U16_MS_SCR_T_CYC                (fwCfgp->u16_msScrTCyc)     //0D3 - ms_scr_t_cyc
#define CFG_U16_MS_SCR_OS_DLY               (fwCfgp->u16_msScrOsDly)    //0D5 - ms_scr_os_dly
#define CFG_U8_MS_SCR_HIGH_RES_ANALOG_ACC   (fwCfgp->u8_msScrHighResAnalogAcc)  //0D7 - ms_scr_high_res_prfl0
#define CFG_B4_MS_SCR_HIGH_RES_DIG_ACC      (fwCfgp->b4_msScrHighResDigAcc) //0D8 - ms_scr_high_res_prfl1
#define CFG_B2_MS_SCR_HIGH_RES_CA           (fwCfgp->b2_msScrHighResCa) //0D8 - ms_scr_high_res_prfl1
#define CFG_B2_MS_SCR_HIGH_RES_DIV          (fwCfgp->b2_msScrHighResDiv)    //0D8 - ms_scr_high_res_prfl1
#define CFG_B4_MS_SCR_HIGH_RES_RSTC_CNT     (fwCfgp->b4_msScrHighResRstcCnt)    //0D9 - ms_scr_high_res_prfl2
#define CFG_B5_MS_SCR_HIGH_RES_OS_CNT       (fwCfgp->b5_msScrHighResOsCnt)  //0DA - ms_scr_high_res_prfl3
#define CFG_B5_MS_SCR_HIGH_RES_OS_ACC       (fwCfgp->b5_msScrHighResOsAcc)  //0DB - ms_scr_high_res_prfl4
#define CFG_U16_MS_SCR_HIGH_RES_ACC_RESET   (fwCfgp->u16_msScrHighResAccReset)  //0DD - ms_scr_high_res_prfl6
#define CFG_U8_MS_SCR_LP_ANALOG_ACC         (fwCfgp->u8_msScrLpAnalogAcc)   //0DF - ms_scr_lp_prfl0
#define CFG_B4_MS_SCR_LP_DIG_ACC            (fwCfgp->b4_msScrLpDigAcc)  //0E0 - ms_scr_lp_prfl1
#define CFG_B2_MS_SCR_LP_CA                 (fwCfgp->b2_msScrLpCa)      //0E0 - ms_scr_lp_prfl1
#define CFG_B2_MS_SCR_LP_DIV                (fwCfgp->b2_msScrLpDiv)     //0E0 - ms_scr_lp_prfl1
#define CFG_B4_MS_SCR_LP_RSTC_CNT           (fwCfgp->b4_msScrLpRstcCnt) //0E1 - ms_scr_lp_prfl2
#define CFG_B1_MS_SCR_LP_C2I_SINGLE_END_EN  (fwCfgp->b1_msScrLpC2iSingleEndEn)  //0E1 - ms_scr_lp_prfl2
#define CFG_B1_MS_SCR_LP_C2I_FLOAT_EN       (fwCfgp->b1_msScrLpC2iFloatEn)  //0E1 - ms_scr_lp_prfl2
#define CFG_B5_MS_SCR_LP_OS_CNT             (fwCfgp->b5_msScrLpOsCnt)   //0E2 - ms_scr_lp_prfl3
#define CFG_B5_MS_SCR_LP_OS_ACC             (fwCfgp->b5_msScrLpOsAcc)   //0E3 - ms_scr_lp_prfl4
#define CFG_U16_MS_SCR_LP_ACC_RESET         (fwCfgp->u16_msScrLpAccReset)   //0E4 - ms_scr_lp_prfl5
#define CFG_B2_MS_SCR_FW_ACC_CNT            (fwCfgp->b2_msScrFwAccCnt)  //0E6 - ms_scr_fw_acc_prfl0
#define CFG_B2_MS_SCR_FW_ACC_CNT_GLOVE      (fwCfgp->b2_msScrFwAccCntGlove) //0E6 - ms_scr_fw_acc_prfl0
#define CFG_B2_MS_SCR_FW_ACC_CNT_NOISY      (fwCfgp->b2_msScrFwAccCntNoisy) //0E7 - ms_scr_fw_acc_noisy_prfl0
#define CFG_B1_MS_SCR_NOISY_WINDOW_ACC_EN   (fwCfgp->b1_msScrNoisyWindowAccEn)  //0E7 - ms_scr_fw_acc_noisy_prfl0
#define CFG_B2_MS_SCR_FW_MULTI_R_ACC_NOISY_EN   (fwCfgp->b2_msScrFwMultiRAccNoisyEn)    //0E7 - ms_scr_fw_acc_noisy_prfl0
#define CFG_U8_MS_SCR_HIGH_RES_NOISY_ANALOG_ACC (fwCfgp->u8_msScrHighResNoisyAnalogAcc) //0E8 - ms_scr_fw_acc_noisy_prfl1
#define CFG_U8_MS_SCR_LP_R_CYC              (fwCfgp->u8_msScrLpRCyc)    //0E9 - ms_scr_lp_prfl6
#define CFG_U8_MS_MRN_ANALOG_ACC            (fwCfgp->u8_msMrnAnalogAcc) //0EA - ms_mrn_scan_prfl0
#define CFG_B2_MS_MRN_CA                    (fwCfgp->b2_msMrnCa)        //0EB - ms_mrn_scan_prfl1
#define CFG_B2_MS_MRN_DIV                   (fwCfgp->b2_msMrnDiv)       //0EB - ms_mrn_scan_prfl1
#define CFG_B1_MS_KEY_CP_SEL                (fwCfgp->b1_msKeyCpSel)     //0ED - ms_key_afe_cfg0
#define CFG_B1_MS_KEY_DRV_3X_EN             (fwCfgp->b1_msKeyDrv3xEn)   //0ED - ms_key_afe_cfg0
#define CFG_B1_MS_KEY_ACX_EN                (fwCfgp->b1_msKeyAcxEn)     //0ED - ms_key_afe_cfg0
#define CFG_B1_MS_KEY_DATA_FILTER_EN        (fwCfgp->b1_msKeyDataFilterEn)  //0ED - ms_key_afe_cfg0
#define CFG_B1_MS_KEY_OS_FILTER_EN          (fwCfgp->b1_msKeyOsFilterEn)    //0ED - ms_key_afe_cfg0
#define CFG_B1_MS_KEY_AZ_EN                 (fwCfgp->b1_msKeyAzEn)      //0ED - ms_key_afe_cfg0
#define CFG_B1_MS_KEY_IOFF_EN               (fwCfgp->b1_msKeyIoffEn)    //0EE - ms_key_afe_cfg1
#define CFG_B2_MS_KEY_IOFF_STRENGTH         (fwCfgp->b2_msKeyIoffStrength)  //0EE - ms_key_afe_cfg1
#define CFG_B1_MS_KEY_CG_EN                 (fwCfgp->b1_msKeyCgEn)      //0EE - ms_key_afe_cfg1
#define CFG_B2_MS_KEY_C2I_LC_SEL            (fwCfgp->b2_msKeyC2iLcSel)  //0EF - ms_key_afe_cfg2
#define CFG_U8_MS_KEY_CP_TUNE               (fwCfgp->u8_msKeyCpTune)    //0F0 - ms_key_afe_cfg3
#define CFG_B4_MS_KEY_RL_OF_RT              (fwCfgp->b4_msKeyRlOfRt)    //0F1 - ms_key_afe_cfg4
#define CFG_B4_MS_KEY_CX_CNT                (fwCfgp->b4_msKeyCxCnt)     //0F1 - ms_key_afe_cfg4
#define CFG_U16_MS_KEY_T_CYC                (fwCfgp->u16_msKeyTCyc)     //0F3 - ms_key_t_cyc
#define CFG_U16_MS_KEY_R_CYC                (fwCfgp->u16_msKeyRCyc)     //0F5 - ms_key_r_cyc
#define CFG_U16_MS_KEY_OS_DLY               (fwCfgp->u16_msKeyOsDly)    //0F7 - ms_key_os_dly
#define CFG_U8_MS_KEY_HIGH_RES_ANALOG_ACC   (fwCfgp->u8_msKeyHighResAnalogAcc)  //0F9 - ms_key_high_res_prfl0
#define CFG_B4_MS_KEY_HIGH_RES_DIG_ACC      (fwCfgp->b4_msKeyHighResDigAcc) //0FA - ms_key_high_res_prfl1
#define CFG_B2_MS_KEY_HIGH_RES_CA           (fwCfgp->b2_msKeyHighResCa) //0FA - ms_key_high_res_prfl1
#define CFG_B2_MS_KEY_HIGH_RES_DIV          (fwCfgp->b2_msKeyHighResDiv)    //0FA - ms_key_high_res_prfl1
#define CFG_B4_MS_KEY_HIGH_RES_RSTC_CNT     (fwCfgp->b4_msKeyHighResRstcCnt)    //0FB - ms_key_high_res_prfl2
#define CFG_B5_MS_KEY_HIGH_RES_OS_CNT       (fwCfgp->b5_msKeyHighResOsCnt)  //0FC - ms_key_high_res_prfl3
#define CFG_B5_MS_KEY_HIGH_RES_OS_ACC       (fwCfgp->b5_msKeyHighResOsAcc)  //0FD - ms_key_high_res_prfl4
#define CFG_U16_MS_KEY_HIGH_RES_ACC_RESET   (fwCfgp->u16_msKeyHighResAccReset)  //0FF - ms_key_high_res_prfl6
#define CFG_B1_SS_TCH_CP_SEL                (fwCfgp->b1_ssTchCpSel)     //102 - ss_tch_afe_cfg0
#define CFG_B1_SS_TCH_TX_CP_SEL             (fwCfgp->b1_ssTchTxCpSel)   //102 - ss_tch_afe_cfg0
#define CFG_B1_SS_TCH_ACX_EN                (fwCfgp->b1_ssTchAcxEn)     //102 - ss_tch_afe_cfg0
#define CFG_B1_SS_TCH_DATA_FILTER_EN        (fwCfgp->b1_ssTchDataFilterEn)  //102 - ss_tch_afe_cfg0
#define CFG_B1_SS_TCH_OS_FILTER_EN          (fwCfgp->b1_ssTchOsFilterEn)    //102 - ss_tch_afe_cfg0
#define CFG_B1_SS_TCH_AZ_EN                 (fwCfgp->b1_ssTchAzEn)      //102 - ss_tch_afe_cfg0
#define CFG_B1_SS_TCH_IOFF_EN               (fwCfgp->b1_ssTchIoffEn)    //103 - ss_tch_afe_cfg1
#define CFG_B2_SS_TCH_IOFF_STRENGTH         (fwCfgp->b2_ssTchIoffStrength)  //103 - ss_tch_afe_cfg1
#define CFG_B1_SS_TCH_FAST_SCAN_EN          (fwCfgp->b1_ssTchFastScanEn)    //103 - ss_tch_afe_cfg1
#define CFG_B2_SS_TCH_DATA_MODE_SEL         (fwCfgp->b2_ssTchDataModeSel)   //103 - ss_tch_afe_cfg1
#define CFG_B1_SS_TCH_C2I_SINGLE_END_EN     (fwCfgp->b1_ssTchC2iSingleEndEn)    //104 - ss_tch_afe_cfg2
#define CFG_B1_SS_TCH_C2I_FLOAT_EN          (fwCfgp->b1_ssTchC2iFloatEn)    //104 - ss_tch_afe_cfg2
#define CFG_B2_SS_TCH_C2I_LC_SEL            (fwCfgp->b2_ssTchC2iLcSel)  //104 - ss_tch_afe_cfg2
#define CFG_B1_SS_TCH_BOOTS_STRAP_EN        (fwCfgp->b1_ssTchBootsStrapEn)  //104 - ss_tch_afe_cfg2
#define CFG_B1_SS_TCH_EARLY_SCAN_EN         (fwCfgp->b1_ssTchEarlyScanEn)   //104 - ss_tch_afe_cfg2
#define CFG_U8_SS_TCH_CP_TUNE               (fwCfgp->u8_ssTchCpTune)    //105 - ss_tch_afe_cfg3
#define CFG_B4_SS_TCH_CX_CNT                (fwCfgp->b4_ssTchCxCnt)     //106 - ss_tch_afe_cfg4
#define CFG_B1_SS_DATA_DATA_AVG_EN          (fwCfgp->b1_ssDataDataAvgEn)    //107 - ss_tch_afe_cfg5
#define CFG_B1_SS_TCH_FW_ACC_EN             (fwCfgp->b1_ssTchFwAccEn)   //107 - ss_tch_afe_cfg5
#define CFG_B1_SS_TCH_FW_ACC_WITH_AFE_POWER_CYCLE_EN    (fwCfgp->b1_ssTchFwAccWithAfePowerCycleEn)  //107 - ss_tch_afe_cfg5
#define CFG_U16_SS_TCH_R_CYC                (fwCfgp->u16_ssTchRCyc)     //108 - ss_tch_r_cyc
#define CFG_U16_SS_TCH_T_CYC                (fwCfgp->u16_ssTchTCyc)     //10A - ss_tch_t_cyc
#define CFG_U16_SS_TCH_RL_CYC               (fwCfgp->u16_ssTchRlCyc)    //10C - ss_tch_rl_cyc
#define CFG_U16_SS_TCH_OS_DLY               (fwCfgp->u16_ssTchOsDly)    //10E - ss_tch_os_dly
#define CFG_B1_SS_TCH_F_IX_LO_RANGE         (fwCfgp->b1_ssTchFIxLoRange)    //110 - ss_tch_f_ix_range_cfg_0
#define CFG_B4_SS_TCH_F_IX0_RANGE           (fwCfgp->b4_ssTchFIx0Range) //110 - ss_tch_f_ix_range_cfg_0
#define CFG_B4_SS_TCH_F_IX1_RANGE           (fwCfgp->b4_ssTchFIx1Range) //111 - ss_tch_f_ix_range_cfg_1
#define CFG_B4_SS_TCH_F_IX2_RANGE           (fwCfgp->b4_ssTchFIx2Range) //111 - ss_tch_f_ix_range_cfg_1
#define CFG_B1_SS_TCH_S_IX_LO_RANGE         (fwCfgp->b1_ssTchSIxLoRange)    //112 - ss_tch_s_ix_range_cfg_0
#define CFG_B4_SS_TCH_S_IX0_RANGE           (fwCfgp->b4_ssTchSIx0Range) //112 - ss_tch_s_ix_range_cfg_0
#define CFG_B4_SS_TCH_S_IX1_RANGE           (fwCfgp->b4_ssTchSIx1Range) //113 - ss_tch_s_ix_range_cfg_1
#define CFG_B4_SS_TCH_S_IX2_RANGE           (fwCfgp->b4_ssTchSIx2Range) //113 - ss_tch_s_ix_range_cfg_1
#define CFG_U8_SS_TCH_HIGH_RES_ANALOG_ACC   (fwCfgp->u8_ssTchHighResAnalogAcc)  //114 - ss_tch_high_res_prfl0
#define CFG_B4_SS_TCH_HIGH_RES_DIG_ACC      (fwCfgp->b4_ssTchHighResDigAcc) //115 - ss_tch_high_res_prfl1
#define CFG_B2_SS_TCH_HIGH_RES_F_CA         (fwCfgp->b2_ssTchHighResFCa)    //116 - ss_tch_high_res_prfl2
#define CFG_B2_SS_TCH_HIGH_RES_F_DIV        (fwCfgp->b2_ssTchHighResFDiv)   //116 - ss_tch_high_res_prfl2
#define CFG_B2_SS_TCH_HIGH_RES_S_CA         (fwCfgp->b2_ssTchHighResSCa)    //116 - ss_tch_high_res_prfl2
#define CFG_B2_SS_TCH_HIGH_RES_S_DIV        (fwCfgp->b2_ssTchHighResSDiv)   //116 - ss_tch_high_res_prfl2
#define CFG_B5_SS_TCH_HIGH_RES_OS_CNT       (fwCfgp->b5_ssTchHighResOsCnt)  //117 - ss_tch_high_res_prfl3
#define CFG_B3_SS_TCH_HIGH_RES_DUMMY_SAMPLE_CNT (fwCfgp->b3_ssTchHighResDummySampleCnt) //117 - ss_tch_high_res_prfl3
#define CFG_B5_SS_TCH_HIGH_RES_OS_ACC       (fwCfgp->b5_ssTchHighResOsAcc)  //118 - ss_tch_high_res_prfl4
#define CFG_B2_SS_TCH_FW_ACC_CNT            (fwCfgp->b2_ssTchFwAccCnt)  //119 - ss_tch_high_res_prfl5
#define CFG_U16_SS_TCH_HIGH_RES_ACC_RESET   (fwCfgp->u16_ssTchHighResAccReset)  //11A - ss_tch_high_res_prfl6
#define CFG_B1_MS_VAL_TX_MARK_EN            (fwCfgp->b1_msValTxMarkEn)  //11D - mutual_valid_cfg
#define CFG_B1_MS_VAL_TX_MIN_NUM_CH_MARK_EN (fwCfgp->b1_msValTxMinNumChMarkEn)  //11D - mutual_valid_cfg
#define CFG_U16_MS_VAL_TX_MARK_POS_THD      (fwCfgp->u16_msValTxMarkPosThd) //11E - ms_val_tx_mark_pos_thd
#define CFG_U16_MS_VAL_TX_MARK_NEG_THD      (fwCfgp->u16_msValTxMarkNegThd) //120 - ms_val_tx_mark_neg_thd
#define CFG_U8_MS_VAL_TX_MARK_GRW_CNT       (fwCfgp->u8_msValTxMarkGrwCnt)  //122 - ms_val_tx_mark_grw_cnt
#define CFG_U8_MS_VAL_TX_MIN_NUM_CH_CNT     (fwCfgp->u8_msValTxMinNumChCnt) //123 - ms_val_tx_min_num_ch_cnt
#define CFG_B2_NOISY_DYNAMIC_FGR_THRES_EN   (fwCfgp->b2_noisyDynamicFgrThresEn) //124 - dynamic_fgr_thres_en
#define CFG_U8_NOISY_DYNAMIC_FGR_THRES_PER  (fwCfgp->u8_noisyDynamicFgrThresPer)    //125 - noisy_dynamic_fgr_thres_per
#define CFG_U8_DYNAMIC_FGR_THRES_PER        (fwCfgp->u8_dynamicFgrThresPer) //126 - dynamic_fgr_thres_per
#define CFG_U8_TX_MARK_CH_KEEP_DBNC         (fwCfgp->u8_txMarkChKeepDbnc)   //127 - tx_mark_ch_keep_dbnc
#define CFG_B1_TUNE_MS_SCR_CX2_EN           (fwCfgp->b1_tuneMsScrCx2En) //12A - tune_ms_scr_cfg
#define CFG_B1_TUNE_MS_SCR_DIFF_CX2_OPTIMIZATION_EN (fwCfgp->b1_tuneMsScrDiffCx2OptimizationEn) //12A - tune_ms_scr_cfg
#define CFG_B1_TUNE_MS_SCR_DIFF_PARALLEL_CX2_TUNE_EN    (fwCfgp->b1_tuneMsScrDiffParallelCx2TuneEn) //12A - tune_ms_scr_cfg
#define CFG_B1_TUNE_MS_SCR_DIFF_CX2_OPTIMIZATION_EDGE_EN    (fwCfgp->b1_tuneMsScrDiffCx2OptimizationEdgeEn) //12A - tune_ms_scr_cfg
#define CFG_B4_TUNE_MS_SCR_CX2_RETUNE_CNT   (fwCfgp->b4_tuneMsScrCx2RetuneCnt)  //12A - tune_ms_scr_cfg
#define CFG_B1_TUNE_MS_SCR_CX2_LOG_EN       (fwCfgp->b1_tuneMsScrCx2LogEn)  //12B - tune_ms_scr_log_cfg
#define CFG_B1_TUNE_MS_SCR_CX2_LOG_DATA_EN  (fwCfgp->b1_tuneMsScrCx2LogDataEn)  //12B - tune_ms_scr_log_cfg
#define CFG_B1_TUNE_MS_SCR_DIFF_PARALLEL_CX2_SEQUENCE_RETUNE_EN (fwCfgp->b1_tuneMsScrDiffParallelCx2SequenceRetuneEn)   //12B - tune_ms_scr_log_cfg
#define CFG_U16_TUNE_MS_SCR_CX2_STOP_CODE   (fwCfgp->u16_tuneMsScrCx2StopCode)  //12C - tune_ms_scr_cx2_stop_code
#define CFG_B1_TUNE_MS_SCR_LP_CX2_EN        (fwCfgp->b1_tuneMsScrLpCx2En)   //130 - tune_ms_scr_lp_cfg
#define CFG_B1_TUNE_MS_SCR_LP_CX2_START_INDEX_EN    (fwCfgp->b1_tuneMsScrLpCx2StartIndexEn) //130 - tune_ms_scr_lp_cfg
#define CFG_B1_TUNE_MS_SCR_LP_CX2_LOG_EN    (fwCfgp->b1_tuneMsScrLpCx2LogEn)    //131 - tune_ms_scr_lp_log_cfg
#define CFG_B1_TUNE_MS_SCR_LP_CX2_LOG_DATA_EN   (fwCfgp->b1_tuneMsScrLpCx2LogDataEn)    //131 - tune_ms_scr_lp_log_cfg
#define CFG_U16_TUNE_MS_SCR_LP_CX2_STOP_CODE    (fwCfgp->u16_tuneMsScrLpCx2StopCode)    //132 - tune_ms_scr_lp_cx2_stop_code
#define CFG_U8_TUNE_MS_SCR_LP_CX2_ST_IDX_VALID_CH   (fwCfgp->u8_tuneMsScrLpCx2StIdxValidCh) //134 - tune_ms_scr_lp_cx2_st_idx_valid_ch
#define CFG_U8_TUNE_MS_SCR_LP_CX2_ST_IDX_UNVALID_CH (fwCfgp->u8_tuneMsScrLpCx2StIdxUnvalidCh)   //135 - tune_ms_scr_lp_cx2_st_idx_unvalid_ch
#define CFG_B1_TUNE_SS_TCH_IX0_EN           (fwCfgp->b1_tuneSsTchIx0En) //138 - tune_ss_tch_cfg
#define CFG_B1_TUNE_SS_TCH_IX1_EN           (fwCfgp->b1_tuneSsTchIx1En) //138 - tune_ss_tch_cfg
#define CFG_B1_TUNE_SS_TCH_IX2_EN           (fwCfgp->b1_tuneSsTchIx2En) //138 - tune_ss_tch_cfg
#define CFG_B1_TUNE_SS_TCH_CX2_EN           (fwCfgp->b1_tuneSsTchCx2En) //138 - tune_ss_tch_cfg
#define CFG_B1_TUNE_SS_TCH_240HZ_SCAN_EN    (fwCfgp->b1_tuneSsTch240hzScanEn)   //138 - tune_ss_tch_cfg
#define CFG_B1_TUNE_SS_TCH_TUNE_DGB_EN      (fwCfgp->b1_tuneSsTchTuneDgbEn) //138 - tune_ss_tch_cfg
#define CFG_B1_TUNE_SS_TCH_CX2_SINGLE_END_EN    (fwCfgp->b1_tuneSsTchCx2SingleEndEn)    //138 - tune_ss_tch_cfg
#define CFG_U16_TUNE_SS_TCH_IX0_STOP_CODE   (fwCfgp->u16_tuneSsTchIx0StopCode)  //139 - tune_ss_tch_ix0_stop_code
#define CFG_U16_TUNE_SS_TCH_IX1_STOP_CODE   (fwCfgp->u16_tuneSsTchIx1StopCode)  //13B - tune_ss_tch_ix1_stop_code
#define CFG_U16_TUNE_SS_TCH_IX2_STOP_CODE   (fwCfgp->u16_tuneSsTchIx2StopCode)  //13D - tune_ss_tch_ix2_stop_code
#define CFG_U16_TUNE_SS_TCH_CX2_STOP_CODE   (fwCfgp->u16_tuneSsTchCx2StopCode)  //13F - tune_ss_tch_cx2_stop_code
#define CFG_U8_TUNE_SS_TCH_F_IX0_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsTchFIx0ManualTuneVal) //141 - tune_ss_tch_f_ix0_manual_tune_val
#define CFG_U8_TUNE_SS_TCH_S_IX0_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsTchSIx0ManualTuneVal) //142 - tune_ss_tch_s_ix0_manual_tune_val
#define CFG_U8_TUNE_SS_TCH_F_IX1_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsTchFIx1ManualTuneVal) //143 - tune_ss_tch_f_ix1_manual_tune_val
#define CFG_U8_TUNE_SS_TCH_S_IX1_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsTchSIx1ManualTuneVal) //144 - tune_ss_tch_s_ix1_manual_tune_val
#define CFG_U8_TUNE_SS_TCH_IX0_ADJ_OFFSET   (fwCfgp->u8_tuneSsTchIx0AdjOffset)  //145 - tune_ss_tch_ix0_adj_offset
#define CFG_U8_TUNE_SS_TCH_IX1_ADJ_OFFSET   (fwCfgp->u8_tuneSsTchIx1AdjOffset)  //146 - tune_ss_tch_ix1_adj_offset
#define CFG_U8_TUNE_SS_TCH_IX2_ADJ_OFFSET   (fwCfgp->u8_tuneSsTchIx2AdjOffset)  //147 - tune_ss_tch_ix2_adj_offset
#define CFG_U8_TUNE_SS_TCH_DIFF_CX2_SWEEP_ST    (fwCfgp->u8_tuneSsTchDiffCx2SweepSt)    //148 - tune_ss_tch_diff_cx2_sweep_st
#define CFG_U8_TUNE_SS_TCH_F_IX2_ST_VAL     (fwCfgp->u8_tuneSsTchFIx2StVal) //149 - tune_ss_tch_f_ix2_st_val
#define CFG_U8_TUNE_SS_TCH_S_IX2_ST_VAL     (fwCfgp->u8_tuneSsTchSIx2StVal) //14A - tune_ss_tch_s_ix2_st_val
#define CFG_B1_TUNE_SS_DET_IX0_EN           (fwCfgp->b1_tuneSsDetIx0En) //14C - tune_ss_det_cfg
#define CFG_B1_TUNE_SS_DET_IX1_EN           (fwCfgp->b1_tuneSsDetIx1En) //14C - tune_ss_det_cfg
#define CFG_B1_TUNE_SS_DET_IX2_EN           (fwCfgp->b1_tuneSsDetIx2En) //14C - tune_ss_det_cfg
#define CFG_B1_TUNE_SS_DET_CX2_EN           (fwCfgp->b1_tuneSsDetCx2En) //14C - tune_ss_det_cfg
#define CFG_B1_TUNE_SS_DET_240HZ_SCAN_EN    (fwCfgp->b1_tuneSsDet240hzScanEn)   //14C - tune_ss_det_cfg
#define CFG_B1_TUNE_SS_DET_TUNE_DGB_EN      (fwCfgp->b1_tuneSsDetTuneDgbEn) //14C - tune_ss_det_cfg
#define CFG_B1_TUNE_SS_DET_EQU_SS_TCH_EN    (fwCfgp->b1_tuneSsDetEquSsTchEn)    //14C - tune_ss_det_cfg
#define CFG_B1_TUNE_SS_DET_CX2_SINGLE_END_EN    (fwCfgp->b1_tuneSsDetCx2SingleEndEn)    //14C - tune_ss_det_cfg
#define CFG_U16_TUNE_SS_DET_IX0_STOP_CODE   (fwCfgp->u16_tuneSsDetIx0StopCode)  //14D - tune_ss_det_ix0_stop_code
#define CFG_U16_TUNE_SS_DET_IX1_STOP_CODE   (fwCfgp->u16_tuneSsDetIx1StopCode)  //14F - tune_ss_det_ix1_stop_code
#define CFG_U16_TUNE_SS_DET_IX2_STOP_CODE   (fwCfgp->u16_tuneSsDetIx2StopCode)  //151 - tune_ss_det_ix2_stop_code
#define CFG_U16_TUNE_SS_DET_CX2_STOP_CODE   (fwCfgp->u16_tuneSsDetCx2StopCode)  //153 - tune_ss_det_cx2_stop_code
#define CFG_U8_TUNE_SS_DET_F_IX0_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsDetFIx0ManualTuneVal) //155 - tune_ss_det_f_ix0_manual_tune_val
#define CFG_U8_TUNE_SS_DET_S_IX0_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsDetSIx0ManualTuneVal) //156 - tune_ss_det_s_ix0_manual_tune_val
#define CFG_U8_TUNE_SS_DET_F_IX1_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsDetFIx1ManualTuneVal) //157 - tune_ss_det_f_ix1_manual_tune_val
#define CFG_U8_TUNE_SS_DET_S_IX1_MANUAL_TUNE_VAL    (fwCfgp->u8_tuneSsDetSIx1ManualTuneVal) //158 - tune_ss_det_s_ix1_manual_tune_val
#define CFG_U8_TUNE_SS_DET_IX0_ADJ_OFFSET   (fwCfgp->u8_tuneSsDetIx0AdjOffset)  //159 - tune_ss_det_ix0_adj_offset
#define CFG_U8_TUNE_SS_DET_F_IX2_ST_VAL     (fwCfgp->u8_tuneSsDetFIx2StVal) //15A - tune_ss_det_f_ix2_st_val
#define CFG_U8_TUNE_SS_DET_S_IX2_ST_VAL     (fwCfgp->u8_tuneSsDetSIx2StVal) //15B - tune_ss_det_s_ix2_st_val
#define CFG_U8_TUNE_SS_DET_IX1_ADJ_OFFSET   (fwCfgp->u8_tuneSsDetIx1AdjOffset)  //15C - tune_ss_det_ix1_adj_offset
#define CFG_U8_TUNE_SS_DET_IX2_ADJ_OFFSET   (fwCfgp->u8_tuneSsDetIx2AdjOffset)  //15D - tune_ss_det_ix2_adj_offset
#define CFG_U8_TUNE_SS_DET_DIFF_CX2_SWEEP_ST    (fwCfgp->u8_tuneSsDetDiffCx2SweepSt)    //15E - tune_ss_det_diff_cx2_sweep_st
#define CFG_B1_TUNE_SS_FRCTCH_IX0_EN        (fwCfgp->b1_tuneSsFrctchIx0En)  //161 - tune_ss_frctch_cfg
#define CFG_B1_TUNE_SS_FRCTCH_IX1_EN        (fwCfgp->b1_tuneSsFrctchIx1En)  //161 - tune_ss_frctch_cfg
#define CFG_B1_TUNE_SS_FRCTCH_IX2_EN        (fwCfgp->b1_tuneSsFrctchIx2En)  //161 - tune_ss_frctch_cfg
#define CFG_B1_TUNE_SS_FRCTCH_CX2_EN        (fwCfgp->b1_tuneSsFrctchCx2En)  //161 - tune_ss_frctch_cfg
#define CFG_B1_TUNE_SS_FRCTCH_240HZ_SCAN_EN (fwCfgp->b1_tuneSsFrctch240hzScanEn)    //161 - tune_ss_frctch_cfg
#define CFG_U16_TUNE_SS_FRCTCH_IX0_STOP_CODE    (fwCfgp->u16_tuneSsFrctchIx0StopCode)   //162 - tune_ss_frctch_ix0_stop_code
#define CFG_U16_TUNE_SS_FRCTCH_IX1_STOP_CODE    (fwCfgp->u16_tuneSsFrctchIx1StopCode)   //164 - tune_ss_frctch_ix1_stop_code
#define CFG_U16_TUNE_SS_FRCTCH_IX2_STOP_CODE    (fwCfgp->u16_tuneSsFrctchIx2StopCode)   //166 - tune_ss_frctch_ix2_stop_code
#define CFG_U16_TUNE_SS_FRCTCH_CX2_STOP_CODE    (fwCfgp->u16_tuneSsFrctchCx2StopCode)   //168 - tune_ss_frctch_cx2_stop_code
#define CFG_U8_TUNE_SS_FRCTCH_F_IX0_MANUAL_TUNE_VAL (fwCfgp->u8_tuneSsFrctchFIx0ManualTuneVal)  //16A - tune_ss_frctch_f_ix0_manual_tune_val
#define CFG_U8_TUNE_SS_FRCTCH_S_IX0_MANUAL_TUNE_VAL (fwCfgp->u8_tuneSsFrctchSIx0ManualTuneVal)  //16B - tune_ss_frctch_s_ix0_manual_tune_val
#define CFG_U8_TUNE_SS_FRCTCH_F_IX1_MANUAL_TUNE_VAL (fwCfgp->u8_tuneSsFrctchFIx1ManualTuneVal)  //16C - tune_ss_frctch_f_ix1_manual_tune_val
#define CFG_U8_TUNE_SS_FRCTCH_S_IX1_MANUAL_TUNE_VAL (fwCfgp->u8_tuneSsFrctchSIx1ManualTuneVal)  //16D - tune_ss_frctch_s_ix1_manual_tune_val
#define CFG_U8_TUNE_SS_FRCTCH_IX0_ADJ_OFFSET    (fwCfgp->u8_tuneSsFrctchIx0AdjOffset)   //16E - tune_ss_frctch_ix0_adj_offset
#define CFG_U8_TUNE_SS_FRCTCH_IX1_ADJ_OFFSET    (fwCfgp->u8_tuneSsFrctchIx1AdjOffset)   //16F - tune_ss_frctch_ix1_adj_offset
#define CFG_U8_TUNE_SS_FRCTCH_DIFF_CX2_SWEEP_ST (fwCfgp->u8_tuneSsFrctchDiffCx2SweepSt) //170 - tune_ss_frctch_diff_cx2_sweep_st
#define CFG_B1_SS_DIFF_CX2_SEQUENCE_STEP_RETUN_EN   (fwCfgp->b1_ssDiffCx2SequenceStepRetunEn)   //171 - ss_retune_cfg0
#define CFG_B1_SS_CX2_INVALID_RETUNE_EN     (fwCfgp->b1_ssCx2InvalidRetuneEn)   //171 - ss_retune_cfg0
#define CFG_U8_SS_CX2_INVALID_RETUNE_THRES  (fwCfgp->u8_ssCx2InvalidRetuneThres)    //172 - ss_cx2_invalid_retune_thres
#define CFG_U8_SS_CX2_INVALID_RETUNE_IX2_COMP_VALUE (fwCfgp->u8_ssCx2InvalidRetuneIx2CompValue) //173 - ss_cx2_invalid_retune_comp_abs_value
#define CFG_B1_NMON_EN                      (fwCfgp->b1_nmonEn)         //174 - nmon_cfg
#define CFG_B1_NOISE_LVL1_EN                (fwCfgp->b1_noiseLvl1En)    //174 - nmon_cfg
#define CFG_B1_NOISE_LVL2_EN                (fwCfgp->b1_noiseLvl2En)    //174 - nmon_cfg
#define CFG_B1_NOISE_LVL3_EN                (fwCfgp->b1_noiseLvl3En)    //174 - nmon_cfg
#define CFG_B1_SLOW_STDDEV_REDUCE_EN        (fwCfgp->b1_slowStddevReduceEn) //174 - nmon_cfg
#define CFG_B1_MS_MRN_UPDATE_MAX_STDDEV_EN  (fwCfgp->b1_msMrnUpdateMaxStddevEn) //174 - nmon_cfg
#define CFG_B2_MS_MRN_CNT                   (fwCfgp->b2_msMrnCnt)       //175 - ms_mrn_cfg1
#define CFG_B2_MS_MRN_CNT_NL1               (fwCfgp->b2_msMrnCntNl1)    //175 - ms_mrn_cfg1
#define CFG_B2_MS_MRN_CNT_NL2               (fwCfgp->b2_msMrnCntNl2)    //175 - ms_mrn_cfg1
#define CFG_B1_MS_NMON_PRE_SEQ_SS_SCAN_EN   (fwCfgp->b1_msNmonPreSeqSsScanEn)   //175 - ms_mrn_cfg1
#define CFG_B1_MS_MRN_STEP_SCAN_EN          (fwCfgp->b1_msMrnStepScanEn)    //175 - ms_mrn_cfg1
#define CFG_B1_MS_NOISE_ENTRY_RAW_EN        (fwCfgp->b1_msNoiseEntryRawEn)  //176 - ms_mrn_cfg2
#define CFG_B1_NOISE_LVL2_MIN_CHK_EN        (fwCfgp->b1_noiseLvl2MinChkEn)  //176 - ms_mrn_cfg2
#define CFG_B1_MS_NMON_SLP_AVG_CMM_EN       (fwCfgp->b1_msNmonSlpAvgCmmEn)  //176 - ms_mrn_cfg2
#define CFG_B1_MS_MRN_ADJ_RX_STDDEV_EN      (fwCfgp->b1_msMrnAdjRxStddevEn) //176 - ms_mrn_cfg2
#define CFG_B1_DUMMY_MRN_DLY_EN             (fwCfgp->b1_dummyMrnDlyEn)  //176 - ms_mrn_cfg2
#define CFG_U8_MS_MRN_R_CYC_SEL0            (fwCfgp->u8_msMrnRCycSel0)  //177 - ms_mrn_r_cyc_sel0
#define CFG_U8_MS_MRN_R_CYC_SEL1            (fwCfgp->u8_msMrnRCycSel1)  //178 - ms_mrn_r_cyc_sel1
#define CFG_U8_MS_MRN_R_CYC_SEL2            (fwCfgp->u8_msMrnRCycSel2)  //179 - ms_mrn_r_cyc_sel2
#define CFG_U8_MS_MRN_R_CYC_SEL3            (fwCfgp->u8_msMrnRCycSel3)  //17A - ms_mrn_r_cyc_sel3
#define CFG_U8_NLVL_ENTER_DBNC              (fwCfgp->u8_nlvlEnterDbnc)  //17B - nlvl_dbnc
#define CFG_U8_NLVL_LEAVE_DBNC              (fwCfgp->u8_nlvlLeaveDbnc)  //17B - nlvl_dbnc
#define CFG_U16_NLVL1_STDDEV_THRES          (fwCfgp->u16_nlvl1StddevThres)  //17D - nlvl1_stddev_thres
#define CFG_U16_NLVL2_STDDEV_THRES          (fwCfgp->u16_nlvl2StddevThres)  //17F - nlvl2_stddev_thres
#define CFG_U16_NLVL3_STDDEV_THRES          (fwCfgp->u16_nlvl3StddevThres)  //181 - nlvl3_stddev_thres
#define CFG_U16_STY_NLVL1_STDDEV_THRES      (fwCfgp->u16_styNlvl1StddevThres)   //183 - sty_nlvl1_stddev_thres
#define CFG_U16_STY_NLVL2_STDDEV_THRES      (fwCfgp->u16_styNlvl2StddevThres)   //185 - sty_nlvl2_stddev_thres
#define CFG_U16_STY_NLVL3_STDDEV_THRES      (fwCfgp->u16_styNlvl3StddevThres)   //187 - sty_nlvl3_stddev_thres
#define CFG_U16_MS_NMON_CMM_POS_THRES       (fwCfgp->u16_msNmonCmmPosThres) //189 - ms_noise_cmm_pos_thres
#define CFG_U16_MS_NMON_CMM_NEG_THRES       (fwCfgp->u16_msNmonCmmNegThres) //18B - ms_noise_cmm_neg_thres
#define CFG_U8_MS_MRN_SWITCH_R_THRES        (fwCfgp->u8_msMrnSwitchRThres)  //18D - ms_mrn_switch_r_thres
#define CFG_B4_MS_MRN_ADP_GAIN_DNMTR        (fwCfgp->b4_msMrnAdpGainDnmtr)  //18E - ms_mrn_switch_r_thres_adp_gain
#define CFG_B4_MS_MRN_ADP_GAIN_NMTR         (fwCfgp->b4_msMrnAdpGainNmtr)   //18E - ms_mrn_switch_r_thres_adp_gain
#define CFG_U8_MS_MRN_MIN_STDDEV            (fwCfgp->u8_msMrnMinStddev) //18F - ms_mrn_min_stddev
#define CFG_U16_NLVL1_STDDEV_GAP_THRES      (fwCfgp->u16_nlvl1StddevGapThres)   //190 - nlvl1_stddev_gap_thres
#define CFG_U16_FREQ_HOP_FRM_DROP_MAX_NMON  (fwCfgp->u16_freqHopFrmDropMaxNmon) //192 - freq_hop_frm_drop_max_nmon
#define CFG_U8_MS_MRN_STEP_VAL              (fwCfgp->u8_msMrnStepVal)   //194 - ms_mrn_step_val
#define CFG_U8_NLVL2_ENTER_DBNC             (fwCfgp->u8_nlvl2EnterDbnc) //195 - nlv2l_dbnc
#define CFG_U8_NLVL2_LEAVE_DBNC             (fwCfgp->u8_nlvl2LeaveDbnc) //195 - nlv2l_dbnc
#define CFG_B1_MS_SCR_CLIP_NMON_EN          (fwCfgp->b1_msScrClipNmonEn)    //197 - ms_scr_clip_nmon_cfg
#define CFG_U8_MS_SCR_CLIP_NLVL2_THRES      (fwCfgp->u8_msScrClipNlvl2Thres)    //198 - ms_scr_clip_nlvl2_thres
#define CFG_U8_MS_SCR_CLIP_NLVL2_TSLOT_CNT  (fwCfgp->u8_msScrClipNlvl2TslotCnt) //199 - ms_scr_clip_nlvl2_tslot_cnt
#define CFG_B1_SS_TCH_NMON_EN               (fwCfgp->b1_ssTchNmonEn)    //19C - ss_tch_nmon_cfg
#define CFG_B1_SS_TCH_NOISE_LVL1_EN         (fwCfgp->b1_ssTchNoiseLvl1En)   //19C - ss_tch_nmon_cfg
#define CFG_B1_SS_TCH_NOISE_LVL2_EN         (fwCfgp->b1_ssTchNoiseLvl2En)   //19C - ss_tch_nmon_cfg
#define CFG_B1_SS_NOISE_CNT_DBNC_OUT_ON_TOUCH   (fwCfgp->b1_ssNoiseCntDbncOutOnTouch)   //19C - ss_tch_nmon_cfg
#define CFG_B1_SS_KEEP_NOISE_MODE_IN_CHARGER_EN (fwCfgp->b1_ssKeepNoiseModeInChargerEn) //19C - ss_tch_nmon_cfg
#define CFG_B1_SS_NMON_CMM_EN               (fwCfgp->b1_ssNmonCmmEn)    //19C - ss_tch_nmon_cfg
#define CFG_B1_SS_TCH_FRAMEDROP_BURST_EN    (fwCfgp->b1_ssTchFramedropBurstEn)  //19C - ss_tch_nmon_cfg
#define CFG_U16_SS_TCH_NLVL1_DEV_THRES      (fwCfgp->u16_ssTchNlvl1DevThres)    //19E - ss_tch_nlvl1_dev_thres
#define CFG_U16_SS_TCH_NLVL2_DEV_THRES      (fwCfgp->u16_ssTchNlvl2DevThres)    //1A0 - ss_tch_nlvl2_dev_thres
#define CFG_U8_SS_TCH_NOISE_DEV_INC_IIR_WGH0    (fwCfgp->u8_ssTchNoiseDevIncIirWgh0)    //1A2 - ss_tch_noise_dev_inc_iir_wgh0
#define CFG_U8_SS_TCH_NOISE_DEV_DEC_IIR_WGH0    (fwCfgp->u8_ssTchNoiseDevDecIirWgh0)    //1A3 - ss_tch_noise_dev_dec_iir_wgh0
#define CFG_U8_SS_TCH_NLVL_ENTER_DBNC       (fwCfgp->u8_ssTchNlvlEnterDbnc) //1A4 - ss_tch_nlvl_dbnc
#define CFG_U8_SS_TCH_NLVL_LEAVE_DBNC       (fwCfgp->u8_ssTchNlvlLeaveDbnc) //1A4 - ss_tch_nlvl_dbnc
#define CFG_U16_SS_TCH_STY_NLVL1_DEV_THRES  (fwCfgp->u16_ssTchStyNlvl1DevThres) //1A6 - ss_tch_sty_nlvl1_dev_thres
#define CFG_U16_SS_TCH_STY_NLVL2_DEV_THRES  (fwCfgp->u16_ssTchStyNlvl2DevThres) //1A8 - ss_tch_sty_nlvl2_dev_thres
#define CFG_U16_SS_NOISE_CMM_POS_THRES      (fwCfgp->u16_ssNoiseCmmPosThres)    //1AA - ss_noise_cmm_pos_thres
#define CFG_U16_SS_NOISE_CMM_NEG_THRES      (fwCfgp->u16_ssNoiseCmmNegThres)    //1AC - ss_noise_cmm_neg_thres
#define CFG_U16_SS_TCH_NOISE_POS_THRES_BURST    (fwCfgp->u16_ssTchNoisePosThresBurst)   //1AE - ss_tch_noise_pos_thres_burst
#define CFG_U8_SS_TCH_BITMAP_EDGE_TCH_NODE_LIMIT_THRES  (fwCfgp->u8_ssTchBitmapEdgeTchNodeLimitThres)   //1B1 - ss_tch_bitmap_edge_tch_node_limit_thres
#define CFG_B1_SS_TCH_MS_DIFF_BITMAP_EN     (fwCfgp->b1_ssTchMsDiffBitmapEn)    //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_MS_BITMAP_EN          (fwCfgp->b1_ssTchMsBitmapEn)    //1B2 - ss_tch_cfg
#define CFG_B2_SS_TCH_MS_BITMAP_CH_SEL      (fwCfgp->b2_ssTchMsBitmapChSel) //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_INTG_STR_CORR_EN      (fwCfgp->b1_ssTchIntgStrCorrEn) //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_F_INTG_LNR_CMM_EN     (fwCfgp->b1_ssTchFIntgLnrCmmEn) //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_S_INTG_LNR_CMM_EN     (fwCfgp->b1_ssTchSIntgLnrCmmEn) //1B2 - ss_tch_cfg
#define CFG_B1_SS_DIFF_LNR_CMM_EN           (fwCfgp->b1_ssDiffLnrCmmEn) //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_MS_NOISY_BITMAP_EN    (fwCfgp->b1_ssTchMsNoisyBitmapEn)   //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_MS_WTR_BITMAP_EN      (fwCfgp->b1_ssTchMsWtrBitmapEn) //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_ADAPTIVE_NOISE_SCAN_EN    (fwCfgp->b1_ssTchAdaptiveNoiseScanEn)   //1B2 - ss_tch_cfg
#define CFG_B1_SS_TCH_ADAPTIVE_SCAN_EN      (fwCfgp->b1_ssTchAdaptiveScanEn)    //1B2 - ss_tch_cfg
#define CFG_U16_SS_TCH_DET_THRES            (fwCfgp->u16_ssTchDetThres) //1B4 - ss_tch_det_thres
#define CFG_U16_SS_TCH_DET_THRES_NOISY      (fwCfgp->u16_ssTchDetThresNoisy)    //1B6 - ss_tch_det_thres_noisy
#define CFG_U16_SS_TCH_WATERSHED_THRES      (fwCfgp->u16_ssTchWatershedThres)   //1B8 - ss_tch_watershed_thres
#define CFG_U8_SS_TCH_CENTROID_LEN          (fwCfgp->u8_ssTchCentroidLen)   //1BA - ss_tch_centroid_cfg
#define CFG_U16_SS_BITMAP_FGR_THRES         (fwCfgp->u16_ssBitmapFgrThres)  //1BB - ss_bitmap_fgr_thres
#define CFG_U16_SS_BITMAP_STY_THRES         (fwCfgp->u16_ssBitmapStyThres)  //1BD - ss_bitmap_sty_thres
#define CFG_U16_SS_BITMAP_GLV_THRES         (fwCfgp->u16_ssBitmapGlvThres)  //1BF - ss_bitmap_glv_thres
#define CFG_U16_SS_BITMAP_WTR_FGR_THRES     (fwCfgp->u16_ssBitmapWtrFgrThres)   //1C1 - ss_bitmap_wtr_fgr_thres
#define CFG_U8_SS_TCH_BITMAP_TCH_CNT_LIMIT_THRES    (fwCfgp->u8_ssTchBitmapTchCntLimitThres)    //1C3 - ss_tch_bitmap_tch_cnt_limit_thres
#define CFG_U8_SS_TCH_ADAPTIVE_SCAN_DBNC    (fwCfgp->u8_ssTchAdaptiveScanDbnc)  //1C4 - ss_tch_adaptive_scan_dbnc
#define CFG_U16_SS_INTG_LNR_CMM_SLP_THRES   (fwCfgp->u16_ssIntgLnrCmmSlpThres)  //1C5 - ss_intg_lnr_cmm_slp_thres
#define CFG_U16_SS_INTG_LNR_CMM_AVG_THRES   (fwCfgp->u16_ssIntgLnrCmmAvgThres)  //1C7 - ss_intg_lnr_cmm_avg_thres
#define CFG_U16_SS_LNR_CMM_SMP_LEVEL_THRES  (fwCfgp->u16_ssLnrCmmSmpLevelThres) //1CA - ss_lnr_cmm_smp_level_thres
#define CFG_U16_SS_LNR_CMM_SMP_LEVEL_NOISY_THRES    (fwCfgp->u16_ssLnrCmmSmpLevelNoisyThres)    //1CC - ss_lnr_cmm_smp_level_noisy_thres
#define CFG_U16_SS_LNR_CMM_SMP_DIFF_THRES   (fwCfgp->u16_ssLnrCmmSmpDiffThres)  //1CE - ss_lnr_cmm_smp_diff_thres
#define CFG_U16_SS_LNR_CMM_SMP_DIFF_NOISY_THRES (fwCfgp->u16_ssLnrCmmSmpDiffNoisyThres) //1D0 - ss_lnr_cmm_smp_diff_noisy_thres
#define CFG_U8_SS_LNR_CMM_SMP_CNT_THRES     (fwCfgp->u8_ssLnrCmmSmpCntThres)    //1D2 - ss_lnr_cmm_smp_cnt_thres
#define CFG_U8_SS_LNR_CMM_SMP_CNT_THRES_HYST    (fwCfgp->u8_ssLnrCmmSmpCntThresHyst)    //1D3 - ss_lnr_cmm_smp_cnt_thres_hyst
#define CFG_U8_SS_LNR_CMM_SMP_CNT_MVA_THRES (fwCfgp->u8_ssLnrCmmSmpCntMvaThres) //1D4 - ss_lnr_cmm_smp_cnt_mva_thres
#define CFG_U16_SS_LNR_CMM_COMP_LIMIT_DIFF_THRES    (fwCfgp->u16_ssLnrCmmCompLimitDiffThres)    //1D5 - ss_lnr_cmm_comp_limit_diff_thres
#define CFG_U16_SS_LNR_CMM_COMP_LIMIT_INTG_THRES    (fwCfgp->u16_ssLnrCmmCompLimitIntgThres)    //1D7 - ss_lnr_cmm_comp_limit_intg_thres
#define CFG_U16_SS_LNR_CMM_COMP_LIMIT_MVA_THRES (fwCfgp->u16_ssLnrCmmCompLimitMvaThres) //1D9 - ss_lnr_cmm_comp_limit_mva_thres
#define CFG_U8_SS_LNR_CMM_RX_ERODE_CNT      (fwCfgp->u8_ssLnrCmmRxErodeCnt) //1DB - ss_lnr_cmm_rx_erode_cnt
#define CFG_U8_SS_LNR_CMM_TX_ERODE_CNT      (fwCfgp->u8_ssLnrCmmTxErodeCnt) //1DC - ss_lnr_cmm_tx_erode_cnt
#define CFG_U8_SS_LNR_CMM_MVA_CH_EXPAND_CNT (fwCfgp->u8_ssLnrCmmMvaChExpandCnt) //1DD - ss_lnr_cmm_mva_ch_expand_cnt
#define CFG_U16_SF_LNR_CMM_SMP_LEVEL_THRES  (fwCfgp->u16_sfLnrCmmSmpLevelThres) //1DF - sf_lnr_cmm_smp_level_thres
#define CFG_U16_SF_LNR_CMM_SMP_LEVEL_NOISY_THRES    (fwCfgp->u16_sfLnrCmmSmpLevelNoisyThres)    //1E1 - sf_lnr_cmm_smp_level_noisy_thres
#define CFG_U16_SF_LNR_CMM_SMP_DIFF_THRES   (fwCfgp->u16_sfLnrCmmSmpDiffThres)  //1E3 - sf_lnr_cmm_smp_diff_thres
#define CFG_U16_SF_LNR_CMM_SMP_DIFF_NOISY_THRES (fwCfgp->u16_sfLnrCmmSmpDiffNoisyThres) //1E5 - sf_lnr_cmm_smp_diff_noisy_thres
#define CFG_U8_SF_LNR_CMM_SMP_CNT_THRES     (fwCfgp->u8_sfLnrCmmSmpCntThres)    //1E7 - sf_lnr_cmm_smp_cnt_thres
#define CFG_U8_SF_LNR_CMM_SMP_CNT_THRES_HYST    (fwCfgp->u8_sfLnrCmmSmpCntThresHyst)    //1E8 - sf_lnr_cmm_smp_cnt_thres_hyst
#define CFG_U8_SF_LNR_CMM_SMP_CNT_MVA_THRES (fwCfgp->u8_sfLnrCmmSmpCntMvaThres) //1E9 - sf_lnr_cmm_smp_cnt_mva_thres
#define CFG_U16_SF_LNR_CMM_COMP_LIMIT_DIFF_THRES    (fwCfgp->u16_sfLnrCmmCompLimitDiffThres)    //1EA - sf_lnr_cmm_comp_limit_diff_thres
#define CFG_U16_SF_LNR_CMM_COMP_LIMIT_INTG_THRES    (fwCfgp->u16_sfLnrCmmCompLimitIntgThres)    //1EC - sf_lnr_cmm_comp_limit_intg_thres
#define CFG_U16_SF_LNR_CMM_COMP_LIMIT_MVA_THRES (fwCfgp->u16_sfLnrCmmCompLimitMvaThres) //1EE - sf_lnr_cmm_comp_limit_mva_thres
#define CFG_U8_SF_LNR_CMM_RX_ERODE_CNT      (fwCfgp->u8_sfLnrCmmRxErodeCnt) //1F0 - sf_lnr_cmm_rx_erode_cnt
#define CFG_U8_SF_LNR_CMM_TX_ERODE_CNT      (fwCfgp->u8_sfLnrCmmTxErodeCnt) //1F1 - sf_lnr_cmm_tx_erode_cnt
#define CFG_U8_SF_LNR_CMM_MVA_CH_EXPAND_CNT (fwCfgp->u8_sfLnrCmmMvaChExpandCnt) //1F2 - sf_lnr_cmm_mva_ch_expand_cnt
#define CFG_B1_SS_DET_CMM_EN                (fwCfgp->b1_ssDetCmmEn)     //1F4 - ss_det_cfg
#define CFG_B1_SS_DET_NEG_DET_EN            (fwCfgp->b1_ssDetNegDetEn)  //1F4 - ss_det_cfg
#define CFG_B1_SS_DET_SPATIAL_EN            (fwCfgp->b1_ssDetSpatialEn) //1F4 - ss_det_cfg
#define CFG_B1_IDLE_ACAL_NOISE_SCAN_EN      (fwCfgp->b1_idleAcalNoiseScanEn)    //1F4 - ss_det_cfg
#define CFG_B1_SS_DET_DIFF_LNR_CMM_EN       (fwCfgp->b1_ssDetDiffLnrCmmEn)  //1F4 - ss_det_cfg
#define CFG_B1_SS_DET_S_INTG_LNR_CMM_EN     (fwCfgp->b1_ssDetSIntgLnrCmmEn) //1F4 - ss_det_cfg
#define CFG_B1_SS_DET_INTG_STR_CORR_EN      (fwCfgp->b1_ssDetIntgStrCorrEn) //1F4 - ss_det_cfg
#define CFG_U8_SS_DET_NODE_CNT              (fwCfgp->u8_ssDetNodeCnt)   //1F5 - ss_det_node_cnt
#define CFG_U16_SS_DET_THRES                (fwCfgp->u16_ssDetThres)    //1F6 - ss_det_thres
#define CFG_U16_SS_DET_THRES_GLV            (fwCfgp->u16_ssDetThresGlv) //1F8 - ss_det_thres_glv
#define CFG_U16_SS_LP_DET_THRES             (fwCfgp->u16_ssLpDetThres)  //1FA - ss_lp_det_thres
#define CFG_U16_SS_DET_CMM_POS_THRES        (fwCfgp->u16_ssDetCmmPosThres)  //1FC - ss_det_cmm_pos_thres
#define CFG_U16_SS_DET_CMM_NEG_THRES        (fwCfgp->u16_ssDetCmmNegThres)  //1FE - ss_det_cmm_neg_thres
#define CFG_B1_SS_WTR_EN                    (fwCfgp->b1_ssWtrEn)        //200 - ss_wtr_cfg
#define CFG_B1_SS_DEFAULT_WTR_MODE          (fwCfgp->b1_ssDefaultWtrMode)   //200 - ss_wtr_cfg
#define CFG_B1_MS_ROM_CALIB_DIFF_CHK_EN     (fwCfgp->b1_msRomCalibDiffChkEn)    //200 - ss_wtr_cfg
#define CFG_B1_SS_CALIB_DIFF_CHK_EN         (fwCfgp->b1_ssCalibDiffChkEn)   //200 - ss_wtr_cfg
#define CFG_B2_MS_WTR_SPATIAL_FLTR_SEL      (fwCfgp->b2_msWtrSpatialFltrSel)    //200 - ss_wtr_cfg
#define CFG_B1_SS_WTR_SEP_EN                (fwCfgp->b1_ssWtrSepEn)     //200 - ss_wtr_cfg
#define CFG_B1_MS_WTR_SPATIAL_EN            (fwCfgp->b1_msWtrSpatialEn) //200 - ss_wtr_cfg
#define CFG_B1_WTR_DYNAMIC_FGR_THRES_EN     (fwCfgp->b1_wtrDynamicFgrThresEn)   //200 - ss_wtr_cfg
#define CFG_B1_MS_WTR_ISLAND_SUM_RATIO_REJ_EN   (fwCfgp->b1_msWtrIslandSumRatioRejEn)   //200 - ss_wtr_cfg
#define CFG_B1_GRV_WTR_CHK_EN               (fwCfgp->b1_grvWtrChkEn)    //200 - ss_wtr_cfg
#define CFG_B1_WTR_SS_DYNAMIC_FGR_THRES_EN  (fwCfgp->b1_wtrSsDynamicFgrThresEn) //200 - ss_wtr_cfg
#define CFG_B1_WTR_CALIB_OFFSET_TRK_EN      (fwCfgp->b1_wtrCalibOffsetTrkEn)    //200 - ss_wtr_cfg
#define CFG_B4_SS_WTR_DBNC_IN               (fwCfgp->b4_ssWtrDbncIn)    //202 - ss_wtr_dbnc
#define CFG_B4_SS_WTR_DBNC_OUT              (fwCfgp->b4_ssWtrDbncOut)   //202 - ss_wtr_dbnc
#define CFG_B4_SS_WTR_TCH_IN_DLY            (fwCfgp->b4_ssWtrTchInDly)  //203 - ss_wtr_tch_in_dly
#define CFG_B4_SS_WTR_TCH_IN_DLY_2          (fwCfgp->b4_ssWtrTchInDly2) //203 - ss_wtr_tch_in_dly
#define CFG_B4_SS_WTR_TCH_OUT_DLY           (fwCfgp->b4_ssWtrTchOutDly) //204 - ss_wtr_tch_out_dly
#define CFG_U16_SS_WTR_MS_DET_THRES         (fwCfgp->u16_ssWtrMsDetThres)   //205 - ss_wtr_ms_det_thres
#define CFG_U16_SS_WTR_MS_DET_THRES_HYST    (fwCfgp->u16_ssWtrMsDetThresHyst)   //207 - ss_wtr_ms_det_thres_hyst
#define CFG_U8_SS_WTR_MIN_THRES             (fwCfgp->u8_ssWtrMinThres)  //209 - ss_wtr_min_thres
#define CFG_U16_LP_SS_WTR_MS_DET_THRES      (fwCfgp->u16_lpSsWtrMsDetThres) //20A - lp_ss_wtr_ms_det_thres
#define CFG_U16_LP_SS_WTR_MS_DET_THRES_HYST (fwCfgp->u16_lpSsWtrMsDetThresHyst) //20C - lp_ss_wtr_ms_det_thres_hyst
#define CFG_U16_WTR_ENTRY_MT_TRIG_THD       (fwCfgp->u16_wtrEntryMtTrigThd) //20E - wtr_entry_mt_trig_thd
#define CFG_U16_WTR_ENTRY_SS_TRIG_THD       (fwCfgp->u16_wtrEntrySsTrigThd) //210 - wtr_entry_ss_trig_thd
#define CFG_U16_WTR_ENTRY_MS_NEG_FCAL_THD   (fwCfgp->u16_wtrEntryMsNegFcalThd)  //212 - wtr_entry_ms_neg_fcal_thd
#define CFG_U16_WTR_ENTRY_MS_POS_FCAL_THD   (fwCfgp->u16_wtrEntryMsPosFcalThd)  //214 - wtr_entry_ms_pos_fcal_thd
#define CFG_U16_WTR_ENTRY_MS_NEG_NODE_CNT   (fwCfgp->u16_wtrEntryMsNegNodeCnt)  //216 - wtr_entry_ms_neg_node_cnt
#define CFG_U16_WTR_EXIT_CALIB_OFFSET_POS_THD   (fwCfgp->u16_wtrExitCalibOffsetPosThd)  //218 - wtr_exit_calib_offset_pos_thd
#define CFG_U16_WTR_EXIT_CALIB_OFFSET_NEG_THD   (fwCfgp->u16_wtrExitCalibOffsetNegThd)  //21A - wtr_exit_calib_offset_neg_thd
#define CFG_B4_WTR_NODE_ACAL_NO_TCH_CNT     (fwCfgp->b4_wtrNodeAcalNoTchCnt)    //21C - wtr_node_acal_frm_cnt
#define CFG_U8_WTR_NODE_ACAL_WGH            (fwCfgp->u8_wtrNodeAcalWgh) //21D - wtr_node_acal_wgh
#define CFG_U16_WTR_EXIT_NEG_THRES          (fwCfgp->u16_wtrExitNegThres)   //21E - wtr_exit_neg_thres
#define CFG_U16_WTR_MS_SPATIAL_THD          (fwCfgp->u16_wtrMsSpatialThd)   //220 - wtr_ms_spatial_thd
#define CFG_U16_WTR_ENTRY_MT_TRIG_THD_HYST  (fwCfgp->u16_wtrEntryMtTrigThdHyst) //222 - wtr_entry_mt_trig_thd_hyst
#define CFG_U8_WTR_DYNAMIC_FGR_THRES_PER    (fwCfgp->u8_wtrDynamicFgrThresPer)  //224 - wtr_dynamic_fgr_thres_per
#define CFG_U16_MS_WTR_ISLAND_SUM_RATIO_REJECT  (fwCfgp->u16_msWtrIslandSumRatioReject) //225 - ms_wtr_island_sum_ratio_reject
#define CFG_U8_WTR_SS_DYNAMIC_FGR_THRES_PER (fwCfgp->u8_wtrSsDynamicFgrThresPer)    //227 - wtr_ss_dynamic_fgr_thres_per
#define CFG_U16_WTR_MIN_TRK_RAD             (fwCfgp->u16_wtrMinTrkRad)  //228 - wtr_min_trk_rad
#define CFG_U8_WTR_TRK_RAD_MUL              (fwCfgp->u8_wtrTrkRadMul)   //22A - wtr_trk_rad_mul
#define CFG_U16_WTR_TCH_MRG_DIST            (fwCfgp->u16_wtrTchMrgDist) //22B - wtr_tch_mrg_dist
#define CFG_U16_WTR_TCH_MRG_DIST_HYST       (fwCfgp->u16_wtrTchMrgDistHyst) //22D - wtr_tch_mrg_dist_hyst
#define CFG_U8_MS_WTR_SPATIAL_FLTR_PEAK_EXTEND_WGH  (fwCfgp->u8_msWtrSpatialFltrPeakExtendWgh)  //22F - ms_wtr_spatial_fltr_peak_extend_wgh
#define CFG_U16_ACT_EDGE_TCH_ISLAND_THRES   (fwCfgp->u16_actEdgeTchIslandThres) //230 - act_edge_tch_island_thres
#define CFG_U16_HORI_SCR_TCH_ISLAND_THRES   (fwCfgp->u16_horiScrTchIslandThres) //232 - hori_scr_tch_island_thres
#define CFG_B1_FRM_IIR_EN                   (fwCfgp->b1_frmIirEn)       //234 - tch_preprocess_cfg
#define CFG_B1_MS_DIFF_LNR_CMM_EN           (fwCfgp->b1_msDiffLnrCmmEn) //234 - tch_preprocess_cfg
#define CFG_B1_MS_INTG_STR_CORR_EN          (fwCfgp->b1_msIntgStrCorrEn)    //234 - tch_preprocess_cfg
#define CFG_B1_MS_INTG_LNR_CMM_EN           (fwCfgp->b1_msIntgLnrCmmEn) //234 - tch_preprocess_cfg
#define CFG_B1_MS_ALL_CHANNEL_ADJ_EN        (fwCfgp->b1_msAllChannelAdjEn)  //234 - tch_preprocess_cfg
#define CFG_B1_MS_SENSE_SORTING_EN          (fwCfgp->b1_msSenseSortingEn)   //234 - tch_preprocess_cfg
#define CFG_B1_MS_AVG_CMM_GLOVE_EN          (fwCfgp->b1_msAvgCmmGloveEn)    //234 - tch_preprocess_cfg
#define CFG_B1_MS_AVG_CMM_EN                (fwCfgp->b1_msAvgCmmEn)     //234 - tch_preprocess_cfg
#define CFG_B1_MS_PRE_WTR_DET_EN            (fwCfgp->b1_msPreWtrDetEn)  //234 - tch_preprocess_cfg
#define CFG_B1_MS_STR_FLT_STA_CHK           (fwCfgp->b1_msStrFltStaChk) //234 - tch_preprocess_cfg
#define CFG_B1_MS_FLTRDATA_OFFSET_REMOVE    (fwCfgp->b1_msFltrdataOffsetRemove) //234 - tch_preprocess_cfg
#define CFG_B1_MS_FLTRDATA_NOISE_LEVEL_REMOVE   (fwCfgp->b1_msFltrdataNoiseLevelRemove) //234 - tch_preprocess_cfg
#define CFG_B1_MS_RES_STR_FLT_EN            (fwCfgp->b1_msResStrFltEn)  //234 - tch_preprocess_cfg
#define CFG_B1_MS_F_INDV_SLP_ADJ_EN         (fwCfgp->b1_msFIndvSlpAdjEn)    //234 - tch_preprocess_cfg
#define CFG_B1_MS_S_INDV_SLP_ADJ_EN         (fwCfgp->b1_msSIndvSlpAdjEn)    //234 - tch_preprocess_cfg
#define CFG_U16_FRM_IIR_STDDEV0             (fwCfgp->u16_frmIirStddev0) //236 - frm_iir_stddev0
#define CFG_U16_FRM_IIR_STDDEV1             (fwCfgp->u16_frmIirStddev1) //238 - frm_iir_stddev1
#define CFG_U16_FRM_IIR_NOISY_STDDEV0       (fwCfgp->u16_frmIirNoisyStddev0)    //23A - frm_iir_noisy_stddev0
#define CFG_U16_FRM_IIR_NOISY_STDDEV1       (fwCfgp->u16_frmIirNoisyStddev1)    //23C - frm_iir_noisy_stddev1
#define CFG_B4_FRM_IIR_WGH0                 (fwCfgp->b4_frmIirWgh0)     //23E - frm_iir_wgh
#define CFG_B4_FRM_IIR_WGH1                 (fwCfgp->b4_frmIirWgh1)     //23E - frm_iir_wgh
#define CFG_B4_FRM_IIR_NOISY_WGH0           (fwCfgp->b4_frmIirNoisyWgh0)    //23F - frm_iir_noisy_wgh
#define CFG_B4_FRM_IIR_NOISY_WGH1           (fwCfgp->b4_frmIirNoisyWgh1)    //23F - frm_iir_noisy_wgh
#define CFG_B4_NOTCH_FRM_IIR_WGH0           (fwCfgp->b4_notchFrmIirWgh0)    //240 - notch_frm_iir_wgh
#define CFG_U16_MS_WATERSHED_THRES          (fwCfgp->u16_msWatershedThres)  //241 - ms_watershed_thres
#define CFG_U16_TCH_ISLAND_THRES            (fwCfgp->u16_tchIslandThres)    //243 - tch_island_thres
#define CFG_U16_TCH_ISLAND_THRES_WTR        (fwCfgp->u16_tchIslandThresWtr) //245 - tch_island_thres_wtr
#define CFG_U16_TCH_ISLAND_THRES_GLV        (fwCfgp->u16_tchIslandThresGlv) //247 - tch_island_thres_glv
#define CFG_U16_MS_AVG_CMM_THRES            (fwCfgp->u16_msAvgCmmThres) //249 - ms_avg_cmm_thres
#define CFG_U16_MS_LNR_CMM_COMP_LIMIT_DIFF_THRES    (fwCfgp->u16_msLnrCmmCompLimitDiffThres)    //24B - ms_lnr_cmm_comp_limit_diff_thres
#define CFG_U16_MS_LNR_CMM_COMP_LIMIT_INTG_THRES    (fwCfgp->u16_msLnrCmmCompLimitIntgThres)    //24D - ms_lnr_cmm_comp_limit_intg_thres
#define CFG_U16_MS_LNR_CMM_COMP_LIMIT_MVA_THRES (fwCfgp->u16_msLnrCmmCompLimitMvaThres) //24F - ms_lnr_cmm_comp_limit_mva_thres
#define CFG_U16_MS_LNR_CMM_SMP_LEVEL_THRES  (fwCfgp->u16_msLnrCmmSmpLevelThres) //251 - ms_lnr_cmm_smp_level_thres
#define CFG_U16_MS_LNR_CMM_SMP_LEVEL_NOISY_THRES    (fwCfgp->u16_msLnrCmmSmpLevelNoisyThres)    //253 - ms_lnr_cmm_smp_level_noisy_thres
#define CFG_U16_MS_LNR_CMM_SMP_DIFF_THRES   (fwCfgp->u16_msLnrCmmSmpDiffThres)  //255 - ms_lnr_cmm_smp_diff_thres
#define CFG_U16_MS_LNR_CMM_SMP_DIFF_NOISY_THRES (fwCfgp->u16_msLnrCmmSmpDiffNoisyThres) //257 - ms_lnr_cmm_smp_diff_noisy_thres
#define CFG_U8_MS_LNR_CMM_SMP_CNT_THRES     (fwCfgp->u8_msLnrCmmSmpCntThres)    //259 - ms_lnr_cmm_smp_cnt_thres
#define CFG_U8_MS_LNR_CMM_SMP_CNT_THRES_HYST    (fwCfgp->u8_msLnrCmmSmpCntThresHyst)    //25A - ms_lnr_cmm_smp_cnt_thres_hyst
#define CFG_U8_MS_LNR_CMM_SMP_CNT_MVA_THRES (fwCfgp->u8_msLnrCmmSmpCntMvaThres) //25B - ms_lnr_cmm_smp_cnt_mva_thres
#define CFG_U8_MS_LNR_CMM_RX_ERODE_CNT      (fwCfgp->u8_msLnrCmmRxErodeCnt) //25C - ms_lnr_cmm_rx_erode_cnt
#define CFG_U8_MS_LNR_CMM_TX_ERODE_CNT      (fwCfgp->u8_msLnrCmmTxErodeCnt) //25D - ms_lnr_cmm_tx_erode_cnt
#define CFG_U8_MS_LNR_CMM_MVA_CH_EXPAND_CNT (fwCfgp->u8_msLnrCmmMvaChExpandCnt) //25E - ms_lnr_cmm_mva_ch_expand_cnt
#define CFG_U8_MS_ALL_CH_ADJ_VAL            (fwCfgp->u8_msAllChAdjVal)  //25F - ms_all_ch_adj_val
#define CFG_U16_NEW_TCH_CNT_FRAME_DROP_MS_NEG_DET_TRHES_NOISY   (fwCfgp->u16_newTchCntFrameDropMsNegDetTrhesNoisy)  //260 - tch_cnt_frame_drop_ms_neg_det_trhes_noisy
#define CFG_U16_NEW_TCH_CNT_FRAME_DROP_MS_NEG_SUM_TRHES_NOISY   (fwCfgp->u16_newTchCntFrameDropMsNegSumTrhesNoisy)  //262 - tch_cnt_frame_drop_ms_neg_sum_trhes_noisy
#define CFG_B4_FRM_IIR_WIRELESS_WGH0        (fwCfgp->b4_frmIirWirelessWgh0) //264 - frm_iir_wireless_wgh
#define CFG_B4_FRM_IIR_WIRELESS_WGH1        (fwCfgp->b4_frmIirWirelessWgh1) //264 - frm_iir_wireless_wgh
#define CFG_B1_MS_DROP_NOISY_FRAME_EN       (fwCfgp->b1_msDropNoisyFrameEn) //266 - frame_check_cfg
#define CFG_B1_MS_DROP_NOISY_FRAME_FCAL_EN  (fwCfgp->b1_msDropNoisyFrameFcalEn) //266 - frame_check_cfg
#define CFG_B1_NEW_TCH_CNT_FRAME_DROP_EN    (fwCfgp->b1_newTchCntFrameDropEn)   //266 - frame_check_cfg
#define CFG_B1_MS_DROP_NOISY_CHK_EN         (fwCfgp->b1_msDropNoisyChkEn)   //266 - frame_check_cfg
#define CFG_U8_MS_DROP_NOISY_FRAME_FCAL_DBNC    (fwCfgp->u8_msDropNoisyFrameFcalDbnc)   //268 - ms_drop_noisy_frame_fcal_dbnc
#define CFG_U16_MS_DIFF_VALID_POS_THRES_WTR (fwCfgp->u16_msDiffValidPosThresWtr)    //269 - ms_diff_valid_pos_thres_wtr
#define CFG_U16_NEW_TCH_CNT_FRAME_DROP_MS_NEG_DET_TRHES (fwCfgp->u16_newTchCntFrameDropMsNegDetTrhes)   //26B - tch_cnt_frame_drop_ms_neg_det_trhes
#define CFG_U16_NEW_TCH_CNT_FRAME_DROP_MS_NEG_SUM_TRHES (fwCfgp->u16_newTchCntFrameDropMsNegSumTrhes)   //26D - tch_cnt_frame_drop_ms_neg_sum_trhes
#define CFG_U16_MS_DIFF_VALID_POS_THRES_QTO_NOISY   (fwCfgp->u16_msDiffValidPosThresQtoNoisy)   //26F - ms_diff_valid_pos_thres_qto_noisy
#define CFG_U16_MS_DIFF_VALID_POS_THRES_QTO (fwCfgp->u16_msDiffValidPosThresQto)    //271 - ms_diff_valid_pos_thres_qto
#define CFG_U16_MS_DIFF_VALID_POS_THRES     (fwCfgp->u16_msDiffValidPosThres)   //273 - ms_diff_valid_pos_thres
#define CFG_U16_MS_DIFF_VALID_POS_THRES_NLVL1   (fwCfgp->u16_msDiffValidPosThresNlvl1)  //275 - ms_diff_valid_pos_thres_nlvl1
#define CFG_U16_MS_DIFF_VALID_POS_THRES_NLVL2   (fwCfgp->u16_msDiffValidPosThresNlvl2)  //277 - ms_diff_valid_pos_thres_nlvl2
#define CFG_U16_MS_DIFF_FATAL_ERR_STR_THRES (fwCfgp->u16_msDiffFatalErrStrThres)    //279 - ms_diff_fatal_err_str_thres
#define CFG_U8_MS_DIFF_FATAL_ERR_NODE_NUM_THRES (fwCfgp->u8_msDiffFatalErrNodeNumThres) //27B - ms_diff_fatal_err_node_num_thres
#define CFG_U16_DYNAMIC_ISLAND_MIN_THRES_LP (fwCfgp->u16_dynamicIslandMinThresLp)   //27C - dynamic_island_min_thres_lp
#define CFG_U16_DYNAMIC_ISLAND_MAX_THRES_LP (fwCfgp->u16_dynamicIslandMaxThresLp)   //27E - dynamic_island_max_thres_lp
#define CFG_B1_GRV_CONFLICT_CHK_EN          (fwCfgp->b1_grvConflictChkEn)   //280 - tch_islnd_process_cfg
#define CFG_B1_NORM_PEAK_EN                 (fwCfgp->b1_normPeakEn)     //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_CHK_EN                   (fwCfgp->b1_grvChkEn)       //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_MRG_CHK_EN               (fwCfgp->b1_grvMrgChkEn)    //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_MERGE_AXIS_INC_X_EN      (fwCfgp->b1_grvMergeAxisIncXEn) //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_MERGE_AXIS_INC_Y_EN      (fwCfgp->b1_grvMergeAxisIncYEn) //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_SPEED_LIMIT_EN           (fwCfgp->b1_grvSpeedLimitEn)    //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_FGR_MAX_AREA_CHK_EN      (fwCfgp->b1_grvFgrMaxAreaChkEn) //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_TRK_EN                   (fwCfgp->b1_grvTrkEn)       //280 - tch_islnd_process_cfg
#define CFG_B1_GRV_WTR_TAIL_CUT_EN          (fwCfgp->b1_grvWtrTailCutEn)    //280 - tch_islnd_process_cfg
#define CFG_B1_ISLAND_SHRINK_EN             (fwCfgp->b1_islandShrinkEn) //280 - tch_islnd_process_cfg
#define CFG_B1_LP_AXIS_GRV_CHK_EN           (fwCfgp->b1_lpAxisGrvChkEn) //280 - tch_islnd_process_cfg
#define CFG_B1_LP_GRV_CHK_EN                (fwCfgp->b1_lpGrvChkEn)     //280 - tch_islnd_process_cfg
#define CFG_B1_DYNAMIC_ISLAND_THRE_EN       (fwCfgp->b1_dynamicIslandThreEn)    //280 - tch_islnd_process_cfg
#define CFG_B1_AXIS_GRV_CHK_EN              (fwCfgp->b1_axisGrvChkEn)   //280 - tch_islnd_process_cfg
#define CFG_U16_SPATIAL_PEAK_THRES          (fwCfgp->u16_spatialPeakThres)  //282 - spatial_peak_thres
#define CFG_U8_NORM_THRES_PERCENT           (fwCfgp->u8_normThresPercent)   //284 - norm_thres_percent
#define CFG_U8_GRV_NORM_PERCENT             (fwCfgp->u8_grvNormPercent) //285 - grv_norm_percent
#define CFG_U16_GRV_TOL_HORI_VERT           (fwCfgp->u16_grvTolHoriVert)    //286 - grv_tol_hori_vert
#define CFG_U16_GRV_TOL_DIAG                (fwCfgp->u16_grvTolDiag)    //288 - grv_tol_diag
#define CFG_U16_GRV_MIN_TCH_SEP_DIST        (fwCfgp->u16_grvMinTchSepDist)  //28A - grv_min_tch_sep_dist
#define CFG_U8_GRV_MIN_AREA                 (fwCfgp->u8_grvMinArea)     //28C - grv_min_area
#define CFG_U8_GRV_AXIS_INC_PERCENT         (fwCfgp->u8_grvAxisIncPercent)  //28D - grv_axis_inc_percent
#define CFG_U16_GRV_SPEED_LIMIT             (fwCfgp->u16_grvSpeedLimit) //28E - grv_speed_limit
#define CFG_U16_GRV_NOISY_SPEED_LIMIT       (fwCfgp->u16_grvNoisySpeedLimit)    //290 - grv_noisy_speed_limit
#define CFG_U8_GRV_WTR_TAIL_CUT_MIN_STR_RATE    (fwCfgp->u8_grvWtrTailCutMinStrRate)    //292 - grv_wtr_tail_cut_min_str_rate
#define CFG_U8_WTR_GRV_NORM_PERCENT         (fwCfgp->u8_wtrGrvNormPercent)  //293 - wtr_grv_norm_percent
#define CFG_U16_WTR_GRV_TOL_HORI_VERT       (fwCfgp->u16_wtrGrvTolHoriVert) //294 - wtr_grv_tol_hori_vert
#define CFG_U16_WTR_GRV_TOL_DIAG            (fwCfgp->u16_wtrGrvTolDiag) //296 - wtr_grv_tol_diag
#define CFG_U16_TCH_DET_FRM_GRV_TOL_HORI_VERT   (fwCfgp->u16_tchDetFrmGrvTolHoriVert)   //298 - tch_frm_grv_tol_hori_vert
#define CFG_U16_TCH_DET_FRM_GRV_TOL_DIAG    (fwCfgp->u16_tchDetFrmGrvTolDiag)   //29A - tch_frm_grv_tol_diag
#define CFG_U8_GRV_TCH_DET_FRM_CNT          (fwCfgp->u8_grvTchDetFrmCnt)    //29C - grv_tch_frm_cnt
#define CFG_U16_DYNAMIC_ISLAND_MAX_STR_THRES    (fwCfgp->u16_dynamicIslandMaxStrThres)  //29D - dynamic_island_max_str_thres
#define CFG_U16_DYNAMIC_ISLAND_MAX_THRES    (fwCfgp->u16_dynamicIslandMaxThres) //29F - dynamic_island_max_thres
#define CFG_U8_DYNAMIC_ISLAND_MIN_THRES     (fwCfgp->u8_dynamicIslandMinThres)  //2A1 - dynamic_island_min_thres
#define CFG_U16_DYNAMIC_SUM_STR_MAX_THRES   (fwCfgp->u16_dynamicSumStrMaxThres) //2A2 - dynamic_sum_str_max_thres
#define CFG_U16_DYNAMIC_SUM_STR_MIN_THRES   (fwCfgp->u16_dynamicSumStrMinThres) //2A4 - dynamic_sum_str_min_thres
#define CFG_U16_FGR_ECCEN_GAME_MAX_THRES    (fwCfgp->u16_fgrEccenGameMaxThres)  //2A6 - fgr_eccen_game_max_thres
#define CFG_U16_FGR_ECCEN_GAME_MIN_THRES    (fwCfgp->u16_fgrEccenGameMinThres)  //2A8 - fgr_eccen_game_min_thres
#define CFG_B1_MS_PALM_DET_EN               (fwCfgp->b1_msPalmDetEn)    //2AA - palm_det_cfg
#define CFG_U16_PALM_MT_DET_THRES           (fwCfgp->u16_palmMtDetThres)    //2AC - palm_mt_det_thres
#define CFG_U8_PALM_MAX_FORCE_LEN           (fwCfgp->u8_palmMaxForceLen)    //2AE - palm_max_force_len
#define CFG_U8_PALM_MIN_SENSE_LEN           (fwCfgp->u8_palmMinSenseLen)    //2AF - palm_min_sense_len
#define CFG_U8_PALM_MIN_CONT_SENSE_AREA     (fwCfgp->u8_palmMinContSenseArea)   //2B0 - palm_min_cont_sense_area
#define CFG_U16_PALM_SS_DIFF_SLP_TOL        (fwCfgp->u16_palmSsDiffSlpTol)  //2B1 - palm_ss_diff_slp_tol
#define CFG_B4_PALM_DBNC_IN                 (fwCfgp->b4_palmDbncIn)     //2B3 - palm_det_dbnc
#define CFG_B4_PALM_DBNC_OUT                (fwCfgp->b4_palmDbncOut)    //2B3 - palm_det_dbnc
#define CFG_U16_LP_EDGE_FGR_THRES_HYST      (fwCfgp->u16_lpEdgeFgrThresHyst)    //2B4 - lp_edge_fgr_thres_hyst
#define CFG_U16_LP_FGR_THRES                (fwCfgp->u16_lpFgrThres)    //2B6 - lp_fgr_thres
#define CFG_U8_LP_FGR_THRES_HYST            (fwCfgp->u8_lpFgrThresHyst) //2B8 - lp_fgr_thres_hyst
#define CFG_U16_FGR_THRES                   (fwCfgp->u16_fgrThres)      //2B9 - fgr_thres
#define CFG_U8_FGR_THRES_HYST               (fwCfgp->u8_fgrThresHyst)   //2BB - fgr_thres_hyst
#define CFG_U8_NOISE_ADD_FGR_THRES          (fwCfgp->u8_noiseAddFgrThres)   //2BC - noise_add_fgr_thres
#define CFG_U16_FGR_THRES_NL2               (fwCfgp->u16_fgrThresNl2)   //2BD - fgr_thres_nl2
#define CFG_U8_FGR_MIN_AREA                 (fwCfgp->u8_fgrMinArea)     //2BF - fgr_min_area
#define CFG_U8_FGR_MAX_AREA                 (fwCfgp->u8_fgrMaxArea)     //2C0 - fgr_max_area
#define CFG_U8_FGR_MAX_ISLAND_LEN           (fwCfgp->u8_fgrMaxIslandLen)    //2C1 - fgr_max_island_len
#define CFG_U8_NOISE_ADD_MIN_FGR_AREA       (fwCfgp->u8_noiseAddMinFgrArea) //2C2 - noise_add_min_fgr_area
#define CFG_U8_NOISE_ADD_MIN_FGR_AREA_CORNER    (fwCfgp->u8_noiseAddMinFgrAreaCorner)   //2C3 - noise_add_min_fgr_area_corner
#define CFG_U16_FGR_ECCEN_THRES             (fwCfgp->u16_fgrEccenThres) //2C4 - fgr_eccen_thres
#define CFG_U16_FGR_ECCEN_NOISE_THRES       (fwCfgp->u16_fgrEccenNoiseThres)    //2C6 - fgr_eccen_noise_thres
#define CFG_U8_FGR_SEP_MAX_AREA             (fwCfgp->u8_fgrSepMaxArea)  //2C8 - fgr_sep_max_area
#define CFG_U16_FGR_PEAK_ISLAND_THRES       (fwCfgp->u16_fgrPeakIslandThres)    //2C9 - fgr_peak_island_thres
#define CFG_U16_FGR_PEAK_EDGE_ISLAND_THRES  (fwCfgp->u16_fgrPeakEdgeIslandThres)    //2CB - fgr_peak_edge_island_thres
#define CFG_U16_GLV_PEAK_ISLAND_THRES       (fwCfgp->u16_glvPeakIslandThres)    //2CD - glv_peak_island_thres
#define CFG_U16_LP_EDGE_FGR_THRES           (fwCfgp->u16_lpEdgeFgrThres)    //2CF - lp_edge_fgr_thres
#define CFG_B1_STY_EN                       (fwCfgp->b1_styEn)          //2D2 - sty_cfg
#define CFG_B1_STY_RMF_COOR_EN              (fwCfgp->b1_styRmfCoorEn)   //2D2 - sty_cfg
#define CFG_B1_STY_RMF_GAUSSIAN_EN          (fwCfgp->b1_styRmfGaussianEn)   //2D2 - sty_cfg
#define CFG_B1_STY_DSBL_GAUSSIAN_EDGE       (fwCfgp->b1_styDsblGaussianEdge)    //2D2 - sty_cfg
#define CFG_U16_STY_THRES                   (fwCfgp->u16_styThres)      //2D4 - sty_thres
#define CFG_U8_STY_THRES_HYST               (fwCfgp->u8_styThresHyst)   //2D6 - sty_thres_hyst
#define CFG_U8_NOISE_ADD_STY_THRES          (fwCfgp->u8_noiseAddStyThres)   //2D7 - noise_add_sty_thres
#define CFG_U16_STY_MAX_SUM_STR             (fwCfgp->u16_styMaxSumStr)  //2D8 - sty_max_sum_str
#define CFG_U8_STY_MAX_TCH_AREA_NL1         (fwCfgp->u8_styMaxTchAreaNl1)   //2DA - sty_max_tch_area_nl1
#define CFG_U8_STY_MIN_AREA                 (fwCfgp->u8_styMinArea)     //2DB - sty_min_area
#define CFG_U8_NOISE_ADD_MIN_STY_AREA       (fwCfgp->u8_noiseAddMinStyArea) //2DC - noise_add_min_sty_area
#define CFG_U8_STY_MAX_AREA                 (fwCfgp->u8_styMaxArea)     //2DD - sty_max_area
#define CFG_U8_STY_MAX_EDGE_AREA            (fwCfgp->u8_styMaxEdgeArea) //2DE - sty_max_edge_area
#define CFG_B4_RMF_CEN_MIN_STR_WGH          (fwCfgp->b4_rmfCenMinStrWgh)    //2DF - rmf_cen_wgh
#define CFG_B4_RMF_CEN_MAX_STR_WGH          (fwCfgp->b4_rmfCenMaxStrWgh)    //2DF - rmf_cen_wgh
#define CFG_U16_RMF_CEN_MIN_STR             (fwCfgp->u16_rmfCenMinStr)  //2E0 - rmf_cen_min_str
#define CFG_U16_RMF_CEN_MAX_STR             (fwCfgp->u16_rmfCenMaxStr)  //2E2 - rmf_cen_max_str
#define CFG_U16_MT_AXIS_MRG_MAX_DIST_GAME_THRES (fwCfgp->u16_mtAxisMrgMaxDistGameThres) //2E4 - mt_axis_mrg_max_dist_game_thres
#define CFG_B1_GLV_EN                       (fwCfgp->b1_glvEn)          //2E6 - glove_cfg
#define CFG_B1_GLV_TCH_AREA_CHK_EN          (fwCfgp->b1_glvTchAreaChkEn)    //2E6 - glove_cfg
#define CFG_B1_GLV_TCH_SEP_EN               (fwCfgp->b1_glvTchSepEn)    //2E6 - glove_cfg
#define CFG_U16_GLV_THRES                   (fwCfgp->u16_glvThres)      //2E8 - glv_thres
#define CFG_U8_GLV_THRES_HYST               (fwCfgp->u8_glvThresHyst)   //2EA - glv_thres_hyst
#define CFG_U8_NOISE_ADD_GLV_THRES          (fwCfgp->u8_noiseAddGlvThres)   //2EB - noise_add_glv_thres
#define CFG_U8_GLV_MIN_AREA_GLV_MODE        (fwCfgp->u8_glvMinAreaGlvMode)  //2EC - glv_min_area_glv_mode
#define CFG_U8_GLV_MIN_AREA_TCH_MODE        (fwCfgp->u8_glvMinAreaTchMode)  //2ED - glv_min_area_tch_mode
#define CFG_U8_GLV_EDGE_MIN_AREA_GLV_MODE   (fwCfgp->u8_glvEdgeMinAreaGlvMode)  //2EE - glv_edge_min_area_glv_mode
#define CFG_U8_GLV_EDGE_MIN_AREA_TCH_MODE   (fwCfgp->u8_glvEdgeMinAreaTchMode)  //2EF - glv_edge_min_area_tch_mode
#define CFG_U8_NOISE_ADD_MIN_GLV_AREA       (fwCfgp->u8_noiseAddMinGlvArea) //2F0 - noise_add_min_glv_area
#define CFG_B4_GLV_IN_DLY_TCH_MODE          (fwCfgp->b4_glvInDlyTchMode)    //2F1 - glv_tch_in_out_dly
#define CFG_B4_GLV_TCH_OUT_ADD_DLY          (fwCfgp->b4_glvTchOutAddDly)    //2F1 - glv_tch_in_out_dly
#define CFG_B4_GLV_IN_DLY_GLV_MODE          (fwCfgp->b4_glvInDlyGlvMode)    //2F2 - glv_in_dly_glv_mode
#define CFG_B4_GLV_IN_DLY_GLV_MODE_2        (fwCfgp->b4_glvInDlyGlvMode2)   //2F2 - glv_in_dly_glv_mode
#define CFG_B4_GLV_IN_DLY_GLV_MODE_NOISY    (fwCfgp->b4_glvInDlyGlvModeNoisy)   //2F3 - glv_in_dly_glv_mode_noisy
#define CFG_B4_GLV_IN_DLY_GLV_MODE_NOISY_2  (fwCfgp->b4_glvInDlyGlvModeNoisy2)  //2F3 - glv_in_dly_glv_mode_noisy
#define CFG_U16_GLV_TCH_GROUP_PEAK_THRES    (fwCfgp->u16_glvTchGroupPeakThres)  //2F4 - glv_tch_group_peak_thres
#define CFG_U8_GLV_TCH_GROUP_PEAK_THRES_HYST    (fwCfgp->u8_glvTchGroupPeakThresHyst)   //2F6 - glv_tch_group_peak_thres_hyst
#define CFG_U8_GLV_TCH_AREA_CNT             (fwCfgp->u8_glvTchAreaCnt)  //2F7 - glv_tch_area_cnt
#define CFG_U16_GLV_TCH_MAX_PEAK_THRES      (fwCfgp->u16_glvTchMaxPeakThres)    //2F8 - glv_tch_max_peak_thres
#define CFG_U8_GLV_MODE_FGR_THRES_HYST      (fwCfgp->u8_glvModeFgrThresHyst)    //2FA - glv_mode_fgr_thres_hyst
#define CFG_U16_GLV_TCH_AREA_THRES          (fwCfgp->u16_glvTchAreaThres)   //2FB - glv_tch_area_thres
#define CFG_U8_GLV_MAX_TCH_AREA             (fwCfgp->u8_glvMaxTchArea)  //2FD - glv_max_tch_area
#define CFG_U8_FGR_TO_GLV_DBNCE_CNT         (fwCfgp->u8_fgrToGlvDbnceCnt)   //2FE - fgr_to_glv_dbnce_cnt
#define CFG_U8_GLV_CMM_VALID_CH_HI_THRES    (fwCfgp->u8_glvCmmValidChHiThres)   //2FF - glv_cmm_valid_ch_hi_thres
#define CFG_U8_GLV_CMM_VALID_CH_LOW_THRES   (fwCfgp->u8_glvCmmValidChLowThres)  //300 - glv_cmm_valid_ch_low_thres
#define CFG_U16_GLV_MODE_FGR_THRES          (fwCfgp->u16_glvModeFgrThres)   //301 - glv_mode_fgr_thres
#define CFG_U8_GLV_TCH_AREA_CNT_HYST        (fwCfgp->u8_glvTchAreaCntHyst)  //303 - glv_tch_area_cnt_hyst
#define CFG_U16_GLV_MS_AVG_CMM_THRES        (fwCfgp->u16_glvMsAvgCmmThres)  //304 - glv_ms_avg_cmm_thres
#define CFG_U16_GLV_MODE_BLK_STR_THRES      (fwCfgp->u16_glvModeBlkStrThres)    //306 - glv_mode_blk_str_thres
#define CFG_U8_GLV_MODE_BLK_TIME_MS         (fwCfgp->u8_glvModeBlkTimeMs)   //308 - glv_mode_blk_time_ms
#define CFG_U16_GLV_DIS_SELF_FORCE_BASELINE_P2P (fwCfgp->u16_glvDisSelfForceBaselineP2p)    //309 - glv_dis_self_force_baseline_p2p
#define CFG_U8_COOR_IIR_TOL_THRES           (fwCfgp->u8_coorIirTolThres)    //30B - coor_iir_tol
#define CFG_B1_TCH_MRG_CHK_EN               (fwCfgp->b1_tchMrgChkEn)    //30C - tch_post_process_cfg
#define CFG_B1_LVC_EN                       (fwCfgp->b1_lvcEn)          //30C - tch_post_process_cfg
#define CFG_B1_TCH_BTW_FLTR_EN              (fwCfgp->b1_tchBtwFltrEn)   //30C - tch_post_process_cfg
#define CFG_B1_TCH_KMFLTR_EN                (fwCfgp->b1_tchKmfltrEn)    //30C - tch_post_process_cfg
#define CFG_B1_TCH_COOR_IIR_EN              (fwCfgp->b1_tchCoorIirEn)   //30C - tch_post_process_cfg
#define CFG_B1_TCH_MTOL_EN                  (fwCfgp->b1_tchMtolEn)      //30C - tch_post_process_cfg
#define CFG_B1_TCH_MTOL_ALWYS_RPT_EN        (fwCfgp->b1_tchMtolAlwysRptEn)  //30C - tch_post_process_cfg
#define CFG_B1_TCH_FAST_SWIPE_COOR_EN       (fwCfgp->b1_tchFastSwipeCoorEn) //30C - tch_post_process_cfg
#define CFG_B1_TCH_FAST_SWIPE_IIR_EN        (fwCfgp->b1_tchFastSwipeIirEn)  //30C - tch_post_process_cfg
#define CFG_B1_NOISE_BLK_WEAK_TCH_EN        (fwCfgp->b1_noiseBlkWeakTchEn)  //30C - tch_post_process_cfg
#define CFG_B1_TCH_MTOL_REF_UPDATE_EN       (fwCfgp->b1_tchMtolRefUpdateEn) //30C - tch_post_process_cfg
#define CFG_B1_TCH_IN_COOR_RPT_EN           (fwCfgp->b1_tchInCoorRptEn) //30C - tch_post_process_cfg
#define CFG_B1_TRK_FAST_SWIPE_EN            (fwCfgp->b1_trkFastSwipeEn) //30C - tch_post_process_cfg
#define CFG_B1_TCH_CURVE_FIT_EN             (fwCfgp->b1_tchCurveFitEn)  //30C - tch_post_process_cfg
#define CFG_B1_CURVE_ESTIMATE_FOR_TRACK_EN  (fwCfgp->b1_curveEstimateForTrackEn)    //30C - tch_post_process_cfg
#define CFG_U16_MIN_TRK_RAD                 (fwCfgp->u16_minTrkRad)     //30E - min_trk_rad
#define CFG_U16_MIN_TRK_RAD_AFTR_FRM_DROP   (fwCfgp->u16_minTrkRadAftrFrmDrop)  //310 - min_trk_rad_aftr_frm_drop
#define CFG_U16_NOISE_MIN_TRK_RAD           (fwCfgp->u16_noiseMinTrkRad)    //312 - noise_min_trk_rad
#define CFG_U16_NOISE_ADD_MIN_TRK_RAD       (fwCfgp->u16_noiseAddMinTrkRad) //314 - noise_add_min_trk_rad
#define CFG_U16_NOISE_TRK_SPEED_THRES       (fwCfgp->u16_noiseTrkSpeedThres)    //316 - noise_trk_speed_thres
#define CFG_U8_TRK_RAD_MUL                  (fwCfgp->u8_trkRadMul)      //318 - trk_rad_mul
#define CFG_U16_MIN_TRK_RAD_AFTR_TOUCH_ON   (fwCfgp->u16_minTrkRadAftrTouchOn)  //319 - min_trk_rad_aftr_touch_on
#define CFG_U8_TRK_PREDICT_FAST_TCH_SPEED   (fwCfgp->u8_trkPredictFastTchSpeed) //31B - trk_predict_fast_tch_speed
#define CFG_U8_TRK_RAD_FAST_SWIPE_MUL_12    (fwCfgp->u8_trkRadFastSwipeMul12)   //31C - trk_rad_fast_swipe_mul_12
#define CFG_U8_TRK_RAD_FAST_SWIPE_MUL_23    (fwCfgp->u8_trkRadFastSwipeMul23)   //31D - trk_rad_fast_swipe_mul_23
#define CFG_U8_TRK_FAST_SWIPE_SPEED         (fwCfgp->u8_trkFastSwipeSpeed)  //31E - trk_fast_swipe_speed
#define CFG_U8_TRK_RAD_MUL_FAST_SWIPE       (fwCfgp->u8_trkRadMulFastSwipe) //31F - trk_rad_mul_fast_swipe
#define CFG_U8_TRK_FAST_SWIPE_DBNC_OUT      (fwCfgp->u8_trkFastSwipeDbncOut)    //320 - trk_fast_swipe_dbnc_out
#define CFG_U16_TCH_FAST_SWIPE_MIN_DIST     (fwCfgp->u16_tchFastSwipeMinDist)   //321 - tch_fast_swipe_min_dist
#define CFG_U16_TCH_FAST_SWIPE_MIN_DIST_NOISY   (fwCfgp->u16_tchFastSwipeMinDistNoisy)  //323 - tch_fast_swipe_min_dist_noisy
#define CFG_U16_TCH_FAST_SWIPE_SPEED        (fwCfgp->u16_tchFastSwipeSpeed) //325 - tch_fast_swipe_speed
#define CFG_U16_TCH_FAST_SWIPE_SPEED_NOISY  (fwCfgp->u16_tchFastSwipeSpeedNoisy)    //327 - tch_fast_swipe_noisy_speed
#define CFG_U8_TCH_OUT_MRG_CHK_DBNC         (fwCfgp->u8_tchOutMrgChkDbnc)   //329 - tch_out_mrg_chk_dbnc
#define CFG_U16_TCH_MRG_DIST                (fwCfgp->u16_tchMrgDist)    //32A - tch_mrg_dist
#define CFG_U16_TCH_MRG_DIST_HYST           (fwCfgp->u16_tchMrgDistHyst)    //32C - tch_mrg_dist_hyst
#define CFG_U16_TCH_DET_FRM_CNT_MRG_DIST    (fwCfgp->u16_tchDetFrmCntMrgDist)   //32E - tch_det_frm_cnt_mrg_dist
#define CFG_U8_TCH_MRG_DIST_DET_FRM_CNT     (fwCfgp->u8_tchMrgDistDetFrmCnt)    //330 - tch_mrg_dist_det_frm_cnt
#define CFG_B5_TCH_CURFIT_OTP_SPL_IDX       (fwCfgp->b5_tchCurfitOtpSplIdx) //331 - tch_curfit_otp_spl_idx
#define CFG_B1_TCH_CURFIT_OTP_HALF_SPL      (fwCfgp->b1_tchCurfitOtpHalfSpl)    //331 - tch_curfit_otp_spl_idx
#define CFG_B5_TCH_CURFIT_OTP_SPL_IDX_NOISY (fwCfgp->b5_tchCurfitOtpSplIdxNoisy)    //332 - tch_curfit_otp_spl_idx_noisy
#define CFG_B4_TCH_IN_DLY                   (fwCfgp->b4_tchInDly)       //333 - tch_in_dly
#define CFG_B4_TCH_IN_DLY_2                 (fwCfgp->b4_tchInDly2)      //333 - tch_in_dly
#define CFG_B4_TCH_IN_DLY_NOISY             (fwCfgp->b4_tchInDlyNoisy)  //334 - tch_in_dly_noisy
#define CFG_B4_TCH_IN_DLY_2_NOISY           (fwCfgp->b4_tchInDly2Noisy) //334 - tch_in_dly_noisy
#define CFG_B4_TCH_IN_ADD_DLY_LNG_SHAPE     (fwCfgp->b4_tchInAddDlyLngShape)    //335 - tch_in_add_dly_lng_shape
#define CFG_B4_TCH_IN_DLY_3                 (fwCfgp->b4_tchInDly3)      //335 - tch_in_add_dly_lng_shape
#define CFG_B4_TCH_IN_ADD_DLY_EDGE          (fwCfgp->b4_tchInAddDlyEdge)    //336 - tch_in_add_dly_edge
#define CFG_B4_HIDDEN_TCH_IN_DLY            (fwCfgp->b4_hiddenTchInDly) //337 - hidden_tch_in_dly
#define CFG_B4_TCH_OUT_DLY                  (fwCfgp->b4_tchOutDly)      //338 - tch_out_dly
#define CFG_B4_TCH_OUT_DLY_NOISY            (fwCfgp->b4_tchOutDlyNoisy) //338 - tch_out_dly
#define CFG_B4_TCH_OUT_DLY_LNG_TAP_CNT      (fwCfgp->b4_tchOutDlyLngTapCnt) //339 - tch_out_dly_lng_tap
#define CFG_B4_TCH_OUT_ADD_DLY_LNG_TAP      (fwCfgp->b4_tchOutAddDlyLngTap) //339 - tch_out_dly_lng_tap
#define CFG_B4_HIDDEN_TCH_OUT_DLY           (fwCfgp->b4_hiddenTchOutDly)    //33A - hidden_tch_out_dly
#define CFG_B4_LVC_VEL_IIR_WGH              (fwCfgp->b4_lvcVelIirWgh)   //33B - lvc_vel_iir_wgh
#define CFG_U16_LVC_MAX_CALC_RPT_TIME       (fwCfgp->u16_lvcMaxCalcRptTime) //33C - lvc_max_calc_rpt_time
#define CFG_U8_LVC_VEL_SCALE_PER            (fwCfgp->u8_lvcVelScalePer) //33E - lvc_vel_scale_per
#define CFG_B4_BTW_CUTOFF_IDX_STEP          (fwCfgp->b4_btwCutoffIdxStep)   //33F - btw_cfg
#define CFG_B4_BTW_START_IDX                (fwCfgp->b4_btwStartIdx)    //33F - btw_cfg
#define CFG_B4_GLV_BTW_CUTOFF_IDX           (fwCfgp->b4_glvBtwCutoffIdx)    //340 - btw_cutoff_idx
#define CFG_B4_MRG_TCH_BTW_CUTOFF_IDX       (fwCfgp->b4_mrgTchBtwCutoffIdx) //340 - btw_cutoff_idx
#define CFG_U16_BTW_SPEED_THRES_HI          (fwCfgp->u16_btwSpeedThresHi)   //341 - btw_speed_thres_hi
#define CFG_U16_BTW_SPEED_THRES_LO          (fwCfgp->u16_btwSpeedThresLo)   //343 - btw_speed_thres_lo
#define CFG_U8_BTW_MIN_CUTOFF_IDX           (fwCfgp->u8_btwMinCutoffIdx)    //345 - btw_min_cutoff_idx
#define CFG_U8_BTW_MAX_CUTOFF_IDX           (fwCfgp->u8_btwMaxCutoffIdx)    //346 - btw_max_cutoff_idx
#define CFG_U8_BTW_MULTI_TCH_MAX_CUTOFF_IDX (fwCfgp->u8_btwMultiTchMaxCutoffIdx)    //347 - btw_multi_tch_max_cutoff_idx
#define CFG_U8_BTW_MAX_CUTOFF_IDX_NOISE     (fwCfgp->u8_btwMaxCutoffIdxNoise)   //348 - btw_max_cutoff_idx_noise
#define CFG_U32_KM_EZ_SQ_SCALED             (fwCfgp->u32_kmEzSqScaled)  //349 - km_ez_sq_scaled
#define CFG_U16_KM_EX_SQ                    (fwCfgp->u16_kmExSq)        //34D - km_ex_sq
#define CFG_U8_KM_ACC_FLTR_W0               (fwCfgp->u8_kmAccFltrW0)    //34F - km_acc_fltr_w0
#define CFG_U8_TCH_MTOL_FTAP_CNT            (fwCfgp->u8_tchMtolFtapCnt) //350 - tch_mtol_ftap_cnt
#define CFG_U8_TCH_MTOL_FTAP_XY_TOL2        (fwCfgp->u8_tchMtolFtapXyTol2)  //351 - tch_mtol_ftap_xy_tol2
#define CFG_U8_TCH_MTOL_FTAP_CNT_NOISE      (fwCfgp->u8_tchMtolFtapCntNoise)    //352 - tch_mtol_ftap_cnt_noise
#define CFG_U8_TCH_MTOL_FTAP_XY_TOL2_NOISE  (fwCfgp->u8_tchMtolFtapXyTol2Noise) //353 - tch_mtol_ftap_xy_tol2_noise
#define CFG_U8_TCH_MTOL_XY_TOL1             (fwCfgp->u8_tchMtolXyTol1)  //354 - tch_mtol_xy_tol1
#define CFG_U8_TCH_MTOL_XY_TOL2             (fwCfgp->u8_tchMtolXyTol2)  //355 - tch_mtol_xy_tol2
#define CFG_B4_TCH_MTOL_MIN_WGH             (fwCfgp->b4_tchMtolMinWgh)  //356 - tch_mtol_wgh
#define CFG_B4_TCH_MTOL_MAX_WGH             (fwCfgp->b4_tchMtolMaxWgh)  //356 - tch_mtol_wgh
#define CFG_U8_TCH_MTOL_XY_TOL1_NOISE       (fwCfgp->u8_tchMtolXyTol1Noise) //357 - tch_mtol_xy_tol1_noise
#define CFG_U8_TCH_MTOL_XY_TOL2_NOISE       (fwCfgp->u8_tchMtolXyTol2Noise) //358 - tch_mtol_xy_tol2_noise
#define CFG_B4_TCH_MTOL_MIN_WGH_NOISE       (fwCfgp->b4_tchMtolMinWghNoise) //359 - tch_mtol_wgh_noise
#define CFG_B4_TCH_MTOL_MAX_WGH_NOISE       (fwCfgp->b4_tchMtolMaxWghNoise) //359 - tch_mtol_wgh_noise
#define CFG_U8_MRG_TCH_MTOL_XY_TOL1         (fwCfgp->u8_mrgTchMtolXyTol1)   //35A - mrg_tch_mtol_xy_tol1
#define CFG_U8_MRG_TCH_MTOL_XY_TOL2         (fwCfgp->u8_mrgTchMtolXyTol2)   //35B - mrg_tch_mtol_xy_tol2
#define CFG_B4_MRG_TCH_MTOL_MIN_WGH         (fwCfgp->b4_mrgTchMtolMinWgh)   //35C - mrg_tch_mtol_wgh
#define CFG_B4_MRG_TCH_MTOL_MAX_WGH         (fwCfgp->b4_mrgTchMtolMaxWgh)   //35C - mrg_tch_mtol_wgh
#define CFG_U8_MRG_TCH_MTOL_XY_TOL1_NOISE   (fwCfgp->u8_mrgTchMtolXyTol1Noise)  //35D - mrg_tch_mtol_xy_tol1_noise
#define CFG_U8_MRG_TCH_MTOL_XY_TOL2_NOISE   (fwCfgp->u8_mrgTchMtolXyTol2Noise)  //35E - mrg_tch_mtol_xy_tol2_noise
#define CFG_B4_MRG_TCH_MTOL_MIN_WGH_NOISE   (fwCfgp->b4_mrgTchMtolMinWghNoise)  //35F - mrg_tch_mtol_wgh_noise
#define CFG_B4_MRG_TCH_MTOL_MAX_WGH_NOISE   (fwCfgp->b4_mrgTchMtolMaxWghNoise)  //35F - mrg_tch_mtol_wgh_noise
#define CFG_U8_TCH_MTOL_REF_UPDATE_CNT      (fwCfgp->u8_tchMtolRefUpdateCnt)    //360 - tch_mtol_ref_update_cnt
#define CFG_U8_TCH_MTOL_REF_UPDATE_CNT_NOISE    (fwCfgp->u8_tchMtolRefUpdateCntNoise)   //361 - tch_mtol_ref_update_cnt_noise
#define CFG_B4_MIN_GLV_XY_WGH_EDGE          (fwCfgp->b4_minGlvXyWghEdge)    //362 - glv_xy_wgh_edge
#define CFG_B4_MAX_GLV_XY_WGH_EDGE          (fwCfgp->b4_maxGlvXyWghEdge)    //362 - glv_xy_wgh_edge
#define CFG_B4_MIN_TCH_XY_WGH_EDGE          (fwCfgp->b4_minTchXyWghEdge)    //363 - tch_xy_wgh_edge
#define CFG_B4_MAX_TCH_XY_WGH_EDGE          (fwCfgp->b4_maxTchXyWghEdge)    //363 - tch_xy_wgh_edge
#define CFG_B4_MIN_TCH_XY_WGH_NOISY_EDGE    (fwCfgp->b4_minTchXyWghNoisyEdge)   //364 - tch_xy_wgh_noisy_edge
#define CFG_B4_MAX_TCH_XY_WGH_NOISY_EDGE    (fwCfgp->b4_maxTchXyWghNoisyEdge)   //364 - tch_xy_wgh_noisy_edge
#define CFG_B4_MIN_TCH_XY_WGH_NOISY         (fwCfgp->b4_minTchXyWghNoisy)   //365 - tch_xy_wgh_noisy
#define CFG_B4_MAX_TCH_XY_WGH_NOISY         (fwCfgp->b4_maxTchXyWghNoisy)   //365 - tch_xy_wgh_noisy
#define CFG_B4_MIN_TCH_XY_WGH_NOISY_MULTIF  (fwCfgp->b4_minTchXyWghNoisyMultif) //366 - tch_xy_wgh_noisy_multif
#define CFG_B4_MAX_TCH_XY_WGH_NOISY_MULTIF  (fwCfgp->b4_maxTchXyWghNoisyMultif) //366 - tch_xy_wgh_noisy_multif
#define CFG_U16_MIN_TCH_XY_SPEED_NOISY      (fwCfgp->u16_minTchXySpeedNoisy)    //367 - min_tch_xy_speed_noisy
#define CFG_U16_MAX_TCH_XY_SPEED_NOISY      (fwCfgp->u16_maxTchXySpeedNoisy)    //369 - max_tch_xy_speed_noisy
#define CFG_B4_MIN_WTR_XY_WGH               (fwCfgp->b4_minWtrXyWgh)    //36B - wtr_xy_wgh
#define CFG_B4_MAX_WTR_XY_WGH               (fwCfgp->b4_maxWtrXyWgh)    //36B - wtr_xy_wgh
#define CFG_B4_MIN_WTR_XY_WGH_MULTIF        (fwCfgp->b4_minWtrXyWghMultif)  //36C - wtr_xy_wgh_multif
#define CFG_B4_MAX_WTR_XY_WGH_MULTIF        (fwCfgp->b4_maxWtrXyWghMultif)  //36C - wtr_xy_wgh_multif
#define CFG_U16_MIN_WTR_XY_SPEED            (fwCfgp->u16_minWtrXySpeed) //36D - min_wtr_xy_speed
#define CFG_U16_MAX_WTR_XY_SPEED            (fwCfgp->u16_maxWtrXySpeed) //36F - max_wtr_xy_speed
#define CFG_B4_MIN_FLT_XY_WGH               (fwCfgp->b4_minFltXyWgh)    //371 - flt_xy_wgh
#define CFG_B4_MAX_FLT_XY_WGH               (fwCfgp->b4_maxFltXyWgh)    //371 - flt_xy_wgh
#define CFG_B4_MIN_FLT_XY_WGH_MULTIF        (fwCfgp->b4_minFltXyWghMultif)  //372 - flt_xy_wgh_multf
#define CFG_B4_MAX_FLT_XY_WGH_MULTIF        (fwCfgp->b4_maxFltXyWghMultif)  //372 - flt_xy_wgh_multf
#define CFG_U16_MIN_FLT_XY_SPEED            (fwCfgp->u16_minFltXySpeed) //373 - min_flt_xy_speed
#define CFG_U16_MAX_FLT_XY_SPEED            (fwCfgp->u16_maxFltXySpeed) //375 - max_flt_xy_speed
#define CFG_B4_MIN_FGR_XY_WGH               (fwCfgp->b4_minFgrXyWgh)    //377 - fgr_xy_wgh
#define CFG_B4_MAX_FGR_XY_WGH               (fwCfgp->b4_maxFgrXyWgh)    //377 - fgr_xy_wgh
#define CFG_B4_MIN_FGR_XY_WGH_MULTIF        (fwCfgp->b4_minFgrXyWghMultif)  //378 - fgr_xy_wgh_multif
#define CFG_B4_MAX_FGR_XY_WGH_MULTIF        (fwCfgp->b4_maxFgrXyWghMultif)  //378 - fgr_xy_wgh_multif
#define CFG_B4_MIN_STY_XY_WGH               (fwCfgp->b4_minStyXyWgh)    //379 - sty_xy_wgh
#define CFG_B4_MAX_STY_XY_WGH               (fwCfgp->b4_maxStyXyWgh)    //379 - sty_xy_wgh
#define CFG_B4_MIN_GLV_XY_WGH               (fwCfgp->b4_minGlvXyWgh)    //37A - glv_xy_wgh
#define CFG_B4_MAX_GLV_XY_WGH               (fwCfgp->b4_maxGlvXyWgh)    //37A - glv_xy_wgh
#define CFG_B4_TCH_Z_WGH                    (fwCfgp->b4_tchZWgh)        //37B - tch_wgh0
#define CFG_B4_TCH_XY_WGH_STEP              (fwCfgp->b4_tchXyWghStep)   //37B - tch_wgh0
#define CFG_B4_FAST_SWIPE_XY_WGH            (fwCfgp->b4_fastSwipeXyWgh) //37C - tch_wgh1
#define CFG_B4_FAST_SWIPE_XY_WGH_NOISY      (fwCfgp->b4_fastSwipeXyWghNoisy)    //37C - tch_wgh1
#define CFG_U16_MIN_TCH_XY_SPEED            (fwCfgp->u16_minTchXySpeed) //37D - min_tch_xy_speed
#define CFG_U16_MAX_TCH_XY_SPEED            (fwCfgp->u16_maxTchXySpeed) //37F - max_tch_xy_speed
#define CFG_U16_MIN_GLV_XY_SPEED            (fwCfgp->u16_minGlvXySpeed) //381 - min_glv_xy_speed
#define CFG_U16_MAX_GLV_XY_SPEED            (fwCfgp->u16_maxGlvXySpeed) //383 - max_glv_xy_speed
#define CFG_B1_FIRST_SLP_IIR_EN             (fwCfgp->b1_firstSlpIirEn)  //385 - tch_iir_en
#define CFG_B1_SPEED_IIR_EN                 (fwCfgp->b1_speedIirEn)     //385 - tch_iir_en
#define CFG_B4_FIRST_SLP_IIR_STEP           (fwCfgp->b4_firstSlpIirStep)    //386 - tch_iir_step
#define CFG_B4_PRE_SLP_IIR_WGH              (fwCfgp->b4_preSlpIirWgh)   //386 - tch_iir_step
#define CFG_U8_FIRST_SLP_LIMIT_SPEED        (fwCfgp->u8_firstSlpLimitSpeed) //387 - first_slp_limit_speed
#define CFG_B4_DEC_SPEED_IIR_WGH            (fwCfgp->b4_decSpeedIirWgh) //388 - speed_iir_wgh
#define CFG_B4_INC_SPEED_IIR_WGH            (fwCfgp->b4_incSpeedIirWgh) //388 - speed_iir_wgh
#define CFG_U8_NOISE_TCH_BLK_AVG_PERC       (fwCfgp->u8_noiseTchBlkAvgPerc) //389 - noise_tch_blk_avg_perc
#define CFG_U16_NOISE_TCH_BLK_MIN_PEAK_STR  (fwCfgp->u16_noiseTchBlkMinPeakStr) //38A - noise_tch_blk_min_peak_str
#define CFG_U8_TCH_IN_COOR_RPT_X_THRES      (fwCfgp->u8_tchInCoorRptXThres) //38C - tch_in_coor_rpt_x_thres
#define CFG_U8_TCH_IN_COOR_RPT_Y_THRES      (fwCfgp->u8_tchInCoorRptYThres) //38D - tch_in_coor_rpt_y_thres
#define CFG_U16_TCH_MRG_DIST_NOISY          (fwCfgp->u16_tchMrgDistNoisy)   //38E - tch_mrg_dist_noisy
#define CFG_U16_TCH_MRG_DIST_HYST_NOISY     (fwCfgp->u16_tchMrgDistHystNoisy)   //390 - tch_mrg_dist_hyst_noisy
#define CFG_U16_COOR_IIR_EDGE_X_TOP_WIDTH   (fwCfgp->u16_coorIirEdgeXTopWidth)  //392 - coor_iir_edge_x_top_width
#define CFG_U16_COOR_IIR_EDGE_X_BTM_WIDTH   (fwCfgp->u16_coorIirEdgeXBtmWidth)  //394 - coor_iir_edge_x_btm_width
#define CFG_U16_COOR_IIR_EDGE_Y_TOP_WIDTH   (fwCfgp->u16_coorIirEdgeYTopWidth)  //396 - coor_iir_edge_y_top_width
#define CFG_U16_COOR_IIR_EDGE_Y_BTM_WIDTH   (fwCfgp->u16_coorIirEdgeYBtmWidth)  //398 - coor_iir_edge_y_btm_width
#define CFG_B1_CHK_BNC_BACK_EN              (fwCfgp->b1_chkBncBackEn)   //39A - chk_bnc_back_en
#define CFG_B1_RPT_BORDER_LIMIT_EN          (fwCfgp->b1_rptBorderLimitEn)   //39A - chk_bnc_back_en
#define CFG_U16_BNC_BACK_ADD_SPEED          (fwCfgp->u16_bncBackAddSpeed)   //39B - bnc_back_add_speed
#define CFG_U8_TCH_TYPE_BORDER_LEFT         (fwCfgp->u8_tchTypeBorderLeft)  //39D - border_limit_area
#define CFG_U8_TCH_TYPE_BORDER_RIGHT        (fwCfgp->u8_tchTypeBorderRight) //39D - border_limit_area
#define CFG_U8_TCH_TYPE_BORDER_TOP          (fwCfgp->u8_tchTypeBorderTop)   //39D - border_limit_area
#define CFG_U8_TCH_TYPE_BORDER_BOTTOM       (fwCfgp->u8_tchTypeBorderBottom)    //39D - border_limit_area
#define CFG_B5_TCH_CURFIT_OPT_SPL_IDX_AXIS_MRG  (fwCfgp->b5_tchCurfitOptSplIdxAxisMrg)  //3A1 - mt_axis_cfg
#define CFG_B1_MT_AXIS_MRG_EN               (fwCfgp->b1_mtAxisMrgEn)    //3A1 - mt_axis_cfg
#define CFG_U8_MT_AXIS_SUM_ROW_THRES        (fwCfgp->u8_mtAxisSumRowThres)  //3A2 - mt_axis_avg_row_thres
#define CFG_U8_MT_AXIS_SUM_COL_THRES        (fwCfgp->u8_mtAxisSumColThres)  //3A3 - mt_axis_avg_col_thres
#define CFG_U8_MT_AXIS_SUM_IIR_WGH          (fwCfgp->u8_mtAxisSumIirWgh)    //3A4 - mt_axis_avg_iir_wgh
#define CFG_U8_MT_AXIS_MRG_MAX_TCH_CNT      (fwCfgp->u8_mtAxisMrgMaxTchCnt) //3A5 - mt_axis_mrg_max_node_cnt
#define CFG_U16_MT_AXIS_GRV_THRES           (fwCfgp->u16_mtAxisGrvThres)    //3A6 - mt_axis_grv_thres
#define CFG_U16_MT_AXIS_SUM_MAX_THRES       (fwCfgp->u16_mtAxisSumMaxThres) //3A8 - mt_axis_sum_max_thres
#define CFG_U16_MT_AXIS_SUM_MAX_HYST        (fwCfgp->u16_mtAxisSumMaxHyst)  //3AA - mt_axis_sum_max_hyst
#define CFG_U16_MT_AXIS_MRG_MAX_DIST_THRES  (fwCfgp->u16_mtAxisMrgMaxDistThres) //3AC - mt_axis_mrg_max_dist_thres
#define CFG_U16_MT_AXIS_MRG_MAX_DIST_HYST   (fwCfgp->u16_mtAxisMrgMaxDistHyst)  //3AE - mt_axis_mrg_max_dist_hyst
#define CFG_U8_MT_AXIS_MRG_MAX_BOUND_CNT    (fwCfgp->u8_mtAxisMrgMaxBoundCnt)   //3B0 - mt_axis_mrg_max_bound_cnt
#define CFG_U8_MT_AXIS_MRG_MAX_BOUND_CNT_NOISY  (fwCfgp->u8_mtAxisMrgMaxBoundCntNoisy)  //3B1 - mt_axis_mrg_max_bound_cnt_noisy
#define CFG_U16_MT_AXIS_SUM_MAX_THRES_NOISY (fwCfgp->u16_mtAxisSumMaxThresNoisy)    //3B2 - mt_axis_sum_max_thres_noisy
#define CFG_U16_MT_AXIS_MRG_MAX_DIST_THRES_NOISY    (fwCfgp->u16_mtAxisMrgMaxDistThresNoisy)    //3B4 - mt_axis_mrg_max_dist_thres_noisy
#define CFG_U16_MT_AXIS_GRV_THRES_NOISY     (fwCfgp->u16_mtAxisGrvThresNoisy)   //3B6 - mt_axis_grv_thres_noisy
#define CFG_U16_MT_AXIS_SUM_PEAK_THRES      (fwCfgp->u16_mtAxisSumPeakThres)    //3B8 - mt_axis_sum_peak_thres
#define CFG_U16_MT_AXIS_SUM_PEAK_THRES_NOISY    (fwCfgp->u16_mtAxisSumPeakThresNoisy)   //3BA - mt_axis_sum_peak_thres_noisy
#define CFG_U16_MT_AXIS_MRG_MULTI_DIST_THRES    (fwCfgp->u16_mtAxisMrgMultiDistThres)   //3BC - mt_axis_mrg_multi_dist_thres
#define CFG_U16_MT_AXIS_SUM_MULTI_BOUND_MAX_THRES   (fwCfgp->u16_mtAxisSumMultiBoundMaxThres)   //3BE - mt_axis_sum_multi_bnd_max_thres
#define CFG_U8_MT_AXIS_PEAK_ISLAND_CNT      (fwCfgp->u8_mtAxisPeakIslandCnt)    //3C0 - mt_axis_peak_island_cnt
#define CFG_U8_AXIS_MT_EXPAND_NODE          (fwCfgp->u8_axisMtExpandNode)   //3C1 - axis_mt_expand_node
#define CFG_U8_MT_AXIS_SS_SENSE_STR_THRES   (fwCfgp->u8_mtAxisSsSenseStrThres)  //3C2 - mt_axis_ss_sense_str_thres
#define CFG_U8_MT_AXIS_SS_FORCE_STR_THRES   (fwCfgp->u8_mtAxisSsForceStrThres)  //3C3 - mt_axis_ss_force_str_thres
#define CFG_U16_MT_AXIS_SS_GRV_THRES        (fwCfgp->u16_mtAxisSsGrvThres)  //3C4 - mt_axis_ss_grv_thres
#define CFG_U8_MS_RES_STR_CH                (fwCfgp->u8_msResStrCh)     //3C7 - ms_res_str_ch
#define CFG_U16_MS_RES_STR_FLT_THRES_LOW    (fwCfgp->u16_msResStrFltThresLow)   //3C8 - ms_res_str_flt_thres_low
#define CFG_U16_MS_RES_STR_FLT_THRES_HIGH   (fwCfgp->u16_msResStrFltThresHigh)  //3CA - ms_res_str_flt_thres_high
#define CFG_U16_MS_RES_STR_FLT_PEAK_THRES_LOW   (fwCfgp->u16_msResStrFltPeakThresLow)   //3CC - ms_res_str_flt_peak_thres_low
#define CFG_U16_MS_RES_STR_FLT_PEAK_THRES_HIGH  (fwCfgp->u16_msResStrFltPeakThresHigh)  //3CE - ms_res_str_flt_peak_thres_high
#define CFG_U16_MS_RES_STR_FLT_THRES_GAP    (fwCfgp->u16_msResStrFltThresGap)   //3D0 - ms_res_str_flt_thres_gap
#define CFG_U16_MS_RES_STR_FLT_THRES_GAP_R0 (fwCfgp->u16_msResStrFltThresGapR0) //3D2 - ms_res_str_flt_thres_gap_r0
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_GAME_LOW_SPEED   (fwCfgp->u8_tchMtol2AccXTolGameLowSpeed)    //3D4 - tch_mtol2_acc_xy_tol_game_low_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_GAME_LOW_SPEED   (fwCfgp->u8_tchMtol2AccYTolGameLowSpeed)    //3D4 - tch_mtol2_acc_xy_tol_game_low_speed
#define CFG_B1_TCH_ACC_MTOL2_EN             (fwCfgp->b1_tchAccMtol2En)  //3D6 - mtol_2_cfg
#define CFG_B1_TCH_FTAP_MTOL2_EN            (fwCfgp->b1_tchFtapMtol2En) //3D6 - mtol_2_cfg
#define CFG_B1_TCH_IN_COOR_EN               (fwCfgp->b1_tchInCoorEn)    //3D6 - mtol_2_cfg
#define CFG_U8_FTAP_MTOL2_EDGE_TCH_TO       (fwCfgp->u8_ftapMtol2EdgeTchTo) //3D8 - ftap_mtol2_edge_tch_to
#define CFG_U8_FTAP_MTOL2_TO                (fwCfgp->u8_ftapMtol2To)    //3D9 - ftap_mtol2_to
#define CFG_U8_FTAP_MTOL2_SLOW_TCH_SPEED_THRES  (fwCfgp->u8_ftapMtol2SlowTchSpeedThres) //3DA - ftap_mtol2_slow_tch_speed_thres
#define CFG_U8_FTAP_MTOL2_SLOW_TCH_RPT_RANGE_PERCENT    (fwCfgp->u8_ftapMtol2SlowTchRptRangePercent)    //3DB - ftap_mtol2_slow_tch_rpt_range_percent
#define CFG_U8_FTAP_MTOL2_SLOW_GAP_COMP_STEP    (fwCfgp->u8_ftapMtol2SlowGapCompStep)   //3DC - ftap_mtol2_slow_gap_comp_step
#define CFG_B4_TCH_MTOL2_FTAP_IIR_STEP      (fwCfgp->b4_tchMtol2FtapIirStep)    //3DD - tch_mtol2_ftap_iir_step
#define CFG_U8_TCH_MTOL2_FTAP_X_TOL         (fwCfgp->u8_tchMtol2FtapXTol)   //3DE - tch_mtol2_ftap_xy_tol
#define CFG_U8_TCH_MTOL2_FTAP_Y_TOL         (fwCfgp->u8_tchMtol2FtapYTol)   //3DE - tch_mtol2_ftap_xy_tol
#define CFG_U8_TCH_MTOL2_FTAP_X_TOL_NOISY   (fwCfgp->u8_tchMtol2FtapXTolNoisy)  //3E0 - tch_mtol2_ftap_xy_tol_noisy
#define CFG_U8_TCH_MTOL2_FTAP_Y_TOL_NOISY   (fwCfgp->u8_tchMtol2FtapYTolNoisy)  //3E0 - tch_mtol2_ftap_xy_tol_noisy
#define CFG_U8_MIN_MTOL2_FTAP_XY_SPEED      (fwCfgp->u8_minMtol2FtapXySpeed)    //3E2 - ftap_xy_speed
#define CFG_U8_MAX_MTOL2_FTAP_XY_SPEED      (fwCfgp->u8_maxMtol2FtapXySpeed)    //3E2 - ftap_xy_speed
#define CFG_U8_MIN_MTOL2_FTAP_XY_SPEED_NOISY    (fwCfgp->u8_minMtol2FtapXySpeedNoisy)   //3E4 - ftap_xy_speed_noisy
#define CFG_U8_MAX_MTOL2_FTAP_XY_SPEED_NOISY    (fwCfgp->u8_maxMtol2FtapXySpeedNoisy)   //3E4 - ftap_xy_speed_noisy
#define CFG_B4_MIN_MTOL2_FTAP_XY_WGH        (fwCfgp->b4_minMtol2FtapXyWgh)  //3E6 - ftap_xy_wgh
#define CFG_B4_MAX_MTOL2_FTAP_XY_WGH        (fwCfgp->b4_maxMtol2FtapXyWgh)  //3E6 - ftap_xy_wgh
#define CFG_B4_MIN_MTOL2_FTAP_XY_WGH_NOISY  (fwCfgp->b4_minMtol2FtapXyWghNoisy) //3E7 - ftap_xy_wgh_noisy
#define CFG_B4_MAX_MTOL2_FTAP_XY_WGH_NOISY  (fwCfgp->b4_maxMtol2FtapXyWghNoisy) //3E7 - ftap_xy_wgh_noisy
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_LOW_SPEED    (fwCfgp->u8_tchMtol2AccXTolLowSpeed)    //3E8 - tch_mtol2_acc_xy_tol_low_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_LOW_SPEED    (fwCfgp->u8_tchMtol2AccYTolLowSpeed)    //3E8 - tch_mtol2_acc_xy_tol_low_speed
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_NOISY_LOW_SPEED  (fwCfgp->u8_tchMtol2AccXTolNoisyLowSpeed)   //3EA - tch_mtol2_acc_xy_tol_noisy_low_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_NOISY_LOW_SPEED  (fwCfgp->u8_tchMtol2AccYTolNoisyLowSpeed)   //3EA - tch_mtol2_acc_xy_tol_noisy_low_speed
#define CFG_U8_TCH_MTOL2_ACC_MIN_COMP       (fwCfgp->u8_tchMtol2AccMinComp) //3EC - tch_mtol2_acc_min_comp
#define CFG_U8_TCH_MTOL2_ACC_MAX_COMP       (fwCfgp->u8_tchMtol2AccMaxComp) //3ED - tch_mtol2_acc_max_comp
#define CFG_U8_TCH_MTOL2_ACC_COMP_MIN_SPEED (fwCfgp->u8_tchMtol2AccCompMinSpeed)    //3EE - tch_mtol2_acc_comp_min_speed
#define CFG_U8_TCH_MTOL2_ACC_COMP_MAX_SPEED (fwCfgp->u8_tchMtol2AccCompMaxSpeed)    //3EF - tch_mtol2_acc_comp_max_speed
#define CFG_U8_TCH_MTOL2_ACC_EDGE2CENTER_TO (fwCfgp->u8_tchMtol2AccEdge2centerTo)   //3F0 - tch_mtol2_acc_edge2center_to
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_GAME_HIGH_SPEED  (fwCfgp->u8_tchMtol2AccXTolGameHighSpeed)   //3F1 - tch_mtol2_acc_xy_tol_game_high_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_GAME_HIGH_SPEED  (fwCfgp->u8_tchMtol2AccYTolGameHighSpeed)   //3F1 - tch_mtol2_acc_xy_tol_game_high_speed
#define CFG_B1_FGR_LNZ_EN                   (fwCfgp->b1_fgrLnzEn)       //3F3 - ms_lnz_cfg
#define CFG_B1_STY_LNZ_EN                   (fwCfgp->b1_styLnzEn)       //3F3 - ms_lnz_cfg
#define CFG_B1_GLV_LNZ_EN                   (fwCfgp->b1_glvLnzEn)       //3F3 - ms_lnz_cfg
#define CFG_B1_GRP_LNZ_EN                   (fwCfgp->b1_grpLnzEn)       //3F3 - ms_lnz_cfg
#define CFG_B1_TRENCH_LNZ_EN                (fwCfgp->b1_trenchLnzEn)    //3F3 - ms_lnz_cfg
#define CFG_U16_TRENCH_LNZ_S_BORDER         (fwCfgp->u16_trenchLnzSBorder)  //3F4 - trench_lnz_s_border
#define CFG_U16_TRENCH_LNZ_F_BORDER         (fwCfgp->u16_trenchLnzFBorder)  //3F6 - trench_lnz_f_border
#define CFG_U8_MS_LNZ_S_ENTRY_CNT           (fwCfgp->u8_msLnzSEntryCnt) //3F8 - ms_lnz_table_cfg0
#define CFG_U8_MS_LNZ_F_ENTRY_CNT           (fwCfgp->u8_msLnzFEntryCnt) //3F9 - ms_lnz_table_cfg1
#define CFG_U8_FGR_LNZ_TABLE_OFFSET         (fwCfgp->u8_fgrLnzTableOffset)  //3FA - ms_lnz_table_cfg2
#define CFG_U8_STY_LNZ_TABLE_OFFSET         (fwCfgp->u8_styLnzTableOffset)  //3FB - ms_lnz_table_cfg3
#define CFG_U8_GLV_LNZ_TABLE_OFFSET         (fwCfgp->u8_glvLnzTableOffset)  //3FC - ms_lnz_table_cfg4
#define CFG_U8_SELF_LNZ_TABLE_OFFSET        (fwCfgp->u8_selfLnzTableOffset) //3FD - ms_lnz_table_cfg5
#define CFG_U8_GRP_LNZ_TABLE_OFFSET         (fwCfgp->u8_grpLnzTableOffset)  //3FE - ms_lnz_table_cfg6
#define CFG_U16_MS_LNZ_ENTRY_0              (fwCfgp->u16_msLnzEntry0)   //3FF - ms_lnz_entry_0
#define CFG_U16_MS_LNZ_ENTRY_1              (fwCfgp->u16_msLnzEntry1)   //401 - ms_lnz_entry_1
#define CFG_U16_MS_LNZ_ENTRY_2              (fwCfgp->u16_msLnzEntry2)   //403 - ms_lnz_entry_2
#define CFG_U16_MS_LNZ_ENTRY_3              (fwCfgp->u16_msLnzEntry3)   //405 - ms_lnz_entry_3
#define CFG_U16_MS_LNZ_ENTRY_4              (fwCfgp->u16_msLnzEntry4)   //407 - ms_lnz_entry_4
#define CFG_U16_MS_LNZ_ENTRY_5              (fwCfgp->u16_msLnzEntry5)   //409 - ms_lnz_entry_5
#define CFG_U16_MS_LNZ_ENTRY_6              (fwCfgp->u16_msLnzEntry6)   //40B - ms_lnz_entry_6
#define CFG_U16_MS_LNZ_ENTRY_7              (fwCfgp->u16_msLnzEntry7)   //40D - ms_lnz_entry_7
#define CFG_U16_MS_LNZ_ENTRY_8              (fwCfgp->u16_msLnzEntry8)   //40F - ms_lnz_entry_8
#define CFG_U16_MS_LNZ_ENTRY_9              (fwCfgp->u16_msLnzEntry9)   //411 - ms_lnz_entry_9
#define CFG_U16_MS_LNZ_ENTRY_10             (fwCfgp->u16_msLnzEntry10)  //413 - ms_lnz_entry_10
#define CFG_U16_MS_LNZ_ENTRY_11             (fwCfgp->u16_msLnzEntry11)  //415 - ms_lnz_entry_11
#define CFG_U16_MS_LNZ_ENTRY_12             (fwCfgp->u16_msLnzEntry12)  //417 - ms_lnz_entry_12
#define CFG_U16_MS_LNZ_ENTRY_13             (fwCfgp->u16_msLnzEntry13)  //419 - ms_lnz_entry_13
#define CFG_U16_MS_LNZ_ENTRY_14             (fwCfgp->u16_msLnzEntry14)  //41B - ms_lnz_entry_14
#define CFG_U16_MS_LNZ_ENTRY_15             (fwCfgp->u16_msLnzEntry15)  //41D - ms_lnz_entry_15
#define CFG_U16_MS_LNZ_ENTRY_16             (fwCfgp->u16_msLnzEntry16)  //41F - ms_lnz_entry_16
#define CFG_U16_MS_LNZ_ENTRY_17             (fwCfgp->u16_msLnzEntry17)  //421 - ms_lnz_entry_17
#define CFG_U16_MS_LNZ_ENTRY_18             (fwCfgp->u16_msLnzEntry18)  //423 - ms_lnz_entry_18
#define CFG_U16_MS_LNZ_ENTRY_19             (fwCfgp->u16_msLnzEntry19)  //425 - ms_lnz_entry_19
#define CFG_U16_MS_LNZ_ENTRY_20             (fwCfgp->u16_msLnzEntry20)  //427 - ms_lnz_entry_20
#define CFG_U16_MS_LNZ_ENTRY_21             (fwCfgp->u16_msLnzEntry21)  //429 - ms_lnz_entry_21
#define CFG_U16_MS_LNZ_ENTRY_22             (fwCfgp->u16_msLnzEntry22)  //42B - ms_lnz_entry_22
#define CFG_U16_MS_LNZ_ENTRY_23             (fwCfgp->u16_msLnzEntry23)  //42D - ms_lnz_entry_23
#define CFG_U16_MS_LNZ_ENTRY_24             (fwCfgp->u16_msLnzEntry24)  //42F - ms_lnz_entry_24
#define CFG_U16_MS_LNZ_ENTRY_25             (fwCfgp->u16_msLnzEntry25)  //431 - ms_lnz_entry_25
#define CFG_U16_MS_LNZ_ENTRY_26             (fwCfgp->u16_msLnzEntry26)  //433 - ms_lnz_entry_26
#define CFG_U16_MS_LNZ_ENTRY_27             (fwCfgp->u16_msLnzEntry27)  //435 - ms_lnz_entry_27
#define CFG_U16_MS_LNZ_ENTRY_28             (fwCfgp->u16_msLnzEntry28)  //437 - ms_lnz_entry_28
#define CFG_U16_MS_LNZ_ENTRY_29             (fwCfgp->u16_msLnzEntry29)  //439 - ms_lnz_entry_29
#define CFG_U16_MS_LNZ_ENTRY_30             (fwCfgp->u16_msLnzEntry30)  //43B - ms_lnz_entry_30
#define CFG_U16_MS_LNZ_ENTRY_31             (fwCfgp->u16_msLnzEntry31)  //43D - ms_lnz_entry_31
#define CFG_U16_MS_LNZ_ENTRY_32             (fwCfgp->u16_msLnzEntry32)  //43F - ms_lnz_entry_32
#define CFG_U16_MS_LNZ_ENTRY_33             (fwCfgp->u16_msLnzEntry33)  //441 - ms_lnz_entry_33
#define CFG_U16_MS_LNZ_ENTRY_34             (fwCfgp->u16_msLnzEntry34)  //443 - ms_lnz_entry_34
#define CFG_U16_MS_LNZ_ENTRY_35             (fwCfgp->u16_msLnzEntry35)  //445 - ms_lnz_entry_35
#define CFG_U16_MS_LNZ_ENTRY_36             (fwCfgp->u16_msLnzEntry36)  //447 - ms_lnz_entry_36
#define CFG_U16_MS_LNZ_ENTRY_37             (fwCfgp->u16_msLnzEntry37)  //449 - ms_lnz_entry_37
#define CFG_U16_MS_LNZ_ENTRY_38             (fwCfgp->u16_msLnzEntry38)  //44B - ms_lnz_entry_38
#define CFG_U16_MS_LNZ_ENTRY_39             (fwCfgp->u16_msLnzEntry39)  //44D - ms_lnz_entry_39
#define CFG_U16_MS_LNZ_ENTRY_40             (fwCfgp->u16_msLnzEntry40)  //44F - ms_lnz_entry_40
#define CFG_U16_MS_LNZ_ENTRY_41             (fwCfgp->u16_msLnzEntry41)  //451 - ms_lnz_entry_41
#define CFG_U16_MS_LNZ_ENTRY_42             (fwCfgp->u16_msLnzEntry42)  //453 - ms_lnz_entry_42
#define CFG_U16_MS_LNZ_ENTRY_43             (fwCfgp->u16_msLnzEntry43)  //455 - ms_lnz_entry_43
#define CFG_U16_MS_LNZ_ENTRY_44             (fwCfgp->u16_msLnzEntry44)  //457 - ms_lnz_entry_44
#define CFG_U16_MS_LNZ_ENTRY_45             (fwCfgp->u16_msLnzEntry45)  //459 - ms_lnz_entry_45
#define CFG_U16_MS_LNZ_ENTRY_46             (fwCfgp->u16_msLnzEntry46)  //45B - ms_lnz_entry_46
#define CFG_U16_MS_LNZ_ENTRY_47             (fwCfgp->u16_msLnzEntry47)  //45D - ms_lnz_entry_47
#define CFG_U16_MS_LNZ_ENTRY_48             (fwCfgp->u16_msLnzEntry48)  //45F - ms_lnz_entry_48
#define CFG_U16_MS_LNZ_ENTRY_49             (fwCfgp->u16_msLnzEntry49)  //461 - ms_lnz_entry_49
#define CFG_U16_MS_LNZ_ENTRY_50             (fwCfgp->u16_msLnzEntry50)  //463 - ms_lnz_entry_50
#define CFG_U16_MS_LNZ_ENTRY_51             (fwCfgp->u16_msLnzEntry51)  //465 - ms_lnz_entry_51
#define CFG_U16_MS_LNZ_ENTRY_52             (fwCfgp->u16_msLnzEntry52)  //467 - ms_lnz_entry_52
#define CFG_U16_MS_LNZ_ENTRY_53             (fwCfgp->u16_msLnzEntry53)  //469 - ms_lnz_entry_53
#define CFG_U16_MS_LNZ_ENTRY_54             (fwCfgp->u16_msLnzEntry54)  //46B - ms_lnz_entry_54
#define CFG_U16_MS_LNZ_ENTRY_55             (fwCfgp->u16_msLnzEntry55)  //46D - ms_lnz_entry_55
#define CFG_U16_MS_LNZ_ENTRY_56             (fwCfgp->u16_msLnzEntry56)  //46F - ms_lnz_entry_56
#define CFG_U16_MS_LNZ_ENTRY_57             (fwCfgp->u16_msLnzEntry57)  //471 - ms_lnz_entry_57
#define CFG_U16_MS_LNZ_ENTRY_58             (fwCfgp->u16_msLnzEntry58)  //473 - ms_lnz_entry_58
#define CFG_U16_MS_LNZ_ENTRY_59             (fwCfgp->u16_msLnzEntry59)  //475 - ms_lnz_entry_59
#define CFG_U16_MS_LNZ_ENTRY_60             (fwCfgp->u16_msLnzEntry60)  //477 - ms_lnz_entry_60
#define CFG_U16_MS_LNZ_ENTRY_61             (fwCfgp->u16_msLnzEntry61)  //479 - ms_lnz_entry_61
#define CFG_U16_MS_LNZ_ENTRY_62             (fwCfgp->u16_msLnzEntry62)  //47B - ms_lnz_entry_62
#define CFG_U16_MS_LNZ_ENTRY_63             (fwCfgp->u16_msLnzEntry63)  //47D - ms_lnz_entry_63
#define CFG_U16_MS_LNZ_ENTRY_64             (fwCfgp->u16_msLnzEntry64)  //47F - ms_lnz_entry_64
#define CFG_U16_MS_LNZ_ENTRY_65             (fwCfgp->u16_msLnzEntry65)  //481 - ms_lnz_entry_65
#define CFG_U16_MS_LNZ_ENTRY_66             (fwCfgp->u16_msLnzEntry66)  //483 - ms_lnz_entry_66
#define CFG_U16_MS_LNZ_ENTRY_67             (fwCfgp->u16_msLnzEntry67)  //485 - ms_lnz_entry_67
#define CFG_U16_MS_LNZ_ENTRY_68             (fwCfgp->u16_msLnzEntry68)  //487 - ms_lnz_entry_68
#define CFG_U16_MS_LNZ_ENTRY_69             (fwCfgp->u16_msLnzEntry69)  //489 - ms_lnz_entry_69
#define CFG_U16_MS_LNZ_ENTRY_70             (fwCfgp->u16_msLnzEntry70)  //48B - ms_lnz_entry_70
#define CFG_U16_MS_LNZ_ENTRY_71             (fwCfgp->u16_msLnzEntry71)  //48D - ms_lnz_entry_71
#define CFG_U16_MS_LNZ_ENTRY_72             (fwCfgp->u16_msLnzEntry72)  //48F - ms_lnz_entry_72
#define CFG_U16_MS_LNZ_ENTRY_73             (fwCfgp->u16_msLnzEntry73)  //491 - ms_lnz_entry_73
#define CFG_U16_MS_LNZ_ENTRY_74             (fwCfgp->u16_msLnzEntry74)  //493 - ms_lnz_entry_74
#define CFG_U16_MS_LNZ_ENTRY_75             (fwCfgp->u16_msLnzEntry75)  //495 - ms_lnz_entry_75
#define CFG_U16_MS_LNZ_ENTRY_76             (fwCfgp->u16_msLnzEntry76)  //497 - ms_lnz_entry_76
#define CFG_U16_MS_LNZ_ENTRY_77             (fwCfgp->u16_msLnzEntry77)  //499 - ms_lnz_entry_77
#define CFG_U16_MS_LNZ_ENTRY_78             (fwCfgp->u16_msLnzEntry78)  //49B - ms_lnz_entry_78
#define CFG_U16_MS_LNZ_ENTRY_79             (fwCfgp->u16_msLnzEntry79)  //49D - ms_lnz_entry_79
#define CFG_U16_MS_LNZ_ENTRY_80             (fwCfgp->u16_msLnzEntry80)  //49F - ms_lnz_entry_80
#define CFG_U16_MS_LNZ_ENTRY_81             (fwCfgp->u16_msLnzEntry81)  //4A1 - ms_lnz_entry_81
#define CFG_U16_MS_LNZ_ENTRY_82             (fwCfgp->u16_msLnzEntry82)  //4A3 - ms_lnz_entry_82
#define CFG_U16_MS_LNZ_ENTRY_83             (fwCfgp->u16_msLnzEntry83)  //4A5 - ms_lnz_entry_83
#define CFG_U16_MS_LNZ_ENTRY_84             (fwCfgp->u16_msLnzEntry84)  //4A7 - ms_lnz_entry_84
#define CFG_U16_MS_LNZ_ENTRY_85             (fwCfgp->u16_msLnzEntry85)  //4A9 - ms_lnz_entry_85
#define CFG_U16_MS_LNZ_ENTRY_86             (fwCfgp->u16_msLnzEntry86)  //4AB - ms_lnz_entry_86
#define CFG_U16_MS_LNZ_ENTRY_87             (fwCfgp->u16_msLnzEntry87)  //4AD - ms_lnz_entry_87
#define CFG_U16_MS_LNZ_ENTRY_88             (fwCfgp->u16_msLnzEntry88)  //4AF - ms_lnz_entry_88
#define CFG_U16_MS_LNZ_ENTRY_89             (fwCfgp->u16_msLnzEntry89)  //4B1 - ms_lnz_entry_89
#define CFG_U16_MS_LNZ_ENTRY_90             (fwCfgp->u16_msLnzEntry90)  //4B3 - ms_lnz_entry_90
#define CFG_U16_MS_LNZ_ENTRY_91             (fwCfgp->u16_msLnzEntry91)  //4B5 - ms_lnz_entry_91
#define CFG_U16_MS_LNZ_ENTRY_92             (fwCfgp->u16_msLnzEntry92)  //4B7 - ms_lnz_entry_92
#define CFG_U16_MS_LNZ_ENTRY_93             (fwCfgp->u16_msLnzEntry93)  //4B9 - ms_lnz_entry_93
#define CFG_U16_MS_LNZ_ENTRY_94             (fwCfgp->u16_msLnzEntry94)  //4BB - ms_lnz_entry_94
#define CFG_U16_MS_LNZ_ENTRY_95             (fwCfgp->u16_msLnzEntry95)  //4BD - ms_lnz_entry_95
#define CFG_U16_MS_LNZ_ENTRY_96             (fwCfgp->u16_msLnzEntry96)  //4BF - ms_lnz_entry_96
#define CFG_U16_MS_LNZ_ENTRY_97             (fwCfgp->u16_msLnzEntry97)  //4C1 - ms_lnz_entry_97
#define CFG_U16_MS_LNZ_ENTRY_98             (fwCfgp->u16_msLnzEntry98)  //4C3 - ms_lnz_entry_98
#define CFG_U16_MS_LNZ_ENTRY_99             (fwCfgp->u16_msLnzEntry99)  //4C5 - ms_lnz_entry_99
#define CFG_U16_MS_LNZ_ENTRY_100            (fwCfgp->u16_msLnzEntry100) //4C7 - ms_lnz_entry_100
#define CFG_U16_MS_LNZ_ENTRY_101            (fwCfgp->u16_msLnzEntry101) //4C9 - ms_lnz_entry_101
#define CFG_U16_MS_LNZ_ENTRY_102            (fwCfgp->u16_msLnzEntry102) //4CB - ms_lnz_entry_102
#define CFG_U16_MS_LNZ_ENTRY_103            (fwCfgp->u16_msLnzEntry103) //4CD - ms_lnz_entry_103
#define CFG_U16_MS_LNZ_ENTRY_104            (fwCfgp->u16_msLnzEntry104) //4CF - ms_lnz_entry_104
#define CFG_U16_MS_LNZ_ENTRY_105            (fwCfgp->u16_msLnzEntry105) //4D1 - ms_lnz_entry_105
#define CFG_U16_MS_LNZ_ENTRY_106            (fwCfgp->u16_msLnzEntry106) //4D3 - ms_lnz_entry_106
#define CFG_U16_MS_LNZ_ENTRY_107            (fwCfgp->u16_msLnzEntry107) //4D5 - ms_lnz_entry_107
#define CFG_U16_MS_LNZ_ENTRY_108            (fwCfgp->u16_msLnzEntry108) //4D7 - ms_lnz_entry_108
#define CFG_U16_MS_LNZ_ENTRY_109            (fwCfgp->u16_msLnzEntry109) //4D9 - ms_lnz_entry_109
#define CFG_U16_MS_LNZ_ENTRY_110            (fwCfgp->u16_msLnzEntry110) //4DB - ms_lnz_entry_110
#define CFG_U16_MS_LNZ_ENTRY_111            (fwCfgp->u16_msLnzEntry111) //4DD - ms_lnz_entry_111
#define CFG_U16_MS_LNZ_ENTRY_112            (fwCfgp->u16_msLnzEntry112) //4DF - ms_lnz_entry_112
#define CFG_U16_MS_LNZ_ENTRY_113            (fwCfgp->u16_msLnzEntry113) //4E1 - ms_lnz_entry_113
#define CFG_U16_MS_LNZ_ENTRY_114            (fwCfgp->u16_msLnzEntry114) //4E3 - ms_lnz_entry_114
#define CFG_U16_MS_LNZ_ENTRY_115            (fwCfgp->u16_msLnzEntry115) //4E5 - ms_lnz_entry_115
#define CFG_U16_MS_LNZ_ENTRY_116            (fwCfgp->u16_msLnzEntry116) //4E7 - ms_lnz_entry_116
#define CFG_U16_MS_LNZ_ENTRY_117            (fwCfgp->u16_msLnzEntry117) //4E9 - ms_lnz_entry_117
#define CFG_U16_MS_LNZ_ENTRY_118            (fwCfgp->u16_msLnzEntry118) //4EB - ms_lnz_entry_118
#define CFG_U16_MS_LNZ_ENTRY_119            (fwCfgp->u16_msLnzEntry119) //4ED - ms_lnz_entry_119
#define CFG_U16_MS_LNZ_ENTRY_120            (fwCfgp->u16_msLnzEntry120) //4EF - ms_lnz_entry_120
#define CFG_U16_MS_LNZ_ENTRY_121            (fwCfgp->u16_msLnzEntry121) //4F1 - ms_lnz_entry_121
#define CFG_U16_MS_LNZ_ENTRY_122            (fwCfgp->u16_msLnzEntry122) //4F3 - ms_lnz_entry_122
#define CFG_U16_MS_LNZ_ENTRY_123            (fwCfgp->u16_msLnzEntry123) //4F5 - ms_lnz_entry_123
#define CFG_U16_MS_LNZ_ENTRY_124            (fwCfgp->u16_msLnzEntry124) //4F7 - ms_lnz_entry_124
#define CFG_U16_MS_LNZ_ENTRY_125            (fwCfgp->u16_msLnzEntry125) //4F9 - ms_lnz_entry_125
#define CFG_U16_MS_LNZ_ENTRY_126            (fwCfgp->u16_msLnzEntry126) //4FB - ms_lnz_entry_126
#define CFG_U16_MS_LNZ_ENTRY_127            (fwCfgp->u16_msLnzEntry127) //4FD - ms_lnz_entry_127
#define CFG_U16_MS_LNZ_ENTRY_128            (fwCfgp->u16_msLnzEntry128) //4FF - ms_lnz_entry_128
#define CFG_U16_MS_LNZ_ENTRY_129            (fwCfgp->u16_msLnzEntry129) //501 - ms_lnz_entry_129
#define CFG_U16_MS_LNZ_ENTRY_130            (fwCfgp->u16_msLnzEntry130) //503 - ms_lnz_entry_130
#define CFG_U16_MS_LNZ_ENTRY_131            (fwCfgp->u16_msLnzEntry131) //505 - ms_lnz_entry_131
#define CFG_U16_MS_LNZ_ENTRY_132            (fwCfgp->u16_msLnzEntry132) //507 - ms_lnz_entry_132
#define CFG_U16_MS_LNZ_ENTRY_133            (fwCfgp->u16_msLnzEntry133) //509 - ms_lnz_entry_133
#define CFG_U16_MS_LNZ_ENTRY_134            (fwCfgp->u16_msLnzEntry134) //50B - ms_lnz_entry_134
#define CFG_U16_MS_LNZ_ENTRY_135            (fwCfgp->u16_msLnzEntry135) //50D - ms_lnz_entry_135
#define CFG_U16_MS_LNZ_ENTRY_136            (fwCfgp->u16_msLnzEntry136) //50F - ms_lnz_entry_136
#define CFG_U16_MS_LNZ_ENTRY_137            (fwCfgp->u16_msLnzEntry137) //511 - ms_lnz_entry_137
#define CFG_U16_MS_LNZ_ENTRY_138            (fwCfgp->u16_msLnzEntry138) //513 - ms_lnz_entry_138
#define CFG_U16_MS_LNZ_ENTRY_139            (fwCfgp->u16_msLnzEntry139) //515 - ms_lnz_entry_139
#define CFG_U16_MS_LNZ_ENTRY_140            (fwCfgp->u16_msLnzEntry140) //517 - ms_lnz_entry_140
#define CFG_U16_MS_LNZ_ENTRY_141            (fwCfgp->u16_msLnzEntry141) //519 - ms_lnz_entry_141
#define CFG_U16_MS_LNZ_ENTRY_142            (fwCfgp->u16_msLnzEntry142) //51B - ms_lnz_entry_142
#define CFG_U16_MS_LNZ_ENTRY_143            (fwCfgp->u16_msLnzEntry143) //51D - ms_lnz_entry_143
#define CFG_U16_MS_LNZ_ENTRY_144            (fwCfgp->u16_msLnzEntry144) //51F - ms_lnz_entry_144
#define CFG_U16_MS_LNZ_ENTRY_145            (fwCfgp->u16_msLnzEntry145) //521 - ms_lnz_entry_145
#define CFG_U16_MS_LNZ_ENTRY_146            (fwCfgp->u16_msLnzEntry146) //523 - ms_lnz_entry_146
#define CFG_U16_MS_LNZ_ENTRY_147            (fwCfgp->u16_msLnzEntry147) //525 - ms_lnz_entry_147
#define CFG_U16_MS_LNZ_ENTRY_148            (fwCfgp->u16_msLnzEntry148) //527 - ms_lnz_entry_148
#define CFG_U16_MS_LNZ_ENTRY_149            (fwCfgp->u16_msLnzEntry149) //529 - ms_lnz_entry_149
#define CFG_U16_MS_LNZ_ENTRY_150            (fwCfgp->u16_msLnzEntry150) //52B - ms_lnz_entry_150
#define CFG_U16_MS_LNZ_ENTRY_151            (fwCfgp->u16_msLnzEntry151) //52D - ms_lnz_entry_151
#define CFG_U16_MS_LNZ_ENTRY_152            (fwCfgp->u16_msLnzEntry152) //52F - ms_lnz_entry_152
#define CFG_U16_MS_LNZ_ENTRY_153            (fwCfgp->u16_msLnzEntry153) //531 - ms_lnz_entry_153
#define CFG_U16_MS_LNZ_ENTRY_154            (fwCfgp->u16_msLnzEntry154) //533 - ms_lnz_entry_154
#define CFG_U16_MS_LNZ_ENTRY_155            (fwCfgp->u16_msLnzEntry155) //535 - ms_lnz_entry_155
#define CFG_U16_MS_LNZ_ENTRY_156            (fwCfgp->u16_msLnzEntry156) //537 - ms_lnz_entry_156
#define CFG_U16_MS_LNZ_ENTRY_157            (fwCfgp->u16_msLnzEntry157) //539 - ms_lnz_entry_157
#define CFG_U16_MS_LNZ_ENTRY_158            (fwCfgp->u16_msLnzEntry158) //53B - ms_lnz_entry_158
#define CFG_U16_MS_LNZ_ENTRY_159            (fwCfgp->u16_msLnzEntry159) //53D - ms_lnz_entry_159
#define CFG_U16_MS_LNZ_ENTRY_160            (fwCfgp->u16_msLnzEntry160) //53F - ms_lnz_entry_160
#define CFG_U16_MS_LNZ_ENTRY_161            (fwCfgp->u16_msLnzEntry161) //541 - ms_lnz_entry_161
#define CFG_U16_MS_LNZ_ENTRY_162            (fwCfgp->u16_msLnzEntry162) //543 - ms_lnz_entry_162
#define CFG_U16_MS_LNZ_ENTRY_163            (fwCfgp->u16_msLnzEntry163) //545 - ms_lnz_entry_163
#define CFG_U16_MS_LNZ_ENTRY_164            (fwCfgp->u16_msLnzEntry164) //547 - ms_lnz_entry_164
#define CFG_U16_MS_LNZ_ENTRY_165            (fwCfgp->u16_msLnzEntry165) //549 - ms_lnz_entry_165
#define CFG_U16_MS_LNZ_ENTRY_166            (fwCfgp->u16_msLnzEntry166) //54B - ms_lnz_entry_166
#define CFG_U16_MS_LNZ_ENTRY_167            (fwCfgp->u16_msLnzEntry167) //54D - ms_lnz_entry_167
#define CFG_U16_MS_LNZ_ENTRY_168            (fwCfgp->u16_msLnzEntry168) //54F - ms_lnz_entry_168
#define CFG_U16_MS_LNZ_ENTRY_169            (fwCfgp->u16_msLnzEntry169) //551 - ms_lnz_entry_169
#define CFG_U16_MS_LNZ_ENTRY_170            (fwCfgp->u16_msLnzEntry170) //553 - ms_lnz_entry_170
#define CFG_U16_MS_LNZ_ENTRY_171            (fwCfgp->u16_msLnzEntry171) //555 - ms_lnz_entry_171
#define CFG_U16_MS_LNZ_ENTRY_172            (fwCfgp->u16_msLnzEntry172) //557 - ms_lnz_entry_172
#define CFG_U16_MS_LNZ_ENTRY_173            (fwCfgp->u16_msLnzEntry173) //559 - ms_lnz_entry_173
#define CFG_U16_MS_LNZ_ENTRY_174            (fwCfgp->u16_msLnzEntry174) //55B - ms_lnz_entry_174
#define CFG_U16_MS_LNZ_ENTRY_175            (fwCfgp->u16_msLnzEntry175) //55D - ms_lnz_entry_175
#define CFG_U16_MS_LNZ_ENTRY_176            (fwCfgp->u16_msLnzEntry176) //55F - ms_lnz_entry_176
#define CFG_U16_MS_LNZ_ENTRY_177            (fwCfgp->u16_msLnzEntry177) //561 - ms_lnz_entry_177
#define CFG_U16_MS_LNZ_ENTRY_178            (fwCfgp->u16_msLnzEntry178) //563 - ms_lnz_entry_178
#define CFG_U16_MS_LNZ_ENTRY_179            (fwCfgp->u16_msLnzEntry179) //565 - ms_lnz_entry_179
#define CFG_U16_MS_LNZ_ENTRY_180            (fwCfgp->u16_msLnzEntry180) //567 - ms_lnz_entry_180
#define CFG_U16_MS_LNZ_ENTRY_181            (fwCfgp->u16_msLnzEntry181) //569 - ms_lnz_entry_181
#define CFG_U16_MS_LNZ_ENTRY_182            (fwCfgp->u16_msLnzEntry182) //56B - ms_lnz_entry_182
#define CFG_U16_MS_LNZ_ENTRY_183            (fwCfgp->u16_msLnzEntry183) //56D - ms_lnz_entry_183
#define CFG_U16_MS_LNZ_ENTRY_184            (fwCfgp->u16_msLnzEntry184) //56F - ms_lnz_entry_184
#define CFG_U16_MS_LNZ_ENTRY_185            (fwCfgp->u16_msLnzEntry185) //571 - ms_lnz_entry_185
#define CFG_U16_MS_LNZ_ENTRY_186            (fwCfgp->u16_msLnzEntry186) //573 - ms_lnz_entry_186
#define CFG_U16_MS_LNZ_ENTRY_187            (fwCfgp->u16_msLnzEntry187) //575 - ms_lnz_entry_187
#define CFG_U16_MS_LNZ_ENTRY_188            (fwCfgp->u16_msLnzEntry188) //577 - ms_lnz_entry_188
#define CFG_U16_MS_LNZ_ENTRY_189            (fwCfgp->u16_msLnzEntry189) //579 - ms_lnz_entry_189
#define CFG_U16_MS_LNZ_ENTRY_190            (fwCfgp->u16_msLnzEntry190) //57B - ms_lnz_entry_190
#define CFG_U16_MS_LNZ_ENTRY_191            (fwCfgp->u16_msLnzEntry191) //57D - ms_lnz_entry_191
#define CFG_U16_MS_LNZ_ENTRY_192            (fwCfgp->u16_msLnzEntry192) //57F - ms_lnz_entry_192
#define CFG_U16_MS_LNZ_ENTRY_193            (fwCfgp->u16_msLnzEntry193) //581 - ms_lnz_entry_193
#define CFG_U16_MS_LNZ_ENTRY_194            (fwCfgp->u16_msLnzEntry194) //583 - ms_lnz_entry_194
#define CFG_U16_MS_LNZ_ENTRY_195            (fwCfgp->u16_msLnzEntry195) //585 - ms_lnz_entry_195
#define CFG_U16_MS_LNZ_ENTRY_196            (fwCfgp->u16_msLnzEntry196) //587 - ms_lnz_entry_196
#define CFG_U16_MS_LNZ_ENTRY_197            (fwCfgp->u16_msLnzEntry197) //589 - ms_lnz_entry_197
#define CFG_U16_MS_LNZ_ENTRY_198            (fwCfgp->u16_msLnzEntry198) //58B - ms_lnz_entry_198
#define CFG_U16_MS_LNZ_ENTRY_199            (fwCfgp->u16_msLnzEntry199) //58D - ms_lnz_entry_199
#define CFG_U8_OS_COEF_MS_SCR_CNT           (fwCfgp->u8_osCoefMsScrCnt) //591 - os_coef_cfg0
#define CFG_U8_OS_COEF_MS_SCR_OFFSET        (fwCfgp->u8_osCoefMsScrOffset)  //592 - os_coef_cfg1
#define CFG_U8_OS_COEF_MS_SCR_NOISY_CNT     (fwCfgp->u8_osCoefMsScrNoisyCnt)    //593 - os_coef_cfg2
#define CFG_U8_OS_COEF_MS_SCR_NOISY_OFFSET  (fwCfgp->u8_osCoefMsScrNoisyOffset) //594 - os_coef_cfg3
#define CFG_U8_OS_COEF_MS_SCR_LP_CNT        (fwCfgp->u8_osCoefMsScrLpCnt)   //595 - os_coef_cfg4
#define CFG_U8_OS_COEF_MS_SCR_LP_OFFSET     (fwCfgp->u8_osCoefMsScrLpOffset)    //596 - os_coef_cfg5
#define CFG_U8_OS_COEF_SS_TCH_CNT           (fwCfgp->u8_osCoefSsTchCnt) //597 - os_coef_cfg6
#define CFG_U8_OS_COEF_SS_TCH_OFFSET        (fwCfgp->u8_osCoefSsTchOffset)  //598 - os_coef_cfg7
#define CFG_U8_OS_COEF_SS_DET_CNT           (fwCfgp->u8_osCoefSsDetCnt) //599 - os_coef_cfg8
#define CFG_U8_OS_COEF_SS_DET_OFFSET        (fwCfgp->u8_osCoefSsDetOffset)  //59A - os_coef_cfg9
#define CFG_U8_OS_COEF_MS_KEY_CNT           (fwCfgp->u8_osCoefMsKeyCnt) //59B - os_coef_cfg10
#define CFG_U8_OS_COEF_MS_KEY_OFFSET        (fwCfgp->u8_osCoefMsKeyOffset)  //59C - os_coef_cfg11
#define CFG_U8_OS_COEF_SS_FRCTCH_CNT        (fwCfgp->u8_osCoefSsFrctchCnt)  //59D - os_coef_cfg12
#define CFG_U8_OS_COEF_SS_FRCTCH_OFFSET     (fwCfgp->u8_osCoefSsFrctchOffset)   //59E - os_coef_cfg13
#define CFG_U8_OS_COEF_MS_MULTI_ACC_NOISY_CNT   (fwCfgp->u8_osCoefMsMultiAccNoisyCnt)   //59F - os_coef_cfg14
#define CFG_U8_OS_COEF_MS_MULTI_ACC_NOISY_OFFSET    (fwCfgp->u8_osCoefMsMultiAccNoisyOffset)    //5A0 - os_coef_cfg15
#define CFG_U8_OS_COEF_ITO_CNT              (fwCfgp->u8_osCoefItoCnt)   //5A1 - os_coef_cfg16
#define CFG_U8_OS_COEF_ITO_OFFSET           (fwCfgp->u8_osCoefItoOffset)    //5A2 - os_coef_cfg17
#define CFG_U8_OS_COEF_ITO_LOW_CNT          (fwCfgp->u8_osCoefItoLowCnt)    //5A3 - os_coef_cfg18
#define CFG_U8_OS_COEF_ITO_LOW_OFFSET       (fwCfgp->u8_osCoefItoLowOffset) //5A4 - os_coef_cfg19
#define CFG_U16_OS_COEF_0                   (fwCfgp->u16_osCoef0)       //5A5 - os_coef_0
#define CFG_U16_OS_COEF_1                   (fwCfgp->u16_osCoef1)       //5A7 - os_coef_1
#define CFG_U16_OS_COEF_2                   (fwCfgp->u16_osCoef2)       //5A9 - os_coef_2
#define CFG_U16_OS_COEF_3                   (fwCfgp->u16_osCoef3)       //5AB - os_coef_3
#define CFG_U16_OS_COEF_4                   (fwCfgp->u16_osCoef4)       //5AD - os_coef_4
#define CFG_U16_OS_COEF_5                   (fwCfgp->u16_osCoef5)       //5AF - os_coef_5
#define CFG_U16_OS_COEF_6                   (fwCfgp->u16_osCoef6)       //5B1 - os_coef_6
#define CFG_U16_OS_COEF_7                   (fwCfgp->u16_osCoef7)       //5B3 - os_coef_7
#define CFG_U16_OS_COEF_8                   (fwCfgp->u16_osCoef8)       //5B5 - os_coef_8
#define CFG_U16_OS_COEF_9                   (fwCfgp->u16_osCoef9)       //5B7 - os_coef_9
#define CFG_U16_OS_COEF_10                  (fwCfgp->u16_osCoef10)      //5B9 - os_coef_10
#define CFG_U16_OS_COEF_11                  (fwCfgp->u16_osCoef11)      //5BB - os_coef_11
#define CFG_U16_OS_COEF_12                  (fwCfgp->u16_osCoef12)      //5BD - os_coef_12
#define CFG_U16_OS_COEF_13                  (fwCfgp->u16_osCoef13)      //5BF - os_coef_13
#define CFG_U16_OS_COEF_14                  (fwCfgp->u16_osCoef14)      //5C1 - os_coef_14
#define CFG_U16_OS_COEF_15                  (fwCfgp->u16_osCoef15)      //5C3 - os_coef_15
#define CFG_U16_OS_COEF_16                  (fwCfgp->u16_osCoef16)      //5C5 - os_coef_16
#define CFG_U16_OS_COEF_17                  (fwCfgp->u16_osCoef17)      //5C7 - os_coef_17
#define CFG_U16_OS_COEF_18                  (fwCfgp->u16_osCoef18)      //5C9 - os_coef_18
#define CFG_U16_OS_COEF_19                  (fwCfgp->u16_osCoef19)      //5CB - os_coef_19
#define CFG_U16_OS_COEF_20                  (fwCfgp->u16_osCoef20)      //5CD - os_coef_20
#define CFG_U16_OS_COEF_21                  (fwCfgp->u16_osCoef21)      //5CF - os_coef_21
#define CFG_U16_OS_COEF_22                  (fwCfgp->u16_osCoef22)      //5D1 - os_coef_22
#define CFG_U16_OS_COEF_23                  (fwCfgp->u16_osCoef23)      //5D3 - os_coef_23
#define CFG_U16_OS_COEF_24                  (fwCfgp->u16_osCoef24)      //5D5 - os_coef_24
#define CFG_U16_OS_COEF_25                  (fwCfgp->u16_osCoef25)      //5D7 - os_coef_25
#define CFG_U16_OS_COEF_26                  (fwCfgp->u16_osCoef26)      //5D9 - os_coef_26
#define CFG_U16_OS_COEF_27                  (fwCfgp->u16_osCoef27)      //5DB - os_coef_27
#define CFG_U16_OS_COEF_28                  (fwCfgp->u16_osCoef28)      //5DD - os_coef_28
#define CFG_U16_OS_COEF_29                  (fwCfgp->u16_osCoef29)      //5DF - os_coef_29
#define CFG_U16_OS_COEF_30                  (fwCfgp->u16_osCoef30)      //5E1 - os_coef_30
#define CFG_U16_OS_COEF_31                  (fwCfgp->u16_osCoef31)      //5E3 - os_coef_31
#define CFG_U16_OS_COEF_32                  (fwCfgp->u16_osCoef32)      //5E5 - os_coef_32
#define CFG_U16_OS_COEF_33                  (fwCfgp->u16_osCoef33)      //5E7 - os_coef_33
#define CFG_U16_OS_COEF_34                  (fwCfgp->u16_osCoef34)      //5E9 - os_coef_34
#define CFG_U16_OS_COEF_35                  (fwCfgp->u16_osCoef35)      //5EB - os_coef_35
#define CFG_U16_OS_COEF_36                  (fwCfgp->u16_osCoef36)      //5ED - os_coef_36
#define CFG_U16_OS_COEF_37                  (fwCfgp->u16_osCoef37)      //5EF - os_coef_37
#define CFG_U16_OS_COEF_38                  (fwCfgp->u16_osCoef38)      //5F1 - os_coef_38
#define CFG_U16_OS_COEF_39                  (fwCfgp->u16_osCoef39)      //5F3 - os_coef_39
#define CFG_U16_OS_COEF_40                  (fwCfgp->u16_osCoef40)      //5F5 - os_coef_40
#define CFG_U16_OS_COEF_41                  (fwCfgp->u16_osCoef41)      //5F7 - os_coef_41
#define CFG_U16_OS_COEF_42                  (fwCfgp->u16_osCoef42)      //5F9 - os_coef_42
#define CFG_U16_OS_COEF_43                  (fwCfgp->u16_osCoef43)      //5FB - os_coef_43
#define CFG_U16_OS_COEF_44                  (fwCfgp->u16_osCoef44)      //5FD - os_coef_44
#define CFG_U16_OS_COEF_45                  (fwCfgp->u16_osCoef45)      //5FF - os_coef_45
#define CFG_U16_OS_COEF_46                  (fwCfgp->u16_osCoef46)      //601 - os_coef_46
#define CFG_U16_OS_COEF_47                  (fwCfgp->u16_osCoef47)      //603 - os_coef_47
#define CFG_U16_OS_COEF_48                  (fwCfgp->u16_osCoef48)      //605 - os_coef_48
#define CFG_U16_OS_COEF_49                  (fwCfgp->u16_osCoef49)      //607 - os_coef_49
#define CFG_U16_OS_COEF_50                  (fwCfgp->u16_osCoef50)      //609 - os_coef_50
#define CFG_U16_OS_COEF_51                  (fwCfgp->u16_osCoef51)      //60B - os_coef_51
#define CFG_U16_OS_COEF_52                  (fwCfgp->u16_osCoef52)      //60D - os_coef_52
#define CFG_U16_OS_COEF_53                  (fwCfgp->u16_osCoef53)      //60F - os_coef_53
#define CFG_U16_OS_COEF_54                  (fwCfgp->u16_osCoef54)      //611 - os_coef_54
#define CFG_U16_OS_COEF_55                  (fwCfgp->u16_osCoef55)      //613 - os_coef_55
#define CFG_U16_OS_COEF_56                  (fwCfgp->u16_osCoef56)      //615 - os_coef_56
#define CFG_U16_OS_COEF_57                  (fwCfgp->u16_osCoef57)      //617 - os_coef_57
#define CFG_U16_OS_COEF_58                  (fwCfgp->u16_osCoef58)      //619 - os_coef_58
#define CFG_U16_OS_COEF_59                  (fwCfgp->u16_osCoef59)      //61B - os_coef_59
#define CFG_U16_OS_COEF_60                  (fwCfgp->u16_osCoef60)      //61D - os_coef_60
#define CFG_U16_OS_COEF_61                  (fwCfgp->u16_osCoef61)      //61F - os_coef_61
#define CFG_U16_OS_COEF_62                  (fwCfgp->u16_osCoef62)      //621 - os_coef_62
#define CFG_U16_OS_COEF_63                  (fwCfgp->u16_osCoef63)      //623 - os_coef_63
#define CFG_B1_SS_DET_CP_SEL                (fwCfgp->b1_ssDetCpSel)     //627 - ss_det_afe_cfg0
#define CFG_B1_SS_DET_TX_CP_SEL             (fwCfgp->b1_ssDetTxCpSel)   //627 - ss_det_afe_cfg0
#define CFG_B1_SS_DET_ACX_EN                (fwCfgp->b1_ssDetAcxEn)     //627 - ss_det_afe_cfg0
#define CFG_B1_SS_DET_DATA_FILTER_EN        (fwCfgp->b1_ssDetDataFilterEn)  //627 - ss_det_afe_cfg0
#define CFG_B1_SS_DET_OS_FILTER_EN          (fwCfgp->b1_ssDetOsFilterEn)    //627 - ss_det_afe_cfg0
#define CFG_B1_SS_DET_AZ_EN                 (fwCfgp->b1_ssDetAzEn)      //627 - ss_det_afe_cfg0
#define CFG_B1_SS_DET_IOFF_EN               (fwCfgp->b1_ssDetIoffEn)    //628 - ss_det_afe_cfg1
#define CFG_B2_SS_DET_IOFF_STRENGTH         (fwCfgp->b2_ssDetIoffStrength)  //628 - ss_det_afe_cfg1
#define CFG_B1_SS_DET_FAST_SCAN_EN          (fwCfgp->b1_ssDetFastScanEn)    //628 - ss_det_afe_cfg1
#define CFG_B2_SS_DET_DATA_MODE_SEL         (fwCfgp->b2_ssDetDataModeSel)   //628 - ss_det_afe_cfg1
#define CFG_B1_SS_DET_C2I_SINGLE_END_EN     (fwCfgp->b1_ssDetC2iSingleEndEn)    //629 - ss_det_afe_cfg2
#define CFG_B1_SS_DET_C2I_FLOAT_EN          (fwCfgp->b1_ssDetC2iFloatEn)    //629 - ss_det_afe_cfg2
#define CFG_B2_SS_DET_C2I_LC_SEL            (fwCfgp->b2_ssDetC2iLcSel)  //629 - ss_det_afe_cfg2
#define CFG_B1_SS_DET_BOOTS_STRAP_EN        (fwCfgp->b1_ssDetBootsStrapEn)  //629 - ss_det_afe_cfg2
#define CFG_U8_SS_DET_CP_TUNE               (fwCfgp->u8_ssDetCpTune)    //62A - ss_det_afe_cfg3
#define CFG_B4_SS_DET_CX_CNT                (fwCfgp->b4_ssDetCxCnt)     //62B - ss_det_afe_cfg4
#define CFG_U16_SS_DET_R_CYC                (fwCfgp->u16_ssDetRCyc)     //62D - ss_det_r_cyc
#define CFG_U16_SS_DET_T_CYC                (fwCfgp->u16_ssDetTCyc)     //62F - ss_det_t_cyc
#define CFG_U16_SS_DET_RL_CYC               (fwCfgp->u16_ssDetRlCyc)    //631 - ss_det_rl_cyc
#define CFG_U16_SS_DET_OS_DLY               (fwCfgp->u16_ssDetOsDly)    //633 - ss_det_os_dly
#define CFG_B1_SS_DET_F_IX_LO_RANGE         (fwCfgp->b1_ssDetFIxLoRange)    //635 - ss_det_f_ix_range_cfg_0
#define CFG_B4_SS_DET_F_IX0_RANGE           (fwCfgp->b4_ssDetFIx0Range) //635 - ss_det_f_ix_range_cfg_0
#define CFG_B4_SS_DET_F_IX1_RANGE           (fwCfgp->b4_ssDetFIx1Range) //636 - ss_det_f_ix_range_cfg_1
#define CFG_B4_SS_DET_F_IX2_RANGE           (fwCfgp->b4_ssDetFIx2Range) //636 - ss_det_f_ix_range_cfg_1
#define CFG_B1_SS_DET_S_IX_LO_RANGE         (fwCfgp->b1_ssDetSIxLoRange)    //637 - ss_det_s_ix_range_cfg_0
#define CFG_B4_SS_DET_S_IX0_RANGE           (fwCfgp->b4_ssDetSIx0Range) //637 - ss_det_s_ix_range_cfg_0
#define CFG_B4_SS_DET_S_IX1_RANGE           (fwCfgp->b4_ssDetSIx1Range) //638 - ss_det_s_ix_range_cfg_1
#define CFG_B4_SS_DET_S_IX2_RANGE           (fwCfgp->b4_ssDetSIx2Range) //638 - ss_det_s_ix_range_cfg_1
#define CFG_U8_SS_DET_HIGH_RES_ANALOG_ACC   (fwCfgp->u8_ssDetHighResAnalogAcc)  //639 - ss_det_high_res_prfl0
#define CFG_B4_SS_DET_HIGH_RES_DIG_ACC      (fwCfgp->b4_ssDetHighResDigAcc) //63A - ss_det_high_res_prfl1
#define CFG_B2_SS_DET_HIGH_RES_F_CA         (fwCfgp->b2_ssDetHighResFCa)    //63B - ss_det_high_res_prfl2
#define CFG_B2_SS_DET_HIGH_RES_F_DIV        (fwCfgp->b2_ssDetHighResFDiv)   //63B - ss_det_high_res_prfl2
#define CFG_B2_SS_DET_HIGH_RES_S_CA         (fwCfgp->b2_ssDetHighResSCa)    //63B - ss_det_high_res_prfl2
#define CFG_B2_SS_DET_HIGH_RES_S_DIV        (fwCfgp->b2_ssDetHighResSDiv)   //63B - ss_det_high_res_prfl2
#define CFG_B5_SS_DET_HIGH_RES_OS_CNT       (fwCfgp->b5_ssDetHighResOsCnt)  //63C - ss_det_high_res_prfl3
#define CFG_B3_SS_DET_HIGH_RES_DUMMY_SAMPLE_CNT (fwCfgp->b3_ssDetHighResDummySampleCnt) //63C - ss_det_high_res_prfl3
#define CFG_B5_SS_DET_HIGH_RES_OS_ACC       (fwCfgp->b5_ssDetHighResOsAcc)  //63D - ss_det_high_res_prfl4
#define CFG_U16_SS_DET_HIGH_RES_ACC_RESET   (fwCfgp->u16_ssDetHighResAccReset)  //63F - ss_det_high_res_prfl6
#define CFG_U8_GES_DBLTAP_1ST_TAP_LEAVE_TO  (fwCfgp->u8_gesDbltap1stTapLeaveTo) //645 - ges_dbltap_1st_tap_leave_to
#define CFG_U8_GES_DBLTAP_2ND_TAP_ENTER_TO  (fwCfgp->u8_gesDbltap2ndTapEnterTo) //646 - ges_dbltap_2nd_tap_enter_to
#define CFG_U8_GES_DBLTAP_2ND_TAP_LEAVE_TO  (fwCfgp->u8_gesDbltap2ndTapLeaveTo) //647 - ges_dbltap_2nd_tap_leave_to
#define CFG_U8_GES_DBLTAP_BOUNDARY_SKIP_X   (fwCfgp->u8_gesDbltapBoundarySkipX) //648 - ges_dbltap_boundary_skip_x
#define CFG_U8_GES_DBLTAP_BOUNDARY_SKIP_Y   (fwCfgp->u8_gesDbltapBoundarySkipY) //649 - ges_dbltap_boundary_skip_y
#define CFG_U8_GES_DBLTAP_TCH_AREA_MAX      (fwCfgp->u8_gesDbltapTchAreaMax)    //64A - ges_dbltap_tch_area_max
#define CFG_U8_GES_DBLTAP_AREA_DIFF_THRES   (fwCfgp->u8_gesDbltapAreaDiffThres) //64B - ges_dbltap_area_diff_thres
#define CFG_U8_GES_DBLTAP_COOR_DIST_THRES   (fwCfgp->u8_gesDbltapCoorDistThres) //64C - ges_dbltap_coor_dist_thres
#define CFG_U8_GES_SHP_TCH_TO               (fwCfgp->u8_gesShpTchTo)    //64D - ges_shp_tch_to
#define CFG_U8_GES_SHP_TCH_AREA_MAX         (fwCfgp->u8_gesShpTchAreaMax)   //64E - ges_shp_tch_area_max
#define CFG_U8_GES_SHP_LINE_MIN_INPUT       (fwCfgp->u8_gesShpLineMinInput) //64F - ges_shp_line_min_input
#define CFG_U8_GES_SHP_HLINE_MIN_DELTA_X    (fwCfgp->u8_gesShpHlineMinDeltaX)   //650 - ges_shp_hline_min_delta_x
#define CFG_U8_GES_SHP_HLINE_MAX_DELTA_Y    (fwCfgp->u8_gesShpHlineMaxDeltaY)   //651 - ges_shp_hline_max_delta_y
#define CFG_U8_GES_SHP_VLINE_MAX_DELTA_X    (fwCfgp->u8_gesShpVlineMaxDeltaX)   //652 - ges_shp_vline_max_delta_x
#define CFG_U8_GES_SHP_VLINE_MIN_DELTA_Y    (fwCfgp->u8_gesShpVlineMinDeltaY)   //653 - ges_shp_vline_min_delta_y
#define CFG_U8_GES_SHP_AVG_LINE_ERR_THRES   (fwCfgp->u8_gesShpAvgLineErrThres)  //654 - ges_shp_avg_line_err_thres
#define CFG_U8_GES_SHP_MAX_LINE_ERR_THRES   (fwCfgp->u8_gesShpMaxLineErrThres)  //655 - ges_shp_max_line_err_thres
#define CFG_B1_GES_SHP_LTR_ORIENTV_EN       (fwCfgp->b1_gesShpLtrOrientvEn) //656 - ges_shp_ltr_cfg
#define CFG_U8_GES_SHP_LTR_MIN_INPUT        (fwCfgp->u8_gesShpLtrMinInput)  //657 - ges_shp_ltr_min_input
#define CFG_U8_GES_SHP_LTR_MIN_DELTA_X      (fwCfgp->u8_gesShpLtrMinDeltaX) //658 - ges_shp_ltr_min_delta_x
#define CFG_U8_GES_SHP_LTR_MIN_DELTA_Y      (fwCfgp->u8_gesShpLtrMinDeltaY) //659 - ges_shp_ltr_min_delta_y
#define CFG_B4_GES_SHP_V2H_MAX_RATIO        (fwCfgp->b4_gesShpV2hMaxRatio)  //65A - ges_shp_ltr_aspect_ratio_chk
#define CFG_B4_GES_SHP_H2V_MAX_RATIO        (fwCfgp->b4_gesShpH2vMaxRatio)  //65A - ges_shp_ltr_aspect_ratio_chk
#define CFG_U8_GES_SHP_PRED_MATCH_THRES     (fwCfgp->u8_gesShpPredMatchThres)   //65B - ges_shp_pred_match_thres
#define CFG_U8_GES_SHP_PRED_DIR_ERR_THRES   (fwCfgp->u8_gesShpPredDirErrThres)  //65C - ges_shp_pred_dir_err_thres
#define CFG_B1_GES_SHP_RPT_TRACE_EN         (fwCfgp->b1_gesShpRptTraceEn)   //65D - ges_shp_rpt_cfg
#define CFG_U8_GES_SHP_RPT_TRACE_MIN        (fwCfgp->u8_gesShpRptTraceMin)  //65E - ges_shp_rpt_trace_min
#define CFG_U8_GES_SHP_RPT_TRACE_MAX        (fwCfgp->u8_gesShpRptTraceMax)  //65F - ges_shp_rpt_trace_max
#define CFG_U8_GES_SHP_C_START_END_DIST_THRES   (fwCfgp->u8_gesShpCStartEndDistThres)   //661 - ges_shp_c_start_end_dist_thres
#define CFG_U8_FGR_THUMB_XY_WGH_THRES       (fwCfgp->u8_fgrThumbXyWghThres) //664 - fgr_thumb_xy_wgh_thres
#define CFG_B4_MIN_FGR_THUMB_XY_WGH         (fwCfgp->b4_minFgrThumbXyWgh)   //665 - fgr_thumb_xy_wgh
#define CFG_B4_MAX_FGR_THUMB_XY_WGH         (fwCfgp->b4_maxFgrThumbXyWgh)   //665 - fgr_thumb_xy_wgh
#define CFG_U16_MIN_FGR_THUMB_XY_SPEED      (fwCfgp->u16_minFgrThumbXySpeed)    //666 - min_fgr_thumb_xy_speed
#define CFG_U16_MAX_FGR_THUMB_XY_SPEED      (fwCfgp->u16_maxFgrThumbXySpeed)    //668 - max_fgr_thumb_xy_speed
#define CFG_U8_FGR_THUMB_XY_WGH_GAME_THRES  (fwCfgp->u8_fgrThumbXyWghGameThres) //66A - fgr_thumb_xy_wgh_game_thres
#define CFG_B4_MIN_FGR_THUMB_XY_WGH_GAME    (fwCfgp->b4_minFgrThumbXyWghGame)   //66B - fgr_thumb_xy_wgh_game
#define CFG_B4_MAX_FGR_THUMB_XY_WGH_GAME    (fwCfgp->b4_maxFgrThumbXyWghGame)   //66B - fgr_thumb_xy_wgh_game
#define CFG_B4_DEC_THUMB_SPEED_IIR_WGH      (fwCfgp->b4_decThumbSpeedIirWgh)    //66C - thumb_speed_iir_wgh
#define CFG_B4_INC_THUMB_SPEED_IIR_WGH      (fwCfgp->b4_incThumbSpeedIirWgh)    //66C - thumb_speed_iir_wgh
#define CFG_B1_1D_GRV_CHK_EN                (fwCfgp->b1_1dGrvChkEn)     //670 - 1d_grv_cfg
#define CFG_B1_1D_GRV_MTOL_EN               (fwCfgp->b1_1dGrvMtolEn)    //670 - 1d_grv_cfg
#define CFG_B1_1D_GRV_SS_PEAK_CHK_EN        (fwCfgp->b1_1dGrvSsPeakChkEn)   //670 - 1d_grv_cfg
#define CFG_U16_1D_GRV_ISLND_THRES          (fwCfgp->u16_1dGrvIslndThres)   //671 - 1d_grv_islnd_thres
#define CFG_U8_1D_GRV_MIN_AREA              (fwCfgp->u8_1dGrvMinArea)   //673 - 1d_grv_min_area
#define CFG_U16_1D_GRV_MAX_ISLAND_SUM_STR   (fwCfgp->u16_1dGrvMaxIslandSumStr)  //674 - 1d_grv_max_island_sum_str
#define CFG_U8_1D_GRV_MAX_ISLAND_LEN        (fwCfgp->u8_1dGrvMaxIslandLen)  //676 - 1d_grv_max_island_len
#define CFG_U8_1D_DIAG_GRV_TOL              (fwCfgp->u8_1dDiagGrvTol)   //677 - 1d_diag_grv_tol
#define CFG_U16_1D_GRV_TOL                  (fwCfgp->u16_1dGrvTol)      //678 - 1d_grv_tol
#define CFG_B4_1D_GRV_TCH_BTW_CUTOFF_IDX    (fwCfgp->b4_1dGrvTchBtwCutoffIdx)   //67A - 1d_grv_tch_btw_cutoff_idx
#define CFG_U8_1D_GRV_TCH_MTOL_FTAP_CNT     (fwCfgp->u8_1dGrvTchMtolFtapCnt)    //67B - 1d_grv_tch_mtol_ftap_cnt
#define CFG_U8_1D_GRV_TCH_MTOL_FTAP_XY_TOL2 (fwCfgp->u8_1dGrvTchMtolFtapXyTol2) //67C - 1d_grv_tch_mtol_ftap_xy_tol2
#define CFG_U8_1D_GRV_TCH_MTOL_XY_TOL2      (fwCfgp->u8_1dGrvTchMtolXyTol2) //67D - 1d_grv_tch_mtol_xy_tol2
#define CFG_U8_1D_GRV_TCH_MTOL_XY_TOL1      (fwCfgp->u8_1dGrvTchMtolXyTol1) //67E - 1d_grv_tch_mtol_xy_tol1
#define CFG_B4_1D_GRV_TCH_MTOL_MIN_WGH      (fwCfgp->b4_1dGrvTchMtolMinWgh) //67F - 1d_grv_mtol_wgh
#define CFG_B4_1D_GRV_TCH_MTOL_MAX_WGH      (fwCfgp->b4_1dGrvTchMtolMaxWgh) //67F - 1d_grv_mtol_wgh
#define CFG_U8_MS_CMM_GROUP_RX_DISBLE_CNT_00    (fwCfgp->u8_msCmmGroupRxDisbleCnt00)    //682 - ms_cmm_group_rx_disble_cnt_00
#define CFG_U8_MS_CMM_GROUP_RX_DISBLE_CNT_01    (fwCfgp->u8_msCmmGroupRxDisbleCnt01)    //683 - ms_cmm_group_rx_disble_cnt_01
#define CFG_U8_MS_CMM_GROUP_RX_DISBLE_CNT_02    (fwCfgp->u8_msCmmGroupRxDisbleCnt02)    //684 - ms_cmm_group_rx_disble_cnt_02
#define CFG_U8_MS_CMM_GROUP_TX_CH_00        (fwCfgp->u8_msCmmGroupTxCh00)   //685 - ms_cmm_group_tx_ch_00
#define CFG_U8_MS_CMM_GROUP_TX_CH_01        (fwCfgp->u8_msCmmGroupTxCh01)   //686 - ms_cmm_group_tx_ch_01
#define CFG_U8_MS_CMM_GROUP_TX_CH_02        (fwCfgp->u8_msCmmGroupTxCh02)   //687 - ms_cmm_group_tx_ch_02
#define CFG_U16_OSCI_TRIM_FALL_CNT          (fwCfgp->u16_osciTrimFallCnt)   //688 - osci_trim_fall_cnt
#define CFG_U16_OSCI_TRIM_TIMER_CNT         (fwCfgp->u16_osciTrimTimerCnt)  //68A - osci_trim_timer_cnt
#define CFG_B1_AOFFSET_CA2_TRIM_EN          (fwCfgp->b1_aoffsetCa2TrimEn)   //68D - aoffset_ca2_cfg
#define CFG_B1_AOFFSET_CA2_DISABLE_CH_TRIM_EN   (fwCfgp->b1_aoffsetCa2DisableChTrimEn)  //68D - aoffset_ca2_cfg
#define CFG_U8_AOFFSET_CA2_FULL_MAX         (fwCfgp->u8_aoffsetCa2FullMax)  //68E - aoffset_ca2_full_max
#define CFG_U8_AOFFSET_CA2_FULL_MIN         (fwCfgp->u8_aoffsetCa2FullMin)  //68F - aoffset_ca2_full_min
#define CFG_U8_AOFFSET_CA2_HALF_MAX         (fwCfgp->u8_aoffsetCa2HalfMax)  //690 - aoffset_ca2_half_max
#define CFG_U8_AOFFSET_CA2_HALF_MIN         (fwCfgp->u8_aoffsetCa2HalfMin)  //691 - aoffset_ca2_half_min
#define CFG_U8_AOFFSET_CA2_QUAR_MAX         (fwCfgp->u8_aoffsetCa2QuarMax)  //692 - aoffset_ca2_quar_max
#define CFG_U8_AOFFSET_CA2_QUAR_MIN         (fwCfgp->u8_aoffsetCa2QuarMin)  //693 - aoffset_ca2_quar_min
#define CFG_U8_AOFFSET_CA2_TRIM_RETRY       (fwCfgp->u8_aoffsetCa2TrimRetry)    //694 - aoffset_ca2_trim_retry_cnt
#define CFG_U8_ADC_COEF_MS_SCR_CNT          (fwCfgp->u8_adcCoefMsScrCnt)    //697 - adc_coef_cfg0
#define CFG_U16_ADC_COEF_MS_SCR_OFFSET      (fwCfgp->u16_adcCoefMsScrOffset)    //698 - adc_coef_cfg1
#define CFG_U8_ADC_COEF_MS_SCR_NOISY_CNT    (fwCfgp->u8_adcCoefMsScrNoisyCnt)   //69A - adc_coef_cfg2
#define CFG_U16_ADC_COEF_MS_SCR_NOISY_OFFSET    (fwCfgp->u16_adcCoefMsScrNoisyOffset)   //69B - adc_coef_cfg3
#define CFG_U8_ADC_COEF_MS_SCR_LP_CNT       (fwCfgp->u8_adcCoefMsScrLpCnt)  //69D - adc_coef_cfg4
#define CFG_U16_ADC_COEF_MS_SCR_LP_OFFSET   (fwCfgp->u16_adcCoefMsScrLpOffset)  //69E - adc_coef_cfg5
#define CFG_U8_ADC_COEF_SS_TCH_CNT          (fwCfgp->u8_adcCoefSsTchCnt)    //6A0 - adc_coef_cfg6
#define CFG_U16_ADC_COEF_SS_TCH_OFFSET      (fwCfgp->u16_adcCoefSsTchOffset)    //6A1 - adc_coef_cfg7
#define CFG_U8_ADC_COEF_SS_DET_CNT          (fwCfgp->u8_adcCoefSsDetCnt)    //6A3 - adc_coef_cfg8
#define CFG_U16_ADC_COEF_SS_DET_OFFSET      (fwCfgp->u16_adcCoefSsDetOffset)    //6A4 - adc_coef_cfg9
#define CFG_U8_ADC_COEF_MS_KEY_CNT          (fwCfgp->u8_adcCoefMsKeyCnt)    //6A6 - adc_coef_cfg10
#define CFG_U16_ADC_COEF_MS_KEY_OFFSET      (fwCfgp->u16_adcCoefMsKeyOffset)    //6A7 - adc_coef_cfg11
#define CFG_U8_ADC_COEF_SS_FRCTCH_CNT       (fwCfgp->u8_adcCoefSsFrctchCnt) //6A9 - adc_coef_cfg12
#define CFG_U16_ADC_COEF_SS_FRCTCH_OFFSET   (fwCfgp->u16_adcCoefSsFrctchOffset) //6AA - adc_coef_cfg13
#define CFG_U8_ADC_COEF_MS_MULTI_ACC_CNT    (fwCfgp->u8_adcCoefMsMultiAccCnt)   //6AC - adc_coef_cfg14
#define CFG_U16_ADC_COEF_MS_MULTI_ACC_OFFSET    (fwCfgp->u16_adcCoefMsMultiAccOffset)   //6AD - adc_coef_cfg15
#define CFG_U8_ADC_COEF_MS_MULTI_ACC_NOISY_CNT  (fwCfgp->u8_adcCoefMsMultiAccNoisyCnt)  //6AF - adc_coef_cfg16
#define CFG_U16_ADC_COEF_MS_MULTI_ACC_NOISY_OFFSET  (fwCfgp->u16_adcCoefMsMultiAccNoisyOffset)  //6B0 - adc_coef_cfg17
#define CFG_U16_ADC_COEF_0                  (fwCfgp->u16_adcCoef0)      //6B2 - adc_coef_0
#define CFG_U16_ADC_COEF_1                  (fwCfgp->u16_adcCoef1)      //6B4 - adc_coef_1
#define CFG_U16_ADC_COEF_2                  (fwCfgp->u16_adcCoef2)      //6B6 - adc_coef_2
#define CFG_U16_ADC_COEF_3                  (fwCfgp->u16_adcCoef3)      //6B8 - adc_coef_3
#define CFG_U16_ADC_COEF_4                  (fwCfgp->u16_adcCoef4)      //6BA - adc_coef_4
#define CFG_U16_ADC_COEF_5                  (fwCfgp->u16_adcCoef5)      //6BC - adc_coef_5
#define CFG_U16_ADC_COEF_6                  (fwCfgp->u16_adcCoef6)      //6BE - adc_coef_6
#define CFG_U16_ADC_COEF_7                  (fwCfgp->u16_adcCoef7)      //6C0 - adc_coef_7
#define CFG_U16_ADC_COEF_8                  (fwCfgp->u16_adcCoef8)      //6C2 - adc_coef_8
#define CFG_U16_ADC_COEF_9                  (fwCfgp->u16_adcCoef9)      //6C4 - adc_coef_9
#define CFG_U16_ADC_COEF_10                 (fwCfgp->u16_adcCoef10)     //6C6 - adc_coef_10
#define CFG_U16_ADC_COEF_11                 (fwCfgp->u16_adcCoef11)     //6C8 - adc_coef_11
#define CFG_U16_ADC_COEF_12                 (fwCfgp->u16_adcCoef12)     //6CA - adc_coef_12
#define CFG_U16_ADC_COEF_13                 (fwCfgp->u16_adcCoef13)     //6CC - adc_coef_13
#define CFG_U16_ADC_COEF_14                 (fwCfgp->u16_adcCoef14)     //6CE - adc_coef_14
#define CFG_U16_ADC_COEF_15                 (fwCfgp->u16_adcCoef15)     //6D0 - adc_coef_15
#define CFG_U16_ADC_COEF_16                 (fwCfgp->u16_adcCoef16)     //6D2 - adc_coef_16
#define CFG_U16_ADC_COEF_17                 (fwCfgp->u16_adcCoef17)     //6D4 - adc_coef_17
#define CFG_U16_ADC_COEF_18                 (fwCfgp->u16_adcCoef18)     //6D6 - adc_coef_18
#define CFG_U16_ADC_COEF_19                 (fwCfgp->u16_adcCoef19)     //6D8 - adc_coef_19
#define CFG_U16_ADC_COEF_20                 (fwCfgp->u16_adcCoef20)     //6DA - adc_coef_20
#define CFG_U16_ADC_COEF_21                 (fwCfgp->u16_adcCoef21)     //6DC - adc_coef_21
#define CFG_U16_ADC_COEF_22                 (fwCfgp->u16_adcCoef22)     //6DE - adc_coef_22
#define CFG_U16_ADC_COEF_23                 (fwCfgp->u16_adcCoef23)     //6E0 - adc_coef_23
#define CFG_U16_ADC_COEF_24                 (fwCfgp->u16_adcCoef24)     //6E2 - adc_coef_24
#define CFG_U16_ADC_COEF_25                 (fwCfgp->u16_adcCoef25)     //6E4 - adc_coef_25
#define CFG_U16_ADC_COEF_26                 (fwCfgp->u16_adcCoef26)     //6E6 - adc_coef_26
#define CFG_U16_ADC_COEF_27                 (fwCfgp->u16_adcCoef27)     //6E8 - adc_coef_27
#define CFG_U16_ADC_COEF_28                 (fwCfgp->u16_adcCoef28)     //6EA - adc_coef_28
#define CFG_U16_ADC_COEF_29                 (fwCfgp->u16_adcCoef29)     //6EC - adc_coef_29
#define CFG_U16_ADC_COEF_30                 (fwCfgp->u16_adcCoef30)     //6EE - adc_coef_30
#define CFG_U16_ADC_COEF_31                 (fwCfgp->u16_adcCoef31)     //6F0 - adc_coef_31
#define CFG_U16_ADC_COEF_32                 (fwCfgp->u16_adcCoef32)     //6F2 - adc_coef_32
#define CFG_U16_ADC_COEF_33                 (fwCfgp->u16_adcCoef33)     //6F4 - adc_coef_33
#define CFG_U16_ADC_COEF_34                 (fwCfgp->u16_adcCoef34)     //6F6 - adc_coef_34
#define CFG_U16_ADC_COEF_35                 (fwCfgp->u16_adcCoef35)     //6F8 - adc_coef_35
#define CFG_U16_ADC_COEF_36                 (fwCfgp->u16_adcCoef36)     //6FA - adc_coef_36
#define CFG_U16_ADC_COEF_37                 (fwCfgp->u16_adcCoef37)     //6FC - adc_coef_37
#define CFG_U16_ADC_COEF_38                 (fwCfgp->u16_adcCoef38)     //6FE - adc_coef_38
#define CFG_U16_ADC_COEF_39                 (fwCfgp->u16_adcCoef39)     //700 - adc_coef_39
#define CFG_U16_ADC_COEF_40                 (fwCfgp->u16_adcCoef40)     //702 - adc_coef_40
#define CFG_U16_ADC_COEF_41                 (fwCfgp->u16_adcCoef41)     //704 - adc_coef_41
#define CFG_U16_ADC_COEF_42                 (fwCfgp->u16_adcCoef42)     //706 - adc_coef_42
#define CFG_U16_ADC_COEF_43                 (fwCfgp->u16_adcCoef43)     //708 - adc_coef_43
#define CFG_U16_ADC_COEF_44                 (fwCfgp->u16_adcCoef44)     //70A - adc_coef_44
#define CFG_U16_ADC_COEF_45                 (fwCfgp->u16_adcCoef45)     //70C - adc_coef_45
#define CFG_U16_ADC_COEF_46                 (fwCfgp->u16_adcCoef46)     //70E - adc_coef_46
#define CFG_U16_ADC_COEF_47                 (fwCfgp->u16_adcCoef47)     //710 - adc_coef_47
#define CFG_U16_ADC_COEF_48                 (fwCfgp->u16_adcCoef48)     //712 - adc_coef_48
#define CFG_U16_ADC_COEF_49                 (fwCfgp->u16_adcCoef49)     //714 - adc_coef_49
#define CFG_U16_ADC_COEF_50                 (fwCfgp->u16_adcCoef50)     //716 - adc_coef_50
#define CFG_U16_ADC_COEF_51                 (fwCfgp->u16_adcCoef51)     //718 - adc_coef_51
#define CFG_U16_ADC_COEF_52                 (fwCfgp->u16_adcCoef52)     //71A - adc_coef_52
#define CFG_U16_ADC_COEF_53                 (fwCfgp->u16_adcCoef53)     //71C - adc_coef_53
#define CFG_U16_ADC_COEF_54                 (fwCfgp->u16_adcCoef54)     //71E - adc_coef_54
#define CFG_U16_ADC_COEF_55                 (fwCfgp->u16_adcCoef55)     //720 - adc_coef_55
#define CFG_U16_ADC_COEF_56                 (fwCfgp->u16_adcCoef56)     //722 - adc_coef_56
#define CFG_U16_ADC_COEF_57                 (fwCfgp->u16_adcCoef57)     //724 - adc_coef_57
#define CFG_U16_ADC_COEF_58                 (fwCfgp->u16_adcCoef58)     //726 - adc_coef_58
#define CFG_U16_ADC_COEF_59                 (fwCfgp->u16_adcCoef59)     //728 - adc_coef_59
#define CFG_U16_ADC_COEF_60                 (fwCfgp->u16_adcCoef60)     //72A - adc_coef_60
#define CFG_U16_ADC_COEF_61                 (fwCfgp->u16_adcCoef61)     //72C - adc_coef_61
#define CFG_U16_ADC_COEF_62                 (fwCfgp->u16_adcCoef62)     //72E - adc_coef_62
#define CFG_U16_ADC_COEF_63                 (fwCfgp->u16_adcCoef63)     //730 - adc_coef_63
#define CFG_U16_ADC_COEF_64                 (fwCfgp->u16_adcCoef64)     //732 - adc_coef_64
#define CFG_U16_ADC_COEF_65                 (fwCfgp->u16_adcCoef65)     //734 - adc_coef_65
#define CFG_U16_ADC_COEF_66                 (fwCfgp->u16_adcCoef66)     //736 - adc_coef_66
#define CFG_U16_ADC_COEF_67                 (fwCfgp->u16_adcCoef67)     //738 - adc_coef_67
#define CFG_U16_ADC_COEF_68                 (fwCfgp->u16_adcCoef68)     //73A - adc_coef_68
#define CFG_U16_ADC_COEF_69                 (fwCfgp->u16_adcCoef69)     //73C - adc_coef_69
#define CFG_U16_ADC_COEF_70                 (fwCfgp->u16_adcCoef70)     //73E - adc_coef_70
#define CFG_U16_ADC_COEF_71                 (fwCfgp->u16_adcCoef71)     //740 - adc_coef_71
#define CFG_U16_ADC_COEF_72                 (fwCfgp->u16_adcCoef72)     //742 - adc_coef_72
#define CFG_U16_ADC_COEF_73                 (fwCfgp->u16_adcCoef73)     //744 - adc_coef_73
#define CFG_U16_ADC_COEF_74                 (fwCfgp->u16_adcCoef74)     //746 - adc_coef_74
#define CFG_U16_ADC_COEF_75                 (fwCfgp->u16_adcCoef75)     //748 - adc_coef_75
#define CFG_U16_ADC_COEF_76                 (fwCfgp->u16_adcCoef76)     //74A - adc_coef_76
#define CFG_U16_ADC_COEF_77                 (fwCfgp->u16_adcCoef77)     //74C - adc_coef_77
#define CFG_U16_ADC_COEF_78                 (fwCfgp->u16_adcCoef78)     //74E - adc_coef_78
#define CFG_U16_ADC_COEF_79                 (fwCfgp->u16_adcCoef79)     //750 - adc_coef_79
#define CFG_U16_ADC_COEF_80                 (fwCfgp->u16_adcCoef80)     //752 - adc_coef_80
#define CFG_U16_ADC_COEF_81                 (fwCfgp->u16_adcCoef81)     //754 - adc_coef_81
#define CFG_U16_ADC_COEF_82                 (fwCfgp->u16_adcCoef82)     //756 - adc_coef_82
#define CFG_U16_ADC_COEF_83                 (fwCfgp->u16_adcCoef83)     //758 - adc_coef_83
#define CFG_U16_ADC_COEF_84                 (fwCfgp->u16_adcCoef84)     //75A - adc_coef_84
#define CFG_U16_ADC_COEF_85                 (fwCfgp->u16_adcCoef85)     //75C - adc_coef_85
#define CFG_U16_ADC_COEF_86                 (fwCfgp->u16_adcCoef86)     //75E - adc_coef_86
#define CFG_U16_ADC_COEF_87                 (fwCfgp->u16_adcCoef87)     //760 - adc_coef_87
#define CFG_U16_ADC_COEF_88                 (fwCfgp->u16_adcCoef88)     //762 - adc_coef_88
#define CFG_U16_ADC_COEF_89                 (fwCfgp->u16_adcCoef89)     //764 - adc_coef_89
#define CFG_U16_ADC_COEF_90                 (fwCfgp->u16_adcCoef90)     //766 - adc_coef_90
#define CFG_U16_ADC_COEF_91                 (fwCfgp->u16_adcCoef91)     //768 - adc_coef_91
#define CFG_U16_ADC_COEF_92                 (fwCfgp->u16_adcCoef92)     //76A - adc_coef_92
#define CFG_U16_ADC_COEF_93                 (fwCfgp->u16_adcCoef93)     //76C - adc_coef_93
#define CFG_U16_ADC_COEF_94                 (fwCfgp->u16_adcCoef94)     //76E - adc_coef_94
#define CFG_U16_ADC_COEF_95                 (fwCfgp->u16_adcCoef95)     //770 - adc_coef_95
#define CFG_U16_ADC_COEF_96                 (fwCfgp->u16_adcCoef96)     //772 - adc_coef_96
#define CFG_U16_ADC_COEF_97                 (fwCfgp->u16_adcCoef97)     //774 - adc_coef_97
#define CFG_U16_ADC_COEF_98                 (fwCfgp->u16_adcCoef98)     //776 - adc_coef_98
#define CFG_U16_ADC_COEF_99                 (fwCfgp->u16_adcCoef99)     //778 - adc_coef_99
#define CFG_U16_ADC_COEF_100                (fwCfgp->u16_adcCoef100)    //77A - adc_coef_100
#define CFG_U16_ADC_COEF_101                (fwCfgp->u16_adcCoef101)    //77C - adc_coef_101
#define CFG_U16_ADC_COEF_102                (fwCfgp->u16_adcCoef102)    //77E - adc_coef_102
#define CFG_U16_ADC_COEF_103                (fwCfgp->u16_adcCoef103)    //780 - adc_coef_103
#define CFG_U16_ADC_COEF_104                (fwCfgp->u16_adcCoef104)    //782 - adc_coef_104
#define CFG_U16_ADC_COEF_105                (fwCfgp->u16_adcCoef105)    //784 - adc_coef_105
#define CFG_U16_ADC_COEF_106                (fwCfgp->u16_adcCoef106)    //786 - adc_coef_106
#define CFG_U16_ADC_COEF_107                (fwCfgp->u16_adcCoef107)    //788 - adc_coef_107
#define CFG_U16_ADC_COEF_108                (fwCfgp->u16_adcCoef108)    //78A - adc_coef_108
#define CFG_U16_ADC_COEF_109                (fwCfgp->u16_adcCoef109)    //78C - adc_coef_109
#define CFG_U16_ADC_COEF_110                (fwCfgp->u16_adcCoef110)    //78E - adc_coef_110
#define CFG_U16_ADC_COEF_111                (fwCfgp->u16_adcCoef111)    //790 - adc_coef_111
#define CFG_U16_ADC_COEF_112                (fwCfgp->u16_adcCoef112)    //792 - adc_coef_112
#define CFG_U16_ADC_COEF_113                (fwCfgp->u16_adcCoef113)    //794 - adc_coef_113
#define CFG_U16_ADC_COEF_114                (fwCfgp->u16_adcCoef114)    //796 - adc_coef_114
#define CFG_U16_ADC_COEF_115                (fwCfgp->u16_adcCoef115)    //798 - adc_coef_115
#define CFG_U16_ADC_COEF_116                (fwCfgp->u16_adcCoef116)    //79A - adc_coef_116
#define CFG_U16_ADC_COEF_117                (fwCfgp->u16_adcCoef117)    //79C - adc_coef_117
#define CFG_U16_ADC_COEF_118                (fwCfgp->u16_adcCoef118)    //79E - adc_coef_118
#define CFG_U16_ADC_COEF_119                (fwCfgp->u16_adcCoef119)    //7A0 - adc_coef_119
#define CFG_U16_ADC_COEF_120                (fwCfgp->u16_adcCoef120)    //7A2 - adc_coef_120
#define CFG_U16_ADC_COEF_121                (fwCfgp->u16_adcCoef121)    //7A4 - adc_coef_121
#define CFG_U16_ADC_COEF_122                (fwCfgp->u16_adcCoef122)    //7A6 - adc_coef_122
#define CFG_U16_ADC_COEF_123                (fwCfgp->u16_adcCoef123)    //7A8 - adc_coef_123
#define CFG_U16_ADC_COEF_124                (fwCfgp->u16_adcCoef124)    //7AA - adc_coef_124
#define CFG_U16_ADC_COEF_125                (fwCfgp->u16_adcCoef125)    //7AC - adc_coef_125
#define CFG_U16_ADC_COEF_126                (fwCfgp->u16_adcCoef126)    //7AE - adc_coef_126
#define CFG_U16_ADC_COEF_127                (fwCfgp->u16_adcCoef127)    //7B0 - adc_coef_127
#define CFG_U16_ADC_COEF_128                (fwCfgp->u16_adcCoef128)    //7B2 - adc_coef_128
#define CFG_U16_ADC_COEF_129                (fwCfgp->u16_adcCoef129)    //7B4 - adc_coef_129
#define CFG_U16_ADC_COEF_130                (fwCfgp->u16_adcCoef130)    //7B6 - adc_coef_130
#define CFG_U16_ADC_COEF_131                (fwCfgp->u16_adcCoef131)    //7B8 - adc_coef_131
#define CFG_U16_ADC_COEF_132                (fwCfgp->u16_adcCoef132)    //7BA - adc_coef_132
#define CFG_U16_ADC_COEF_133                (fwCfgp->u16_adcCoef133)    //7BC - adc_coef_133
#define CFG_U16_ADC_COEF_134                (fwCfgp->u16_adcCoef134)    //7BE - adc_coef_134
#define CFG_U16_ADC_COEF_135                (fwCfgp->u16_adcCoef135)    //7C0 - adc_coef_135
#define CFG_U16_ADC_COEF_136                (fwCfgp->u16_adcCoef136)    //7C2 - adc_coef_136
#define CFG_U16_ADC_COEF_137                (fwCfgp->u16_adcCoef137)    //7C4 - adc_coef_137
#define CFG_U16_ADC_COEF_138                (fwCfgp->u16_adcCoef138)    //7C6 - adc_coef_138
#define CFG_U16_ADC_COEF_139                (fwCfgp->u16_adcCoef139)    //7C8 - adc_coef_139
#define CFG_U16_ADC_COEF_140                (fwCfgp->u16_adcCoef140)    //7CA - adc_coef_140
#define CFG_U16_ADC_COEF_141                (fwCfgp->u16_adcCoef141)    //7CC - adc_coef_141
#define CFG_U16_ADC_COEF_142                (fwCfgp->u16_adcCoef142)    //7CE - adc_coef_142
#define CFG_U16_ADC_COEF_143                (fwCfgp->u16_adcCoef143)    //7D0 - adc_coef_143
#define CFG_U16_ADC_COEF_144                (fwCfgp->u16_adcCoef144)    //7D2 - adc_coef_144
#define CFG_U16_ADC_COEF_145                (fwCfgp->u16_adcCoef145)    //7D4 - adc_coef_145
#define CFG_U16_ADC_COEF_146                (fwCfgp->u16_adcCoef146)    //7D6 - adc_coef_146
#define CFG_U16_ADC_COEF_147                (fwCfgp->u16_adcCoef147)    //7D8 - adc_coef_147
#define CFG_U16_ADC_COEF_148                (fwCfgp->u16_adcCoef148)    //7DA - adc_coef_148
#define CFG_U16_ADC_COEF_149                (fwCfgp->u16_adcCoef149)    //7DC - adc_coef_149
#define CFG_U16_ADC_COEF_150                (fwCfgp->u16_adcCoef150)    //7DE - adc_coef_150
#define CFG_U16_ADC_COEF_151                (fwCfgp->u16_adcCoef151)    //7E0 - adc_coef_151
#define CFG_U16_ADC_COEF_152                (fwCfgp->u16_adcCoef152)    //7E2 - adc_coef_152
#define CFG_U16_ADC_COEF_153                (fwCfgp->u16_adcCoef153)    //7E4 - adc_coef_153
#define CFG_U16_ADC_COEF_154                (fwCfgp->u16_adcCoef154)    //7E6 - adc_coef_154
#define CFG_U16_ADC_COEF_155                (fwCfgp->u16_adcCoef155)    //7E8 - adc_coef_155
#define CFG_U16_ADC_COEF_156                (fwCfgp->u16_adcCoef156)    //7EA - adc_coef_156
#define CFG_U16_ADC_COEF_157                (fwCfgp->u16_adcCoef157)    //7EC - adc_coef_157
#define CFG_U16_ADC_COEF_158                (fwCfgp->u16_adcCoef158)    //7EE - adc_coef_158
#define CFG_U16_ADC_COEF_159                (fwCfgp->u16_adcCoef159)    //7F0 - adc_coef_159
#define CFG_U16_ADC_COEF_160                (fwCfgp->u16_adcCoef160)    //7F2 - adc_coef_160
#define CFG_U16_ADC_COEF_161                (fwCfgp->u16_adcCoef161)    //7F4 - adc_coef_161
#define CFG_U16_ADC_COEF_162                (fwCfgp->u16_adcCoef162)    //7F6 - adc_coef_162
#define CFG_U16_ADC_COEF_163                (fwCfgp->u16_adcCoef163)    //7F8 - adc_coef_163
#define CFG_U16_ADC_COEF_164                (fwCfgp->u16_adcCoef164)    //7FA - adc_coef_164
#define CFG_U16_ADC_COEF_165                (fwCfgp->u16_adcCoef165)    //7FC - adc_coef_165
#define CFG_U16_ADC_COEF_166                (fwCfgp->u16_adcCoef166)    //7FE - adc_coef_166
#define CFG_U16_ADC_COEF_167                (fwCfgp->u16_adcCoef167)    //800 - adc_coef_167
#define CFG_U16_ADC_COEF_168                (fwCfgp->u16_adcCoef168)    //802 - adc_coef_168
#define CFG_U16_ADC_COEF_169                (fwCfgp->u16_adcCoef169)    //804 - adc_coef_169
#define CFG_U16_ADC_COEF_170                (fwCfgp->u16_adcCoef170)    //806 - adc_coef_170
#define CFG_U16_ADC_COEF_171                (fwCfgp->u16_adcCoef171)    //808 - adc_coef_171
#define CFG_U16_ADC_COEF_172                (fwCfgp->u16_adcCoef172)    //80A - adc_coef_172
#define CFG_U16_ADC_COEF_173                (fwCfgp->u16_adcCoef173)    //80C - adc_coef_173
#define CFG_U16_ADC_COEF_174                (fwCfgp->u16_adcCoef174)    //80E - adc_coef_174
#define CFG_U16_ADC_COEF_175                (fwCfgp->u16_adcCoef175)    //810 - adc_coef_175
#define CFG_U16_ADC_COEF_176                (fwCfgp->u16_adcCoef176)    //812 - adc_coef_176
#define CFG_U16_ADC_COEF_177                (fwCfgp->u16_adcCoef177)    //814 - adc_coef_177
#define CFG_U16_ADC_COEF_178                (fwCfgp->u16_adcCoef178)    //816 - adc_coef_178
#define CFG_U16_ADC_COEF_179                (fwCfgp->u16_adcCoef179)    //818 - adc_coef_179
#define CFG_U16_ADC_COEF_180                (fwCfgp->u16_adcCoef180)    //81A - adc_coef_180
#define CFG_U16_ADC_COEF_181                (fwCfgp->u16_adcCoef181)    //81C - adc_coef_181
#define CFG_U16_ADC_COEF_182                (fwCfgp->u16_adcCoef182)    //81E - adc_coef_182
#define CFG_U16_ADC_COEF_183                (fwCfgp->u16_adcCoef183)    //820 - adc_coef_183
#define CFG_U16_ADC_COEF_184                (fwCfgp->u16_adcCoef184)    //822 - adc_coef_184
#define CFG_U16_ADC_COEF_185                (fwCfgp->u16_adcCoef185)    //824 - adc_coef_185
#define CFG_U16_ADC_COEF_186                (fwCfgp->u16_adcCoef186)    //826 - adc_coef_186
#define CFG_U16_ADC_COEF_187                (fwCfgp->u16_adcCoef187)    //828 - adc_coef_187
#define CFG_U16_ADC_COEF_188                (fwCfgp->u16_adcCoef188)    //82A - adc_coef_188
#define CFG_U16_ADC_COEF_189                (fwCfgp->u16_adcCoef189)    //82C - adc_coef_189
#define CFG_U16_ADC_COEF_190                (fwCfgp->u16_adcCoef190)    //82E - adc_coef_190
#define CFG_U16_ADC_COEF_191                (fwCfgp->u16_adcCoef191)    //830 - adc_coef_191
#define CFG_U16_ADC_COEF_192                (fwCfgp->u16_adcCoef192)    //832 - adc_coef_192
#define CFG_U16_ADC_COEF_193                (fwCfgp->u16_adcCoef193)    //834 - adc_coef_193
#define CFG_U16_ADC_COEF_194                (fwCfgp->u16_adcCoef194)    //836 - adc_coef_194
#define CFG_U16_ADC_COEF_195                (fwCfgp->u16_adcCoef195)    //838 - adc_coef_195
#define CFG_U16_ADC_COEF_196                (fwCfgp->u16_adcCoef196)    //83A - adc_coef_196
#define CFG_U16_ADC_COEF_197                (fwCfgp->u16_adcCoef197)    //83C - adc_coef_197
#define CFG_U16_ADC_COEF_198                (fwCfgp->u16_adcCoef198)    //83E - adc_coef_198
#define CFG_U16_ADC_COEF_199                (fwCfgp->u16_adcCoef199)    //840 - adc_coef_199
#define CFG_U16_ADC_COEF_200                (fwCfgp->u16_adcCoef200)    //842 - adc_coef_200
#define CFG_U16_ADC_COEF_201                (fwCfgp->u16_adcCoef201)    //844 - adc_coef_201
#define CFG_U16_ADC_COEF_202                (fwCfgp->u16_adcCoef202)    //846 - adc_coef_202
#define CFG_U16_ADC_COEF_203                (fwCfgp->u16_adcCoef203)    //848 - adc_coef_203
#define CFG_U16_ADC_COEF_204                (fwCfgp->u16_adcCoef204)    //84A - adc_coef_204
#define CFG_U16_ADC_COEF_205                (fwCfgp->u16_adcCoef205)    //84C - adc_coef_205
#define CFG_U16_ADC_COEF_206                (fwCfgp->u16_adcCoef206)    //84E - adc_coef_206
#define CFG_U16_ADC_COEF_207                (fwCfgp->u16_adcCoef207)    //850 - adc_coef_207
#define CFG_U16_ADC_COEF_208                (fwCfgp->u16_adcCoef208)    //852 - adc_coef_208
#define CFG_U16_ADC_COEF_209                (fwCfgp->u16_adcCoef209)    //854 - adc_coef_209
#define CFG_U16_ADC_COEF_210                (fwCfgp->u16_adcCoef210)    //856 - adc_coef_210
#define CFG_U16_ADC_COEF_211                (fwCfgp->u16_adcCoef211)    //858 - adc_coef_211
#define CFG_U16_ADC_COEF_212                (fwCfgp->u16_adcCoef212)    //85A - adc_coef_212
#define CFG_U16_ADC_COEF_213                (fwCfgp->u16_adcCoef213)    //85C - adc_coef_213
#define CFG_U16_ADC_COEF_214                (fwCfgp->u16_adcCoef214)    //85E - adc_coef_214
#define CFG_U16_ADC_COEF_215                (fwCfgp->u16_adcCoef215)    //860 - adc_coef_215
#define CFG_U16_ADC_COEF_216                (fwCfgp->u16_adcCoef216)    //862 - adc_coef_216
#define CFG_U16_ADC_COEF_217                (fwCfgp->u16_adcCoef217)    //864 - adc_coef_217
#define CFG_U16_ADC_COEF_218                (fwCfgp->u16_adcCoef218)    //866 - adc_coef_218
#define CFG_U16_ADC_COEF_219                (fwCfgp->u16_adcCoef219)    //868 - adc_coef_219
#define CFG_U16_ADC_COEF_220                (fwCfgp->u16_adcCoef220)    //86A - adc_coef_220
#define CFG_U16_ADC_COEF_221                (fwCfgp->u16_adcCoef221)    //86C - adc_coef_221
#define CFG_U16_ADC_COEF_222                (fwCfgp->u16_adcCoef222)    //86E - adc_coef_222
#define CFG_U16_ADC_COEF_223                (fwCfgp->u16_adcCoef223)    //870 - adc_coef_223
#define CFG_U16_ADC_COEF_224                (fwCfgp->u16_adcCoef224)    //872 - adc_coef_224
#define CFG_U16_ADC_COEF_225                (fwCfgp->u16_adcCoef225)    //874 - adc_coef_225
#define CFG_U16_ADC_COEF_226                (fwCfgp->u16_adcCoef226)    //876 - adc_coef_226
#define CFG_U16_ADC_COEF_227                (fwCfgp->u16_adcCoef227)    //878 - adc_coef_227
#define CFG_U16_ADC_COEF_228                (fwCfgp->u16_adcCoef228)    //87A - adc_coef_228
#define CFG_U16_ADC_COEF_229                (fwCfgp->u16_adcCoef229)    //87C - adc_coef_229
#define CFG_U16_ADC_COEF_230                (fwCfgp->u16_adcCoef230)    //87E - adc_coef_230
#define CFG_U16_ADC_COEF_231                (fwCfgp->u16_adcCoef231)    //880 - adc_coef_231
#define CFG_U16_ADC_COEF_232                (fwCfgp->u16_adcCoef232)    //882 - adc_coef_232
#define CFG_U16_ADC_COEF_233                (fwCfgp->u16_adcCoef233)    //884 - adc_coef_233
#define CFG_U16_ADC_COEF_234                (fwCfgp->u16_adcCoef234)    //886 - adc_coef_234
#define CFG_U16_ADC_COEF_235                (fwCfgp->u16_adcCoef235)    //888 - adc_coef_235
#define CFG_U16_ADC_COEF_236                (fwCfgp->u16_adcCoef236)    //88A - adc_coef_236
#define CFG_U16_ADC_COEF_237                (fwCfgp->u16_adcCoef237)    //88C - adc_coef_237
#define CFG_U16_ADC_COEF_238                (fwCfgp->u16_adcCoef238)    //88E - adc_coef_238
#define CFG_U16_ADC_COEF_239                (fwCfgp->u16_adcCoef239)    //890 - adc_coef_239
#define CFG_U16_ADC_COEF_240                (fwCfgp->u16_adcCoef240)    //892 - adc_coef_240
#define CFG_U16_ADC_COEF_241                (fwCfgp->u16_adcCoef241)    //894 - adc_coef_241
#define CFG_U16_ADC_COEF_242                (fwCfgp->u16_adcCoef242)    //896 - adc_coef_242
#define CFG_U16_ADC_COEF_243                (fwCfgp->u16_adcCoef243)    //898 - adc_coef_243
#define CFG_U16_ADC_COEF_244                (fwCfgp->u16_adcCoef244)    //89A - adc_coef_244
#define CFG_U16_ADC_COEF_245                (fwCfgp->u16_adcCoef245)    //89C - adc_coef_245
#define CFG_U16_ADC_COEF_246                (fwCfgp->u16_adcCoef246)    //89E - adc_coef_246
#define CFG_U16_ADC_COEF_247                (fwCfgp->u16_adcCoef247)    //8A0 - adc_coef_247
#define CFG_U16_ADC_COEF_248                (fwCfgp->u16_adcCoef248)    //8A2 - adc_coef_248
#define CFG_U16_ADC_COEF_249                (fwCfgp->u16_adcCoef249)    //8A4 - adc_coef_249
#define CFG_U16_ADC_COEF_250                (fwCfgp->u16_adcCoef250)    //8A6 - adc_coef_250
#define CFG_U16_ADC_COEF_251                (fwCfgp->u16_adcCoef251)    //8A8 - adc_coef_251
#define CFG_U16_ADC_COEF_252                (fwCfgp->u16_adcCoef252)    //8AA - adc_coef_252
#define CFG_U16_ADC_COEF_253                (fwCfgp->u16_adcCoef253)    //8AC - adc_coef_253
#define CFG_U16_ADC_COEF_254                (fwCfgp->u16_adcCoef254)    //8AE - adc_coef_254
#define CFG_U16_ADC_COEF_255                (fwCfgp->u16_adcCoef255)    //8B0 - adc_coef_255
#define CFG_U16_ADC_COEF_256                (fwCfgp->u16_adcCoef256)    //8B2 - adc_coef_256
#define CFG_U16_ADC_COEF_257                (fwCfgp->u16_adcCoef257)    //8B4 - adc_coef_257
#define CFG_U16_ADC_COEF_258                (fwCfgp->u16_adcCoef258)    //8B6 - adc_coef_258
#define CFG_U16_ADC_COEF_259                (fwCfgp->u16_adcCoef259)    //8B8 - adc_coef_259
#define CFG_U16_ADC_COEF_260                (fwCfgp->u16_adcCoef260)    //8BA - adc_coef_260
#define CFG_U16_ADC_COEF_261                (fwCfgp->u16_adcCoef261)    //8BC - adc_coef_261
#define CFG_U16_ADC_COEF_262                (fwCfgp->u16_adcCoef262)    //8BE - adc_coef_262
#define CFG_U16_ADC_COEF_263                (fwCfgp->u16_adcCoef263)    //8C0 - adc_coef_263
#define CFG_U16_ADC_COEF_264                (fwCfgp->u16_adcCoef264)    //8C2 - adc_coef_264
#define CFG_U16_ADC_COEF_265                (fwCfgp->u16_adcCoef265)    //8C4 - adc_coef_265
#define CFG_U16_ADC_COEF_266                (fwCfgp->u16_adcCoef266)    //8C6 - adc_coef_266
#define CFG_U16_ADC_COEF_267                (fwCfgp->u16_adcCoef267)    //8C8 - adc_coef_267
#define CFG_U16_ADC_COEF_268                (fwCfgp->u16_adcCoef268)    //8CA - adc_coef_268
#define CFG_U16_ADC_COEF_269                (fwCfgp->u16_adcCoef269)    //8CC - adc_coef_269
#define CFG_U16_ADC_COEF_270                (fwCfgp->u16_adcCoef270)    //8CE - adc_coef_270
#define CFG_U16_ADC_COEF_271                (fwCfgp->u16_adcCoef271)    //8D0 - adc_coef_271
#define CFG_U16_ADC_COEF_272                (fwCfgp->u16_adcCoef272)    //8D2 - adc_coef_272
#define CFG_U16_ADC_COEF_273                (fwCfgp->u16_adcCoef273)    //8D4 - adc_coef_273
#define CFG_U16_ADC_COEF_274                (fwCfgp->u16_adcCoef274)    //8D6 - adc_coef_274
#define CFG_U16_ADC_COEF_275                (fwCfgp->u16_adcCoef275)    //8D8 - adc_coef_275
#define CFG_U16_ADC_COEF_276                (fwCfgp->u16_adcCoef276)    //8DA - adc_coef_276
#define CFG_U16_ADC_COEF_277                (fwCfgp->u16_adcCoef277)    //8DC - adc_coef_277
#define CFG_U16_ADC_COEF_278                (fwCfgp->u16_adcCoef278)    //8DE - adc_coef_278
#define CFG_U16_ADC_COEF_279                (fwCfgp->u16_adcCoef279)    //8E0 - adc_coef_279
#define CFG_U16_ADC_COEF_280                (fwCfgp->u16_adcCoef280)    //8E2 - adc_coef_280
#define CFG_U16_ADC_COEF_281                (fwCfgp->u16_adcCoef281)    //8E4 - adc_coef_281
#define CFG_U16_ADC_COEF_282                (fwCfgp->u16_adcCoef282)    //8E6 - adc_coef_282
#define CFG_U16_ADC_COEF_283                (fwCfgp->u16_adcCoef283)    //8E8 - adc_coef_283
#define CFG_U16_ADC_COEF_284                (fwCfgp->u16_adcCoef284)    //8EA - adc_coef_284
#define CFG_U16_ADC_COEF_285                (fwCfgp->u16_adcCoef285)    //8EC - adc_coef_285
#define CFG_U16_ADC_COEF_286                (fwCfgp->u16_adcCoef286)    //8EE - adc_coef_286
#define CFG_U16_ADC_COEF_287                (fwCfgp->u16_adcCoef287)    //8F0 - adc_coef_287
#define CFG_U16_ADC_COEF_288                (fwCfgp->u16_adcCoef288)    //8F2 - adc_coef_288
#define CFG_U16_ADC_COEF_289                (fwCfgp->u16_adcCoef289)    //8F4 - adc_coef_289
#define CFG_U16_ADC_COEF_290                (fwCfgp->u16_adcCoef290)    //8F6 - adc_coef_290
#define CFG_U16_ADC_COEF_291                (fwCfgp->u16_adcCoef291)    //8F8 - adc_coef_291
#define CFG_U16_ADC_COEF_292                (fwCfgp->u16_adcCoef292)    //8FA - adc_coef_292
#define CFG_U16_ADC_COEF_293                (fwCfgp->u16_adcCoef293)    //8FC - adc_coef_293
#define CFG_U16_ADC_COEF_294                (fwCfgp->u16_adcCoef294)    //8FE - adc_coef_294
#define CFG_U16_ADC_COEF_295                (fwCfgp->u16_adcCoef295)    //900 - adc_coef_295
#define CFG_U16_ADC_COEF_296                (fwCfgp->u16_adcCoef296)    //902 - adc_coef_296
#define CFG_U16_ADC_COEF_297                (fwCfgp->u16_adcCoef297)    //904 - adc_coef_297
#define CFG_U16_ADC_COEF_298                (fwCfgp->u16_adcCoef298)    //906 - adc_coef_298
#define CFG_U16_ADC_COEF_299                (fwCfgp->u16_adcCoef299)    //908 - adc_coef_299
#define CFG_U16_ADC_COEF_300                (fwCfgp->u16_adcCoef300)    //90A - adc_coef_300
#define CFG_U16_ADC_COEF_301                (fwCfgp->u16_adcCoef301)    //90C - adc_coef_301
#define CFG_U16_ADC_COEF_302                (fwCfgp->u16_adcCoef302)    //90E - adc_coef_302
#define CFG_U16_ADC_COEF_303                (fwCfgp->u16_adcCoef303)    //910 - adc_coef_303
#define CFG_U16_ADC_COEF_304                (fwCfgp->u16_adcCoef304)    //912 - adc_coef_304
#define CFG_U16_ADC_COEF_305                (fwCfgp->u16_adcCoef305)    //914 - adc_coef_305
#define CFG_U16_ADC_COEF_306                (fwCfgp->u16_adcCoef306)    //916 - adc_coef_306
#define CFG_U16_ADC_COEF_307                (fwCfgp->u16_adcCoef307)    //918 - adc_coef_307
#define CFG_U16_ADC_COEF_308                (fwCfgp->u16_adcCoef308)    //91A - adc_coef_308
#define CFG_U16_ADC_COEF_309                (fwCfgp->u16_adcCoef309)    //91C - adc_coef_309
#define CFG_U16_ADC_COEF_310                (fwCfgp->u16_adcCoef310)    //91E - adc_coef_310
#define CFG_U16_ADC_COEF_311                (fwCfgp->u16_adcCoef311)    //920 - adc_coef_311
#define CFG_U16_ADC_COEF_312                (fwCfgp->u16_adcCoef312)    //922 - adc_coef_312
#define CFG_U16_ADC_COEF_313                (fwCfgp->u16_adcCoef313)    //924 - adc_coef_313
#define CFG_U16_ADC_COEF_314                (fwCfgp->u16_adcCoef314)    //926 - adc_coef_314
#define CFG_U16_ADC_COEF_315                (fwCfgp->u16_adcCoef315)    //928 - adc_coef_315
#define CFG_U16_ADC_COEF_316                (fwCfgp->u16_adcCoef316)    //92A - adc_coef_316
#define CFG_U16_ADC_COEF_317                (fwCfgp->u16_adcCoef317)    //92C - adc_coef_317
#define CFG_U16_ADC_COEF_318                (fwCfgp->u16_adcCoef318)    //92E - adc_coef_318
#define CFG_U16_ADC_COEF_319                (fwCfgp->u16_adcCoef319)    //930 - adc_coef_319
#define CFG_U16_ADC_COEF_320                (fwCfgp->u16_adcCoef320)    //932 - adc_coef_320
#define CFG_U16_ADC_COEF_321                (fwCfgp->u16_adcCoef321)    //934 - adc_coef_321
#define CFG_U16_ADC_COEF_322                (fwCfgp->u16_adcCoef322)    //936 - adc_coef_322
#define CFG_U16_ADC_COEF_323                (fwCfgp->u16_adcCoef323)    //938 - adc_coef_323
#define CFG_U16_ADC_COEF_324                (fwCfgp->u16_adcCoef324)    //93A - adc_coef_324
#define CFG_U16_ADC_COEF_325                (fwCfgp->u16_adcCoef325)    //93C - adc_coef_325
#define CFG_U16_ADC_COEF_326                (fwCfgp->u16_adcCoef326)    //93E - adc_coef_326
#define CFG_U16_ADC_COEF_327                (fwCfgp->u16_adcCoef327)    //940 - adc_coef_327
#define CFG_U16_ADC_COEF_328                (fwCfgp->u16_adcCoef328)    //942 - adc_coef_328
#define CFG_U16_ADC_COEF_329                (fwCfgp->u16_adcCoef329)    //944 - adc_coef_329
#define CFG_U16_ADC_COEF_330                (fwCfgp->u16_adcCoef330)    //946 - adc_coef_330
#define CFG_U16_ADC_COEF_331                (fwCfgp->u16_adcCoef331)    //948 - adc_coef_331
#define CFG_U16_ADC_COEF_332                (fwCfgp->u16_adcCoef332)    //94A - adc_coef_332
#define CFG_U16_ADC_COEF_333                (fwCfgp->u16_adcCoef333)    //94C - adc_coef_333
#define CFG_U16_ADC_COEF_334                (fwCfgp->u16_adcCoef334)    //94E - adc_coef_334
#define CFG_U16_ADC_COEF_335                (fwCfgp->u16_adcCoef335)    //950 - adc_coef_335
#define CFG_U16_ADC_COEF_336                (fwCfgp->u16_adcCoef336)    //952 - adc_coef_336
#define CFG_U16_ADC_COEF_337                (fwCfgp->u16_adcCoef337)    //954 - adc_coef_337
#define CFG_U16_ADC_COEF_338                (fwCfgp->u16_adcCoef338)    //956 - adc_coef_338
#define CFG_U16_ADC_COEF_339                (fwCfgp->u16_adcCoef339)    //958 - adc_coef_339
#define CFG_U16_ADC_COEF_340                (fwCfgp->u16_adcCoef340)    //95A - adc_coef_340
#define CFG_U16_ADC_COEF_341                (fwCfgp->u16_adcCoef341)    //95C - adc_coef_341
#define CFG_U16_ADC_COEF_342                (fwCfgp->u16_adcCoef342)    //95E - adc_coef_342
#define CFG_U16_ADC_COEF_343                (fwCfgp->u16_adcCoef343)    //960 - adc_coef_343
#define CFG_U16_ADC_COEF_344                (fwCfgp->u16_adcCoef344)    //962 - adc_coef_344
#define CFG_U16_ADC_COEF_345                (fwCfgp->u16_adcCoef345)    //964 - adc_coef_345
#define CFG_U16_ADC_COEF_346                (fwCfgp->u16_adcCoef346)    //966 - adc_coef_346
#define CFG_U16_ADC_COEF_347                (fwCfgp->u16_adcCoef347)    //968 - adc_coef_347
#define CFG_U16_ADC_COEF_348                (fwCfgp->u16_adcCoef348)    //96A - adc_coef_348
#define CFG_U16_ADC_COEF_349                (fwCfgp->u16_adcCoef349)    //96C - adc_coef_349
#define CFG_U16_ADC_COEF_350                (fwCfgp->u16_adcCoef350)    //96E - adc_coef_350
#define CFG_U16_ADC_COEF_351                (fwCfgp->u16_adcCoef351)    //970 - adc_coef_351
#define CFG_U16_ADC_COEF_352                (fwCfgp->u16_adcCoef352)    //972 - adc_coef_352
#define CFG_U16_ADC_COEF_353                (fwCfgp->u16_adcCoef353)    //974 - adc_coef_353
#define CFG_U16_ADC_COEF_354                (fwCfgp->u16_adcCoef354)    //976 - adc_coef_354
#define CFG_U16_ADC_COEF_355                (fwCfgp->u16_adcCoef355)    //978 - adc_coef_355
#define CFG_U16_ADC_COEF_356                (fwCfgp->u16_adcCoef356)    //97A - adc_coef_356
#define CFG_U16_ADC_COEF_357                (fwCfgp->u16_adcCoef357)    //97C - adc_coef_357
#define CFG_U16_ADC_COEF_358                (fwCfgp->u16_adcCoef358)    //97E - adc_coef_358
#define CFG_U16_ADC_COEF_359                (fwCfgp->u16_adcCoef359)    //980 - adc_coef_359
#define CFG_U16_ADC_COEF_360                (fwCfgp->u16_adcCoef360)    //982 - adc_coef_360
#define CFG_U16_ADC_COEF_361                (fwCfgp->u16_adcCoef361)    //984 - adc_coef_361
#define CFG_U16_ADC_COEF_362                (fwCfgp->u16_adcCoef362)    //986 - adc_coef_362
#define CFG_U16_ADC_COEF_363                (fwCfgp->u16_adcCoef363)    //988 - adc_coef_363
#define CFG_U16_ADC_COEF_364                (fwCfgp->u16_adcCoef364)    //98A - adc_coef_364
#define CFG_U16_ADC_COEF_365                (fwCfgp->u16_adcCoef365)    //98C - adc_coef_365
#define CFG_U16_ADC_COEF_366                (fwCfgp->u16_adcCoef366)    //98E - adc_coef_366
#define CFG_U16_ADC_COEF_367                (fwCfgp->u16_adcCoef367)    //990 - adc_coef_367
#define CFG_U16_ADC_COEF_368                (fwCfgp->u16_adcCoef368)    //992 - adc_coef_368
#define CFG_U16_ADC_COEF_369                (fwCfgp->u16_adcCoef369)    //994 - adc_coef_369
#define CFG_U16_ADC_COEF_370                (fwCfgp->u16_adcCoef370)    //996 - adc_coef_370
#define CFG_U16_ADC_COEF_371                (fwCfgp->u16_adcCoef371)    //998 - adc_coef_371
#define CFG_U16_ADC_COEF_372                (fwCfgp->u16_adcCoef372)    //99A - adc_coef_372
#define CFG_U16_ADC_COEF_373                (fwCfgp->u16_adcCoef373)    //99C - adc_coef_373
#define CFG_U16_ADC_COEF_374                (fwCfgp->u16_adcCoef374)    //99E - adc_coef_374
#define CFG_U16_ADC_COEF_375                (fwCfgp->u16_adcCoef375)    //9A0 - adc_coef_375
#define CFG_U16_ADC_COEF_376                (fwCfgp->u16_adcCoef376)    //9A2 - adc_coef_376
#define CFG_U16_ADC_COEF_377                (fwCfgp->u16_adcCoef377)    //9A4 - adc_coef_377
#define CFG_U16_ADC_COEF_378                (fwCfgp->u16_adcCoef378)    //9A6 - adc_coef_378
#define CFG_U16_ADC_COEF_379                (fwCfgp->u16_adcCoef379)    //9A8 - adc_coef_379
#define CFG_U16_ADC_COEF_380                (fwCfgp->u16_adcCoef380)    //9AA - adc_coef_380
#define CFG_U16_ADC_COEF_381                (fwCfgp->u16_adcCoef381)    //9AC - adc_coef_381
#define CFG_U16_ADC_COEF_382                (fwCfgp->u16_adcCoef382)    //9AE - adc_coef_382
#define CFG_U16_ADC_COEF_383                (fwCfgp->u16_adcCoef383)    //9B0 - adc_coef_383
#define CFG_U16_ADC_COEF_384                (fwCfgp->u16_adcCoef384)    //9B2 - adc_coef_384
#define CFG_U16_ADC_COEF_385                (fwCfgp->u16_adcCoef385)    //9B4 - adc_coef_385
#define CFG_U16_ADC_COEF_386                (fwCfgp->u16_adcCoef386)    //9B6 - adc_coef_386
#define CFG_U16_ADC_COEF_387                (fwCfgp->u16_adcCoef387)    //9B8 - adc_coef_387
#define CFG_U16_ADC_COEF_388                (fwCfgp->u16_adcCoef388)    //9BA - adc_coef_388
#define CFG_U16_ADC_COEF_389                (fwCfgp->u16_adcCoef389)    //9BC - adc_coef_389
#define CFG_U16_ADC_COEF_390                (fwCfgp->u16_adcCoef390)    //9BE - adc_coef_390
#define CFG_U16_ADC_COEF_391                (fwCfgp->u16_adcCoef391)    //9C0 - adc_coef_391
#define CFG_U16_ADC_COEF_392                (fwCfgp->u16_adcCoef392)    //9C2 - adc_coef_392
#define CFG_U16_ADC_COEF_393                (fwCfgp->u16_adcCoef393)    //9C4 - adc_coef_393
#define CFG_U16_ADC_COEF_394                (fwCfgp->u16_adcCoef394)    //9C6 - adc_coef_394
#define CFG_U16_ADC_COEF_395                (fwCfgp->u16_adcCoef395)    //9C8 - adc_coef_395
#define CFG_U16_ADC_COEF_396                (fwCfgp->u16_adcCoef396)    //9CA - adc_coef_396
#define CFG_U16_ADC_COEF_397                (fwCfgp->u16_adcCoef397)    //9CC - adc_coef_397
#define CFG_U16_ADC_COEF_398                (fwCfgp->u16_adcCoef398)    //9CE - adc_coef_398
#define CFG_U16_ADC_COEF_399                (fwCfgp->u16_adcCoef399)    //9D0 - adc_coef_399
#define CFG_U16_ADC_COEF_400                (fwCfgp->u16_adcCoef400)    //9D2 - adc_coef_400
#define CFG_U16_ADC_COEF_401                (fwCfgp->u16_adcCoef401)    //9D4 - adc_coef_401
#define CFG_U16_ADC_COEF_402                (fwCfgp->u16_adcCoef402)    //9D6 - adc_coef_402
#define CFG_U16_ADC_COEF_403                (fwCfgp->u16_adcCoef403)    //9D8 - adc_coef_403
#define CFG_U16_ADC_COEF_404                (fwCfgp->u16_adcCoef404)    //9DA - adc_coef_404
#define CFG_U16_ADC_COEF_405                (fwCfgp->u16_adcCoef405)    //9DC - adc_coef_405
#define CFG_U16_ADC_COEF_406                (fwCfgp->u16_adcCoef406)    //9DE - adc_coef_406
#define CFG_U16_ADC_COEF_407                (fwCfgp->u16_adcCoef407)    //9E0 - adc_coef_407
#define CFG_U16_ADC_COEF_408                (fwCfgp->u16_adcCoef408)    //9E2 - adc_coef_408
#define CFG_U16_ADC_COEF_409                (fwCfgp->u16_adcCoef409)    //9E4 - adc_coef_409
#define CFG_U16_ADC_COEF_410                (fwCfgp->u16_adcCoef410)    //9E6 - adc_coef_410
#define CFG_U16_ADC_COEF_411                (fwCfgp->u16_adcCoef411)    //9E8 - adc_coef_411
#define CFG_U16_ADC_COEF_412                (fwCfgp->u16_adcCoef412)    //9EA - adc_coef_412
#define CFG_U16_ADC_COEF_413                (fwCfgp->u16_adcCoef413)    //9EC - adc_coef_413
#define CFG_U16_ADC_COEF_414                (fwCfgp->u16_adcCoef414)    //9EE - adc_coef_414
#define CFG_U16_ADC_COEF_415                (fwCfgp->u16_adcCoef415)    //9F0 - adc_coef_415
#define CFG_U16_ADC_COEF_416                (fwCfgp->u16_adcCoef416)    //9F2 - adc_coef_416
#define CFG_U16_ADC_COEF_417                (fwCfgp->u16_adcCoef417)    //9F4 - adc_coef_417
#define CFG_U16_ADC_COEF_418                (fwCfgp->u16_adcCoef418)    //9F6 - adc_coef_418
#define CFG_U16_ADC_COEF_419                (fwCfgp->u16_adcCoef419)    //9F8 - adc_coef_419
#define CFG_B1_BDR_REJ_CFG                  (fwCfgp->b1_bdrRejCfg)      //9FA - bdr_rej_cfg
#define CFG_U16_BDR_REJ_TOP_COOR            (fwCfgp->u16_bdrRejTopCoor) //9FB - bdr_rej_top_coor
#define CFG_U16_BDR_REJ_BTM_COOR            (fwCfgp->u16_bdrRejBtmCoor) //9FD - bdr_rej_btm_coor
#define CFG_U8_GRIP_REPORT_TAP_CNT          (fwCfgp->u8_gripReportTapCnt)   //A00 - grip_report_tap_cnt
#define CFG_U8_GRIP_REPORT_MOVE_DISTANCE    (fwCfgp->u8_gripReportMoveDistance) //A01 - grip_report_move_distance
#define CFG_U16_EDGE_REJ_COOR               (fwCfgp->u16_edgeRejCoor)   //A02 - edge_rej_coor
#define CFG_U16_EDGE_REJ_CENTRE_X_ST        (fwCfgp->u16_edgeRejCentreXSt)  //A04 - edge_rej_centre_x_st
#define CFG_U16_EDGE_REJ_CENTRE_X_END       (fwCfgp->u16_edgeRejCentreXEnd) //A06 - edge_rej_centre_x_end
#define CFG_U16_EDGE_REJ_CENTER_COOR        (fwCfgp->u16_edgeRejCenterCoor) //A08 - edge_rej_center_coor
#define CFG_B1_MS_TCH_NEG_DET_LP_FCAL_EN    (fwCfgp->b1_msTchNegDetLpFcalEn)    //A0B - post_frm_cfg2
#define CFG_B1_MS_PURE_LNR_CMM_RX_CHECK_EN  (fwCfgp->b1_msPureLnrCmmRxCheckEn)  //A0B - post_frm_cfg2
#define CFG_B3_MS_PURE_IGNORE_SPECIFIC_NODES_EN (fwCfgp->b3_msPureIgnoreSpecificNodesEn)    //A0B - post_frm_cfg2
#define CFG_B1_MS_SCR_PURE_RAW_FCAL_EN      (fwCfgp->b1_msScrPureRawFcalEn) //A0C - post_frm_cfg
#define CFG_B1_INVALID_MT_FCAL_EN           (fwCfgp->b1_invalidMtFcalEn)    //A0C - post_frm_cfg
#define CFG_B1_INVALID_SS_FCAL_EN           (fwCfgp->b1_invalidSsFcalEn)    //A0C - post_frm_cfg
#define CFG_B1_INVALID_SS_FRC_FCAL_EN       (fwCfgp->b1_invalidSsFrcFcalEn) //A0C - post_frm_cfg
#define CFG_B1_FCAL_MS_SCR_DIRTY_CALIB_CHECK_EN (fwCfgp->b1_fcalMsScrDirtyCalibCheckEn) //A0C - post_frm_cfg
#define CFG_B1_SS_TCH_NEG_SUM_LOW_TEMP_FCAL_EN  (fwCfgp->b1_ssTchNegSumLowTempFcalEn)   //A0C - post_frm_cfg
#define CFG_B1_MS_PURE_IGNORE_CH_EN         (fwCfgp->b1_msPureIgnoreChEn)   //A0C - post_frm_cfg
#define CFG_B1_MS_TCH_NEG_DET_FCAL_EN       (fwCfgp->b1_msTchNegDetFcalEn)  //A0C - post_frm_cfg
#define CFG_U16_MS_PURE_RAW_STR_THRES       (fwCfgp->u16_msPureRawStrThres) //A0D - ms_pure_raw_str_thres
#define CFG_U16_MS_PURE_RAW_DIFF_THRES      (fwCfgp->u16_msPureRawDiffThres)    //A0F - ms_pure_raw_diff_thres
#define CFG_U8_MS_PURE_RAW_FCAL_MIN_NODES   (fwCfgp->u8_msPureRawFcalMinNodes)  //A11 - ms_pure_raw_fcal_min_nodes
#define CFG_U8_MS_PURE_RAW_FCAL_DBNC        (fwCfgp->u8_msPureRawFcalDbnc)  //A12 - ms_pure_raw_fcal_dbnc
#define CFG_U8_MS_PURE_RAW_FCAL_EXCEPT_TBL_NUM  (fwCfgp->u8_msPureRawFcalExceptTblNum)  //A13 - ms_pure_raw_fcal_except_tbl_num
#define CFG_U8_MS_PURE_RAW_FCAL_EXCEPT_CH_01    (fwCfgp->u8_msPureRawFcalExceptCh01)    //A14 - ms_pure_raw_fcal_except_ch_01
#define CFG_U8_MS_PURE_RAW_FCAL_EXCEPT_CH_02    (fwCfgp->u8_msPureRawFcalExceptCh02)    //A15 - ms_pure_raw_fcal_except_ch_02
#define CFG_U16_MS_PURE_RAW_STR_GLV_THRES   (fwCfgp->u16_msPureRawStrGlvThres)  //A16 - ms_pure_raw_str_glv_thres
#define CFG_U16_INV_MT_SS_DET_THRES         (fwCfgp->u16_invMtSsDetThres)   //A18 - inv_mt_ss_det_thres
#define CFG_U16_INV_MT_MT_DET_THRES         (fwCfgp->u16_invMtMtDetThres)   //A1A - inv_mt_mt_det_thres
#define CFG_U8_INV_MT_FCAL_MIN_NODES        (fwCfgp->u8_invMtFcalMinNodes)  //A1C - inv_mt_fcal_min_nodes
#define CFG_U8_INV_MT_FCAL_DBNC             (fwCfgp->u8_invMtFcalDbnc)  //A1D - inv_mt_fcal_dbnc
#define CFG_U16_INV_SS_MT_DET_THRES         (fwCfgp->u16_invSsMtDetThres)   //A1E - inv_ss_mt_det_thres
#define CFG_U16_INV_SS_SS_DET_THRES         (fwCfgp->u16_invSsSsDetThres)   //A20 - inv_ss_ss_det_thres
#define CFG_U8_INV_SS_FCAL_MIN_NODES        (fwCfgp->u8_invSsFcalMinNodes)  //A22 - inv_ss_fcal_min_nodes
#define CFG_U8_INV_SS_FCAL_DBNC             (fwCfgp->u8_invSsFcalDbnc)  //A23 - inv_ss_fcal_dbnc
#define CFG_U16_MS_NEG_SUM_THRE_FOR_CALIB_DIRTY (fwCfgp->u16_msNegSumThreForCalibDirty) //A24 - ms_neg_str_thre_for_calib_dirty
#define CFG_U16_MS_NEG_SUM_THRES_FOR_CALIB_DIRTY_HYST   (fwCfgp->u16_msNegSumThresForCalibDirtyHyst)    //A26 - ms_neg_sum_thre_hys_for_calib_dirty
#define CFG_U8_MS_NODE_CNT_FOR_CALIB_DIRTY  (fwCfgp->u8_msNodeCntForCalibDirty) //A28 - ms_node_cnt_for_calib_dirty
#define CFG_U8_MS_NODE_CNT_FOR_CALIB_DIRTY_HYST (fwCfgp->u8_msNodeCntForCalibDirtyHyst) //A29 - ms_node_cnt_hys_for_calib_dirty
#define CFG_U8_TCH_IN_ADD_DLY_DIRTY_CALIB   (fwCfgp->u8_tchInAddDlyDirtyCalib)  //A2A - tch_in_add_dly_dirty_calib
#define CFG_U16_SS_TCH_NEG_SUM_POS_STR_THRES    (fwCfgp->u16_ssTchNegSumPosStrThres)    //A2B - ss_tch_neg_sum_pos_str_thres
#define CFG_U16_SS_TCH_NEG_SUM_NEG_STR_THRES    (fwCfgp->u16_ssTchNegSumNegStrThres)    //A2D - ss_tch_neg_sum_neg_str_thres
#define CFG_U8_SS_TCH_NEG_SUM_LOW_TEMP_FCAL_DBNC    (fwCfgp->u8_ssTchNegSumLowTempFcalDbnc) //A2F - ss_tch_neg_sum_low_temp_fcal_dbnc
#define CFG_U8_MS_PURE_IGNORE_ST_CH         (fwCfgp->u8_msPureIgnoreStCh)   //A30 - ms_pure_ignore_st_ch
#define CFG_U8_MS_PURE_IGNORE_END_CH        (fwCfgp->u8_msPureIgnoreEndCh)  //A31 - ms_pure_ignore_end_ch
#define CFG_B1_MS_SCR_PURE_RAW_STDDEV_STR_FILTER_FCAL_EN    (fwCfgp->b1_msScrPureRawStddevStrFilterFcalEn)  //A32 - ms_pure_raw_stddev_cfg
#define CFG_B1_MS_SCR_PURE_RAW_STDDEV_FILTER_PURE_FCAL_EN   (fwCfgp->b1_msScrPureRawStddevFilterPureFcalEn) //A32 - ms_pure_raw_stddev_cfg
#define CFG_U16_MS_PURE_RAW_STDDEV_MAX_PURE_THRES   (fwCfgp->u16_msPureRawStddevMaxPureThres)   //A33 - ms_pure_raw_stddev_max_pure_thres
#define CFG_U16_MS_PURE_RAW_STDDEV_INVALID_STR_FILTER_CENTER_RATIO_THRES    (fwCfgp->u16_msPureRawStddevInvalidStrFilterCenterRatioThres)   //A35 - ms_pure_raw_stddev_invalid_str_filter_center_ratio_thres
#define CFG_U16_MS_PURE_RAW_STDDEV_INVALID_STR_FILTER_EDGE_RATIO_THRES  (fwCfgp->u16_msPureRawStddevInvalidStrFilterEdgeRatioThres) //A37 - ms_pure_raw_stddev_invalid_str_filter_edge_ratio_thres
#define CFG_U16_MS_PURE_RAW_STDDEV_INVALID_FILTER_PURE_RATIO_THRES  (fwCfgp->u16_msPureRawStddevInvalidFilterPureRatioThres)    //A39 - ms_pure_raw_stddev_invalid_filter_pure_ratio_thres
#define CFG_U8_MS_PURE_RAW_STDDEV_FCAL_DBNC (fwCfgp->u8_msPureRawStddevFcalDbnc)    //A3B - ms_pure_raw_stddev_fcal_dbnc
#define CFG_U16_MS_PURE_RAW_SLP_CMM_POS_THRES   (fwCfgp->u16_msPureRawSlpCmmPosThres)   //A3C - ms_pure_raw_slp_cmm_pos_thres
#define CFG_U16_MS_PURE_RAW_SLP_CMM_NEG_THRES   (fwCfgp->u16_msPureRawSlpCmmNegThres)   //A3E - ms_pure_raw_slp_cmm_neg_thres
#define CFG_U16_MS_PURE_RAW_STDDEV_FILTER_ONLY_THRES    (fwCfgp->u16_msPureRawStddevFilterOnlyThres)    //A40 - ms_pure_raw_stddev_filter_only_thres
#define CFG_U16_MS_PURE_RAW_STDDEV_STR_ONLY_THRES   (fwCfgp->u16_msPureRawStddevStrOnlyThres)   //A42 - ms_pure_raw_stddev_str_only_thres
#define CFG_B1_NOTCH_STR_CMP_EN             (fwCfgp->b1_notchStrCmpEn)  //A44 - notch_str_cmp_cfg
#define CFG_U8_NOTCH_STR_GAU_SAMPLE_THRES   (fwCfgp->u8_notchStrGauSampleThres) //A45 - north_str_cmp_percent
#define CFG_U8_NOTCH_STR_CMP_GAU_TOP_WGH_01 (fwCfgp->u8_notchStrCmpGauTopWgh01) //A46 - notch_str_cmp_gau_top_wgh_01
#define CFG_U8_NOTCH_STR_CMP_GAU_TOP_WGH_02 (fwCfgp->u8_notchStrCmpGauTopWgh02) //A47 - notch_str_cmp_gau_top_wgh_02
#define CFG_U8_NOTCH_STR_CMP_GAU_TOP_WGH_03 (fwCfgp->u8_notchStrCmpGauTopWgh03) //A48 - notch_str_cmp_gau_top_wgh_03
#define CFG_U8_NOTCH_STR_CMP_GAU_CENT_WGH_01    (fwCfgp->u8_notchStrCmpGauCentWgh01)    //A49 - notch_str_cmp_gau_cent_wgh_01
#define CFG_U8_NOTCH_STR_CMP_GAU_CENT_WGH_02    (fwCfgp->u8_notchStrCmpGauCentWgh02)    //A4A - notch_str_cmp_gau_cent_wgh_02
#define CFG_U8_NOTCH_STR_CMP_GAU_CENT_WGH_03    (fwCfgp->u8_notchStrCmpGauCentWgh03)    //A4B - notch_str_cmp_gau_cent_wgh_03
#define CFG_U8_NOTCH_STR_CMP_GAU_BTM_WGH_01 (fwCfgp->u8_notchStrCmpGauBtmWgh01) //A4C - notch_str_cmp_gau_btm_wgh_01
#define CFG_U8_NOTCH_STR_CMP_GAU_BTM_WGH_02 (fwCfgp->u8_notchStrCmpGauBtmWgh02) //A4D - notch_str_cmp_gau_btm_wgh_02
#define CFG_U8_NOTCH_STR_CMP_GAU_BTM_WGH_03 (fwCfgp->u8_notchStrCmpGauBtmWgh03) //A4E - notch_str_cmp_gau_btm_wgh_03
#define CFG_U16_MS_PURE_RAW_FCAL_R1_RAW_SHIFT_THRES (fwCfgp->u16_msPureRawFcalR1RawShiftThres)  //A4F - ms_pure_raw_fcal_r1_raw_shift_thres
#define CFG_U16_MS_PURE_RAW_FCAL_RLAST_RAW_SHIFT_THRES  (fwCfgp->u16_msPureRawFcalRlastRawShiftThres)   //A51 - ms_pure_raw_fcal_rlast_raw_shift_thres
#define CFG_B1_TEMP_INFO_EN                 (fwCfgp->b1_tempInfoEn)     //A53 - temp_info_cfg
#define CFG_B1_TEMP_TEST_EN                 (fwCfgp->b1_tempTestEn)     //A53 - temp_info_cfg
#define CFG_U8_LOW_TEMP_ENTRY_THRES         (fwCfgp->u8_lowTempEntryThres)  //A54 - low_temp_entry_thres
#define CFG_U8_LOW_TEMP_EXIT_THRES          (fwCfgp->u8_lowTempExitThres)   //A55 - low_temp_exit_thres
#define CFG_U16_LOW_TEMP_FGR_THRES          (fwCfgp->u16_lowTempFgrThres)   //A56 - low_temp_fgr_thres
#define CFG_U8_LOW_TEMP_FGR_THRES_HYST      (fwCfgp->u8_lowTempFgrThresHyst)    //A58 - low_temp_fgr_thres_hyst
#define CFG_U16_MS_PURE_RAW_DIFF_MAX_THRES  (fwCfgp->u16_msPureRawDiffMaxThres) //A59 - ms_pure_raw_diff_max_thres
#define CFG_U16_GRP_CORNER_0_MIN_X_COOR     (fwCfgp->u16_grpCorner0MinXCoor)    //A5B - grp_corner_0_min_x_coor
#define CFG_U16_GRP_CORNER_0_MIN_Y_COOR     (fwCfgp->u16_grpCorner0MinYCoor)    //A5D - grp_corner_0_min_y_coor
#define CFG_U16_GRP_CORNER_0_MAX_X_COOR     (fwCfgp->u16_grpCorner0MaxXCoor)    //A5F - grp_corner_0_max_x_coor
#define CFG_U16_GRP_CORNER_0_MAX_Y_COOR     (fwCfgp->u16_grpCorner0MaxYCoor)    //A61 - grp_corner_0_max_y_coor
#define CFG_U16_GRP_CORNER_1_MIN_X_COOR     (fwCfgp->u16_grpCorner1MinXCoor)    //A63 - grp_corner_1_min_x_coor
#define CFG_U16_GRP_CORNER_1_MIN_Y_COOR     (fwCfgp->u16_grpCorner1MinYCoor)    //A65 - grp_corner_1_min_y_coor
#define CFG_U16_GRP_CORNER_1_MAX_X_COOR     (fwCfgp->u16_grpCorner1MaxXCoor)    //A67 - grp_corner_1_max_x_coor
#define CFG_U16_GRP_CORNER_1_MAX_Y_COOR     (fwCfgp->u16_grpCorner1MaxYCoor)    //A69 - grp_corner_1_max_y_coor
#define CFG_U16_GRP_CORNER_2_MIN_X_COOR     (fwCfgp->u16_grpCorner2MinXCoor)    //A6B - grp_corner_2_min_x_coor
#define CFG_U16_GRP_CORNER_2_MIN_Y_COOR     (fwCfgp->u16_grpCorner2MinYCoor)    //A6D - grp_corner_2_min_y_coor
#define CFG_U16_GRP_CORNER_2_MAX_X_COOR     (fwCfgp->u16_grpCorner2MaxXCoor)    //A6F - grp_corner_2_max_x_coor
#define CFG_U16_GRP_CORNER_2_MAX_Y_COOR     (fwCfgp->u16_grpCorner2MaxYCoor)    //A71 - grp_corner_2_max_y_coor
#define CFG_U16_GRP_CORNER_3_MIN_X_COOR     (fwCfgp->u16_grpCorner3MinXCoor)    //A73 - grp_corner_3_min_x_coor
#define CFG_U16_GRP_CORNER_3_MIN_Y_COOR     (fwCfgp->u16_grpCorner3MinYCoor)    //A75 - grp_corner_3_min_y_coor
#define CFG_U16_GRP_CORNER_3_MAX_X_COOR     (fwCfgp->u16_grpCorner3MaxXCoor)    //A77 - grp_corner_3_max_x_coor
#define CFG_U16_GRP_CORNER_3_MAX_Y_COOR     (fwCfgp->u16_grpCorner3MaxYCoor)    //A79 - grp_corner_3_max_y_coor
#define CFG_U16_GRP_DEAD_ZONE_LEFT_MIN_X_COOR   (fwCfgp->u16_grpDeadZoneLeftMinXCoor)   //A7C - grp_dead_zone_left_min_x_coor
#define CFG_U16_GRP_DEAD_ZONE_LEFT_MIN_Y_COOR   (fwCfgp->u16_grpDeadZoneLeftMinYCoor)   //A7E - grp_dead_zone_left_min_y_coor
#define CFG_U16_GRP_DEAD_ZONE_LEFT_MAX_X_COOR   (fwCfgp->u16_grpDeadZoneLeftMaxXCoor)   //A80 - grp_dead_zone_left_max_x_coor
#define CFG_U16_GRP_DEAD_ZONE_LEFT_MAX_Y_COOR   (fwCfgp->u16_grpDeadZoneLeftMaxYCoor)   //A82 - grp_dead_zone_left_max_y_coor
#define CFG_U16_GRP_EDGE_ZONE_LEFT_MIN_X_COOR   (fwCfgp->u16_grpEdgeZoneLeftMinXCoor)   //A84 - grp_edge_zone_left_min_x_coor
#define CFG_U16_GRP_EDGE_ZONE_LEFT_MIN_Y_COOR   (fwCfgp->u16_grpEdgeZoneLeftMinYCoor)   //A86 - grp_edge_zone_left_min_y_coor
#define CFG_U16_GRP_EDGE_ZONE_LEFT_MAX_X_COOR   (fwCfgp->u16_grpEdgeZoneLeftMaxXCoor)   //A88 - grp_edge_zone_left_max_x_coor
#define CFG_U16_GRP_EDGE_ZONE_LEFT_MAX_Y_COOR   (fwCfgp->u16_grpEdgeZoneLeftMaxYCoor)   //A8A - grp_edge_zone_left_max_y_coor
#define CFG_U16_GRP_DEAD_ZONE_RIGHT_MIN_X_COOR  (fwCfgp->u16_grpDeadZoneRightMinXCoor)  //A8C - grp_dead_zone_right_min_x_coor
#define CFG_U16_GRP_DEAD_ZONE_RIGHT_MIN_Y_COOR  (fwCfgp->u16_grpDeadZoneRightMinYCoor)  //A8E - grp_dead_zone_right_min_y_coor
#define CFG_U16_GRP_DEAD_ZONE_RIGHT_MAX_X_COOR  (fwCfgp->u16_grpDeadZoneRightMaxXCoor)  //A90 - grp_dead_zone_right_max_x_coor
#define CFG_U16_GRP_DEAD_ZONE_RIGHT_MAX_Y_COOR  (fwCfgp->u16_grpDeadZoneRightMaxYCoor)  //A92 - grp_dead_zone_right_max_y_coor
#define CFG_U16_GRP_EDGE_ZONE_RIGHT_MIN_X_COOR  (fwCfgp->u16_grpEdgeZoneRightMinXCoor)  //A94 - grp_edge_zone_right_min_x_coor
#define CFG_U16_GRP_EDGE_ZONE_RIGHT_MIN_Y_COOR  (fwCfgp->u16_grpEdgeZoneRightMinYCoor)  //A96 - grp_edge_zone_right_min_y_coor
#define CFG_U16_GRP_EDGE_ZONE_RIGHT_MAX_X_COOR  (fwCfgp->u16_grpEdgeZoneRightMaxXCoor)  //A98 - grp_edge_zone_right_max_x_coor
#define CFG_U16_GRP_EDGE_ZONE_RIGHT_MAX_Y_COOR  (fwCfgp->u16_grpEdgeZoneRightMaxYCoor)  //A9A - grp_edge_zone_right_max_y_coor
#define CFG_U16_GRP_DEAD_ZONE_TOP_MIN_X_COOR    (fwCfgp->u16_grpDeadZoneTopMinXCoor)    //A9C - grp_dead_zone_top_min_x_coor
#define CFG_U16_GRP_DEAD_ZONE_TOP_MIN_Y_COOR    (fwCfgp->u16_grpDeadZoneTopMinYCoor)    //A9E - grp_dead_zone_top_min_y_coor
#define CFG_U16_GRP_DEAD_ZONE_TOP_MAX_X_COOR    (fwCfgp->u16_grpDeadZoneTopMaxXCoor)    //AA0 - grp_dead_zone_top_max_x_coor
#define CFG_U16_GRP_DEAD_ZONE_TOP_MAX_Y_COOR    (fwCfgp->u16_grpDeadZoneTopMaxYCoor)    //AA2 - grp_dead_zone_top_max_y_coor
#define CFG_U16_GRP_EDGE_ZONE_TOP_MIN_X_COOR    (fwCfgp->u16_grpEdgeZoneTopMinXCoor)    //AA4 - grp_edge_zone_top_min_x_coor
#define CFG_U16_GRP_EDGE_ZONE_TOP_MIN_Y_COOR    (fwCfgp->u16_grpEdgeZoneTopMinYCoor)    //AA6 - grp_edge_zone_top_min_y_coor
#define CFG_U16_GRP_EDGE_ZONE_TOP_MAX_X_COOR    (fwCfgp->u16_grpEdgeZoneTopMaxXCoor)    //AA8 - grp_edge_zone_top_max_x_coor
#define CFG_U16_GRP_EDGE_ZONE_TOP_MAX_Y_COOR    (fwCfgp->u16_grpEdgeZoneTopMaxYCoor)    //AAA - grp_edge_zone_top_max_y_coor
#define CFG_U16_GRP_DEAD_ZONE_BTM_MIN_X_COOR    (fwCfgp->u16_grpDeadZoneBtmMinXCoor)    //AAC - grp_dead_zone_btm_min_x_coor
#define CFG_U16_GRP_DEAD_ZONE_BTM_MIN_Y_COOR    (fwCfgp->u16_grpDeadZoneBtmMinYCoor)    //AAE - grp_dead_zone_btm_min_y_coor
#define CFG_U16_GRP_DEAD_ZONE_BTM_MAX_X_COOR    (fwCfgp->u16_grpDeadZoneBtmMaxXCoor)    //AB0 - grp_dead_zone_btm_max_x_coor
#define CFG_U16_GRP_DEAD_ZONE_BTM_MAX_Y_COOR    (fwCfgp->u16_grpDeadZoneBtmMaxYCoor)    //AB2 - grp_dead_zone_btm_max_y_coor
#define CFG_U16_GRP_EDGE_ZONE_BTM_MIN_X_COOR    (fwCfgp->u16_grpEdgeZoneBtmMinXCoor)    //AB4 - grp_edge_zone_btm_min_x_coor
#define CFG_U16_GRP_EDGE_ZONE_BTM_MIN_Y_COOR    (fwCfgp->u16_grpEdgeZoneBtmMinYCoor)    //AB6 - grp_edge_zone_btm_min_y_coor
#define CFG_U16_GRP_EDGE_ZONE_BTM_MAX_X_COOR    (fwCfgp->u16_grpEdgeZoneBtmMaxXCoor)    //AB8 - grp_edge_zone_btm_max_x_coor
#define CFG_U16_GRP_EDGE_ZONE_BTM_MAX_Y_COOR    (fwCfgp->u16_grpEdgeZoneBtmMaxYCoor)    //ABA - grp_edge_zone_btm_max_y_coor
#define CFG_B1_MS_MRN_R_IDX_STEP_CHANGE_EN  (fwCfgp->b1_msMrnRIdxStepChangeEn)  //ABC - ms_hop_raw_offset_dbg
#define CFG_B2_MS_MRN_R_IDX_STEP_POS_1_NEG2_CHANGE  (fwCfgp->b2_msMrnRIdxStepPos1Neg2Change)    //ABC - ms_hop_raw_offset_dbg
#define CFG_B1_MS_MRN_R_IDX_CHANGE_EN       (fwCfgp->b1_msMrnRIdxChangeEn)  //ABC - ms_hop_raw_offset_dbg
#define CFG_B2_MS_MRN_R_IDX                 (fwCfgp->b2_msMrnRIdx)      //ABC - ms_hop_raw_offset_dbg
#define CFG_B1_MULTI_R_CALIB_ACAL_EN        (fwCfgp->b1_multiRCalibAcalEn)  //ABD - ms_hop_raw_offset_cfg_01
#define CFG_B3_MS_HOP_RAW_OFFSET_RX_CNT     (fwCfgp->b3_msHopRawOffsetRxCnt)    //ABD - ms_hop_raw_offset_cfg_01
#define CFG_B1_PANEL_TARGET_STR_COMP_EN     (fwCfgp->b1_panelTargetStrCompEn)   //ABD - ms_hop_raw_offset_cfg_01
#define CFG_U16_MS_PURE_RAW_DIFF_HIAA_THRES (fwCfgp->u16_msPureRawDiffHiaaThres)    //ABE - ms_pure_raw_diff_hiaa_thres
#define CFG_U16_MS_PURE_RAW_STDDEV_FORCE_ENABLE_FRAMES  (fwCfgp->u16_msPureRawStddevForceEnableFrames)  //AC0 - ms_pure_raw_stddev_force_enable_frames
#define CFG_U16_MS_PURE_RAW_STDDEV_MAX_COOR_SPEED   (fwCfgp->u16_msPureRawStddevMaxCoorSpeed)   //AC2 - ms_pure_raw_stddev_max_coor_speed
#define CFG_U16_MS_PURE_RAW_STDDEV_MAX_DIFF_STR (fwCfgp->u16_msPureRawStddevMaxDiffStr) //AC4 - ms_pure_raw_stddev_max_diff_str
#define CFG_U16_MS_PURE_RAW_DIFF_SPECIAL_THRES  (fwCfgp->u16_msPureRawDiffSpecialThres) //AC6 - ms_pure_raw_diff_special_thres
#define CFG_B1_ISLAND_SUM_REJ_EN            (fwCfgp->b1_islandSumRejEn) //AC8 - island_sum_cfg
#define CFG_B1_ISLAND_SUM_NORMAL_DYNAMIC_THD_EN (fwCfgp->b1_islandSumNormalDynamicThdEn)    //AC8 - island_sum_cfg
#define CFG_B1_LP_ISLAND_SUM_REJ_EN         (fwCfgp->b1_lpIslandSumRejEn)   //AC8 - island_sum_cfg
#define CFG_U16_ISLAND_SUM_MOTION_ACTIVE_THRES  (fwCfgp->u16_islandSumMotionActiveThres)    //AC9 - island_sum_motion_active_thres
#define CFG_U16_ISLAND_SUM_GAME_MODE_MOTION_ACTIVE_THRES    (fwCfgp->u16_islandSumGameModeMotionActiveThres)    //ACB - island_sum_game_mode_motion_active_thres
#define CFG_U8_ISLAND_SUM_RPT_NUM_LIMIT     (fwCfgp->u8_islandSumRptNumLimit)   //ACD - island_sum_rpt_num_limit
#define CFG_U16_ISLAND_SUM_BASE_THRES       (fwCfgp->u16_islandSumBaseThres)    //ACE - island_sum_base_thres
#define CFG_U16_EDGE_ISLAND_SUM_BASE_THRES  (fwCfgp->u16_edgeIslandSumBaseThres)    //AD0 - edge_island_sum_base_thres
#define CFG_U16_ISLAND_SUM_BASE_THRES_HYST  (fwCfgp->u16_islandSumBaseThresHyst)    //AD2 - island_sum_base_thres_hyst
#define CFG_U16_EDGE_ISLAND_SUM_BASE_THRES_HYST (fwCfgp->u16_edgeIslandSumBaseThresHyst)    //AD4 - edge_island_sum_base_thres_hyst
#define CFG_U16_ISLAND_SUM_GAME_MODE_BASE_THRES (fwCfgp->u16_islandSumGameModeBaseThres)    //AD6 - island_sum_game_mode_base_thres
#define CFG_U16_EDGE_ISLAND_SUM_GAME_MODE_BASE_THRES    (fwCfgp->u16_edgeIslandSumGameModeBaseThres)    //AD8 - edge_island_sum_game_mode_base_thres
#define CFG_U16_ISLAND_SUM_GAME_MODE_BASE_THRES_HYST    (fwCfgp->u16_islandSumGameModeBaseThresHyst)    //ADA - island_sum_game_mode_base_thres_hyst
#define CFG_U16_EDGE_ISLAND_SUM_GAME_MODE_BASE_THRES_HYST   (fwCfgp->u16_edgeIslandSumGameModeBaseThresHyst)    //ADC - edge_island_sum_game_mode_base_thres_hyst
#define CFG_U16_ISLAND_SUM_MAX_LIMIT_THRES  (fwCfgp->u16_islandSumMaxLimitThres)    //ADE - island_sum_max_limit_thres
#define CFG_U16_EDGE_ISLAND_SUM_MAX_LIMIT_THRES (fwCfgp->u16_edgeIslandSumMaxLimitThres)    //AE0 - edge_island_sum_max_limit_thres
#define CFG_U16_ISLAND_SUM_GAME_MODE_MAX_LIMIT_THRES    (fwCfgp->u16_islandSumGameModeMaxLimitThres)    //AE2 - island_sum_game_mode_max_limit_thres
#define CFG_U16_EDGE_ISLAND_SUM_GAME_MODE_MAX_LIMIT_THRES   (fwCfgp->u16_edgeIslandSumGameModeMaxLimitThres)    //AE4 - edge_island_sum_game_mode_max_limit_thres
#define CFG_U16_ISLAND_SUM_MAX_ADD_HIDDEN_LIMIT_THRES   (fwCfgp->u16_islandSumMaxAddHiddenLimitThres)   //AE6 - island_sum_max_add_hidden_limit_thres
#define CFG_U16_LSLAND_SUM_SPEED_CHK_BLK_STR_SUM_THRES  (fwCfgp->u16_lslandSumSpeedChkBlkStrSumThres)   //AE8 - lsland_sum_speed_chk_blk_str_sum_thres
#define CFG_U8_ISLAND_SUM_SPEED_LOW_THRES   (fwCfgp->u8_islandSumSpeedLowThres) //AEA - island_sum_speed_low_thres
#define CFG_U8_ISLAND_SUM_SPEED_HIGH_THRES  (fwCfgp->u8_islandSumSpeedHighThres)    //AEB - island_sum_speed_high_thres
#define CFG_U8_ISLAND_SUM_DYNAMIC_THRES_MIN_PER (fwCfgp->u8_islandSumDynamicThresMinPer)    //AEC - island_sum_dynamic_thres_min_per
#define CFG_U8_ISLAND_SUM_DYNAMIC_THRES_MAX_PER (fwCfgp->u8_islandSumDynamicThresMaxPer)    //AED - island_sum_dynamic_thres_max_per
#define CFG_U8_ISLAND_SUM_DYNAMIC_THRES_ADD_PER_IN_HIDDEN   (fwCfgp->u8_islandSumDynamicThresAddPerInHidden)    //AEE - island_sum_dynamic_thres_add_per_in_hidden
#define CFG_U16_LSLAND_SUM_SPEED_CHK_BLK_STR_SUM_MIN_THRES  (fwCfgp->u16_lslandSumSpeedChkBlkStrSumMinThres)    //AEF - lsland_sum_speed_chk_blk_str_sum_min_thres
#define CFG_U8_MS_PURE_RAW_FCAL_EDGE_DIFF_R2R35_ADJUST_RATIO    (fwCfgp->u8_msPureRawFcalEdgeDiffR2r35AdjustRatio)  //AF1 - ms_pure_raw_fcal_edge_diff_r2r35_adjust_ratio
#define CFG_U16_MS_RAW_CMM_THRES            (fwCfgp->u16_msRawCmmThres) //AF4 - ms_raw_cmm_thres
#define CFG_U16_MS_RAW_CMM_MAX_MIN_DIFF_THRES   (fwCfgp->u16_msRawCmmMaxMinDiffThres)   //AF6 - ms_raw_cmm_max_min_diff_thres
#define CFG_U16_MS_RAW_CMM_DIFF_THRES       (fwCfgp->u16_msRawCmmDiffThres) //AF8 - ms_raw_cmm_diff_thres
#define CFG_U8_MS_INTG_BND_LNR_CMM_CH       (fwCfgp->u8_msIntgBndLnrCmmCh)  //AFA - ms_intg_bnd_lnr_cmm_ch
#define CFG_U8_MS_DIFF_LNR_CMM_1ST_NOTCH_COEF_WGH   (fwCfgp->u8_msDiffLnrCmm1stNotchCoefWgh)    //AFB - ms_diff_lnr_cmm_1st_notch_coef_wgh
#define CFG_U8_MS_DIFF_LNR_CMM_2ND_NOTCH_COEF_WGH   (fwCfgp->u8_msDiffLnrCmm2ndNotchCoefWgh)    //AFC - ms_diff_lnr_cmm_2nd_notch_coef_wgh
#define CFG_B1_ITO_CP_SEL                   (fwCfgp->b1_itoCpSel)       //AFE - ito_afe_cfg0
#define CFG_B1_ITO_DRV_3X_EN                (fwCfgp->b1_itoDrv3xEn)     //AFE - ito_afe_cfg0
#define CFG_B1_ITO_ACX_EN                   (fwCfgp->b1_itoAcxEn)       //AFE - ito_afe_cfg0
#define CFG_B1_ITO_DATA_FILTER_EN           (fwCfgp->b1_itoDataFilterEn)    //AFE - ito_afe_cfg0
#define CFG_B1_ITO_OS_FILTER_EN             (fwCfgp->b1_itoOsFilterEn)  //AFE - ito_afe_cfg0
#define CFG_B1_ITO_AZ_EN                    (fwCfgp->b1_itoAzEn)        //AFE - ito_afe_cfg0
#define CFG_B1_ITO_IOFF_EN                  (fwCfgp->b1_itoIoffEn)      //AFF - ito_afe_cfg1
#define CFG_B2_ITO_IOFF_STRENGTH            (fwCfgp->b2_itoIoffStrength)    //AFF - ito_afe_cfg1
#define CFG_B1_ITO_CG_EN                    (fwCfgp->b1_itoCgEn)        //AFF - ito_afe_cfg1
#define CFG_B2_ITO_DTO_MODE                 (fwCfgp->b2_itoDtoMode)     //AFF - ito_afe_cfg1
#define CFG_B1_ITO_C2I_SINGLE_END_EN        (fwCfgp->b1_itoC2iSingleEndEn)  //B00 - ito_afe_cfg2
#define CFG_B1_ITO_C2I_FLOAT_EN             (fwCfgp->b1_itoC2iFloatEn)  //B00 - ito_afe_cfg2
#define CFG_B2_ITO_C2I_LC_SEL               (fwCfgp->b2_itoC2iLcSel)    //B00 - ito_afe_cfg2
#define CFG_U8_ITO_CP_TUNE                  (fwCfgp->u8_itoCpTune)      //B01 - ito_afe_cfg3
#define CFG_B4_ITO_RL_OF_RT                 (fwCfgp->b4_itoRlOfRt)      //B02 - ito_afe_cfg4
#define CFG_B4_ITO_CX_CNT                   (fwCfgp->b4_itoCxCnt)       //B02 - ito_afe_cfg4
#define CFG_U16_ITO_T_CYC                   (fwCfgp->u16_itoTCyc)       //B04 - ito_t_cyc
#define CFG_U16_ITO_R_CYC                   (fwCfgp->u16_itoRCyc)       //B06 - ito_r_cyc
#define CFG_U16_ITO_OS_DLY                  (fwCfgp->u16_itoOsDly)      //B08 - ito_os_dly
#define CFG_U8_ITO_HIGH_RES_ANALOG_ACC      (fwCfgp->u8_itoHighResAnalogAcc)    //B0A - ito_high_res_prfl0
#define CFG_B4_ITO_HIGH_RES_DIG_ACC         (fwCfgp->b4_itoHighResDigAcc)   //B0B - ito_high_res_prfl1
#define CFG_B2_ITO_HIGH_RES_CA              (fwCfgp->b2_itoHighResCa)   //B0B - ito_high_res_prfl1
#define CFG_B2_ITO_HIGH_RES_DIV             (fwCfgp->b2_itoHighResDiv)  //B0B - ito_high_res_prfl1
#define CFG_B4_ITO_HIGH_RES_RSTC_CNT        (fwCfgp->b4_itoHighResRstcCnt)  //B0C - ito_high_res_prfl2
#define CFG_B5_ITO_HIGH_RES_OS_CNT          (fwCfgp->b5_itoHighResOsCnt)    //B0D - ito_high_res_prfl3
#define CFG_B5_ITO_HIGH_RES_OS_ACC          (fwCfgp->b5_itoHighResOsAcc)    //B0E - ito_high_res_prfl4
#define CFG_U16_ITO_HIGH_RES_ACC_RESET      (fwCfgp->u16_itoHighResAccReset)    //B10 - ito_high_res_prfl6
#define CFG_U8_ITO_PANEL_OPEN_THRES         (fwCfgp->u8_itoPanelOpenThres)  //B12 - ito_panel_open_threshold
#define CFG_U8_ITO_KEY_OPEN_THRES           (fwCfgp->u8_itoKeyOpenThres)    //B13 - ito_key_open_threshold
#define CFG_U8_ITO_RESISTOR_SETTING_VALUE   (fwCfgp->u8_itoResistorSettingValue)    //B14 - ito_resistor_setting_value
#define CFG_U16_ITO_HI_FREQ_MS_KEY_OPEN_THRES   (fwCfgp->u16_itoHiFreqMsKeyOpenThres)   //B16 - ito_hi_freq_ms_key_open_thres
#define CFG_B1_ITO_LOW_CP_SEL               (fwCfgp->b1_itoLowCpSel)    //B18 - ito_low_afe_cfg0
#define CFG_B1_ITO_LOW_DRV_3X_EN            (fwCfgp->b1_itoLowDrv3xEn)  //B18 - ito_low_afe_cfg0
#define CFG_B1_ITO_LOW_ACX_EN               (fwCfgp->b1_itoLowAcxEn)    //B18 - ito_low_afe_cfg0
#define CFG_B1_ITO_LOW_DATA_FILTER_EN       (fwCfgp->b1_itoLowDataFilterEn) //B18 - ito_low_afe_cfg0
#define CFG_B1_ITO_LOW_OS_FILTER_EN         (fwCfgp->b1_itoLowOsFilterEn)   //B18 - ito_low_afe_cfg0
#define CFG_B1_ITO_LOW_AZ_EN                (fwCfgp->b1_itoLowAzEn)     //B18 - ito_low_afe_cfg0
#define CFG_B1_ITO_LOW_IOFF_EN              (fwCfgp->b1_itoLowIoffEn)   //B19 - ito_low_afe_cfg1
#define CFG_B2_ITO_LOW_IOFF_STRENGTH        (fwCfgp->b2_itoLowIoffStrength) //B19 - ito_low_afe_cfg1
#define CFG_B1_ITO_LOW_CG_EN                (fwCfgp->b1_itoLowCgEn)     //B19 - ito_low_afe_cfg1
#define CFG_B2_ITO_LOW_DTO_MODE             (fwCfgp->b2_itoLowDtoMode)  //B19 - ito_low_afe_cfg1
#define CFG_B1_ITO_LOW_C2I_SINGLE_END_EN    (fwCfgp->b1_itoLowC2iSingleEndEn)   //B1A - ito_low_afe_cfg2
#define CFG_B1_ITO_LOW_C2I_FLOAT_EN         (fwCfgp->b1_itoLowC2iFloatEn)   //B1A - ito_low_afe_cfg2
#define CFG_B2_ITO_LOW_C2I_LC_SEL           (fwCfgp->b2_itoLowC2iLcSel) //B1A - ito_low_afe_cfg2
#define CFG_U8_ITO_LOW_CP_TUNE              (fwCfgp->u8_itoLowCpTune)   //B1B - ito_low_afe_cfg3
#define CFG_B4_ITO_LOW_RL_OF_RT             (fwCfgp->b4_itoLowRlOfRt)   //B1C - ito_low_afe_cfg4
#define CFG_B4_ITO_LOW_CX_CNT               (fwCfgp->b4_itoLowCxCnt)    //B1C - ito_low_afe_cfg4
#define CFG_U16_ITO_LOW_T_CYC               (fwCfgp->u16_itoLowTCyc)    //B1E - ito_low_t_cyc
#define CFG_U16_ITO_LOW_R_CYC               (fwCfgp->u16_itoLowRCyc)    //B20 - ito_low_r_cyc
#define CFG_U16_ITO_LOW_OS_DLY              (fwCfgp->u16_itoLowOsDly)   //B22 - ito_low_os_dly
#define CFG_U8_ITO_LOW_RES_ANALOG_ACC       (fwCfgp->u8_itoLowResAnalogAcc) //B24 - ito_low_res_prfl0
#define CFG_B4_ITO_LOW_RES_DIG_ACC          (fwCfgp->b4_itoLowResDigAcc)    //B25 - ito_low_res_prfl1
#define CFG_B2_ITO_LOW_RES_CA               (fwCfgp->b2_itoLowResCa)    //B25 - ito_low_res_prfl1
#define CFG_B2_ITO_LOW_RES_DIV              (fwCfgp->b2_itoLowResDiv)   //B25 - ito_low_res_prfl1
#define CFG_B4_ITO_LOW_RES_RSTC_CNT         (fwCfgp->b4_itoLowResRstcCnt)   //B26 - ito_low_res_prfl2
#define CFG_B5_ITO_LOW_RES_OS_CNT           (fwCfgp->b5_itoLowResOsCnt) //B27 - ito_low_res_prfl3
#define CFG_B5_ITO_LOW_RES_OS_ACC           (fwCfgp->b5_itoLowResOsAcc) //B28 - ito_low_res_prfl4
#define CFG_U16_ITO_LOW_RES_ACC_RESET       (fwCfgp->u16_itoLowResAccReset) //B2A - ito_low_res_prfl6
#define CFG_B1_MS_SENSE_STR_ADJ_EN          (fwCfgp->b1_msSenseStrAdjEn)    //B2D - ms_adj_str_cfg
#define CFG_B1_MS_SENSE_STR_ADJ_CORNER_EN   (fwCfgp->b1_msSenseStrAdjCornerEn)  //B2D - ms_adj_str_cfg
#define CFG_B1_MS_SENSE_STR_ADJ_HOLE_EN     (fwCfgp->b1_msSenseStrAdjHoleEn)    //B2D - ms_adj_str_cfg
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_0    (fwCfgp->u8_r0MsSenseCenStrAdj0)    //B2E - r0_ms_sense_cen_str_adj_0
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_1    (fwCfgp->u8_r0MsSenseCenStrAdj1)    //B2F - r0_ms_sense_cen_str_adj_1
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_2    (fwCfgp->u8_r0MsSenseCenStrAdj2)    //B30 - r0_ms_sense_cen_str_adj_2
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_3    (fwCfgp->u8_r0MsSenseCenStrAdj3)    //B31 - r0_ms_sense_cen_str_adj_3
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_4    (fwCfgp->u8_r0MsSenseCenStrAdj4)    //B32 - r0_ms_sense_cen_str_adj_4
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_5    (fwCfgp->u8_r0MsSenseCenStrAdj5)    //B33 - r0_ms_sense_cen_str_adj_5
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_6    (fwCfgp->u8_r0MsSenseCenStrAdj6)    //B34 - r0_ms_sense_cen_str_adj_6
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_7    (fwCfgp->u8_r0MsSenseCenStrAdj7)    //B35 - r0_ms_sense_cen_str_adj_7
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_8    (fwCfgp->u8_r0MsSenseCenStrAdj8)    //B36 - r0_ms_sense_cen_str_adj_8
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_9    (fwCfgp->u8_r0MsSenseCenStrAdj9)    //B37 - r0_ms_sense_cen_str_adj_9
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_10   (fwCfgp->u8_r0MsSenseCenStrAdj10)   //B38 - r0_ms_sense_cen_str_adj_10
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_11   (fwCfgp->u8_r0MsSenseCenStrAdj11)   //B39 - r0_ms_sense_cen_str_adj_11
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_12   (fwCfgp->u8_r0MsSenseCenStrAdj12)   //B3A - r0_ms_sense_cen_str_adj_12
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_13   (fwCfgp->u8_r0MsSenseCenStrAdj13)   //B3B - r0_ms_sense_cen_str_adj_13
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_14   (fwCfgp->u8_r0MsSenseCenStrAdj14)   //B3C - r0_ms_sense_cen_str_adj_14
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_15   (fwCfgp->u8_r0MsSenseCenStrAdj15)   //B3D - r0_ms_sense_cen_str_adj_15
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_16   (fwCfgp->u8_r0MsSenseCenStrAdj16)   //B3E - r0_ms_sense_cen_str_adj_16
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_17   (fwCfgp->u8_r0MsSenseCenStrAdj17)   //B3F - r0_ms_sense_cen_str_adj_17
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_18   (fwCfgp->u8_r0MsSenseCenStrAdj18)   //B40 - r0_ms_sense_cen_str_adj_18
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_19   (fwCfgp->u8_r0MsSenseCenStrAdj19)   //B41 - r0_ms_sense_cen_str_adj_19
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_20   (fwCfgp->u8_r0MsSenseCenStrAdj20)   //B42 - r0_ms_sense_cen_str_adj_20
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_21   (fwCfgp->u8_r0MsSenseCenStrAdj21)   //B43 - r0_ms_sense_cen_str_adj_21
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_22   (fwCfgp->u8_r0MsSenseCenStrAdj22)   //B44 - r0_ms_sense_cen_str_adj_22
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_23   (fwCfgp->u8_r0MsSenseCenStrAdj23)   //B45 - r0_ms_sense_cen_str_adj_23
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_24   (fwCfgp->u8_r0MsSenseCenStrAdj24)   //B46 - r0_ms_sense_cen_str_adj_24
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_25   (fwCfgp->u8_r0MsSenseCenStrAdj25)   //B47 - r0_ms_sense_cen_str_adj_25
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_26   (fwCfgp->u8_r0MsSenseCenStrAdj26)   //B48 - r0_ms_sense_cen_str_adj_26
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_27   (fwCfgp->u8_r0MsSenseCenStrAdj27)   //B49 - r0_ms_sense_cen_str_adj_27
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_28   (fwCfgp->u8_r0MsSenseCenStrAdj28)   //B4A - r0_ms_sense_cen_str_adj_28
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_29   (fwCfgp->u8_r0MsSenseCenStrAdj29)   //B4B - r0_ms_sense_cen_str_adj_29
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_30   (fwCfgp->u8_r0MsSenseCenStrAdj30)   //B4C - r0_ms_sense_cen_str_adj_30
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_31   (fwCfgp->u8_r0MsSenseCenStrAdj31)   //B4D - r0_ms_sense_cen_str_adj_31
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_32   (fwCfgp->u8_r0MsSenseCenStrAdj32)   //B4E - r0_ms_sense_cen_str_adj_32
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_33   (fwCfgp->u8_r0MsSenseCenStrAdj33)   //B4F - r0_ms_sense_cen_str_adj_33
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_34   (fwCfgp->u8_r0MsSenseCenStrAdj34)   //B50 - r0_ms_sense_cen_str_adj_34
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_35   (fwCfgp->u8_r0MsSenseCenStrAdj35)   //B51 - r0_ms_sense_cen_str_adj_35
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_36   (fwCfgp->u8_r0MsSenseCenStrAdj36)   //B52 - r0_ms_sense_cen_str_adj_36
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_37   (fwCfgp->u8_r0MsSenseCenStrAdj37)   //B53 - r0_ms_sense_cen_str_adj_37
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_38   (fwCfgp->u8_r0MsSenseCenStrAdj38)   //B54 - r0_ms_sense_cen_str_adj_38
#define CFG_U8_R0_MS_SENSE_CEN_STR_ADJ_39   (fwCfgp->u8_r0MsSenseCenStrAdj39)   //B55 - r0_ms_sense_cen_str_adj_39
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_0    (fwCfgp->u8_r1MsSenseCenStrAdj0)    //B56 - r1_ms_sense_cen_str_adj_0
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_1    (fwCfgp->u8_r1MsSenseCenStrAdj1)    //B57 - r1_ms_sense_cen_str_adj_1
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_2    (fwCfgp->u8_r1MsSenseCenStrAdj2)    //B58 - r1_ms_sense_cen_str_adj_2
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_3    (fwCfgp->u8_r1MsSenseCenStrAdj3)    //B59 - r1_ms_sense_cen_str_adj_3
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_4    (fwCfgp->u8_r1MsSenseCenStrAdj4)    //B5A - r1_ms_sense_cen_str_adj_4
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_5    (fwCfgp->u8_r1MsSenseCenStrAdj5)    //B5B - r1_ms_sense_cen_str_adj_5
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_6    (fwCfgp->u8_r1MsSenseCenStrAdj6)    //B5C - r1_ms_sense_cen_str_adj_6
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_7    (fwCfgp->u8_r1MsSenseCenStrAdj7)    //B5D - r1_ms_sense_cen_str_adj_7
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_8    (fwCfgp->u8_r1MsSenseCenStrAdj8)    //B5E - r1_ms_sense_cen_str_adj_8
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_9    (fwCfgp->u8_r1MsSenseCenStrAdj9)    //B5F - r1_ms_sense_cen_str_adj_9
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_10   (fwCfgp->u8_r1MsSenseCenStrAdj10)   //B60 - r1_ms_sense_cen_str_adj_10
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_11   (fwCfgp->u8_r1MsSenseCenStrAdj11)   //B61 - r1_ms_sense_cen_str_adj_11
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_12   (fwCfgp->u8_r1MsSenseCenStrAdj12)   //B62 - r1_ms_sense_cen_str_adj_12
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_13   (fwCfgp->u8_r1MsSenseCenStrAdj13)   //B63 - r1_ms_sense_cen_str_adj_13
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_14   (fwCfgp->u8_r1MsSenseCenStrAdj14)   //B64 - r1_ms_sense_cen_str_adj_14
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_15   (fwCfgp->u8_r1MsSenseCenStrAdj15)   //B65 - r1_ms_sense_cen_str_adj_15
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_16   (fwCfgp->u8_r1MsSenseCenStrAdj16)   //B66 - r1_ms_sense_cen_str_adj_16
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_17   (fwCfgp->u8_r1MsSenseCenStrAdj17)   //B67 - r1_ms_sense_cen_str_adj_17
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_18   (fwCfgp->u8_r1MsSenseCenStrAdj18)   //B68 - r1_ms_sense_cen_str_adj_18
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_19   (fwCfgp->u8_r1MsSenseCenStrAdj19)   //B69 - r1_ms_sense_cen_str_adj_19
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_20   (fwCfgp->u8_r1MsSenseCenStrAdj20)   //B6A - r1_ms_sense_cen_str_adj_20
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_21   (fwCfgp->u8_r1MsSenseCenStrAdj21)   //B6B - r1_ms_sense_cen_str_adj_21
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_22   (fwCfgp->u8_r1MsSenseCenStrAdj22)   //B6C - r1_ms_sense_cen_str_adj_22
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_23   (fwCfgp->u8_r1MsSenseCenStrAdj23)   //B6D - r1_ms_sense_cen_str_adj_23
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_24   (fwCfgp->u8_r1MsSenseCenStrAdj24)   //B6E - r1_ms_sense_cen_str_adj_24
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_25   (fwCfgp->u8_r1MsSenseCenStrAdj25)   //B6F - r1_ms_sense_cen_str_adj_25
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_26   (fwCfgp->u8_r1MsSenseCenStrAdj26)   //B70 - r1_ms_sense_cen_str_adj_26
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_27   (fwCfgp->u8_r1MsSenseCenStrAdj27)   //B71 - r1_ms_sense_cen_str_adj_27
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_28   (fwCfgp->u8_r1MsSenseCenStrAdj28)   //B72 - r1_ms_sense_cen_str_adj_28
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_29   (fwCfgp->u8_r1MsSenseCenStrAdj29)   //B73 - r1_ms_sense_cen_str_adj_29
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_30   (fwCfgp->u8_r1MsSenseCenStrAdj30)   //B74 - r1_ms_sense_cen_str_adj_30
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_31   (fwCfgp->u8_r1MsSenseCenStrAdj31)   //B75 - r1_ms_sense_cen_str_adj_31
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_32   (fwCfgp->u8_r1MsSenseCenStrAdj32)   //B76 - r1_ms_sense_cen_str_adj_32
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_33   (fwCfgp->u8_r1MsSenseCenStrAdj33)   //B77 - r1_ms_sense_cen_str_adj_33
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_34   (fwCfgp->u8_r1MsSenseCenStrAdj34)   //B78 - r1_ms_sense_cen_str_adj_34
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_35   (fwCfgp->u8_r1MsSenseCenStrAdj35)   //B79 - r1_ms_sense_cen_str_adj_35
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_36   (fwCfgp->u8_r1MsSenseCenStrAdj36)   //B7A - r1_ms_sense_cen_str_adj_36
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_37   (fwCfgp->u8_r1MsSenseCenStrAdj37)   //B7B - r1_ms_sense_cen_str_adj_37
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_38   (fwCfgp->u8_r1MsSenseCenStrAdj38)   //B7C - r1_ms_sense_cen_str_adj_38
#define CFG_U8_R1_MS_SENSE_CEN_STR_ADJ_39   (fwCfgp->u8_r1MsSenseCenStrAdj39)   //B7D - r1_ms_sense_cen_str_adj_39
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_0    (fwCfgp->u8_r2MsSenseCenStrAdj0)    //B7E - r2_ms_sense_cen_str_adj_0
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_1    (fwCfgp->u8_r2MsSenseCenStrAdj1)    //B7F - r2_ms_sense_cen_str_adj_1
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_2    (fwCfgp->u8_r2MsSenseCenStrAdj2)    //B80 - r2_ms_sense_cen_str_adj_2
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_3    (fwCfgp->u8_r2MsSenseCenStrAdj3)    //B81 - r2_ms_sense_cen_str_adj_3
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_4    (fwCfgp->u8_r2MsSenseCenStrAdj4)    //B82 - r2_ms_sense_cen_str_adj_4
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_5    (fwCfgp->u8_r2MsSenseCenStrAdj5)    //B83 - r2_ms_sense_cen_str_adj_5
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_6    (fwCfgp->u8_r2MsSenseCenStrAdj6)    //B84 - r2_ms_sense_cen_str_adj_6
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_7    (fwCfgp->u8_r2MsSenseCenStrAdj7)    //B85 - r2_ms_sense_cen_str_adj_7
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_8    (fwCfgp->u8_r2MsSenseCenStrAdj8)    //B86 - r2_ms_sense_cen_str_adj_8
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_9    (fwCfgp->u8_r2MsSenseCenStrAdj9)    //B87 - r2_ms_sense_cen_str_adj_9
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_10   (fwCfgp->u8_r2MsSenseCenStrAdj10)   //B88 - r2_ms_sense_cen_str_adj_10
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_11   (fwCfgp->u8_r2MsSenseCenStrAdj11)   //B89 - r2_ms_sense_cen_str_adj_11
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_12   (fwCfgp->u8_r2MsSenseCenStrAdj12)   //B8A - r2_ms_sense_cen_str_adj_12
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_13   (fwCfgp->u8_r2MsSenseCenStrAdj13)   //B8B - r2_ms_sense_cen_str_adj_13
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_14   (fwCfgp->u8_r2MsSenseCenStrAdj14)   //B8C - r2_ms_sense_cen_str_adj_14
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_15   (fwCfgp->u8_r2MsSenseCenStrAdj15)   //B8D - r2_ms_sense_cen_str_adj_15
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_16   (fwCfgp->u8_r2MsSenseCenStrAdj16)   //B8E - r2_ms_sense_cen_str_adj_16
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_17   (fwCfgp->u8_r2MsSenseCenStrAdj17)   //B8F - r2_ms_sense_cen_str_adj_17
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_18   (fwCfgp->u8_r2MsSenseCenStrAdj18)   //B90 - r2_ms_sense_cen_str_adj_18
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_19   (fwCfgp->u8_r2MsSenseCenStrAdj19)   //B91 - r2_ms_sense_cen_str_adj_19
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_20   (fwCfgp->u8_r2MsSenseCenStrAdj20)   //B92 - r2_ms_sense_cen_str_adj_20
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_21   (fwCfgp->u8_r2MsSenseCenStrAdj21)   //B93 - r2_ms_sense_cen_str_adj_21
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_22   (fwCfgp->u8_r2MsSenseCenStrAdj22)   //B94 - r2_ms_sense_cen_str_adj_22
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_23   (fwCfgp->u8_r2MsSenseCenStrAdj23)   //B95 - r2_ms_sense_cen_str_adj_23
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_24   (fwCfgp->u8_r2MsSenseCenStrAdj24)   //B96 - r2_ms_sense_cen_str_adj_24
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_25   (fwCfgp->u8_r2MsSenseCenStrAdj25)   //B97 - r2_ms_sense_cen_str_adj_25
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_26   (fwCfgp->u8_r2MsSenseCenStrAdj26)   //B98 - r2_ms_sense_cen_str_adj_26
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_27   (fwCfgp->u8_r2MsSenseCenStrAdj27)   //B99 - r2_ms_sense_cen_str_adj_27
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_28   (fwCfgp->u8_r2MsSenseCenStrAdj28)   //B9A - r2_ms_sense_cen_str_adj_28
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_29   (fwCfgp->u8_r2MsSenseCenStrAdj29)   //B9B - r2_ms_sense_cen_str_adj_29
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_30   (fwCfgp->u8_r2MsSenseCenStrAdj30)   //B9C - r2_ms_sense_cen_str_adj_30
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_31   (fwCfgp->u8_r2MsSenseCenStrAdj31)   //B9D - r2_ms_sense_cen_str_adj_31
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_32   (fwCfgp->u8_r2MsSenseCenStrAdj32)   //B9E - r2_ms_sense_cen_str_adj_32
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_33   (fwCfgp->u8_r2MsSenseCenStrAdj33)   //B9F - r2_ms_sense_cen_str_adj_33
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_34   (fwCfgp->u8_r2MsSenseCenStrAdj34)   //BA0 - r2_ms_sense_cen_str_adj_34
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_35   (fwCfgp->u8_r2MsSenseCenStrAdj35)   //BA1 - r2_ms_sense_cen_str_adj_35
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_36   (fwCfgp->u8_r2MsSenseCenStrAdj36)   //BA2 - r2_ms_sense_cen_str_adj_36
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_37   (fwCfgp->u8_r2MsSenseCenStrAdj37)   //BA3 - r2_ms_sense_cen_str_adj_37
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_38   (fwCfgp->u8_r2MsSenseCenStrAdj38)   //BA4 - r2_ms_sense_cen_str_adj_38
#define CFG_U8_R2_MS_SENSE_CEN_STR_ADJ_39   (fwCfgp->u8_r2MsSenseCenStrAdj39)   //BA5 - r2_ms_sense_cen_str_adj_39
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_0    (fwCfgp->u8_r3MsSenseCenStrAdj0)    //BA6 - r3_ms_sense_cen_str_adj_0
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_1    (fwCfgp->u8_r3MsSenseCenStrAdj1)    //BA7 - r3_ms_sense_cen_str_adj_1
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_2    (fwCfgp->u8_r3MsSenseCenStrAdj2)    //BA8 - r3_ms_sense_cen_str_adj_2
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_3    (fwCfgp->u8_r3MsSenseCenStrAdj3)    //BA9 - r3_ms_sense_cen_str_adj_3
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_4    (fwCfgp->u8_r3MsSenseCenStrAdj4)    //BAA - r3_ms_sense_cen_str_adj_4
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_5    (fwCfgp->u8_r3MsSenseCenStrAdj5)    //BAB - r3_ms_sense_cen_str_adj_5
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_6    (fwCfgp->u8_r3MsSenseCenStrAdj6)    //BAC - r3_ms_sense_cen_str_adj_6
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_7    (fwCfgp->u8_r3MsSenseCenStrAdj7)    //BAD - r3_ms_sense_cen_str_adj_7
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_8    (fwCfgp->u8_r3MsSenseCenStrAdj8)    //BAE - r3_ms_sense_cen_str_adj_8
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_9    (fwCfgp->u8_r3MsSenseCenStrAdj9)    //BAF - r3_ms_sense_cen_str_adj_9
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_10   (fwCfgp->u8_r3MsSenseCenStrAdj10)   //BB0 - r3_ms_sense_cen_str_adj_10
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_11   (fwCfgp->u8_r3MsSenseCenStrAdj11)   //BB1 - r3_ms_sense_cen_str_adj_11
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_12   (fwCfgp->u8_r3MsSenseCenStrAdj12)   //BB2 - r3_ms_sense_cen_str_adj_12
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_13   (fwCfgp->u8_r3MsSenseCenStrAdj13)   //BB3 - r3_ms_sense_cen_str_adj_13
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_14   (fwCfgp->u8_r3MsSenseCenStrAdj14)   //BB4 - r3_ms_sense_cen_str_adj_14
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_15   (fwCfgp->u8_r3MsSenseCenStrAdj15)   //BB5 - r3_ms_sense_cen_str_adj_15
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_16   (fwCfgp->u8_r3MsSenseCenStrAdj16)   //BB6 - r3_ms_sense_cen_str_adj_16
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_17   (fwCfgp->u8_r3MsSenseCenStrAdj17)   //BB7 - r3_ms_sense_cen_str_adj_17
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_18   (fwCfgp->u8_r3MsSenseCenStrAdj18)   //BB8 - r3_ms_sense_cen_str_adj_18
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_19   (fwCfgp->u8_r3MsSenseCenStrAdj19)   //BB9 - r3_ms_sense_cen_str_adj_19
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_20   (fwCfgp->u8_r3MsSenseCenStrAdj20)   //BBA - r3_ms_sense_cen_str_adj_20
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_21   (fwCfgp->u8_r3MsSenseCenStrAdj21)   //BBB - r3_ms_sense_cen_str_adj_21
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_22   (fwCfgp->u8_r3MsSenseCenStrAdj22)   //BBC - r3_ms_sense_cen_str_adj_22
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_23   (fwCfgp->u8_r3MsSenseCenStrAdj23)   //BBD - r3_ms_sense_cen_str_adj_23
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_24   (fwCfgp->u8_r3MsSenseCenStrAdj24)   //BBE - r3_ms_sense_cen_str_adj_24
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_25   (fwCfgp->u8_r3MsSenseCenStrAdj25)   //BBF - r3_ms_sense_cen_str_adj_25
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_26   (fwCfgp->u8_r3MsSenseCenStrAdj26)   //BC0 - r3_ms_sense_cen_str_adj_26
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_27   (fwCfgp->u8_r3MsSenseCenStrAdj27)   //BC1 - r3_ms_sense_cen_str_adj_27
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_28   (fwCfgp->u8_r3MsSenseCenStrAdj28)   //BC2 - r3_ms_sense_cen_str_adj_28
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_29   (fwCfgp->u8_r3MsSenseCenStrAdj29)   //BC3 - r3_ms_sense_cen_str_adj_29
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_30   (fwCfgp->u8_r3MsSenseCenStrAdj30)   //BC4 - r3_ms_sense_cen_str_adj_30
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_31   (fwCfgp->u8_r3MsSenseCenStrAdj31)   //BC5 - r3_ms_sense_cen_str_adj_31
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_32   (fwCfgp->u8_r3MsSenseCenStrAdj32)   //BC6 - r3_ms_sense_cen_str_adj_32
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_33   (fwCfgp->u8_r3MsSenseCenStrAdj33)   //BC7 - r3_ms_sense_cen_str_adj_33
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_34   (fwCfgp->u8_r3MsSenseCenStrAdj34)   //BC8 - r3_ms_sense_cen_str_adj_34
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_35   (fwCfgp->u8_r3MsSenseCenStrAdj35)   //BC9 - r3_ms_sense_cen_str_adj_35
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_36   (fwCfgp->u8_r3MsSenseCenStrAdj36)   //BCA - r3_ms_sense_cen_str_adj_36
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_37   (fwCfgp->u8_r3MsSenseCenStrAdj37)   //BCB - r3_ms_sense_cen_str_adj_37
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_38   (fwCfgp->u8_r3MsSenseCenStrAdj38)   //BCC - r3_ms_sense_cen_str_adj_38
#define CFG_U8_R3_MS_SENSE_CEN_STR_ADJ_39   (fwCfgp->u8_r3MsSenseCenStrAdj39)   //BCD - r3_ms_sense_cen_str_adj_39
#define CFG_U8_R0_MS_SENSE_EDGE_STR_ADJ_0   (fwCfgp->u8_r0MsSenseEdgeStrAdj0)   //BCE - r0_ms_sense_edge_str_adj_0
#define CFG_U8_R0_MS_SENSE_EDGE_STR_ADJ_1   (fwCfgp->u8_r0MsSenseEdgeStrAdj1)   //BCF - r0_ms_sense_edge_str_adj_1
#define CFG_U8_R0_MS_SENSE_EDGE_STR_ADJ_2   (fwCfgp->u8_r0MsSenseEdgeStrAdj2)   //BD0 - r0_ms_sense_edge_str_adj_2
#define CFG_U8_R0_MS_SENSE_EDGE_STR_ADJ_3   (fwCfgp->u8_r0MsSenseEdgeStrAdj3)   //BD1 - r0_ms_sense_edge_str_adj_3
#define CFG_U8_R1_MS_SENSE_EDGE_STR_ADJ_0   (fwCfgp->u8_r1MsSenseEdgeStrAdj0)   //BD2 - r1_ms_sense_edge_str_adj_0
#define CFG_U8_R1_MS_SENSE_EDGE_STR_ADJ_1   (fwCfgp->u8_r1MsSenseEdgeStrAdj1)   //BD3 - r1_ms_sense_edge_str_adj_1
#define CFG_U8_R1_MS_SENSE_EDGE_STR_ADJ_2   (fwCfgp->u8_r1MsSenseEdgeStrAdj2)   //BD4 - r1_ms_sense_edge_str_adj_2
#define CFG_U8_R1_MS_SENSE_EDGE_STR_ADJ_3   (fwCfgp->u8_r1MsSenseEdgeStrAdj3)   //BD5 - r1_ms_sense_edge_str_adj_3
#define CFG_U8_R2_MS_SENSE_EDGE_STR_ADJ_0   (fwCfgp->u8_r2MsSenseEdgeStrAdj0)   //BD6 - r2_ms_sense_edge_str_adj_0
#define CFG_U8_R2_MS_SENSE_EDGE_STR_ADJ_1   (fwCfgp->u8_r2MsSenseEdgeStrAdj1)   //BD7 - r2_ms_sense_edge_str_adj_1
#define CFG_U8_R2_MS_SENSE_EDGE_STR_ADJ_2   (fwCfgp->u8_r2MsSenseEdgeStrAdj2)   //BD8 - r2_ms_sense_edge_str_adj_2
#define CFG_U8_R2_MS_SENSE_EDGE_STR_ADJ_3   (fwCfgp->u8_r2MsSenseEdgeStrAdj3)   //BD9 - r2_ms_sense_edge_str_adj_3
#define CFG_U8_R3_MS_SENSE_EDGE_STR_ADJ_0   (fwCfgp->u8_r3MsSenseEdgeStrAdj0)   //BDA - r3_ms_sense_edge_str_adj_0
#define CFG_U8_R3_MS_SENSE_EDGE_STR_ADJ_1   (fwCfgp->u8_r3MsSenseEdgeStrAdj1)   //BDB - r3_ms_sense_edge_str_adj_1
#define CFG_U8_R3_MS_SENSE_EDGE_STR_ADJ_2   (fwCfgp->u8_r3MsSenseEdgeStrAdj2)   //BDC - r3_ms_sense_edge_str_adj_2
#define CFG_U8_R3_MS_SENSE_EDGE_STR_ADJ_3   (fwCfgp->u8_r3MsSenseEdgeStrAdj3)   //BDD - r3_ms_sense_edge_str_adj_3
#define CFG_U16_LNG_SHAPE_LENGTH_THRES      (fwCfgp->u16_lngShapeLengthThres)   //BE0 - lng_shape_length_thres
#define CFG_U16_LNG_SHAPE_WIDTH_THRES       (fwCfgp->u16_lngShapeWidthThres)    //BE2 - lng_shape_width_thres
#define CFG_U16_LNG_SHAPE_NODE_THRES        (fwCfgp->u16_lngShapeNodeThres) //BE4 - lng_shape_node_thres
#define CFG_U16_LNG_SHAPE_NODE_DIFF_THRES   (fwCfgp->u16_lngShapeNodeDiffThres) //BE6 - lng_shape_node_diff_thres
#define CFG_U16_LNG_SHAPE_EXT_NODE          (fwCfgp->u16_lngShapeExtNode)   //BE8 - lng_shape_ext_node
#define CFG_U16_MS_RES_R01_RATIO            (fwCfgp->u16_msResR01Ratio) //BF0 - ms_res_r01_ratio
#define CFG_U16_MS_RES_FGRR2_THRES          (fwCfgp->u16_msResFgrr2Thres)   //BF2 - ms_res_fgrR2_thres
#define CFG_U16_MS_RES_R12_RATIO            (fwCfgp->u16_msResR12Ratio) //BF4 - ms_res_r12_ratio
#define CFG_U8_MS_SENSE_STR_ADD_ADJ_WTR     (fwCfgp->u8_msSenseStrAddAdjWtr)    //C13 - ms_sense_str_add_adj_wtr
#define CFG_U8_MS_SENSE_STR_ADD_ADJ_GLV     (fwCfgp->u8_msSenseStrAddAdjGlv)    //C14 - ms_sense_str_add_adj_glv
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_0    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxTx0)  //C15 - ms_sense_str_adj_camera_hole_idx_tx_0
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_0    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxRx0)  //C16 - ms_sense_str_adj_camera_hole_idx_rx_0
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_1    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxTx1)  //C17 - ms_sense_str_adj_camera_hole_idx_tx_1
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_1    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxRx1)  //C18 - ms_sense_str_adj_camera_hole_idx_rx_1
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_2    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxTx2)  //C19 - ms_sense_str_adj_camera_hole_idx_tx_2
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_2    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxRx2)  //C1A - ms_sense_str_adj_camera_hole_idx_rx_2
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_3    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxTx3)  //C1B - ms_sense_str_adj_camera_hole_idx_tx_3
#define CFG_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_3    (fwCfgp->u8_msSenseStrAdjCameraHoleIdxRx3)  //C1C - ms_sense_str_adj_camera_hole_idx_rx_3
#define CFG_B1_STR_CLEAR_FOR_HOLE_EN        (fwCfgp->b1_strClearForHoleEn)  //C1D - ms_sense_adj_for_hole_config
#define CFG_U8_MS_SRC_SKIP_BIT_SHIFT        (fwCfgp->u8_msSrcSkipBitShift)  //C20 - ms_src_skip_bit_shift
#define CFG_U8_MS_SRC_HIGH_RES_BIT_SHIFT    (fwCfgp->u8_msSrcHighResBitShift)   //C21 - ms_src_high_res_bit_shift
#define CFG_U8_MS_SRC_HIGH_RES_MFS_BIT_SHIFT    (fwCfgp->u8_msSrcHighResMfsBitShift)    //C22 - ms_src_high_res_mfs_bit_shift
#define CFG_U8_MS_SRC_HIGH_RES_FWA_BIT_SHIFT    (fwCfgp->u8_msSrcHighResFwaBitShift)    //C23 - ms_src_high_res_fwa_bit_shift
#define CFG_U8_MS_SRC_HIGH_RES_FWA_NOISY_BIT_SHIFT  (fwCfgp->u8_msSrcHighResFwaNoisyBitShift)   //C24 - ms_src_high_res_fwa_noisy_bit_shift
#define CFG_U8_MS_SRC_HIGH_RES_FWA_MFS_BIT_SHIFT    (fwCfgp->u8_msSrcHighResFwaMfsBitShift) //C25 - ms_src_high_res_fwa_mfs_bit_shift
#define CFG_U8_MS_SRC_HIGH_RES_FWA_GLV_BIT_SHIFT    (fwCfgp->u8_msSrcHighResFwaGlvBitShift) //C26 - ms_src_high_res_fwa_glv_bit_shift
#define CFG_U8_MS_SRC_LP_BIT_SHIFT          (fwCfgp->u8_msSrcLpBitShift)    //C27 - ms_src_lp_bit_shift
#define CFG_U8_MS_SRC_CX_BIT_SHIFT          (fwCfgp->u8_msSrcCxBitShift)    //C28 - ms_src_cx_bit_shift
#define CFG_U8_MS_SRC_LP_CX_BIT_SHIFT       (fwCfgp->u8_msSrcLpCxBitShift)  //C29 - ms_src_lp_cx_bit_shift
#define CFG_U8_MS_SRC_ITO_BIT_SHIFT         (fwCfgp->u8_msSrcItoBitShift)   //C2A - ms_src_ito_bit_shift
#define CFG_U8_MS_SRC_ITO_MICRO_BIT_SHIFT   (fwCfgp->u8_msSrcItoMicroBitShift)  //C2B - ms_src_ito_micro_bit_shift
#define CFG_U8_MS_SRC_IOFF_BIT_SHIFT        (fwCfgp->u8_msSrcIoffBitShift)  //C2C - ms_src_ioff_bit_shift
#define CFG_U8_MS_SRC_AGING_BIT_SHIFT       (fwCfgp->u8_msSrcAgingBitShift) //C2D - ms_src_aging_bit_shift
#define CFG_U8_MS_SRC_AOFF_BIT_SHIFT        (fwCfgp->u8_msSrcAoffBitShift)  //C2E - ms_src_aoff_bit_shift
#define CFG_U8_MS_MRN_SKIP_BIT_SHIFT        (fwCfgp->u8_msMrnSkipBitShift)  //C2F - ms_mrn_skip_bit_shift
#define CFG_U8_MS_MRN_DEFAULT_BIT_SHIFT     (fwCfgp->u8_msMrnDefaultBitShift)   //C30 - ms_mrn_default_bit_shift
#define CFG_U8_MS_MRN_MFS_BIT_SHIFT         (fwCfgp->u8_msMrnMfsBitShift)   //C31 - ms_mrn_mfs_bit_shift
#define CFG_U8_MS_MRN_MULTI_ACC_NOISY_BIT_SHIFT (fwCfgp->u8_msMrnMultiAccNoisyBitShift) //C32 - ms_mrn_multi_acc_noisy_bit_shift
#define CFG_U8_MS_MRN_DUMMY_BIT_SHIFT       (fwCfgp->u8_msMrnDummyBitShift) //C33 - ms_mrn_dummy_bit_shift
#define CFG_U8_SS_TCH_SKIP_BIT_SHIFT        (fwCfgp->u8_ssTchSkipBitShift)  //C34 - ss_tch_skip_bit_shift
#define CFG_U8_SS_TCH_HIGH_RES_BIT_SHIFT    (fwCfgp->u8_ssTchHighResBitShift)   //C35 - ss_tch_high_res_bit_shift
#define CFG_U8_SS_TCH_CX_BIT_SHIFT          (fwCfgp->u8_ssTchCxBitShift)    //C36 - ss_tch_cx_bit_shift
#define CFG_U8_SS_TCH_IX_BIT_SHIFT          (fwCfgp->u8_ssTchIxBitShift)    //C37 - ss_tch_ix_bit_shift
#define CFG_U8_SS_TCH_IOFF_BIT_SHIFT        (fwCfgp->u8_ssTchIoffBitShift)  //C38 - ss_tch_ioff_bit_shift
#define CFG_U8_SS_TCH_JITTER_BIT_SHIFT      (fwCfgp->u8_ssTchJitterBitShift)    //C39 - ss_tch_jitter_bit_shift
#define CFG_U8_SS_DET_SKIP_BIT_SHIFT        (fwCfgp->u8_ssDetSkipBitShift)  //C3A - ss_det_skip_bit_shift
#define CFG_U8_SS_DET_HIGH_RES_BIT_SHIFT    (fwCfgp->u8_ssDetHighResBitShift)   //C3B - ss_det_high_res_bit_shift
#define CFG_U8_SS_DET_CX_BIT_SHIFT          (fwCfgp->u8_ssDetCxBitShift)    //C3C - ss_det_cx_bit_shift
#define CFG_U8_SS_DET_IX_BIT_SHIFT          (fwCfgp->u8_ssDetIxBitShift)    //C3D - ss_det_ix_bit_shift
#define CFG_U8_SS_DET_IOFF_BIT_SHIFT        (fwCfgp->u8_ssDetIoffBitShift)  //C3E - ss_det_ioff_bit_shift
#define CFG_U8_GES_LNG_PRS_BIG_MTOL         (fwCfgp->u8_gesLngPrsBigMtol)   //C40 - ges_lng_prs_big_mtol
#define CFG_U16_GES_LNG_PRS_BIG_X_START     (fwCfgp->u16_gesLngPrsBigXStart)    //C41 - ges_lng_prs_big_x_start
#define CFG_U16_GES_LNG_PRS_BIG_X_END       (fwCfgp->u16_gesLngPrsBigXEnd)  //C43 - ges_lng_prs_big_x_end
#define CFG_U16_GES_LNG_PRS_BIG_Y_START     (fwCfgp->u16_gesLngPrsBigYStart)    //C45 - ges_lng_prs_big_y_start
#define CFG_U16_GES_LNG_PRS_BIG_Y_END       (fwCfgp->u16_gesLngPrsBigYEnd)  //C47 - ges_lng_prs_big_y_end
#define CFG_U8_LP_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_PER    (fwCfgp->u8_lpGesBigOverlapArea2LngprsAreaPer)  //C49 - lp_ges_big_overlap_area_2_lngprs_area_per
#define CFG_U8_LP_GES_BIG_OVERLAP_AREA_2_TCH_AREA_PER   (fwCfgp->u8_lpGesBigOverlapArea2TchAreaPer) //C4A - lp_ges_big_overlap_area_2_tch_area_per
#define CFG_U8_LP_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_HYST_PER   (fwCfgp->u8_lpGesBigOverlapArea2LngprsAreaHystPer)  //C4B - lp_ges_big_overlap_area_2_lngprs_area_hyst_per
#define CFG_U8_ACT_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_PER   (fwCfgp->u8_actGesBigOverlapArea2LngprsAreaPer) //C4C - act_ges_big_overlap_area_2_lngprs_area_per
#define CFG_U8_ACT_GES_BIG_OVERLAP_AREA_2_TCH_AREA_PER  (fwCfgp->u8_actGesBigOverlapArea2TchAreaPer)    //C4D - act_ges_big_overlap_area_2_tch_area_per
#define CFG_U8_ACT_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_HYST_PER  (fwCfgp->u8_actGesBigOverlapArea2LngprsAreaHystPer) //C4E - act_ges_big_overlap_area_2_lngprs_area_hyst_per
#define CFG_B1_GES_LNG_PRS_ACTIVE_MODE_EN   (fwCfgp->b1_gesLngPrsActiveModeEn)  //C50 - ges_lng_prs_cfg
#define CFG_U8_GES_LNG_PRS_DUR              (fwCfgp->u8_gesLngPrsDur)   //C51 - ges_lng_prs_dur
#define CFG_U8_GES_LNG_PRS_MTOL             (fwCfgp->u8_gesLngPrsMtol)  //C52 - ges_lng_prs_mtol
#define CFG_U16_GES_LNG_PRS_X_START         (fwCfgp->u16_gesLngPrsXStart)   //C53 - ges_lng_prs_x_start
#define CFG_U16_GES_LNG_PRS_X_END           (fwCfgp->u16_gesLngPrsXEnd) //C55 - ges_lng_prs_x_end
#define CFG_U16_GES_LNG_PRS_Y_START         (fwCfgp->u16_gesLngPrsYStart)   //C57 - ges_lng_prs_y_start
#define CFG_U16_GES_LNG_PRS_Y_END           (fwCfgp->u16_gesLngPrsYEnd) //C59 - ges_lng_prs_y_end
#define CFG_U8_LP_GES_OVERLAP_AREA_2_LNG_PRS_AREA_PERCENT   (fwCfgp->u8_lpGesOverlapArea2LngPrsAreaPercent) //C5B - lp_ges_overlap_area_2_lng_prs_area_percent
#define CFG_U8_LP_GES_OVERLAP_AREA_2_TCH_AREA_PERCENT   (fwCfgp->u8_lpGesOverlapArea2TchAreaPercent)    //C5C - lp_ges_overlap_area_2_tch_area_percent
#define CFG_U8_ACTIVE_GES_OVERLAP_AREA_2_LNG_PRS_AREA_PERCENT   (fwCfgp->u8_activeGesOverlapArea2LngPrsAreaPercent) //C5D - active_ges_overlap_area_2_lng_prs_area_percent
#define CFG_U8_ACTIVE_GES_OVERLAP_AREA_2_TCH_AREA_PERCENT   (fwCfgp->u8_activeGesOverlapArea2TchAreaPercent)    //C5E - active_ges_overlap_area_2_tch_area_percent
#define CFG_U8_GES_LNG_PRS_STR_THRES_PERCENT    (fwCfgp->u8_gesLngPrsStrThresPercent)   //C5F - ges_lng_prs_strength_threshold_percent
#define CFG_U8_GES_LNG_PRS_X_START_OFFSET   (fwCfgp->u8_gesLngPrsXStartOffset)  //C60 - ges_lng_prs_x_start_offset
#define CFG_U8_GES_LNG_PRS_X_END_OFFSET     (fwCfgp->u8_gesLngPrsXEndOffset)    //C61 - ges_lng_prs_x_end_offset
#define CFG_U8_GES_LNG_PRS_Y_START_OFFSET   (fwCfgp->u8_gesLngPrsYStartOffset)  //C62 - ges_lng_prs_y_start_offset
#define CFG_U8_GES_LNG_PRS_Y_END_OFFSET     (fwCfgp->u8_gesLngPrsYEndOffset)    //C63 - ges_lng_prs_y_end_offset
#define CFG_U8_LP_GES_OVERLAP_AREA_2_LNG_PRS_AREA_HYST_PERCENT  (fwCfgp->u8_lpGesOverlapArea2LngPrsAreaHystPercent) //C64 - lp_ges_overlap_area_2_lng_prs_area_hyst_percent
#define CFG_U8_ACTIVE_GES_OVERLAP_AREA_2_LNG_PRS_AREA_HYST_PERCENT  (fwCfgp->u8_activeGesOverlapArea2LngPrsAreaHystPercent) //C65 - active_ges_overlap_area_2_lng_prs_area_hyst_percent
#define CFG_U16_GES_LNG_PRS_CAL_AREA_PER_X_START    (fwCfgp->u16_gesLngPrsCalAreaPerXStart) //C67 - ges_lng_prs_cal_area_per_x_start
#define CFG_U16_GES_LNG_PRS_CAL_AREA_PER_X_END  (fwCfgp->u16_gesLngPrsCalAreaPerXEnd)   //C69 - ges_lng_prs_cal_area_per_x_end
#define CFG_U16_GES_LNG_PRS_CAL_AREA_PER_Y_START    (fwCfgp->u16_gesLngPrsCalAreaPerYStart) //C6B - ges_lng_prs_cal_area_per_y_start
#define CFG_U16_GES_LNG_PRS_CAL_AREA_PER_Y_END  (fwCfgp->u16_gesLngPrsCalAreaPerYEnd)   //C6D - ges_lng_prs_cal_area_per_y_end
#define CFG_B1_GRP_EN                       (fwCfgp->b1_grpEn)          //C70 - grp_cfg
#define CFG_B1_GRP_TCH_BORDER_STR_REMOVAL_EN    (fwCfgp->b1_grpTchBorderStrRemovalEn)   //C70 - grp_cfg
#define CFG_B1_GRP_EDGE_AXES_DIFF_EN        (fwCfgp->b1_grpEdgeAxesDiffEn)  //C70 - grp_cfg
#define CFG_B1_GRP_EDGE_STY_BLK_EN          (fwCfgp->b1_grpEdgeStyBlkEn)    //C70 - grp_cfg
#define CFG_B1_GRP_EDGE_THUMB_DET           (fwCfgp->b1_grpEdgeThumbDet)    //C70 - grp_cfg
#define CFG_B1_CORNER_CHECK_IN_NON_GAME_MODE_EN (fwCfgp->b1_cornerCheckInNonGameModeEn) //C70 - grp_cfg
#define CFG_U16_GRP_THRES                   (fwCfgp->u16_grpThres)      //C72 - grp_thres
#define CFG_U8_GRP_THRES_HYST               (fwCfgp->u8_grpThresHyst)   //C74 - grp_thres_hyst
#define CFG_U8_GRP_NOISY_ADD_THRES          (fwCfgp->u8_grpNoisyAddThres)   //C75 - grp_noisy_add_thres
#define CFG_U16_GRP_BNDRY_MAX_STR           (fwCfgp->u16_grpBndryMaxStr)    //C76 - grp_bndry_max_str
#define CFG_U8_GRP_BNDRY_STR_GAIN_PERC      (fwCfgp->u8_grpBndryStrGainPerc)    //C78 - grp_bndry_str_gain_perc
#define CFG_U8_GRP_AXES_DIFF_MIN_AREA       (fwCfgp->u8_grpAxesDiffMinArea) //C79 - grp_axes_min_area
#define CFG_U8_GRP_EDGE_ZONE_DURATION       (fwCfgp->u8_grpEdgeZoneDuration)    //C7A - grp_edge_zone_duration
#define CFG_U8_GRP_EDGE_ZONE_DURATION_HYST  (fwCfgp->u8_grpEdgeZoneDurationHyst)    //C7B - grp_edge_zone_duration_hyst
#define CFG_U16_GRP_STABLE_MIN_SUM_STR      (fwCfgp->u16_grpStableMinSumStr)    //C7C - grp_stable_min_sum_str
#define CFG_U8_GRP_DEAD_ZONE                (fwCfgp->u8_grpDeadZone)    //C7E - grp_dead_zone
#define CFG_U8_GRP_DEAD_ZONE_HYST           (fwCfgp->u8_grpDeadZoneHyst)    //C7F - grp_dead_zone_hyst
#define CFG_U8_GRP_EDGE_ZONE_RANGE          (fwCfgp->u8_grpEdgeZoneRange)   //C80 - grp_edge_zone_range
#define CFG_U8_GRP_EDGE_AXES_DIFF           (fwCfgp->u8_grpEdgeAxesDiff)    //C81 - grp_edge_axes_diff
#define CFG_U8_GRP_EDGE_ZONE_HYST           (fwCfgp->u8_grpEdgeZoneHyst)    //C82 - grp_edge_zone_hyst
#define CFG_U8_GRP_EDGE_ZONE                (fwCfgp->u8_grpEdgeZone)    //C83 - grp_edge_zone
#define CFG_U8_GRP_EDGE_BIG_THUMB_AREA      (fwCfgp->u8_grpEdgeBigThumbArea)    //C84 - grp_edge_big_thumb_area
#define CFG_U8_GRP_EDGE_THUMB_ZONE          (fwCfgp->u8_grpEdgeThumbZone)   //C85 - grp_edge_thumb_zone
#define CFG_U8_GRP_MOVE2CENTER_BIG_AREA_THRES   (fwCfgp->u8_grpMove2centerBigAreaThres) //C86 - grp_move2center_big_area_thres
#define CFG_U8_GRP_MOVE2CENTER_ADD_DLY      (fwCfgp->u8_grpMove2centerAddDly)   //C87 - grp_move2center_add_dly
#define CFG_U16_GRP_TOPBT_ZONE_TAP_MAX_PEAK_THRES   (fwCfgp->u16_grpTopbtZoneTapMaxPeakThres)   //C88 - grp_topbt_zone_tap_max_peak_thres
#define CFG_U8_GRP_EDGE_ZONE_MIN_DURATION   (fwCfgp->u8_grpEdgeZoneMinDuration) //C8A - grp_edge_zone_min_duration
#define CFG_U8_GRP_CORN_RJT_AREA            (fwCfgp->u8_grpCornRjtArea) //C8B - grp_corn_rjt_area
#define CFG_U8_GRP_EDGE_TOPBTM_ZONE         (fwCfgp->u8_grpEdgeTopbtmZone)  //C8C - grp_edge_topbtm_zone
#define CFG_U16_GRP_EDGE_ZONE_TAP_MAX_PEAK_THRES    (fwCfgp->u16_grpEdgeZoneTapMaxPeakThres)    //C8D - grp_edge_zone_tap_max_peak_thres
#define CFG_U8_GRP_FCAL_BLOCK_TAP_FRAME_CNT (fwCfgp->u8_grpFcalBlockTapFrameCnt)    //C8F - grp_fcal_block_tap_frame_cnt
#define CFG_U16_GRP_EDGE_MS_MIN_THRES_FAST_TAP_OVER_EDGE_LINE   (fwCfgp->u16_grpEdgeMsMinThresFastTapOverEdgeLine)  //C90 - grp_edge_ms_min_thres_fast_tap_over_edge_line
#define CFG_U16_GRP_MOVE_THRES              (fwCfgp->u16_grpMoveThres)  //C92 - grp_move_thres
#define CFG_U16_GRP_MOVE_ANGLE_THRES        (fwCfgp->u16_grpMoveAngleThres) //C94 - grp_move_angle_thres
#define CFG_B1_PALM_REJ_EN                  (fwCfgp->b1_palmRejEn)      //C96 - palm_rej_cfg
#define CFG_B1_PALM_BLK_EN                  (fwCfgp->b1_palmBlkEn)      //C96 - palm_rej_cfg
#define CFG_B1_POCKET_PALM_REJ_EN           (fwCfgp->b1_pocketPalmRejEn)    //C96 - palm_rej_cfg
#define CFG_U8_PALM_BLK_DBNC_CNT            (fwCfgp->u8_palmBlkDbncCnt) //C97 - palm_blk_dbnc_cnt
#define CFG_U8_FGR_PALM_REL_DBNC            (fwCfgp->u8_fgrPalmRelDbnc) //C98 - fgr_palm_rel_dbnc
#define CFG_U8_GRP_EDGE_BIG_THUMB_AREA_SENSE    (fwCfgp->u8_grpEdgeBigThumbAreaSense)   //C99 - grp_edge_big_thumb_area_sense
#define CFG_B1_EDGE_LEFT_RIGHT_REJ_EN       (fwCfgp->b1_edgeLeftRightRejEn) //C9A - edge_rej_cfg
#define CFG_B1_EDGE_TOP_BOTTOM_REJ_EN       (fwCfgp->b1_edgeTopBottomRejEn) //C9A - edge_rej_cfg
#define CFG_B1_CORNER_BOTTOM_REJ_EN         (fwCfgp->b1_cornerBottomRejEn)  //C9A - edge_rej_cfg
#define CFG_B1_CORNER_TOP_REJ_EN            (fwCfgp->b1_cornerTopRejEn) //C9A - edge_rej_cfg
#define CFG_B1_CORNER_STR_DYNAMIC_EN        (fwCfgp->b1_cornerStrDynamicEn) //C9A - edge_rej_cfg
#define CFG_B1_GRIP_AREA_TAP_EN             (fwCfgp->b1_gripAreaTapEn)  //C9A - edge_rej_cfg
#define CFG_B1_REJ_RPT_REF_COOR_EN          (fwCfgp->b1_rejRptRefCoorEn)    //C9A - edge_rej_cfg
#define CFG_B1_REJ_RPT_TCH_IN_COOR_EN       (fwCfgp->b1_rejRptTchInCoorEn)  //C9A - edge_rej_cfg
#define CFG_U8_GRP_COR_TCH_IN_ZONE          (fwCfgp->u8_grpCorTchInZone)    //C9D - grp_cor_tch_in_zone
#define CFG_U16_GRP_COR_TCH_ZONE_HYST       (fwCfgp->u16_grpCorTchZoneHyst) //C9E - grp_cor_tch_zone_hyst
#define CFG_B4_MAX_GRP_COR_XY_WGH           (fwCfgp->b4_maxGrpCorXyWgh) //CA0 - grp_cor_tch_wgh
#define CFG_U8_GRP_COR_MAX_WGH_FRAME_CNT    (fwCfgp->u8_grpCorMaxWghFrameCnt)   //CA1 - grp_cor_max_wgh_frame_cnt
#define CFG_U8_GRP_COR_FRAME_CNT_DIVIDER    (fwCfgp->u8_grpCorFrameCntDivider)  //CA2 - grp_cor_frame_cnt_divider
#define CFG_U8_GRP_COR_OUT_DBNC             (fwCfgp->u8_grpCorOutDbnc)  //CA5 - grp_cor_out_dbnc
#define CFG_U16_GRP_TCH_BORDER_STR_REMOVAL_DBNC (fwCfgp->u16_grpTchBorderStrRemovalDbnc)    //CA8 - grp_tch_border_str_removal_dbnc
#define CFG_U8_GRP_TCH_BORDER_STR_REMOVAL_RX_ST (fwCfgp->u8_grpTchBorderStrRemovalRxSt) //CAA - grp_tch_border_str_removal_rx_st
#define CFG_U8_GRP_TCH_BORDER_STR_REMOVAL_RX_ED (fwCfgp->u8_grpTchBorderStrRemovalRxEd) //CAB - grp_tch_border_str_removal_rx_ed
#define CFG_U8_GRP_COR_DYNAMIC_REJ_TX_NODE_RANGE_NOR_MOD    (fwCfgp->u8_grpCorDynamicRejTxNodeRangeNorMod)  //CAF - grp_cor_dynamic_rej_tx_node_range_nor_mod
#define CFG_U8_GRP_COR_DYNAMIC_REJ_RX_NODE_RANGE_NOR_MOD    (fwCfgp->u8_grpCorDynamicRejRxNodeRangeNorMod)  //CB0 - grp_cor_dynamic_rej_rx_node_range_nor_mod
#define CFG_U8_GRP_COR_DYNAMIC_REJ_THD_PER_NOR_MOD  (fwCfgp->u8_grpCorDynamicRejThdPerNorMod)   //CB1 - grp_cor_dynamic_rej_thd_per_nor_mod
#define CFG_U8_GRP_COR_DYNAMIC_REJ_THD_PER_HYST_NOR_MOD (fwCfgp->u8_grpCorDynamicRejThdPerHystNorMod)   //CB2 - grp_cor_dynamic_rej_thd_per_hyst_nor_mod
#define CFG_U8_POCKET_PALM_REJ_AREA         (fwCfgp->u8_pocketPalmRejArea)  //CB4 - pocket_palm_rej_area
#define CFG_U8_POCKET_PALM_REJ_AREA_HYST    (fwCfgp->u8_pocketPalmRejAreaHyst)  //CB5 - pocket_palm_rej_area_hyst
#define CFG_U16_POCKET_PALM_REJ_SS_STR_THRES    (fwCfgp->u16_pocketPalmRejSsStrThres)   //CB6 - pocket_palm_rej_ss_str_thres
#define CFG_U8_POCKET_PALM_REJ_SS_NODE_CNT_THRES    (fwCfgp->u8_pocketPalmRejSsNodeCntThres)    //CB8 - pocket_palm_rej_ss_node_cnt_thres
#define CFG_U8_POCKET_PALM_REJ_SS_NODE_CNT_THRES_HYST   (fwCfgp->u8_pocketPalmRejSsNodeCntThresHyst)    //CB9 - pocket_palm_rej_ss_node_cnt_thres_hyst
#define CFG_U16_MS_TCH_NEG_DET_POS_THRES    (fwCfgp->u16_msTchNegDetPosThres)   //CBA - ms_tch_neg_det_pos_thres
#define CFG_U16_MS_TCH_NEG_DET_NEG_THRES    (fwCfgp->u16_msTchNegDetNegThres)   //CBC - ms_tch_neg_det_neg_thres
#define CFG_U8_MS_TCH_NEG_DET_FCAL_MIN_NODES    (fwCfgp->u8_msTchNegDetFcalMinNodes)    //CBE - ms_tch_neg_det_fcal_min_nodes
#define CFG_U8_MS_TCH_NEG_DET_FCAL_DBNC     (fwCfgp->u8_msTchNegDetFcalDbnc)    //CBF - ms_tch_neg_det_fcal_dbnc
#define CFG_B1_MS_SCR_CX_CMN_CORR_EN        (fwCfgp->b1_msScrCxCmnCorrEn)   //CC0 - cx_cmn_corr_config
#define CFG_B1_MS_SCR_LP_CX_CMN_CORR_EN     (fwCfgp->b1_msScrLpCxCmnCorrEn) //CC0 - cx_cmn_corr_config
#define CFG_B1_SS_TCH_CX_CMN_CORR_EN        (fwCfgp->b1_ssTchCxCmnCorrEn)   //CC0 - cx_cmn_corr_config
#define CFG_B1_SS_DET_CX_CMN_CORR_EN        (fwCfgp->b1_ssDetCxCmnCorrEn)   //CC0 - cx_cmn_corr_config
#define CFG_B1_MS_KEY_CX_CMN_CORR_EN        (fwCfgp->b1_msKeyCxCmnCorrEn)   //CC0 - cx_cmn_corr_config
#define CFG_B1_MS_SCR_SAVE_RAW_EN           (fwCfgp->b1_msScrSaveRawEn) //CC0 - cx_cmn_corr_config
#define CFG_B1_SS_TCH_SAVE_RAW_EN           (fwCfgp->b1_ssTchSaveRawEn) //CC0 - cx_cmn_corr_config
#define CFG_B1_SS_IOFF_ADJ_EN               (fwCfgp->b1_ssIoffAdjEn)    //CC0 - cx_cmn_corr_config
#define CFG_B1_MS_IOFF_ADJ_EN               (fwCfgp->b1_msIoffAdjEn)    //CC0 - cx_cmn_corr_config
#define CFG_U16_MS_SCR_RAW_UP_THRES         (fwCfgp->u16_msScrRawUpThres)   //CC2 - ms_scr_raw_up_thres
#define CFG_U16_MS_SCR_RAW_LOW_THRES        (fwCfgp->u16_msScrRawLowThres)  //CC4 - ms_scr_raw_low_thres
#define CFG_U16_MS_SCR_CX2_STEP_SIZE        (fwCfgp->u16_msScrCx2StepSize)  //CC6 - ms_scr_cx2_step_size
#define CFG_U16_MS_SCR_LP_RAW_UP_THRES      (fwCfgp->u16_msScrLpRawUpThres) //CC8 - ms_scr_lp_raw_up_thres
#define CFG_U16_MS_SCR_LP_RAW_LOW_THRES     (fwCfgp->u16_msScrLpRawLowThres)    //CCA - ms_scr_lp_raw_low_thres
#define CFG_U16_MS_SCR_LP_CX2_STEP_SIZE     (fwCfgp->u16_msScrLpCx2StepSize)    //CCC - ms_scr_lp_cx2_step_size
#define CFG_U16_SS_TCH_RAW_UP_THRES         (fwCfgp->u16_ssTchRawUpThres)   //CCE - ss_tch_raw_up_thres
#define CFG_U16_SS_TCH_RAW_LOW_THRES        (fwCfgp->u16_ssTchRawLowThres)  //CD0 - ss_tch_raw_low_thres
#define CFG_U16_SS_TCH_IX2_F_STEP_SIZE      (fwCfgp->u16_ssTchIx2FStepSize) //CD2 - ss_tch_ix2_f_step_size
#define CFG_U16_SS_TCH_IX2_S_STEP_SIZE      (fwCfgp->u16_ssTchIx2SStepSize) //CD4 - ss_tch_ix2_s_step_size
#define CFG_U16_SS_DET_RAW_UP_THRES         (fwCfgp->u16_ssDetRawUpThres)   //CD6 - ss_det_raw_up_thres
#define CFG_U16_SS_DET_RAW_LOW_THRES        (fwCfgp->u16_ssDetRawLowThres)  //CD8 - ss_det_raw_low_thres
#define CFG_U16_SS_DET_IX2_STEP_SIZE        (fwCfgp->u16_ssDetIx2StepSize)  //CDA - ss_det_ix2_step_size
#define CFG_U16_MS_KEY_RAW_UP_THRES         (fwCfgp->u16_msKeyRawUpThres)   //CDC - ms_key_raw_up_thres
#define CFG_U16_MS_KEY_RAW_LOW_THRES        (fwCfgp->u16_msKeyRawLowThres)  //CDE - ms_key_raw_low_thres
#define CFG_U16_MS_KEY_CX2_STEP_SIZE        (fwCfgp->u16_msKeyCx2StepSize)  //CE0 - ms_key_cx2_step_size
#define CFG_U8_MS_SCR_IOFF_ADJ_WIN          (fwCfgp->u8_msScrIoffAdjWin)    //CE2 - ms_scr_ioff_adj_win
#define CFG_U8_SS_TCH_IOFF_ADJ_WIN          (fwCfgp->u8_ssTchIoffAdjWin)    //CE3 - ss_tch_ioff_adj_win
#define CFG_U8_SS_DET_IOFF_ADJ_WIN          (fwCfgp->u8_ssDetIoffAdjWin)    //CE4 - ss_det_ioff_adj_win
#define CFG_B1_REPORT_RATE_CFG_BY_CMD_EN    (fwCfgp->b1_reportRateCfgByCmdEn)   //CE5 - report_rate_cfg
#define CFG_U16_GRP_COR_ZONE_DUR1           (fwCfgp->u16_grpCorZoneDur1)    //CE8 - grp_cor_zone_dur1
#define CFG_U16_GRP_COR_ZONE_DUR2           (fwCfgp->u16_grpCorZoneDur2)    //CEA - grp_cor_zone_dur2
#define CFG_B1_COR_PALM_REPORT_IN_T1_EN     (fwCfgp->b1_corPalmReportInT1En)    //CED - corner_grp_cfg
#define CFG_B1_COR_PALM_DUE_TO_COR_PEAK     (fwCfgp->b1_corPalmDueToCorPeak)    //CED - corner_grp_cfg
#define CFG_U16_GRP_COR_VALID_AREA_X_START  (fwCfgp->u16_grpCorValidAreaXStart) //CEE - grp_cor_valid_area_x_start
#define CFG_U16_GRP_COR_VALID_AREA_X_END    (fwCfgp->u16_grpCorValidAreaXEnd)   //CF0 - grp_cor_valid_area_x_end
#define CFG_U16_GRP_COR_VALID_AREA_Y_START  (fwCfgp->u16_grpCorValidAreaYStart) //CF2 - grp_cor_valid_area_y_start
#define CFG_U16_GRP_COR_VALID_AREA_Y_END    (fwCfgp->u16_grpCorValidAreaYEnd)   //CF4 - grp_cor_valid_area_y_end
#define CFG_U8_GRP_COR_DEAD_ZONE_WIDTH      (fwCfgp->u8_grpCorDeadZoneWidth)    //CF6 - grp_cor_dead_zone_width
#define CFG_U8_GRP_COR_VALID_FINGER_FRAME_CNT   (fwCfgp->u8_grpCorValidFingerFrameCnt)  //CF7 - grp_cor_valid_finger_frame_cnt
#define CFG_U8_GRP_COR_VALID_FINGER_LEAVE_CNT   (fwCfgp->u8_grpCorValidFingerLeaveCnt)  //CF8 - grp_cor_valid_finger_leave_cnt
#define CFG_U16_GRP_COR_SHAPE_PALM_ENTER_THRES  (fwCfgp->u16_grpCorShapePalmEnterThres) //CF9 - grp_cor_shape_palm_enter_thres
#define CFG_U16_GRP_COR_SHAPE_PALM_EXIT_THRES   (fwCfgp->u16_grpCorShapePalmExitThres)  //CFB - grp_cor_shape_palm_exit_thres
#define CFG_U16_GRP_COR_XY_SHAPE_RATIO_THRES    (fwCfgp->u16_grpCorXyShapeRatioThres)   //CFD - grp_cor_xy_shape_ratio_thres
#define CFG_U16_GRP_COR_YX_SHAPE_RATIO_THRES    (fwCfgp->u16_grpCorYxShapeRatioThres)   //CFF - grp_cor_yx_shape_ratio_thres
#define CFG_U8_GRP_COR_RPT_TCH_IN_SPEED_RANGE   (fwCfgp->u8_grpCorRptTchInSpeedRange)   //D01 - grp_cor_rpt_tch_in_speed_range
#define CFG_U16_GRP_COR_AREA0_X_HEIGHT      (fwCfgp->u16_grpCorArea0XHeight)    //D02 - grp_cor_area0_x_height
#define CFG_U16_GRP_COR_AREA0_Y_WIDTH       (fwCfgp->u16_grpCorArea0YWidth) //D04 - grp_cor_area0_y_width
#define CFG_U16_GRP_COR_AREA1_X_HEIGHT      (fwCfgp->u16_grpCorArea1XHeight)    //D06 - grp_cor_area1_x_height
#define CFG_U16_GRP_COR_AREA1_Y_WIDTH       (fwCfgp->u16_grpCorArea1YWidth) //D08 - grp_cor_area1_y_width
#define CFG_U16_GRP_COR_AREA2_X_HEIGHT      (fwCfgp->u16_grpCorArea2XHeight)    //D0A - grp_cor_area2_x_height
#define CFG_U16_GRP_COR_AREA2_Y_WIDTH       (fwCfgp->u16_grpCorArea2YWidth) //D0C - grp_cor_area2_y_width
#define CFG_U16_GRP_COR_AREA3_X_HEIGHT      (fwCfgp->u16_grpCorArea3XHeight)    //D0E - grp_cor_area3_x_height
#define CFG_U16_GRP_COR_AREA3_Y_WIDTH       (fwCfgp->u16_grpCorArea3YWidth) //D10 - grp_cor_area3_y_width
#define CFG_U8_GRP_COR_PALM_DEBOUNCE_OUT_CNT    (fwCfgp->u8_grpCorPalmDebounceOutCnt)   //D12 - grp_cor_palm_debounce_out_cnt
#define CFG_U16_GRP_COR_CASE2_AREA_Y_WIDTH  (fwCfgp->u16_grpCorCase2AreaYWidth) //D13 - grp_cor_case2_area_y_width
#define CFG_U16_GRP_COR_CASE2_AREA_X_HEIGHT (fwCfgp->u16_grpCorCase2AreaXHeight)    //D15 - grp_cor_case2_area_x_height
#define CFG_U16_GRP_DEAD_ZONE_TAP_PEAK_STR_THRES    (fwCfgp->u16_grpDeadZoneTapPeakStrThres)    //D17 - grp_dead_zone_tap_peak_str_thres
#define CFG_U8_MS_PURE_RAW_FCAL_EDGE_AVG_POSITIVE_THRES (fwCfgp->u8_msPureRawFcalEdgeAvgPositiveThres)  //D19 - ms_pure_raw_fcal_edge_avg_positive_thres
#define CFG_U8_MS_PURE_RAW_FCAL_EDGE_AVG_NEGATIVE_THRES (fwCfgp->u8_msPureRawFcalEdgeAvgNegativeThres)  //D1A - ms_pure_raw_fcal_edge_avg_negative_thres
#define CFG_U8_MS_PURE_RAW_FCAL_EDGE_AVG_NODE_VAL_RATIO_THRES   (fwCfgp->u8_msPureRawFcalEdgeAvgNodeValRatioThres)  //D1B - ms_pure_raw_fcal_edge_avg_node_val_ratio_thres
#define CFG_U8_MS_PURE_RAW_FCAL_EDGE_AVG_NODE_THRES (fwCfgp->u8_msPureRawFcalEdgeAvgNodeThres)  //D1C - ms_pure_raw_fcal_edge_avg_node_thres
#define CFG_U8_MS_PURE_RAW_FCAL_EDGE_RAW_ADJUST_RATIO   (fwCfgp->u8_msPureRawFcalEdgeRawAdjustRatio)    //D1D - ms_pure_raw_fcal_edge_raw_adjust_ratio
#define CFG_U8_MS_PURE_RAW_FCAL_EDGE_DIFF_ADJUST_RATIO  (fwCfgp->u8_msPureRawFcalEdgeDiffAdjustRatio)   //D1E - ms_pure_raw_fcal_edge_diff_adjust_ratio
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_HIGH_SPEED   (fwCfgp->u8_tchMtol2AccXTolHighSpeed)   //D1F - tch_mtol2_acc_xy_tol_high_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_HIGH_SPEED   (fwCfgp->u8_tchMtol2AccYTolHighSpeed)   //D1F - tch_mtol2_acc_xy_tol_high_speed
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_NOISY_HIGH_SPEED (fwCfgp->u8_tchMtol2AccXTolNoisyHighSpeed)  //D21 - tch_mtol2_acc_xy_tol_noisy_high_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_NOISY_HIGH_SPEED (fwCfgp->u8_tchMtol2AccYTolNoisyHighSpeed)  //D21 - tch_mtol2_acc_xy_tol_noisy_high_speed
#define CFG_U8_TCH_MTOL2_ACC_COMP_SPEED_LOW_THRESHOLD   (fwCfgp->u8_tchMtol2AccCompSpeedLowThreshold)   //D23 - tch_mtol2_acc_xy_tol_speed_low_threshold
#define CFG_U8_TCH_MTOL2_ACC_COMP_SPEED_HIGH_THRESHOLD  (fwCfgp->u8_tchMtol2AccCompSpeedHighThreshold)  //D24 - tch_mtol2_acc_xy_tol_speed_high_threshold
#define CFG_U8_TCH_MTOL2_ACC_COMP_SPEED_TOTAL_THRESHOLD (fwCfgp->u8_tchMtol2AccCompSpeedTotalThreshold) //D25 - tch_mtol2_acc_xy_tol_speed_total_threshold
#define CFG_U8_TCH_MTOL2_ACC_COMP_SPEED_IIR_WEIGHT  (fwCfgp->u8_tchMtol2AccCompSpeedIirWeight)  //D26 - tch_mtol2_acc_xy_tol_speed_iir
#define CFG_U8_TCH_MTOL2_ACC_XY_TOL_PERCENT_ACC_IN_LOW_SPEED    (fwCfgp->u8_tchMtol2AccXyTolPercentAccInLowSpeed)   //D27 - tch_mtol2_acc_xy_tol_percent_acc_in_low_speed
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_EDGE_LOW_SPEED   (fwCfgp->u8_tchMtol2AccXTolEdgeLowSpeed)    //D28 - tch_mtol2_acc_xy_tol_edge_low_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_EDGE_LOW_SPEED   (fwCfgp->u8_tchMtol2AccYTolEdgeLowSpeed)    //D28 - tch_mtol2_acc_xy_tol_edge_low_speed
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_EDGE_HIGH_SPEED  (fwCfgp->u8_tchMtol2AccXTolEdgeHighSpeed)   //D2A - tch_mtol2_acc_xy_tol_edge_high_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_EDGE_HIGH_SPEED  (fwCfgp->u8_tchMtol2AccYTolEdgeHighSpeed)   //D2A - tch_mtol2_acc_xy_tol_edge_high_speed
#define CFG_B1_WIRELESS_CHRGR_MODE_EN       (fwCfgp->b1_wirelessChrgrModeEn)    //D2C - wireless_chrgr_cfg
#define CFG_B1_WIRELESS_CHRGR_SS_TCH_MS_BITMAP_EN   (fwCfgp->b1_wirelessChrgrSsTchMsBitmapEn)   //D2C - wireless_chrgr_cfg
#define CFG_U16_WIRELESS_CHRGR_GRV_TOL_HORI_VERT    (fwCfgp->u16_wirelessChrgrGrvTolHoriVert)   //D2D - wireless_chrgr_grv_tol_hori_vert
#define CFG_U16_WIRELESS_CHRGR_GRV_TOL_DIAG (fwCfgp->u16_wirelessChrgrGrvTolDiag)   //D2F - wireless_chrgr_grv_tol_diag
#define CFG_U8_WIRELESS_CHRGR_GRV_NORM_PERCENT  (fwCfgp->u8_wirelessChrgrGrvNormPercent)    //D31 - wireless_chrgr_grv_norm_percent
#define CFG_U8_WIRELESS_CHRGR_TCH_THRES_INC (fwCfgp->u8_wirelessChrgrTchThresInc)   //D32 - wireless_chrgr_tch_thres_inc
#define CFG_U16_WIRELESS_CHRGR_TCH_MRG_DIST (fwCfgp->u16_wirelessChrgrTchMrgDist)   //D33 - wireless_chrgr_tch_mrg_dist
#define CFG_U8_WIRELESS_CHRGR_FGR_THRES_HYST    (fwCfgp->u8_wirelessChrgrFgrThresHyst)  //D35 - wireless_chrgr_fgr_thres_hyst
#define CFG_U16_WIRELESS_CHRGR_ACAL_MS_SCR_UP_THRES (fwCfgp->u16_wirelessChrgrAcalMsScrUpThres) //D36 - wireless_chrgr_acal_ms_scr_up_thres
#define CFG_U16_WIRELESS_CHRGR_ACAL_MS_SCR_LOW_THRES    (fwCfgp->u16_wirelessChrgrAcalMsScrLowThres)    //D38 - wireless_chrgr_acal_ms_scr_low_thres
#define CFG_B1_PRE_DET_GHOST_TCH_EN         (fwCfgp->b1_preDetGhostTchEn)   //D3B - pre_det_ghost_tch_cfg
#define CFG_U16_PRE_DET_GHOST_TCH_THRES     (fwCfgp->u16_preDetGhostTchThres)   //D3C - pre_det_ghost_tch_thres
#define CFG_U16_PRE_DET_GHOST_TCH_MOVE_DIS  (fwCfgp->u16_preDetGhostTchMoveDis) //D3E - pre_det_ghost_tch_move_dis
#define CFG_U16_PRE_DET_GHOST_TCH_TIME_OUT_CNT  (fwCfgp->u16_preDetGhostTchTimeOutCnt)  //D40 - pre_det_ghost_tch_time_out_cnt
#define CFG_U16_PRE_DET_GHOST_TCH_DBNC_CNT  (fwCfgp->u16_preDetGhostTchDbncCnt) //D42 - pre_det_ghost_tch_dbnc_cnt
#define CFG_U8_PRE_DET_GHOST_TCH_CNT        (fwCfgp->u8_preDetGhostTchCnt)  //D44 - pre_det_ghost_tch_cnt
#define CFG_U16_PRE_DET_GHOST_TCH_DUR_FRM_CNT   (fwCfgp->u16_preDetGhostTchDurFrmCnt)   //D45 - pre_det_ghost_tch_dur_frm_cnt
#define CFG_U16_PRE_DET_GHOST_TCH_RST_DBNC  (fwCfgp->u16_preDetGhostTchRstDbnc) //D47 - pre_det_ghost_tch_rst_dbnc
#define CFG_U16_PRE_DET_GHOST_TCH_COR_ZONE_X_LEN    (fwCfgp->u16_preDetGhostTchCorZoneXLen) //D49 - pre_det_ghost_tch_cor_zone_x_len
#define CFG_U16_PRE_DET_GHOST_TCH_COR_ZONE_Y_LEN    (fwCfgp->u16_preDetGhostTchCorZoneYLen) //D4B - pre_det_ghost_tch_cor_zone_y_len
#define CFG_U16_PRE_DET_GHOST_TCH_COR_ZONE_X_SHORT_LEN  (fwCfgp->u16_preDetGhostTchCorZoneXShortLen)    //D4D - pre_det_ghost_tch_cor_zone_x_short_len
#define CFG_U16_PRE_DET_GHOST_TCH_COR_ZONE_Y_SHORT_LEN  (fwCfgp->u16_preDetGhostTchCorZoneYShortLen)    //D4F - pre_det_ghost_tch_cor_zone_y_short_len
#define CFG_B1_ACAL_CHK_EDGE_CHANEL_EN      (fwCfgp->b1_acalChkEdgeChanelEn)    //D54 - acal_ms_scr_new_cfg
#define CFG_U16_ACAL_MS_SCR_PURE_RAW_THRES  (fwCfgp->u16_acalMsScrPureRawThres) //D55 - acal_ms_scr_pure_raw_thres
#define CFG_U16_ACAL_MS_SCR_PURE_RAW_GLV_THRES  (fwCfgp->u16_acalMsScrPureRawGlvThres)  //D57 - acal_ms_scr_pure_raw_glv_thres
#define CFG_U16_ACAL_MS_SCR_UP_NORM_THRES   (fwCfgp->u16_acalMsScrUpNormThres)  //D59 - acal_ms_scr_up_norm_thres
#define CFG_U16_ACAL_MS_SCR_LOW_NORM_THRES  (fwCfgp->u16_acalMsScrLowNormThres) //D5B - acal_ms_scr_low_norm_thres
#define CFG_U16_ACAL_MS_SCR_UP_NORM_GLV_THRES   (fwCfgp->u16_acalMsScrUpNormGlvThres)   //D5D - acal_ms_scr_up_norm_glv_thres
#define CFG_U16_ACAL_MS_SCR_LOW_NORM_GLV_THRES  (fwCfgp->u16_acalMsScrLowNormGlvThres)  //D5F - acal_ms_scr_low_norm_glv_thres
#define CFG_U16_ACAL_MS_SCR_UP_NORM_EDGE_THRES  (fwCfgp->u16_acalMsScrUpNormEdgeThres)  //D61 - acal_ms_scr_up_norm_edge_thres
#define CFG_U16_ACAL_MS_SCR_LOW_NORM_EDGE_THRES (fwCfgp->u16_acalMsScrLowNormEdgeThres) //D63 - acal_ms_scr_low_norm_edge_thres
#define CFG_U16_ACAL_MS_SCR_UP_NORM_EDGE_R0_THRES   (fwCfgp->u16_acalMsScrUpNormEdgeR0Thres)    //D65 - acal_ms_scr_up_norm_edge_ro_thres
#define CFG_U16_ACAL_MS_SCR_LOW_NORM_EDGE_R0_THRES  (fwCfgp->u16_acalMsScrLowNormEdgeR0Thres)   //D67 - acal_ms_scr_low_norm_edge_ro_thres
#define CFG_U16_ACAL_MS_SCR_PEAK_STR_THRES  (fwCfgp->u16_acalMsScrPeakStrThres) //D69 - acal_ms_scr_peak_str_thres
#define CFG_U16_ACAL_MS_SCR_PEAK_STR_HYST_THRES (fwCfgp->u16_acalMsScrPeakStrHystThres) //D6B - acal_ms_scr_peak_str_hyst_thres
#define CFG_U8_ACAL_MS_SCR_CENTER_RX_CHANL_ST   (fwCfgp->u8_acalMsScrCenterRxChanlSt)   //D6D - acal_ms_scr_center_rx_chanl_st
#define CFG_U8_ACAL_MS_SCR_CENTER_RX_CHANL_ED   (fwCfgp->u8_acalMsScrCenterRxChanlEd)   //D6E - acal_ms_scr_center_rx_chanl_ed
#define CFG_U8_ACAL_MS_SCR_CENTER_TX_CHANL_ST   (fwCfgp->u8_acalMsScrCenterTxChanlSt)   //D6F - acal_ms_scr_center_tx_chanl_st
#define CFG_U8_ACAL_MS_SCR_CENTER_TX_CHANL_ED   (fwCfgp->u8_acalMsScrCenterTxChanlEd)   //D70 - acal_ms_scr_center_tx_chanl_ed
#define CFG_U16_ACAL_MS_SCR_UP_FILTER_THRES (fwCfgp->u16_acalMsScrUpFilterThres)    //D71 - acal_ms_scr_up_filter_thres
#define CFG_U16_ACAL_MS_SCR_LOW_FILTER_THRES    (fwCfgp->u16_acalMsScrLowFilterThres)   //D73 - acal_ms_scr_low_filter_thres
#define CFG_U16_ACAL_MS_SCR_UP_FILTER_EDGE_THRES    (fwCfgp->u16_acalMsScrUpFilterEdgeThres)    //D75 - acal_ms_scr_up_filter_edge_thres
#define CFG_U16_ACAL_MS_SCR_LOW_FILTER_EDGE_THRES   (fwCfgp->u16_acalMsScrLowFilterEdgeThres)   //D77 - acal_ms_scr_low_filter_edge_thres
#define CFG_U16_ACAL_MS_SCR_PURE_RAW_LP_THRES   (fwCfgp->u16_acalMsScrPureRawLpThres)   //D7A - acal_ms_scr_pure_raw_lp_thres
#define CFG_U16_ACAL_MS_SCR_PEAK_STR_LP_THRES   (fwCfgp->u16_acalMsScrPeakStrLpThres)   //D7C - acal_ms_scr_peak_str_lp_thres
#define CFG_U16_ACAL_MS_SCR_PEAK_STR_HYST_LP_THRES  (fwCfgp->u16_acalMsScrPeakStrHystLpThres)   //D7E - acal_ms_scr_peak_str_hyst_lp_thres
#define CFG_U16_ACAL_MS_SCR_UP_NORM_EDGE_R0_LP_THRES    (fwCfgp->u16_acalMsScrUpNormEdgeR0LpThres)  //D80 - acal_ms_scr_up_norm_edge_ro_lp_thres
#define CFG_U16_ACAL_MS_SCR_LOW_NORM_EDGE_R0_LP_THRES   (fwCfgp->u16_acalMsScrLowNormEdgeR0LpThres) //D82 - acal_ms_scr_low_norm_edge_ro_lp_thres
#define CFG_U8_ACAL_MS_SCR_CENTER_RX_CHANL_LP_ST    (fwCfgp->u8_acalMsScrCenterRxChanlLpSt) //D84 - acal_ms_scr_center_rx_chanl_lp_st
#define CFG_U8_ACAL_MS_SCR_CENTER_RX_CHANL_LP_ED    (fwCfgp->u8_acalMsScrCenterRxChanlLpEd) //D85 - acal_ms_scr_center_rx_chanl_lp_ed
#define CFG_U8_ACAL_MS_SCR_CENTER_TX_CHANL_LP_ST    (fwCfgp->u8_acalMsScrCenterTxChanlLpSt) //D86 - acal_ms_scr_center_tx_chanl_lp_st
#define CFG_U8_ACAL_MS_SCR_CENTER_TX_CHANL_LP_ED    (fwCfgp->u8_acalMsScrCenterTxChanlLpEd) //D87 - acal_ms_scr_center_tx_chanl_lp_ed
#define CFG_U16_ACAL_MS_SCR_UP_NORM_LP_THRES    (fwCfgp->u16_acalMsScrUpNormLpThres)    //D88 - acal_ms_scr_up_norm_lp_thres
#define CFG_U16_ACAL_MS_SCR_LOW_NORM_LP_THRES   (fwCfgp->u16_acalMsScrLowNormLpThres)   //D8A - acal_ms_scr_low_norm_lp_thres
#define CFG_U16_ACAL_MS_SCR_UP_NORM_EDGE_LP_THRES   (fwCfgp->u16_acalMsScrUpNormEdgeLpThres)    //D8C - acal_ms_scr_up_norm_edge_lp_thres
#define CFG_U16_ACAL_MS_SCR_LOW_NORM_EDGE_LP_THRES  (fwCfgp->u16_acalMsScrLowNormEdgeLpThres)   //D8E - acal_ms_scr_low_norm_edge_lp_thres
#define CFG_U16_ACAL_MS_SCR_UP_FILTER_LP_THRES  (fwCfgp->u16_acalMsScrUpFilterLpThres)  //D90 - acal_ms_scr_up_filter_lp_thres
#define CFG_U16_ACAL_MS_SCR_LOW_FILTER_LP_THRES (fwCfgp->u16_acalMsScrLowFilterLpThres) //D92 - acal_ms_scr_low_filter_lp_thres
#define CFG_U16_ACAL_MS_SCR_UP_FILTER_EDGE_LP_THRES (fwCfgp->u16_acalMsScrUpFilterEdgeLpThres)  //D94 - acal_ms_scr_up_filter_edge_lp_thres
#define CFG_U16_ACAL_MS_SCR_LOW_FILTER_EDGE_LP_THRES    (fwCfgp->u16_acalMsScrLowFilterEdgeLpThres) //D96 - acal_ms_scr_low_filter_edge_lp_thres
#define CFG_U8_LP_MS_PURE_RAW_FCAL_DBNC     (fwCfgp->u8_lpMsPureRawFcalDbnc)    //D98 - lp_ms_pure_raw_fcal_dbnc
#define CFG_U8_LP_MS_PURE_RAW_STDDEV_FCAL_DBNC  (fwCfgp->u8_lpMsPureRawStddevFcalDbnc)  //D99 - lp_ms_pure_raw_stddev_fcal_dbnc
#define CFG_U8_LP_MS_TCH_NEG_DET_FCAL_DBNC  (fwCfgp->u8_lpMsTchNegDetFcalDbnc)  //D9A - lp_ms_tch_neg_det_fcal_dbnc
#define CFG_U8_LP_INV_MT_FCAL_DBNC          (fwCfgp->u8_lpInvMtFcalDbnc)    //D9B - lp_inv_mt_fcal_dbnc
#define CFG_U8_LP_INV_SS_FCAL_DBNC          (fwCfgp->u8_lpInvSsFcalDbnc)    //D9C - lp_inv_ss_fcal_dbnc
#define CFG_U16_MS_PURE_RAW_FCAL_LNR_CMM_FILT_POS_THRES (fwCfgp->u16_msPureRawFcalLnrCmmFiltPosThres)   //D9F - ms_pure_raw_fcal_lnr_cmm_filt_pos_thres
#define CFG_U16_MS_PURE_RAW_FCAL_LNR_CMM_FILT_NEG_THRES (fwCfgp->u16_msPureRawFcalLnrCmmFiltNegThres)   //DA1 - ms_pure_raw_fcal_lnr_cmm_filt_neg_thres
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_0   (fwCfgp->u8_msPureFcalApplyCmmRxCh0)    //DA3 - ms_pure_fcal_apply_cmm_rx_ch_0
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_1   (fwCfgp->u8_msPureFcalApplyCmmRxCh1)    //DA4 - ms_pure_fcal_apply_cmm_rx_ch_1
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_2   (fwCfgp->u8_msPureFcalApplyCmmRxCh2)    //DA5 - ms_pure_fcal_apply_cmm_rx_ch_2
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_3   (fwCfgp->u8_msPureFcalApplyCmmRxCh3)    //DA6 - ms_pure_fcal_apply_cmm_rx_ch_3
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_4   (fwCfgp->u8_msPureFcalApplyCmmRxCh4)    //DA7 - ms_pure_fcal_apply_cmm_rx_ch_4
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_5   (fwCfgp->u8_msPureFcalApplyCmmRxCh5)    //DA8 - ms_pure_fcal_apply_cmm_rx_ch_5
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_6   (fwCfgp->u8_msPureFcalApplyCmmRxCh6)    //DA9 - ms_pure_fcal_apply_cmm_rx_ch_6
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_7   (fwCfgp->u8_msPureFcalApplyCmmRxCh7)    //DAA - ms_pure_fcal_apply_cmm_rx_ch_7
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_8   (fwCfgp->u8_msPureFcalApplyCmmRxCh8)    //DAB - ms_pure_fcal_apply_cmm_rx_ch_8
#define CFG_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_9   (fwCfgp->u8_msPureFcalApplyCmmRxCh9)    //DAC - ms_pure_fcal_apply_cmm_rx_ch_9
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_GAME_MFG_LOW_SPEED   (fwCfgp->u8_tchMtol2AccXTolGameMfgLowSpeed) //DB0 - tch_mtol2_acc_xy_tol_game_mfg_low_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_GAME_MFG_LOW_SPEED   (fwCfgp->u8_tchMtol2AccYTolGameMfgLowSpeed) //DB0 - tch_mtol2_acc_xy_tol_game_mfg_low_speed
#define CFG_U8_TCH_MTOL2_ACC_X_TOL_GAME_MFG_HIGH_SPEED  (fwCfgp->u8_tchMtol2AccXTolGameMfgHighSpeed)    //DB2 - tch_mtol2_acc_xy_tol_game_mfg_high_speed
#define CFG_U8_TCH_MTOL2_ACC_Y_TOL_GAME_MFG_HIGH_SPEED  (fwCfgp->u8_tchMtol2AccYTolGameMfgHighSpeed)    //DB2 - tch_mtol2_acc_xy_tol_game_mfg_high_speed
#define CFG_U8_TCH_MTOL2_ACC_AREA_THRES     (fwCfgp->u8_tchMtol2AccAreaThres)   //DB4 - tch_mtol2_acc_area_thres
#define CFG_U8_GRP_FTAP_DIST_THRES          (fwCfgp->u8_grpFtapDistThres)   //DB5 - grp_ftap_dist_thres
#define CFG_U8_GRP_TOP_BTM_ADDT_TCH_OUT_DLY (fwCfgp->u8_grpTopBtmAddtTchOutDly) //DB6 - grp_top_btm_addt_tch_out_dly
#define CFG_U8_TCH_MTOL2_ACC_MFG_MAX_COMP   (fwCfgp->u8_tchMtol2AccMfgMaxComp)  //DB7 - tch_mtol2_acc_mfg_max_comp
#define CFG_B4_SCALE_UP_SCR_RES_MUL         (fwCfgp->b4_scaleUpScrResMul)   //DB8 - scale_up_scr_res_cfg
#define CFG_U16_ACAL_MS_SCR_PURE_RAW_CALIB_DIFF_THRES   (fwCfgp->u16_acalMsScrPureRawCalibDiffThres)    //DBC - acal_ms_scr_pure_raw_calib_diff_thres
#define CFG_B1_MS_SCR_BIT_SHIFT_ADJ_EN      (fwCfgp->b1_msScrBitShiftAdjEn) //DC0 - bit_shift_adj_cfg
#define CFG_B1_MS_MRN_BIT_SHIFT_ADJ_EN      (fwCfgp->b1_msMrnBitShiftAdjEn) //DC0 - bit_shift_adj_cfg
#define CFG_B1_MS_KEY_BIT_SHIFT_ADJ_EN      (fwCfgp->b1_msKeyBitShiftAdjEn) //DC0 - bit_shift_adj_cfg
#define CFG_B1_GS_TCH_BIT_SHIFT_ADJ_EN      (fwCfgp->b1_gsTchBitShiftAdjEn) //DC0 - bit_shift_adj_cfg
#define CFG_B1_SS_TCH_BIT_SHIFT_ADJ_EN      (fwCfgp->b1_ssTchBitShiftAdjEn) //DC0 - bit_shift_adj_cfg
#define CFG_B1_SS_DET_BIT_SHIFT_ADJ_EN      (fwCfgp->b1_ssDetBitShiftAdjEn) //DC0 - bit_shift_adj_cfg
#define CFG_B1_SS_FRC_TCH_BIT_SHIFT_ADJ_EN  (fwCfgp->b1_ssFrcTchBitShiftAdjEn)  //DC0 - bit_shift_adj_cfg
#define CFG_B1_SS_HVR_BIT_SHIFT_ADJ_EN      (fwCfgp->b1_ssHvrBitShiftAdjEn) //DC0 - bit_shift_adj_cfg
#define CFG_B3_MS_SCR_HIGH_RES_ADJ_BIT_SHIFT    (fwCfgp->b3_msScrHighResAdjBitShift)    //DC1 - ms_scr_bit_shift_setting0
#define CFG_B1_MS_SCR_HIGH_RES_LEFT_BIT_SHIFT   (fwCfgp->b1_msScrHighResLeftBitShift)   //DC1 - ms_scr_bit_shift_setting0
#define CFG_B3_MS_SCR_HIGH_RES_FWA_ADJ_BIT_SHIFT    (fwCfgp->b3_msScrHighResFwaAdjBitShift) //DC1 - ms_scr_bit_shift_setting0
#define CFG_B1_MS_SCR_HIGH_RES_FWA_LEFT_BIT_SHIFT   (fwCfgp->b1_msScrHighResFwaLeftBitShift)    //DC1 - ms_scr_bit_shift_setting0
#define CFG_B3_MS_SCR_HIGH_RES_FWA_NOISY_ADJ_BIT_SHIFT  (fwCfgp->b3_msScrHighResFwaNoisyAdjBitShift)    //DC2 - ms_scr_bit_shift_setting1
#define CFG_B1_MS_SCR_HIGH_RES_FWA_NOISY_LEFT_BIT_SHIFT (fwCfgp->b1_msScrHighResFwaNoisyLeftBitShift)   //DC2 - ms_scr_bit_shift_setting1
#define CFG_B3_MS_SCR_LP_ADJ_BIT_SHIFT      (fwCfgp->b3_msScrLpAdjBitShift) //DC2 - ms_scr_bit_shift_setting1
#define CFG_B1_MS_SCR_LP_LEFT_BIT_SHIFT     (fwCfgp->b1_msScrLpLeftBitShift)    //DC2 - ms_scr_bit_shift_setting1
#define CFG_B3_MS_KEY_HIGH_RES_ADJ_BIT_SHIFT    (fwCfgp->b3_msKeyHighResAdjBitShift)    //DC3 - ms_key_bit_shift_setting0
#define CFG_B1_MS_KEY_HIGH_RES_LEFT_BIT_SHIFT   (fwCfgp->b1_msKeyHighResLeftBitShift)   //DC3 - ms_key_bit_shift_setting0
#define CFG_B3_MS_MRN_ADJ_BIT_SHIFT         (fwCfgp->b3_msMrnAdjBitShift)   //DC4 - ms_mrn_bit_shift_setting0
#define CFG_B1_MS_MRN_LEFT_BIT_SHIFT        (fwCfgp->b1_msMrnLeftBitShift)  //DC4 - ms_mrn_bit_shift_setting0
#define CFG_B3_SS_TCH_F_HIGH_RES_ADJ_BIT_SHIFT  (fwCfgp->b3_ssTchFHighResAdjBitShift)   //DC5 - ss_tch_bit_shift_setting0
#define CFG_B1_SS_TCH_F_HIGH_RES_LEFT_BIT_SHIFT (fwCfgp->b1_ssTchFHighResLeftBitShift)  //DC5 - ss_tch_bit_shift_setting0
#define CFG_B3_SS_TCH_S_HIGH_RES_ADJ_BIT_SHIFT  (fwCfgp->b3_ssTchSHighResAdjBitShift)   //DC5 - ss_tch_bit_shift_setting0
#define CFG_B1_SS_TCH_S_HIGH_RES_LEFT_BIT_SHIFT (fwCfgp->b1_ssTchSHighResLeftBitShift)  //DC5 - ss_tch_bit_shift_setting0
#define CFG_B3_SS_DET_HIGH_RES_ADJ_BIT_SHIFT    (fwCfgp->b3_ssDetHighResAdjBitShift)    //DC6 - ss_det_bit_shift_setting1
#define CFG_B1_SS_DET_HIGH_RES_LEFT_BIT_SHIFT   (fwCfgp->b1_ssDetHighResLeftBitShift)   //DC6 - ss_det_bit_shift_setting1
#define CFG_B3_SS_FRC_TCH_HIGH_RES_ADJ_BIT_SHIFT    (fwCfgp->b3_ssFrcTchHighResAdjBitShift) //DC7 - ss_frc_tch_bit_shift_setting2
#define CFG_B1_SS_FRC_TCH_HIGH_RES_LEFT_BIT_SHIFT   (fwCfgp->b1_ssFrcTchHighResLeftBitShift)    //DC7 - ss_frc_tch_bit_shift_setting2
#define CFG_B3_SS_HVR_HIGH_RES_ADJ_BIT_SHIFT    (fwCfgp->b3_ssHvrHighResAdjBitShift)    //DC8 - ss_hvr_bit_shift_setting3
#define CFG_B1_SS_HVR_HIGH_RES_LEFT_BIT_SHIFT   (fwCfgp->b1_ssHvrHighResLeftBitShift)   //DC8 - ss_hvr_bit_shift_setting3
#define CFG_B3_GS_TCH_F_HIGH_RES_ADJ_BIT_SHIFT  (fwCfgp->b3_gsTchFHighResAdjBitShift)   //DC9 - gs_tch_bit_shift_setting0
#define CFG_B1_GS_TCH_F_HIGH_RES_LEFT_BIT_SHIFT (fwCfgp->b1_gsTchFHighResLeftBitShift)  //DC9 - gs_tch_bit_shift_setting0
#define CFG_B3_GS_TCH_S_HIGH_RES_ADJ_BIT_SHIFT  (fwCfgp->b3_gsTchSHighResAdjBitShift)   //DC9 - gs_tch_bit_shift_setting0
#define CFG_B1_GS_TCH_S_HIGH_RES_LEFT_BIT_SHIFT (fwCfgp->b1_gsTchSHighResLeftBitShift)  //DC9 - gs_tch_bit_shift_setting0
#define CFG_U8_FRAME_RATE_PRE_TCH           (fwCfgp->u8_frameRatePreTch)    //DCC - frame_rate_pre_tch
#define CFG_U8_SS_TCH_DUMMY_ANA_ACC         (fwCfgp->u8_ssTchDummyAnaAcc)   //DCD - ss_tch_dummy_ana_acc
#define CFG_U8_TCH_PREDICT_TIME_ADJ         (fwCfgp->u8_tchPredictTimeAdj)  //DCE - tch_predict_time_adj
#define CFG_B1_TCH_LNR_REG_EN               (fwCfgp->b1_tchLnrRegEn)    //DCF - apwr_tch_480_rpt
#define CFG_B1_APWR_TCH_480_RPT_EN          (fwCfgp->b1_apwrTch480RptEn)    //DCF - apwr_tch_480_rpt
#define CFG_U8_LNR_REG_TRK_PREDICT_FILTER_LEN   (fwCfgp->u8_lnrRegTrkPredictFilterLen)  //DD0 - lnr_reg_trk_predict_filter_len
#define CFG_U8_LNR_REG_TRK_PREDICT_X_IDX    (fwCfgp->u8_lnrRegTrkPredictXIdx)   //DD1 - lnr_reg_trk_predict_x_idx
#define CFG_U8_LNR_REG_TRK_PREDICT_Y_IDX    (fwCfgp->u8_lnrRegTrkPredictYIdx)   //DD2 - lnr_reg_trk_predict_y_idx
#define CFG_U16_LNR_REG_TRK_MIN_VAR_SPEED   (fwCfgp->u16_lnrRegTrkMinVarSpeed)  //DD3 - lnr_reg_trk_min_var_speed
#define CFG_U16_LNR_REG_TRK_MAX_VAR_SPEED   (fwCfgp->u16_lnrRegTrkMaxVarSpeed)  //DD5 - lnr_reg_trk_max_var_speed
#define CFG_U8_LNR_REG_PREDICT_FRM_IDX_SHIFT    (fwCfgp->u8_lnrRegPredictFrmIdxShift)   //DD7 - lnr_reg_predict_frm_idx_shift
#define CFG_U8_SS_JITTER_SKIP_CH_EN         (fwCfgp->u8_ssJitterSkipChEn)   //DD8 - ss_jitter_skip_ch_en
#define CFG_U8_MS_FLTR_NOISE_LEVEL          (fwCfgp->u8_msFltrNoiseLevel)   //DD9 - fltr_noise_level
#define CFG_U8_MS_MRN_ADJ_STDDEV_RATIO      (fwCfgp->u8_msMrnAdjStddevRatio)    //DDA - ms_mrn_adj_stddev_ratio
#define CFG_U8_MS_MRN_R0_MIN_STDDEV_THRES   (fwCfgp->u8_msMrnR0MinStddevThres)  //DDB - ms_mrn_r0_min_stddev_thres
#define CFG_U8_TRK_RAD_MUL_COR_TCH          (fwCfgp->u8_trkRadMulCorTch)    //DDC - trk_rad_mul_cor_tch
#define CFG_U8_TRK_RAD_MUL_COR_TCH_FRM_CNT  (fwCfgp->u8_trkRadMulCorTchFrmCnt)  //DDD - trk_rad_mul_cor_tch_frm_cnt
#define CFG_U16_MIN_TRK_RAD_COR_TCH         (fwCfgp->u16_minTrkRadCorTch)   //DDE - min_trk_rad_cor_tch
#define CFG_U16_GRP_EDGE_VALID_AREA_X_START (fwCfgp->u16_grpEdgeValidAreaXStart)    //DE0 - grp_edge_valid_area_x_start
#define CFG_U16_GRP_EDGE_VALID_AREA_X_END   (fwCfgp->u16_grpEdgeValidAreaXEnd)  //DE2 - grp_edge_valid_area_x_end
#define CFG_U16_GRP_EDGE_VALID_AREA_Y_START (fwCfgp->u16_grpEdgeValidAreaYStart)    //DE4 - grp_edge_valid_area_y_start
#define CFG_U16_GRP_EDGE_VALID_AREA_Y_END   (fwCfgp->u16_grpEdgeValidAreaYEnd)  //DE6 - grp_edge_valid_area_y_end
#define CFG_U32_PALM_REJ_POS_STR_THRES      (fwCfgp->u32_palmRejPosStrThres)    //DE8 - palm_rej_pos_str_thres
#define CFG_U32_PALM_REJ_NEG_STR_THRES      (fwCfgp->u32_palmRejNegStrThres)    //DEC - palm_rej_neg_str_thres
#define CFG_B4_TCH_IN_DLY_LP                (fwCfgp->b4_tchInDlyLp)     //DF0 - tch_in_dly_lp
#define CFG_B4_TCH_IN_DLY_2_LP              (fwCfgp->b4_tchInDly2Lp)    //DF0 - tch_in_dly_lp
#define CFG_U8_GES_DBLTAP_2ND_TAP_ENTER_MIN_TO  (fwCfgp->u8_gesDbltap2ndTapEnterMinTo)  //DF1 - ges_dbltap_2nd_tap_enter_min_to
#define CFG_U16_VALID_TCH_PEAK_STR_THRES    (fwCfgp->u16_validTchPeakStrThres)  //DF2 - valid_tch_peak_str_thres
#define CFG_U8_NO_TCH_DEBOUNCE_THRES        (fwCfgp->u8_noTchDebounceThres) //DF4 - no_tch_debounce_thres
#define CFG_U8_FOD_TX_START_CH              (fwCfgp->u8_fodTxStartCh)   //DF5 - fod_tx_start_ch
#define CFG_U8_FOD_TX_END_CH                (fwCfgp->u8_fodTxEndCh)     //DF6 - fod_tx_end_ch
#define CFG_U8_FOD_RX_START_CH              (fwCfgp->u8_fodRxStartCh)   //DF7 - fod_rx_start_ch
#define CFG_U8_FOD_RX_END_CH                (fwCfgp->u8_fodRxEndCh)     //DF8 - fod_rx_end_ch
#define CFG_U8_MS_TCH_NEG_DET_FCAL_POS_MIN_NODES    (fwCfgp->u8_msTchNegDetFcalPosMinNodes) //DF9 - ms_tch_neg_det_fcal_pos_min_nodes
#define CFG_U8_MS_TCH_NEG_DET_FCAL_NEG_MIN_NODES    (fwCfgp->u8_msTchNegDetFcalNegMinNodes) //DFA - ms_tch_neg_det_fcal_neg_min_nodes
#define CFG_U8_MS_TCH_NEG_DET_FCAL_POS_NEG_RATIO    (fwCfgp->u8_msTchNegDetFcalPosNegRatio) //DFB - ms_tch_neg_det_fcal_pos_neg_ratio
#define CFG_U16_RPT_Z_MIN                   (fwCfgp->u16_rptZMin)       //DFC - rpt_z_min
#define CFG_U16_RPT_Z_MAX                   (fwCfgp->u16_rptZMax)       //DFE - rpt_z_max
#define CFG_U8_MS_LNR_CMM_BITMAP_IIR_STR_THRES  (fwCfgp->u8_msLnrCmmBitmapIirStrThres)  //E00 - ms_lnr_cmm_bitmap_iir_str_thres
#define CFG_U16_MS_PURE_RAW_LNR_CMM_CHK_POS_THRES   (fwCfgp->u16_msPureRawLnrCmmChkPosThres)    //E04 - ms_pure_raw_lnr_cmm_chk_pos_thres
#define CFG_U16_MS_PURE_RAW_LNR_CMM_CHK_NEG_THRES   (fwCfgp->u16_msPureRawLnrCmmChkNegThres)    //E06 - ms_pure_raw_lnr_cmm_chk_neg_thres
#define CFG_U8_MS_PURE_RAW_LNR_CMM_CHK_DIFF_THRES   (fwCfgp->u8_msPureRawLnrCmmChkDiffThres)    //E08 - ms_pure_raw_lnr_cmm_chk_diff_thres
#define CFG_U8_MS_PURE_RAW_LNR_CMM_CHK_NODE_THRES   (fwCfgp->u8_msPureRawLnrCmmChkNodeThres)    //E09 - ms_pure_raw_lnr_cmm_chk_node_thres
#define CFG_U16_MS_PURE_RAW_LNR_CMM_CHK_AVG_THRES   (fwCfgp->u16_msPureRawLnrCmmChkAvgThres)    //E0A - ms_pure_raw_lnr_cmm_chk_avg_thres
#define CFG_U16_MS_PURE_RAW_LNR_CMM_CHK_TCH_THRES   (fwCfgp->u16_msPureRawLnrCmmChkTchThres)    //E0C - ms_pure_raw_lnr_cmm_chk_tch_thres
#define CFG_U16_MS_RES_STR_FLT_STR_DIFF_THRES   (fwCfgp->u16_msResStrFltStrDiffThres)   //E10 - ms_res_str_flt_str_diff_thres
#define CFG_U16_MS_RES_STR_FLT_AVG_RATIO    (fwCfgp->u16_msResStrFltAvgRatio)   //E12 - ms_res_str_flt_avg_ratio
#define CFG_U16_MS_RES_STR_FLT_NBR_STR_DIFF_THRES   (fwCfgp->u16_msResStrFltNbrStrDiffThres)    //E14 - ms_res_str_flt_nbr_str_diff_thres
#define CFG_U16_MS_RES_STR_FLT_2ND_NBR_STR_THRES    (fwCfgp->u16_msResStrFlt2ndNbrStrThres) //E16 - ms_res_str_flt_2nd_nbr_str_thres
#define CFG_B1_MS_FLT_UPDOWN_CHK_EN         (fwCfgp->b1_msFltUpdownChkEn)   //E18 - ms_flt_chk_en
#define CFG_B1_MS_FLT_LEFTRIGHT_CHK_EN      (fwCfgp->b1_msFltLeftrightChkEn)    //E18 - ms_flt_chk_en
#define CFG_U16_MS_STR_FLT_ENTER_MAX_THRES  (fwCfgp->u16_msStrFltEnterMaxThres) //E19 - ms_str_flt_enter_max_thres
#define CFG_U8_MS_STR_FLT_LR_ENTER_MIN_NODE_THRES   (fwCfgp->u8_msStrFltLrEnterMinNodeThres)    //E1B - ms_str_flt_lr_enter_min_node_thres
#define CFG_U8_FLT_MT_AXIS_SUM_IIR_WGH      (fwCfgp->u8_fltMtAxisSumIirWgh) //E1C - flt_mt_axis_sum_iir_wgh
#define CFG_U16_FLT_MT_AXIS_GRV_THRES       (fwCfgp->u16_fltMtAxisGrvThres) //E1D - flt_mt_axis_grv_thres
#define CFG_U16_FLT_MT_AXIS_MRG_MAX_DIST_THRES  (fwCfgp->u16_fltMtAxisMrgMaxDistThres)  //E1F - flt_mt_axis_mrg_max_dist_thres
#define CFG_U8_FLT_MT_AXIS_MRG_MAX_BOUND_CNT    (fwCfgp->u8_fltMtAxisMrgMaxBoundCnt)    //E21 - flt_mt_axis_mrg_max_bound_cnt
#define CFG_U8_FLT_MT_AXIS_MRG_MAX_TCH_CNT  (fwCfgp->u8_fltMtAxisMrgMaxTchCnt)  //E22 - flt_mt_axis_mrg_max_tch_cnt
#define CFG_U16_MS_STR_FLT_NODE_THRES       (fwCfgp->u16_msStrFltNodeThres) //E23 - ms_str_flt_node_thres
#define CFG_U8_MS_STR_FLT_TB_ENTER_MIN_NODE_THRES   (fwCfgp->u8_msStrFltTbEnterMinNodeThres)    //E25 - ms_str_flt_tb_enter_min_node_thres
#define CFG_U8_MS_STR_FLT_LR_ENTER_MIN_NODE_THRES_HYST  (fwCfgp->u8_msStrFltLrEnterMinNodeThresHyst)    //E26 - ms_str_flt_lr_enter_min_node_thres_hyst
#define CFG_U8_MS_STR_FLT_TB_ENTER_MIN_NODE_THRES_HYST  (fwCfgp->u8_msStrFltTbEnterMinNodeThresHyst)    //E27 - ms_str_flt_tb_enter_min_node_thres_hyst
#define CFG_U16_MS_STR_FLT_ENTER_MAX_THRES_HYST (fwCfgp->u16_msStrFltEnterMaxThresHyst) //E28 - ms_str_flt_enter_max_thres_hyst
#define CFG_U8_MS_STR_FLT_ISLAND_CNT_THRES  (fwCfgp->u8_msStrFltIslandCntThres) //E2A - ms_str_flt_island_cnt_thres
#define CFG_U16_MS_STR_FLT_ISLAND_NODE_RATIO    (fwCfgp->u16_msStrFltIslandNodeRatio)   //E2B - ms_str_flt_island_node_ratio
#define CFG_U8_GRP_EDGE_BIG_THUMB_AREA_TOTAL    (fwCfgp->u8_grpEdgeBigThumbAreaTotal)   //E2D - grp_edge_big_thumb_area_total
#define CFG_U16_GRP_EDGE_BIG_THUMB_SUM_ECCEN    (fwCfgp->u16_grpEdgeBigThumbSumEccen)   //E2E - grp_edge_big_thumb_sum_eccen




#define CFGBYTE_U8_CRC_0                    (*((uint8_t *)((uint32_t)fwCfgp + 0x000UL)))    //000 - crc
#define CFGBYTE_U8_CRC_1                    (*((uint8_t *)((uint32_t)fwCfgp + 0x001UL)))    //001 - crc
#define CFGBYTE_U8_CRC_2                    (*((uint8_t *)((uint32_t)fwCfgp + 0x002UL)))    //002 - crc
#define CFGBYTE_U8_CRC_3                    (*((uint8_t *)((uint32_t)fwCfgp + 0x003UL)))    //003 - crc
#define CFGBYTE_U8_LEN_0                    (*((uint8_t *)((uint32_t)fwCfgp + 0x004UL)))    //004 - len
#define CFGBYTE_U8_LEN_1                    (*((uint8_t *)((uint32_t)fwCfgp + 0x005UL)))    //005 - len
#define CFGBYTE_U8_LEN_2                    (*((uint8_t *)((uint32_t)fwCfgp + 0x006UL)))    //006 - len
#define CFGBYTE_U8_LEN_3                    (*((uint8_t *)((uint32_t)fwCfgp + 0x007UL)))    //007 - len
#define CFGBYTE_U8_CRC_N_0                  (*((uint8_t *)((uint32_t)fwCfgp + 0x008UL)))    //008 - crc_n
#define CFGBYTE_U8_CRC_N_1                  (*((uint8_t *)((uint32_t)fwCfgp + 0x009UL)))    //009 - crc_n
#define CFGBYTE_U8_CRC_N_2                  (*((uint8_t *)((uint32_t)fwCfgp + 0x00AUL)))    //00A - crc_n
#define CFGBYTE_U8_CRC_N_3                  (*((uint8_t *)((uint32_t)fwCfgp + 0x00BUL)))    //00B - crc_n
#define CFGBYTE_U8_LEN_N_0                  (*((uint8_t *)((uint32_t)fwCfgp + 0x00CUL)))    //00C - len_n
#define CFGBYTE_U8_LEN_N_1                  (*((uint8_t *)((uint32_t)fwCfgp + 0x00DUL)))    //00D - len_n
#define CFGBYTE_U8_LEN_N_2                  (*((uint8_t *)((uint32_t)fwCfgp + 0x00EUL)))    //00E - len_n
#define CFGBYTE_U8_LEN_N_3                  (*((uint8_t *)((uint32_t)fwCfgp + 0x00FUL)))    //00F - len_n
#define CFGBYTE_U8_CFG_PROJECT_ID_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x010UL)))    //010 - cfg_project_id
#define CFGBYTE_U8_CFG_PROJECT_ID_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x011UL)))    //011 - cfg_project_id
#define CFGBYTE_U8_CFG_VER_0                (*((uint8_t *)((uint32_t)fwCfgp + 0x012UL)))    //012 - cfg_ver
#define CFGBYTE_U8_CFG_VER_1                (*((uint8_t *)((uint32_t)fwCfgp + 0x013UL)))    //013 - cfg_ver
#define CFGBYTE_U8_CFG_PART_ID              (*((uint8_t *)((uint32_t)fwCfgp + 0x014UL)))    //014 - cfg_part_id
#define CFGBYTE_U8_CFG_AFE_VER              (*((uint8_t *)((uint32_t)fwCfgp + 0x015UL)))    //015 - cfg_afe_ver
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG0_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x018UL)))    //018 - external_release_config0
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG0_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x019UL)))    //019 - external_release_config0
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG0_2   (*((uint8_t *)((uint32_t)fwCfgp + 0x01AUL)))    //01A - external_release_config0
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG0_3   (*((uint8_t *)((uint32_t)fwCfgp + 0x01BUL)))    //01B - external_release_config0
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG1_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x01CUL)))    //01C - external_release_config1
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG1_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x01DUL)))    //01D - external_release_config1
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG1_2   (*((uint8_t *)((uint32_t)fwCfgp + 0x01EUL)))    //01E - external_release_config1
#define CFGBYTE_U8_EXTERNAL_RELEASE_CONFIG1_3   (*((uint8_t *)((uint32_t)fwCfgp + 0x01FUL)))    //01F - external_release_config1
#define CFGBYTE_U8_SENSE0_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x020UL)))    //020 - sense0_en
#define CFGBYTE_U8_SENSE1_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x021UL)))    //021 - sense1_en
#define CFGBYTE_U8_SENSE2_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x022UL)))    //022 - sense2_en
#define CFGBYTE_U8_SENSE3_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x023UL)))    //023 - sense3_en
#define CFGBYTE_U8_SENSE4_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x024UL)))    //024 - sense4_en
#define CFGBYTE_U8_SENSE5_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x025UL)))    //025 - sense5_en
#define CFGBYTE_U8_SENSE6_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x026UL)))    //026 - sense6_en
#define CFGBYTE_U8_SENSE7_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x027UL)))    //027 - sense7_en
#define CFGBYTE_U8_FORCE0_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x028UL)))    //028 - force0_en
#define CFGBYTE_U8_FORCE1_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x029UL)))    //029 - force1_en
#define CFGBYTE_U8_FORCE2_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x02AUL)))    //02A - force2_en
#define CFGBYTE_U8_FORCE3_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x02BUL)))    //02B - force3_en
#define CFGBYTE_U8_FORCE4_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x02CUL)))    //02C - force4_en
#define CFGBYTE_U8_FORCE5_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x02DUL)))    //02D - force5_en
#define CFGBYTE_U8_FORCE6_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x02EUL)))    //02E - force6_en
#define CFGBYTE_U8_FORCE7_EN                (*((uint8_t *)((uint32_t)fwCfgp + 0x02FUL)))    //02F - force7_en
#define CFGBYTE_U8_SENSE_LEN                (*((uint8_t *)((uint32_t)fwCfgp + 0x030UL)))    //030 - sense_len
#define CFGBYTE_U8_FORCE_LEN                (*((uint8_t *)((uint32_t)fwCfgp + 0x031UL)))    //031 - force_len
#define CFGBYTE_U8_SCR_X_RES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x032UL)))    //032 - scr_x_res
#define CFGBYTE_U8_SCR_X_RES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x033UL)))    //033 - scr_x_res
#define CFGBYTE_U8_SCR_Y_RES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x034UL)))    //034 - scr_y_res
#define CFGBYTE_U8_SCR_Y_RES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x035UL)))    //035 - scr_y_res
#define CFGBYTE_U8_SCR_ORIENT               (*((uint8_t *)((uint32_t)fwCfgp + 0x036UL)))    //036 - scr_orient
#define CFGBYTE_U8_RPT_X_RES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x037UL)))    //037 - rpt_x_res
#define CFGBYTE_U8_RPT_X_RES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x038UL)))    //038 - rpt_x_res
#define CFGBYTE_U8_RPT_Y_RES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x039UL)))    //039 - rpt_y_res
#define CFGBYTE_U8_RPT_Y_RES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x03AUL)))    //03A - rpt_y_res
#define CFGBYTE_U8_SCR_PPI_0                (*((uint8_t *)((uint32_t)fwCfgp + 0x03BUL)))    //03B - scr_ppi
#define CFGBYTE_U8_SCR_PPI_1                (*((uint8_t *)((uint32_t)fwCfgp + 0x03CUL)))    //03C - scr_ppi
#define CFGBYTE_U8_ORIENT_RAWDATA           (*((uint8_t *)((uint32_t)fwCfgp + 0x03DUL)))    //03D - orient_rawdata
#define CFGBYTE_U8_SCR_MULTIPLE             (*((uint8_t *)((uint32_t)fwCfgp + 0x03EUL)))    //03E - scr_multiple
#define CFGBYTE_U8_ACAL_CFG                 (*((uint8_t *)((uint32_t)fwCfgp + 0x040UL)))    //040 - acal_cfg
#define CFGBYTE_U8_ACAL_SKIP_CNT            (*((uint8_t *)((uint32_t)fwCfgp + 0x041UL)))    //041 - acal_skip_cnt
#define CFGBYTE_U8_ACAL_IDLE_SKIP_CNT       (*((uint8_t *)((uint32_t)fwCfgp + 0x042UL)))    //042 - acal_idle_skip_cnt
#define CFGBYTE_U8_ACAL_LP_SKIP_CNT         (*((uint8_t *)((uint32_t)fwCfgp + 0x043UL)))    //043 - acal_lp_skip_cnt
#define CFGBYTE_U8_ACAL_WGH_0               (*((uint8_t *)((uint32_t)fwCfgp + 0x044UL)))    //044 - acal_wgh
#define CFGBYTE_U8_ACAL_WGH_1               (*((uint8_t *)((uint32_t)fwCfgp + 0x045UL)))    //045 - acal_wgh
#define CFGBYTE_U8_ACAL_MS_SCR_UP_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x046UL)))    //046 - acal_ms_scr_up_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x047UL)))    //047 - acal_ms_scr_up_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x048UL)))    //048 - acal_ms_scr_low_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x049UL)))    //049 - acal_ms_scr_low_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LP_UP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x04AUL)))    //04A - acal_ms_scr_lp_up_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LP_UP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x04BUL)))    //04B - acal_ms_scr_lp_up_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LP_LOW_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x04CUL)))    //04C - acal_ms_scr_lp_low_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LP_LOW_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x04DUL)))    //04D - acal_ms_scr_lp_low_thres
#define CFGBYTE_U8_ACAL_SS_TCH_F_UP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x04EUL)))    //04E - acal_ss_tch_f_up_thres
#define CFGBYTE_U8_ACAL_SS_TCH_F_UP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x04FUL)))    //04F - acal_ss_tch_f_up_thres
#define CFGBYTE_U8_ACAL_SS_TCH_F_LOW_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x050UL)))    //050 - acal_ss_tch_f_low_thres
#define CFGBYTE_U8_ACAL_SS_TCH_F_LOW_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x051UL)))    //051 - acal_ss_tch_f_low_thres
#define CFGBYTE_U8_ACAL_SS_TCH_S_UP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x052UL)))    //052 - acal_ss_tch_s_up_thres
#define CFGBYTE_U8_ACAL_SS_TCH_S_UP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x053UL)))    //053 - acal_ss_tch_s_up_thres
#define CFGBYTE_U8_ACAL_SS_TCH_S_LOW_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x054UL)))    //054 - acal_ss_tch_s_low_thres
#define CFGBYTE_U8_ACAL_SS_TCH_S_LOW_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x055UL)))    //055 - acal_ss_tch_s_low_thres
#define CFGBYTE_U8_ACAL_MS_KEY_UP_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x056UL)))    //056 - acal_ms_key_up_thres
#define CFGBYTE_U8_ACAL_MS_KEY_UP_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x057UL)))    //057 - acal_ms_key_up_thres
#define CFGBYTE_U8_ACAL_MS_KEY_LOW_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x058UL)))    //058 - acal_ms_key_low_thres
#define CFGBYTE_U8_ACAL_MS_KEY_LOW_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x059UL)))    //059 - acal_ms_key_low_thres
#define CFGBYTE_U8_FRC_ACAL_WGH             (*((uint8_t *)((uint32_t)fwCfgp + 0x05AUL)))    //05A - frc_acal_wgh
#define CFGBYTE_U8_ACAL_FRC_TCH_UP_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x05BUL)))    //05B - acal_frc_tch_up_thres
#define CFGBYTE_U8_ACAL_FRC_TCH_UP_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x05CUL)))    //05C - acal_frc_tch_up_thres
#define CFGBYTE_U8_ACAL_FRC_TCH_LOW_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x05DUL)))    //05D - acal_frc_tch_low_thres
#define CFGBYTE_U8_ACAL_FRC_TCH_LOW_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x05EUL)))    //05E - acal_frc_tch_low_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_THRES_GLV_LP_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x05FUL)))    //05F - acal_ms_scr_up_thres_glv_lp
#define CFGBYTE_U8_ACAL_MS_SCR_UP_THRES_GLV_LP_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x060UL)))    //060 - acal_ms_scr_up_thres_glv_lp
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_THRES_GLV_LP_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x061UL)))    //061 - acal_ms_scr_low_thres_glv_lp
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_THRES_GLV_LP_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x062UL)))    //062 - acal_ms_scr_low_thres_glv_lp
#define CFGBYTE_U8_ACAL_WTR_MS_SCR_UP_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x063UL)))    //063 - acal_wtr_ms_scr_up_thres
#define CFGBYTE_U8_ACAL_WTR_MS_SCR_UP_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x064UL)))    //064 - acal_wtr_ms_scr_up_thres
#define CFGBYTE_U8_ACAL_WTR_MS_SCR_LOW_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x065UL)))    //065 - acal_wtr_ms_scr_low_thres
#define CFGBYTE_U8_ACAL_WTR_MS_SCR_LOW_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x066UL)))    //066 - acal_wtr_ms_scr_low_thres
#define CFGBYTE_U8_ACAL_MS_SCR_INTG_LOW_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x067UL)))    //067 - acal_ms_scr_intg_low_thres
#define CFGBYTE_U8_ACAL_MS_SCR_INTG_LOW_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x068UL)))    //068 - acal_ms_scr_intg_low_thres
#define CFGBYTE_U8_FCAL_CFG                 (*((uint8_t *)((uint32_t)fwCfgp + 0x06BUL)))    //06B - fcal_cfg
#define CFGBYTE_U8_FCAL_SAMP_CNT            (*((uint8_t *)((uint32_t)fwCfgp + 0x06CUL)))    //06C - fcal_samp_cnt
#define CFGBYTE_U8_ROM_RAW_SAMP_CNT         (*((uint8_t *)((uint32_t)fwCfgp + 0x06DUL)))    //06D - rom_raw_samp_cnt
#define CFGBYTE_U8_LP_RAW_SAMP_CNT          (*((uint8_t *)((uint32_t)fwCfgp + 0x06EUL)))    //06E - lp_raw_samp_cnt
#define CFGBYTE_U8_TSK_SCAN_CONFIG          (*((uint8_t *)((uint32_t)fwCfgp + 0x071UL)))    //071 - tsk_scan_config
#define CFGBYTE_U8_FRAME_RATE_TCH           (*((uint8_t *)((uint32_t)fwCfgp + 0x072UL)))    //072 - frame_rate_tch
#define CFGBYTE_U8_FRAME_RATE_IDLE          (*((uint8_t *)((uint32_t)fwCfgp + 0x073UL)))    //073 - frame_rate_idle
#define CFGBYTE_U8_FRAME_RATE_LP_DET        (*((uint8_t *)((uint32_t)fwCfgp + 0x074UL)))    //074 - frame_rate_lp_det
#define CFGBYTE_U8_FRAME_RATE_LP_ACTIVE     (*((uint8_t *)((uint32_t)fwCfgp + 0x075UL)))    //075 - frame_rate_lp_active
#define CFGBYTE_U8_APWR_NTCH_2_IDLE_DLY     (*((uint8_t *)((uint32_t)fwCfgp + 0x076UL)))    //076 - apwr_ntch_2_idle_dly
#define CFGBYTE_U8_APWR_TCH_2_NTCH_DLY      (*((uint8_t *)((uint32_t)fwCfgp + 0x077UL)))    //077 - apwr_tch_2_ntch_dly
#define CFGBYTE_U8_APWR_LPA_2_LPI_DLY       (*((uint8_t *)((uint32_t)fwCfgp + 0x078UL)))    //078 - apwr_lpa_2_lpi_dly
#define CFGBYTE_U8_APWR_NTCH_2_IDLE_DLY_SCALE   (*((uint8_t *)((uint32_t)fwCfgp + 0x079UL)))    //079 - apwr_ntch_2_idle_dly_scale
#define CFGBYTE_U8_CMD_FRAME_RATE_TCH_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x07AUL)))    //07A - cmd_frame_rate_tch
#define CFGBYTE_U8_CMD_FRAME_RATE_TCH_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x07BUL)))    //07B - cmd_frame_rate_tch
#define CFGBYTE_U8_SYNC_CFG0                (*((uint8_t *)((uint32_t)fwCfgp + 0x07DUL)))    //07D - sync_cfg0
#define CFGBYTE_U8_SYNC_CFG1                (*((uint8_t *)((uint32_t)fwCfgp + 0x07EUL)))    //07E - sync_cfg1
#define CFGBYTE_U8_SYNC_POST_HSYN_DLY_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x07FUL)))    //07F - sync_post_hsyn_dly
#define CFGBYTE_U8_SYNC_POST_HSYN_DLY_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x080UL)))    //080 - sync_post_hsyn_dly
#define CFGBYTE_U8_SYNC_SAMPLE_BTW_HSYN     (*((uint8_t *)((uint32_t)fwCfgp + 0x081UL)))    //081 - sync_sample_btw_hsyn
#define CFGBYTE_U8_SYNC_CNT_HSYN_THRESHOLD_0_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x082UL)))    //082 - sync_cnt_hsyn_threshold_0
#define CFGBYTE_U8_SYNC_CNT_HSYN_THRESHOLD_0_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x083UL)))    //083 - sync_cnt_hsyn_threshold_0
#define CFGBYTE_U8_SYNC_HSYN_PHASE_SETTING  (*((uint8_t *)((uint32_t)fwCfgp + 0x084UL)))    //084 - sync_hsyn_phase_setting
#define CFGBYTE_U8_SYNC_FRM_START_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x085UL)))    //085 - sync_frm_start_thres
#define CFGBYTE_U8_SYNC_FRM_START_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x086UL)))    //086 - sync_frm_start_thres
#define CFGBYTE_U8_SYNC_HW_POST_VSYN_DLY_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x087UL)))    //087 - sync_hw_post_vsyn_dly
#define CFGBYTE_U8_SYNC_HW_POST_VSYN_DLY_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x088UL)))    //088 - sync_hw_post_vsyn_dly
#define CFGBYTE_U8_SYNC_60HZ_SCAN_RATE      (*((uint8_t *)((uint32_t)fwCfgp + 0x089UL)))    //089 - sync_60hz_scan_rate
#define CFGBYTE_U8_SYNC_120HZ_ODD_SCAN_RATE (*((uint8_t *)((uint32_t)fwCfgp + 0x08AUL)))    //08A - sync_120hz_odd_scan_rate
#define CFGBYTE_U8_SYNC_120HZ_EVEN_SCAN_RATE    (*((uint8_t *)((uint32_t)fwCfgp + 0x08BUL)))    //08B - sync_120hz_even_scan_rate
#define CFGBYTE_U8_SYNC_240HZ_SCAN_RATE     (*((uint8_t *)((uint32_t)fwCfgp + 0x08CUL)))    //08C - sync_240hz_scan_rate
#define CFGBYTE_U8_SS_TCH_HSYN_SETTINGS     (*((uint8_t *)((uint32_t)fwCfgp + 0x08DUL)))    //08D - ss_tch_hsyn_settings
#define CFGBYTE_U8_SS_TCH_HSYN_SETTINGS_1_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x08EUL)))    //08E - ss_tch_hsyn_settings_1
#define CFGBYTE_U8_SS_TCH_HSYN_SETTINGS_1_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x08FUL)))    //08F - ss_tch_hsyn_settings_1
#define CFGBYTE_U8_SS_TCH_SYNC_POST_HSYN_DLY_RAND_MAX_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x090UL)))    //090 - ss_tch_sync_post_hsyn_dly_rand_max
#define CFGBYTE_U8_SS_TCH_SYNC_POST_HSYN_DLY_RAND_MAX_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x091UL)))    //091 - ss_tch_sync_post_hsyn_dly_rand_max
#define CFGBYTE_U8_SS_TCH_SYNC_POST_HSYN_DLY_RAND_MIN_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x092UL)))    //092 - ss_tch_sync_post_hsyn_dly_rand_min
#define CFGBYTE_U8_SS_TCH_SYNC_POST_HSYN_DLY_RAND_MIN_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x093UL)))    //093 - ss_tch_sync_post_hsyn_dly_rand_min
#define CFGBYTE_U8_SYNC_GPIO_CONFIG         (*((uint8_t *)((uint32_t)fwCfgp + 0x094UL)))    //094 - sync_gpio_config
#define CFGBYTE_U8_RPT_CONFIG               (*((uint8_t *)((uint32_t)fwCfgp + 0x09AUL)))    //09A - rpt_config
#define CFGBYTE_U8_RPT_CONFIG1              (*((uint8_t *)((uint32_t)fwCfgp + 0x09BUL)))    //09B - rpt_config1
#define CFGBYTE_U8_RPT_MAJOR_AXIS_MIN_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x09CUL)))    //09C - rpt_major_axis_min
#define CFGBYTE_U8_RPT_MAJOR_AXIS_MIN_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x09DUL)))    //09D - rpt_major_axis_min
#define CFGBYTE_U8_RPT_MAJOR_AXIS_MAX_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x09EUL)))    //09E - rpt_major_axis_max
#define CFGBYTE_U8_RPT_MAJOR_AXIS_MAX_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x09FUL)))    //09F - rpt_major_axis_max
#define CFGBYTE_U8_RPT_MINOR_AXIS_MIN_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x0A0UL)))    //0A0 - rpt_minor_axis_min
#define CFGBYTE_U8_RPT_MINOR_AXIS_MIN_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x0A1UL)))    //0A1 - rpt_minor_axis_min
#define CFGBYTE_U8_RPT_MINOR_AXIS_MAX_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x0A2UL)))    //0A2 - rpt_minor_axis_max
#define CFGBYTE_U8_RPT_MINOR_AXIS_MAX_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x0A3UL)))    //0A3 - rpt_minor_axis_max
#define CFGBYTE_U8_RPT_SEC_BRUSH_AREA_DEN_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x0A4UL)))    //0A4 - rpt_sec_brush_area_den
#define CFGBYTE_U8_RPT_SEC_BRUSH_AREA_DEN_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x0A5UL)))    //0A5 - rpt_sec_brush_area_den
#define CFGBYTE_U8_RPT_TCH_AREA_SCALE_NUMERATOR (*((uint8_t *)((uint32_t)fwCfgp + 0x0A6UL)))    //0A6 - rpt_tch_area_scale_numerator
#define CFGBYTE_U8_RPT_TCH_AREA_SCALE_DENOMINATOR   (*((uint8_t *)((uint32_t)fwCfgp + 0x0A7UL)))    //0A7 - rpt_tch_area_scale_denominator
#define CFGBYTE_U8_RPT_TCH_AREA_OFFSET      (*((uint8_t *)((uint32_t)fwCfgp + 0x0A8UL)))    //0A8 - rpt_tch_area_offset
#define CFGBYTE_U8_CHRGR_CFG                (*((uint8_t *)((uint32_t)fwCfgp + 0x0ACUL)))    //0AC - chrgr_cfg
#define CFGBYTE_U8_CHRGR_GRV_TOL_HORI_VERT_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x0ADUL)))    //0AD - chrgr_grv_tol_hori_vert
#define CFGBYTE_U8_CHRGR_GRV_TOL_HORI_VERT_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x0AEUL)))    //0AE - chrgr_grv_tol_hori_vert
#define CFGBYTE_U8_CHRGR_GRV_TOL_DIAG_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x0AFUL)))    //0AF - chrgr_grv_tol_diag
#define CFGBYTE_U8_CHRGR_GRV_TOL_DIAG_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x0B0UL)))    //0B0 - chrgr_grv_tol_diag
#define CFGBYTE_U8_CHRGR_GRV_MIN_TCH_SEP_DIST_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x0B1UL)))    //0B1 - chrgr_grv_min_tch_sep_dist
#define CFGBYTE_U8_CHRGR_GRV_MIN_TCH_SEP_DIST_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x0B2UL)))    //0B2 - chrgr_grv_min_tch_sep_dist
#define CFGBYTE_U8_CHRGR_GRV_NORM_PERCENT   (*((uint8_t *)((uint32_t)fwCfgp + 0x0B3UL)))    //0B3 - chrgr_grv_norm_percent
#define CFGBYTE_U8_CHRGR_TCH_THRES_INC      (*((uint8_t *)((uint32_t)fwCfgp + 0x0B4UL)))    //0B4 - chrgr_tch_thres_inc
#define CFGBYTE_U8_CHRGR_TCH_MRG_DIST_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x0B5UL)))    //0B5 - chrgr_tch_mrg_dist
#define CFGBYTE_U8_CHRGR_TCH_MRG_DIST_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x0B6UL)))    //0B6 - chrgr_tch_mrg_dist
#define CFGBYTE_U8_CHRGR_FGR_THRES_HYST     (*((uint8_t *)((uint32_t)fwCfgp + 0x0B7UL)))    //0B7 - chrgr_fgr_thres_hyst
#define CFGBYTE_U8_SS_FLT_CFG               (*((uint8_t *)((uint32_t)fwCfgp + 0x0BAUL)))    //0BA - ss_flt_cfg
#define CFGBYTE_U8_SS_FLT_GRV_BASE_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x0BBUL)))    //0BB - ss_flt_grv_base_thres
#define CFGBYTE_U8_SS_FLT_GRV_BASE_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x0BCUL)))    //0BC - ss_flt_grv_base_thres
#define CFGBYTE_U8_SS_FLT_VALID_PEAK_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x0BDUL)))    //0BD - ss_flt_valid_peak_thres
#define CFGBYTE_U8_SS_FLT_VALID_PEAK_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x0BEUL)))    //0BE - ss_flt_valid_peak_thres
#define CFGBYTE_U8_SS_FLT_GRV_TOL_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x0BFUL)))    //0BF - ss_flt_grv_tol
#define CFGBYTE_U8_SS_FLT_GRV_TOL_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x0C0UL)))    //0C0 - ss_flt_grv_tol
#define CFGBYTE_U8_SS_FLT_GRV_NORM_PERCENT  (*((uint8_t *)((uint32_t)fwCfgp + 0x0C1UL)))    //0C1 - ss_flt_grv_norm_percent
#define CFGBYTE_U8_CHRGR_ACAL_MS_SCR_UP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x0C3UL)))    //0C3 - chrgr_acal_ms_scr_up_thres
#define CFGBYTE_U8_CHRGR_ACAL_MS_SCR_UP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x0C4UL)))    //0C4 - chrgr_acal_ms_scr_up_thres
#define CFGBYTE_U8_CHRGR_ACAL_MS_SCR_LOW_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x0C5UL)))    //0C5 - chrgr_acal_ms_scr_low_thres
#define CFGBYTE_U8_CHRGR_ACAL_MS_SCR_LOW_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x0C6UL)))    //0C6 - chrgr_acal_ms_scr_low_thres
#define CFGBYTE_U8_AFE_MS_DRIVE_CTRL        (*((uint8_t *)((uint32_t)fwCfgp + 0x0C9UL)))    //0C9 - afe_ms_drive_ctrl
#define CFGBYTE_U8_AFE_SS_DRIVE_CTRL        (*((uint8_t *)((uint32_t)fwCfgp + 0x0CAUL)))    //0CA - afe_ss_drive_ctrl
#define CFGBYTE_U8_OSC_OVER_CLK_CFG         (*((uint8_t *)((uint32_t)fwCfgp + 0x0CCUL)))    //0CC - osc_over_clk_cfg
#define CFGBYTE_U8_MS_SCR_AFE_CFG0          (*((uint8_t *)((uint32_t)fwCfgp + 0x0CDUL)))    //0CD - ms_scr_afe_cfg0
#define CFGBYTE_U8_MS_SCR_AFE_CFG1          (*((uint8_t *)((uint32_t)fwCfgp + 0x0CEUL)))    //0CE - ms_scr_afe_cfg1
#define CFGBYTE_U8_MS_SCR_AFE_CFG2          (*((uint8_t *)((uint32_t)fwCfgp + 0x0CFUL)))    //0CF - ms_scr_afe_cfg2
#define CFGBYTE_U8_MS_SCR_AFE_CFG3          (*((uint8_t *)((uint32_t)fwCfgp + 0x0D0UL)))    //0D0 - ms_scr_afe_cfg3
#define CFGBYTE_U8_MS_SCR_AFE_CFG4          (*((uint8_t *)((uint32_t)fwCfgp + 0x0D1UL)))    //0D1 - ms_scr_afe_cfg4
#define CFGBYTE_U8_MS_SCR_AFE_CFG5          (*((uint8_t *)((uint32_t)fwCfgp + 0x0D2UL)))    //0D2 - ms_scr_afe_cfg5
#define CFGBYTE_U8_MS_SCR_T_CYC_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x0D3UL)))    //0D3 - ms_scr_t_cyc
#define CFGBYTE_U8_MS_SCR_T_CYC_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x0D4UL)))    //0D4 - ms_scr_t_cyc
#define CFGBYTE_U8_MS_SCR_OS_DLY_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x0D5UL)))    //0D5 - ms_scr_os_dly
#define CFGBYTE_U8_MS_SCR_OS_DLY_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x0D6UL)))    //0D6 - ms_scr_os_dly
#define CFGBYTE_U8_MS_SCR_HIGH_RES_PRFL0    (*((uint8_t *)((uint32_t)fwCfgp + 0x0D7UL)))    //0D7 - ms_scr_high_res_prfl0
#define CFGBYTE_U8_MS_SCR_HIGH_RES_PRFL1    (*((uint8_t *)((uint32_t)fwCfgp + 0x0D8UL)))    //0D8 - ms_scr_high_res_prfl1
#define CFGBYTE_U8_MS_SCR_HIGH_RES_PRFL2    (*((uint8_t *)((uint32_t)fwCfgp + 0x0D9UL)))    //0D9 - ms_scr_high_res_prfl2
#define CFGBYTE_U8_MS_SCR_HIGH_RES_PRFL3    (*((uint8_t *)((uint32_t)fwCfgp + 0x0DAUL)))    //0DA - ms_scr_high_res_prfl3
#define CFGBYTE_U8_MS_SCR_HIGH_RES_PRFL4    (*((uint8_t *)((uint32_t)fwCfgp + 0x0DBUL)))    //0DB - ms_scr_high_res_prfl4
#define CFGBYTE_U8_MS_SCR_HIGH_RES_PRFL6_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x0DDUL)))    //0DD - ms_scr_high_res_prfl6
#define CFGBYTE_U8_MS_SCR_HIGH_RES_PRFL6_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x0DEUL)))    //0DE - ms_scr_high_res_prfl6
#define CFGBYTE_U8_MS_SCR_LP_PRFL0          (*((uint8_t *)((uint32_t)fwCfgp + 0x0DFUL)))    //0DF - ms_scr_lp_prfl0
#define CFGBYTE_U8_MS_SCR_LP_PRFL1          (*((uint8_t *)((uint32_t)fwCfgp + 0x0E0UL)))    //0E0 - ms_scr_lp_prfl1
#define CFGBYTE_U8_MS_SCR_LP_PRFL2          (*((uint8_t *)((uint32_t)fwCfgp + 0x0E1UL)))    //0E1 - ms_scr_lp_prfl2
#define CFGBYTE_U8_MS_SCR_LP_PRFL3          (*((uint8_t *)((uint32_t)fwCfgp + 0x0E2UL)))    //0E2 - ms_scr_lp_prfl3
#define CFGBYTE_U8_MS_SCR_LP_PRFL4          (*((uint8_t *)((uint32_t)fwCfgp + 0x0E3UL)))    //0E3 - ms_scr_lp_prfl4
#define CFGBYTE_U8_MS_SCR_LP_PRFL5_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x0E4UL)))    //0E4 - ms_scr_lp_prfl5
#define CFGBYTE_U8_MS_SCR_LP_PRFL5_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x0E5UL)))    //0E5 - ms_scr_lp_prfl5
#define CFGBYTE_U8_MS_SCR_FW_ACC_PRFL0      (*((uint8_t *)((uint32_t)fwCfgp + 0x0E6UL)))    //0E6 - ms_scr_fw_acc_prfl0
#define CFGBYTE_U8_MS_SCR_FW_ACC_NOISY_PRFL0    (*((uint8_t *)((uint32_t)fwCfgp + 0x0E7UL)))    //0E7 - ms_scr_fw_acc_noisy_prfl0
#define CFGBYTE_U8_MS_SCR_FW_ACC_NOISY_PRFL1    (*((uint8_t *)((uint32_t)fwCfgp + 0x0E8UL)))    //0E8 - ms_scr_fw_acc_noisy_prfl1
#define CFGBYTE_U8_MS_SCR_LP_PRFL6          (*((uint8_t *)((uint32_t)fwCfgp + 0x0E9UL)))    //0E9 - ms_scr_lp_prfl6
#define CFGBYTE_U8_MS_MRN_SCAN_PRFL0        (*((uint8_t *)((uint32_t)fwCfgp + 0x0EAUL)))    //0EA - ms_mrn_scan_prfl0
#define CFGBYTE_U8_MS_MRN_SCAN_PRFL1        (*((uint8_t *)((uint32_t)fwCfgp + 0x0EBUL)))    //0EB - ms_mrn_scan_prfl1
#define CFGBYTE_U8_MS_KEY_AFE_CFG0          (*((uint8_t *)((uint32_t)fwCfgp + 0x0EDUL)))    //0ED - ms_key_afe_cfg0
#define CFGBYTE_U8_MS_KEY_AFE_CFG1          (*((uint8_t *)((uint32_t)fwCfgp + 0x0EEUL)))    //0EE - ms_key_afe_cfg1
#define CFGBYTE_U8_MS_KEY_AFE_CFG2          (*((uint8_t *)((uint32_t)fwCfgp + 0x0EFUL)))    //0EF - ms_key_afe_cfg2
#define CFGBYTE_U8_MS_KEY_AFE_CFG3          (*((uint8_t *)((uint32_t)fwCfgp + 0x0F0UL)))    //0F0 - ms_key_afe_cfg3
#define CFGBYTE_U8_MS_KEY_AFE_CFG4          (*((uint8_t *)((uint32_t)fwCfgp + 0x0F1UL)))    //0F1 - ms_key_afe_cfg4
#define CFGBYTE_U8_MS_KEY_AFE_CFG5          (*((uint8_t *)((uint32_t)fwCfgp + 0x0F2UL)))    //0F2 - ms_key_afe_cfg5
#define CFGBYTE_U8_MS_KEY_T_CYC_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x0F3UL)))    //0F3 - ms_key_t_cyc
#define CFGBYTE_U8_MS_KEY_T_CYC_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x0F4UL)))    //0F4 - ms_key_t_cyc
#define CFGBYTE_U8_MS_KEY_R_CYC_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x0F5UL)))    //0F5 - ms_key_r_cyc
#define CFGBYTE_U8_MS_KEY_R_CYC_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x0F6UL)))    //0F6 - ms_key_r_cyc
#define CFGBYTE_U8_MS_KEY_OS_DLY_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x0F7UL)))    //0F7 - ms_key_os_dly
#define CFGBYTE_U8_MS_KEY_OS_DLY_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x0F8UL)))    //0F8 - ms_key_os_dly
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL0    (*((uint8_t *)((uint32_t)fwCfgp + 0x0F9UL)))    //0F9 - ms_key_high_res_prfl0
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL1    (*((uint8_t *)((uint32_t)fwCfgp + 0x0FAUL)))    //0FA - ms_key_high_res_prfl1
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL2    (*((uint8_t *)((uint32_t)fwCfgp + 0x0FBUL)))    //0FB - ms_key_high_res_prfl2
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL3    (*((uint8_t *)((uint32_t)fwCfgp + 0x0FCUL)))    //0FC - ms_key_high_res_prfl3
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL4    (*((uint8_t *)((uint32_t)fwCfgp + 0x0FDUL)))    //0FD - ms_key_high_res_prfl4
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL5    (*((uint8_t *)((uint32_t)fwCfgp + 0x0FEUL)))    //0FE - ms_key_high_res_prfl5
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL6_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x0FFUL)))    //0FF - ms_key_high_res_prfl6
#define CFGBYTE_U8_MS_KEY_HIGH_RES_PRFL6_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x100UL)))    //100 - ms_key_high_res_prfl6
#define CFGBYTE_U8_SS_TCH_AFE_CFG0          (*((uint8_t *)((uint32_t)fwCfgp + 0x102UL)))    //102 - ss_tch_afe_cfg0
#define CFGBYTE_U8_SS_TCH_AFE_CFG1          (*((uint8_t *)((uint32_t)fwCfgp + 0x103UL)))    //103 - ss_tch_afe_cfg1
#define CFGBYTE_U8_SS_TCH_AFE_CFG2          (*((uint8_t *)((uint32_t)fwCfgp + 0x104UL)))    //104 - ss_tch_afe_cfg2
#define CFGBYTE_U8_SS_TCH_AFE_CFG3          (*((uint8_t *)((uint32_t)fwCfgp + 0x105UL)))    //105 - ss_tch_afe_cfg3
#define CFGBYTE_U8_SS_TCH_AFE_CFG4          (*((uint8_t *)((uint32_t)fwCfgp + 0x106UL)))    //106 - ss_tch_afe_cfg4
#define CFGBYTE_U8_SS_TCH_AFE_CFG5          (*((uint8_t *)((uint32_t)fwCfgp + 0x107UL)))    //107 - ss_tch_afe_cfg5
#define CFGBYTE_U8_SS_TCH_R_CYC_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x108UL)))    //108 - ss_tch_r_cyc
#define CFGBYTE_U8_SS_TCH_R_CYC_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x109UL)))    //109 - ss_tch_r_cyc
#define CFGBYTE_U8_SS_TCH_T_CYC_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x10AUL)))    //10A - ss_tch_t_cyc
#define CFGBYTE_U8_SS_TCH_T_CYC_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x10BUL)))    //10B - ss_tch_t_cyc
#define CFGBYTE_U8_SS_TCH_RL_CYC_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x10CUL)))    //10C - ss_tch_rl_cyc
#define CFGBYTE_U8_SS_TCH_RL_CYC_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x10DUL)))    //10D - ss_tch_rl_cyc
#define CFGBYTE_U8_SS_TCH_OS_DLY_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x10EUL)))    //10E - ss_tch_os_dly
#define CFGBYTE_U8_SS_TCH_OS_DLY_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x10FUL)))    //10F - ss_tch_os_dly
#define CFGBYTE_U8_SS_TCH_F_IX_RANGE_CFG_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x110UL)))    //110 - ss_tch_f_ix_range_cfg_0
#define CFGBYTE_U8_SS_TCH_F_IX_RANGE_CFG_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x111UL)))    //111 - ss_tch_f_ix_range_cfg_1
#define CFGBYTE_U8_SS_TCH_S_IX_RANGE_CFG_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x112UL)))    //112 - ss_tch_s_ix_range_cfg_0
#define CFGBYTE_U8_SS_TCH_S_IX_RANGE_CFG_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x113UL)))    //113 - ss_tch_s_ix_range_cfg_1
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL0    (*((uint8_t *)((uint32_t)fwCfgp + 0x114UL)))    //114 - ss_tch_high_res_prfl0
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL1    (*((uint8_t *)((uint32_t)fwCfgp + 0x115UL)))    //115 - ss_tch_high_res_prfl1
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL2    (*((uint8_t *)((uint32_t)fwCfgp + 0x116UL)))    //116 - ss_tch_high_res_prfl2
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL3    (*((uint8_t *)((uint32_t)fwCfgp + 0x117UL)))    //117 - ss_tch_high_res_prfl3
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL4    (*((uint8_t *)((uint32_t)fwCfgp + 0x118UL)))    //118 - ss_tch_high_res_prfl4
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL5    (*((uint8_t *)((uint32_t)fwCfgp + 0x119UL)))    //119 - ss_tch_high_res_prfl5
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL6_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x11AUL)))    //11A - ss_tch_high_res_prfl6
#define CFGBYTE_U8_SS_TCH_HIGH_RES_PRFL6_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x11BUL)))    //11B - ss_tch_high_res_prfl6
#define CFGBYTE_U8_MUTUAL_VALID_CFG         (*((uint8_t *)((uint32_t)fwCfgp + 0x11DUL)))    //11D - mutual_valid_cfg
#define CFGBYTE_U8_MS_VAL_TX_MARK_POS_THD_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x11EUL)))    //11E - ms_val_tx_mark_pos_thd
#define CFGBYTE_U8_MS_VAL_TX_MARK_POS_THD_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x11FUL)))    //11F - ms_val_tx_mark_pos_thd
#define CFGBYTE_U8_MS_VAL_TX_MARK_NEG_THD_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x120UL)))    //120 - ms_val_tx_mark_neg_thd
#define CFGBYTE_U8_MS_VAL_TX_MARK_NEG_THD_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x121UL)))    //121 - ms_val_tx_mark_neg_thd
#define CFGBYTE_U8_MS_VAL_TX_MARK_GRW_CNT   (*((uint8_t *)((uint32_t)fwCfgp + 0x122UL)))    //122 - ms_val_tx_mark_grw_cnt
#define CFGBYTE_U8_MS_VAL_TX_MIN_NUM_CH_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0x123UL)))    //123 - ms_val_tx_min_num_ch_cnt
#define CFGBYTE_U8_DYNAMIC_FGR_THRES_EN     (*((uint8_t *)((uint32_t)fwCfgp + 0x124UL)))    //124 - dynamic_fgr_thres_en
#define CFGBYTE_U8_NOISY_DYNAMIC_FGR_THRES_PER  (*((uint8_t *)((uint32_t)fwCfgp + 0x125UL)))    //125 - noisy_dynamic_fgr_thres_per
#define CFGBYTE_U8_DYNAMIC_FGR_THRES_PER    (*((uint8_t *)((uint32_t)fwCfgp + 0x126UL)))    //126 - dynamic_fgr_thres_per
#define CFGBYTE_U8_TX_MARK_CH_KEEP_DBNC     (*((uint8_t *)((uint32_t)fwCfgp + 0x127UL)))    //127 - tx_mark_ch_keep_dbnc
#define CFGBYTE_U8_TUNE_MS_SCR_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0x12AUL)))    //12A - tune_ms_scr_cfg
#define CFGBYTE_U8_TUNE_MS_SCR_LOG_CFG      (*((uint8_t *)((uint32_t)fwCfgp + 0x12BUL)))    //12B - tune_ms_scr_log_cfg
#define CFGBYTE_U8_TUNE_MS_SCR_CX2_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x12CUL)))    //12C - tune_ms_scr_cx2_stop_code
#define CFGBYTE_U8_TUNE_MS_SCR_CX2_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x12DUL)))    //12D - tune_ms_scr_cx2_stop_code
#define CFGBYTE_U8_TUNE_MS_SCR_LP_CFG       (*((uint8_t *)((uint32_t)fwCfgp + 0x130UL)))    //130 - tune_ms_scr_lp_cfg
#define CFGBYTE_U8_TUNE_MS_SCR_LP_LOG_CFG   (*((uint8_t *)((uint32_t)fwCfgp + 0x131UL)))    //131 - tune_ms_scr_lp_log_cfg
#define CFGBYTE_U8_TUNE_MS_SCR_LP_CX2_STOP_CODE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x132UL)))    //132 - tune_ms_scr_lp_cx2_stop_code
#define CFGBYTE_U8_TUNE_MS_SCR_LP_CX2_STOP_CODE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x133UL)))    //133 - tune_ms_scr_lp_cx2_stop_code
#define CFGBYTE_U8_TUNE_MS_SCR_LP_CX2_ST_IDX_VALID_CH   (*((uint8_t *)((uint32_t)fwCfgp + 0x134UL)))    //134 - tune_ms_scr_lp_cx2_st_idx_valid_ch
#define CFGBYTE_U8_TUNE_MS_SCR_LP_CX2_ST_IDX_UNVALID_CH (*((uint8_t *)((uint32_t)fwCfgp + 0x135UL)))    //135 - tune_ms_scr_lp_cx2_st_idx_unvalid_ch
#define CFGBYTE_U8_TUNE_SS_TCH_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0x138UL)))    //138 - tune_ss_tch_cfg
#define CFGBYTE_U8_TUNE_SS_TCH_IX0_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x139UL)))    //139 - tune_ss_tch_ix0_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_IX0_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x13AUL)))    //13A - tune_ss_tch_ix0_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_IX1_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x13BUL)))    //13B - tune_ss_tch_ix1_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_IX1_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x13CUL)))    //13C - tune_ss_tch_ix1_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_IX2_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x13DUL)))    //13D - tune_ss_tch_ix2_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_IX2_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x13EUL)))    //13E - tune_ss_tch_ix2_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_CX2_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x13FUL)))    //13F - tune_ss_tch_cx2_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_CX2_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x140UL)))    //140 - tune_ss_tch_cx2_stop_code
#define CFGBYTE_U8_TUNE_SS_TCH_F_IX0_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x141UL)))    //141 - tune_ss_tch_f_ix0_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_TCH_S_IX0_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x142UL)))    //142 - tune_ss_tch_s_ix0_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_TCH_F_IX1_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x143UL)))    //143 - tune_ss_tch_f_ix1_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_TCH_S_IX1_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x144UL)))    //144 - tune_ss_tch_s_ix1_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_TCH_IX0_ADJ_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0x145UL)))    //145 - tune_ss_tch_ix0_adj_offset
#define CFGBYTE_U8_TUNE_SS_TCH_IX1_ADJ_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0x146UL)))    //146 - tune_ss_tch_ix1_adj_offset
#define CFGBYTE_U8_TUNE_SS_TCH_IX2_ADJ_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0x147UL)))    //147 - tune_ss_tch_ix2_adj_offset
#define CFGBYTE_U8_TUNE_SS_TCH_DIFF_CX2_SWEEP_ST    (*((uint8_t *)((uint32_t)fwCfgp + 0x148UL)))    //148 - tune_ss_tch_diff_cx2_sweep_st
#define CFGBYTE_U8_TUNE_SS_TCH_F_IX2_ST_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x149UL)))    //149 - tune_ss_tch_f_ix2_st_val
#define CFGBYTE_U8_TUNE_SS_TCH_S_IX2_ST_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x14AUL)))    //14A - tune_ss_tch_s_ix2_st_val
#define CFGBYTE_U8_TUNE_SS_DET_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0x14CUL)))    //14C - tune_ss_det_cfg
#define CFGBYTE_U8_TUNE_SS_DET_IX0_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x14DUL)))    //14D - tune_ss_det_ix0_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_IX0_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x14EUL)))    //14E - tune_ss_det_ix0_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_IX1_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x14FUL)))    //14F - tune_ss_det_ix1_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_IX1_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x150UL)))    //150 - tune_ss_det_ix1_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_IX2_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x151UL)))    //151 - tune_ss_det_ix2_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_IX2_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x152UL)))    //152 - tune_ss_det_ix2_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_CX2_STOP_CODE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x153UL)))    //153 - tune_ss_det_cx2_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_CX2_STOP_CODE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x154UL)))    //154 - tune_ss_det_cx2_stop_code
#define CFGBYTE_U8_TUNE_SS_DET_F_IX0_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x155UL)))    //155 - tune_ss_det_f_ix0_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_DET_S_IX0_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x156UL)))    //156 - tune_ss_det_s_ix0_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_DET_F_IX1_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x157UL)))    //157 - tune_ss_det_f_ix1_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_DET_S_IX1_MANUAL_TUNE_VAL    (*((uint8_t *)((uint32_t)fwCfgp + 0x158UL)))    //158 - tune_ss_det_s_ix1_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_DET_IX0_ADJ_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0x159UL)))    //159 - tune_ss_det_ix0_adj_offset
#define CFGBYTE_U8_TUNE_SS_DET_F_IX2_ST_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x15AUL)))    //15A - tune_ss_det_f_ix2_st_val
#define CFGBYTE_U8_TUNE_SS_DET_S_IX2_ST_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x15BUL)))    //15B - tune_ss_det_s_ix2_st_val
#define CFGBYTE_U8_TUNE_SS_DET_IX1_ADJ_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0x15CUL)))    //15C - tune_ss_det_ix1_adj_offset
#define CFGBYTE_U8_TUNE_SS_DET_IX2_ADJ_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0x15DUL)))    //15D - tune_ss_det_ix2_adj_offset
#define CFGBYTE_U8_TUNE_SS_DET_DIFF_CX2_SWEEP_ST    (*((uint8_t *)((uint32_t)fwCfgp + 0x15EUL)))    //15E - tune_ss_det_diff_cx2_sweep_st
#define CFGBYTE_U8_TUNE_SS_FRCTCH_CFG       (*((uint8_t *)((uint32_t)fwCfgp + 0x161UL)))    //161 - tune_ss_frctch_cfg
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX0_STOP_CODE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x162UL)))    //162 - tune_ss_frctch_ix0_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX0_STOP_CODE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x163UL)))    //163 - tune_ss_frctch_ix0_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX1_STOP_CODE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x164UL)))    //164 - tune_ss_frctch_ix1_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX1_STOP_CODE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x165UL)))    //165 - tune_ss_frctch_ix1_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX2_STOP_CODE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x166UL)))    //166 - tune_ss_frctch_ix2_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX2_STOP_CODE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x167UL)))    //167 - tune_ss_frctch_ix2_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_CX2_STOP_CODE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x168UL)))    //168 - tune_ss_frctch_cx2_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_CX2_STOP_CODE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x169UL)))    //169 - tune_ss_frctch_cx2_stop_code
#define CFGBYTE_U8_TUNE_SS_FRCTCH_F_IX0_MANUAL_TUNE_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x16AUL)))    //16A - tune_ss_frctch_f_ix0_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_FRCTCH_S_IX0_MANUAL_TUNE_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x16BUL)))    //16B - tune_ss_frctch_s_ix0_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_FRCTCH_F_IX1_MANUAL_TUNE_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x16CUL)))    //16C - tune_ss_frctch_f_ix1_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_FRCTCH_S_IX1_MANUAL_TUNE_VAL (*((uint8_t *)((uint32_t)fwCfgp + 0x16DUL)))    //16D - tune_ss_frctch_s_ix1_manual_tune_val
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX0_ADJ_OFFSET    (*((uint8_t *)((uint32_t)fwCfgp + 0x16EUL)))    //16E - tune_ss_frctch_ix0_adj_offset
#define CFGBYTE_U8_TUNE_SS_FRCTCH_IX1_ADJ_OFFSET    (*((uint8_t *)((uint32_t)fwCfgp + 0x16FUL)))    //16F - tune_ss_frctch_ix1_adj_offset
#define CFGBYTE_U8_TUNE_SS_FRCTCH_DIFF_CX2_SWEEP_ST (*((uint8_t *)((uint32_t)fwCfgp + 0x170UL)))    //170 - tune_ss_frctch_diff_cx2_sweep_st
#define CFGBYTE_U8_SS_RETUNE_CFG0           (*((uint8_t *)((uint32_t)fwCfgp + 0x171UL)))    //171 - ss_retune_cfg0
#define CFGBYTE_U8_SS_CX2_INVALID_RETUNE_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0x172UL)))    //172 - ss_cx2_invalid_retune_thres
#define CFGBYTE_U8_SS_CX2_INVALID_RETUNE_COMP_ABS_VALUE (*((uint8_t *)((uint32_t)fwCfgp + 0x173UL)))    //173 - ss_cx2_invalid_retune_comp_abs_value
#define CFGBYTE_U8_NMON_CFG                 (*((uint8_t *)((uint32_t)fwCfgp + 0x174UL)))    //174 - nmon_cfg
#define CFGBYTE_U8_MS_MRN_CFG1              (*((uint8_t *)((uint32_t)fwCfgp + 0x175UL)))    //175 - ms_mrn_cfg1
#define CFGBYTE_U8_MS_MRN_CFG2              (*((uint8_t *)((uint32_t)fwCfgp + 0x176UL)))    //176 - ms_mrn_cfg2
#define CFGBYTE_U8_MS_MRN_R_CYC_SEL0        (*((uint8_t *)((uint32_t)fwCfgp + 0x177UL)))    //177 - ms_mrn_r_cyc_sel0
#define CFGBYTE_U8_MS_MRN_R_CYC_SEL1        (*((uint8_t *)((uint32_t)fwCfgp + 0x178UL)))    //178 - ms_mrn_r_cyc_sel1
#define CFGBYTE_U8_MS_MRN_R_CYC_SEL2        (*((uint8_t *)((uint32_t)fwCfgp + 0x179UL)))    //179 - ms_mrn_r_cyc_sel2
#define CFGBYTE_U8_MS_MRN_R_CYC_SEL3        (*((uint8_t *)((uint32_t)fwCfgp + 0x17AUL)))    //17A - ms_mrn_r_cyc_sel3
#define CFGBYTE_U8_NLVL_DBNC_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x17BUL)))    //17B - nlvl_dbnc
#define CFGBYTE_U8_NLVL_DBNC_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x17CUL)))    //17C - nlvl_dbnc
#define CFGBYTE_U8_NLVL1_STDDEV_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x17DUL)))    //17D - nlvl1_stddev_thres
#define CFGBYTE_U8_NLVL1_STDDEV_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x17EUL)))    //17E - nlvl1_stddev_thres
#define CFGBYTE_U8_NLVL2_STDDEV_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x17FUL)))    //17F - nlvl2_stddev_thres
#define CFGBYTE_U8_NLVL2_STDDEV_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x180UL)))    //180 - nlvl2_stddev_thres
#define CFGBYTE_U8_NLVL3_STDDEV_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x181UL)))    //181 - nlvl3_stddev_thres
#define CFGBYTE_U8_NLVL3_STDDEV_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x182UL)))    //182 - nlvl3_stddev_thres
#define CFGBYTE_U8_STY_NLVL1_STDDEV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x183UL)))    //183 - sty_nlvl1_stddev_thres
#define CFGBYTE_U8_STY_NLVL1_STDDEV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x184UL)))    //184 - sty_nlvl1_stddev_thres
#define CFGBYTE_U8_STY_NLVL2_STDDEV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x185UL)))    //185 - sty_nlvl2_stddev_thres
#define CFGBYTE_U8_STY_NLVL2_STDDEV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x186UL)))    //186 - sty_nlvl2_stddev_thres
#define CFGBYTE_U8_STY_NLVL3_STDDEV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x187UL)))    //187 - sty_nlvl3_stddev_thres
#define CFGBYTE_U8_STY_NLVL3_STDDEV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x188UL)))    //188 - sty_nlvl3_stddev_thres
#define CFGBYTE_U8_MS_NOISE_CMM_POS_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x189UL)))    //189 - ms_noise_cmm_pos_thres
#define CFGBYTE_U8_MS_NOISE_CMM_POS_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x18AUL)))    //18A - ms_noise_cmm_pos_thres
#define CFGBYTE_U8_MS_NOISE_CMM_NEG_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x18BUL)))    //18B - ms_noise_cmm_neg_thres
#define CFGBYTE_U8_MS_NOISE_CMM_NEG_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x18CUL)))    //18C - ms_noise_cmm_neg_thres
#define CFGBYTE_U8_MS_MRN_SWITCH_R_THRES    (*((uint8_t *)((uint32_t)fwCfgp + 0x18DUL)))    //18D - ms_mrn_switch_r_thres
#define CFGBYTE_U8_MS_MRN_SWITCH_R_THRES_ADP_GAIN   (*((uint8_t *)((uint32_t)fwCfgp + 0x18EUL)))    //18E - ms_mrn_switch_r_thres_adp_gain
#define CFGBYTE_U8_MS_MRN_MIN_STDDEV        (*((uint8_t *)((uint32_t)fwCfgp + 0x18FUL)))    //18F - ms_mrn_min_stddev
#define CFGBYTE_U8_NLVL1_STDDEV_GAP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x190UL)))    //190 - nlvl1_stddev_gap_thres
#define CFGBYTE_U8_NLVL1_STDDEV_GAP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x191UL)))    //191 - nlvl1_stddev_gap_thres
#define CFGBYTE_U8_FREQ_HOP_FRM_DROP_MAX_NMON_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x192UL)))    //192 - freq_hop_frm_drop_max_nmon
#define CFGBYTE_U8_FREQ_HOP_FRM_DROP_MAX_NMON_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x193UL)))    //193 - freq_hop_frm_drop_max_nmon
#define CFGBYTE_U8_MS_MRN_STEP_VAL          (*((uint8_t *)((uint32_t)fwCfgp + 0x194UL)))    //194 - ms_mrn_step_val
#define CFGBYTE_U8_NLV2L_DBNC_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x195UL)))    //195 - nlv2l_dbnc
#define CFGBYTE_U8_NLV2L_DBNC_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x196UL)))    //196 - nlv2l_dbnc
#define CFGBYTE_U8_MS_SCR_CLIP_NMON_CFG     (*((uint8_t *)((uint32_t)fwCfgp + 0x197UL)))    //197 - ms_scr_clip_nmon_cfg
#define CFGBYTE_U8_MS_SCR_CLIP_NLVL2_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0x198UL)))    //198 - ms_scr_clip_nlvl2_thres
#define CFGBYTE_U8_MS_SCR_CLIP_NLVL2_TSLOT_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x199UL)))    //199 - ms_scr_clip_nlvl2_tslot_cnt
#define CFGBYTE_U8_SS_TCH_NMON_CFG_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x19CUL)))    //19C - ss_tch_nmon_cfg
#define CFGBYTE_U8_SS_TCH_NMON_CFG_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x19DUL)))    //19D - ss_tch_nmon_cfg
#define CFGBYTE_U8_SS_TCH_NLVL1_DEV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x19EUL)))    //19E - ss_tch_nlvl1_dev_thres
#define CFGBYTE_U8_SS_TCH_NLVL1_DEV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x19FUL)))    //19F - ss_tch_nlvl1_dev_thres
#define CFGBYTE_U8_SS_TCH_NLVL2_DEV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1A0UL)))    //1A0 - ss_tch_nlvl2_dev_thres
#define CFGBYTE_U8_SS_TCH_NLVL2_DEV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1A1UL)))    //1A1 - ss_tch_nlvl2_dev_thres
#define CFGBYTE_U8_SS_TCH_NOISE_DEV_INC_IIR_WGH0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1A2UL)))    //1A2 - ss_tch_noise_dev_inc_iir_wgh0
#define CFGBYTE_U8_SS_TCH_NOISE_DEV_DEC_IIR_WGH0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1A3UL)))    //1A3 - ss_tch_noise_dev_dec_iir_wgh0
#define CFGBYTE_U8_SS_TCH_NLVL_DBNC_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x1A4UL)))    //1A4 - ss_tch_nlvl_dbnc
#define CFGBYTE_U8_SS_TCH_NLVL_DBNC_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x1A5UL)))    //1A5 - ss_tch_nlvl_dbnc
#define CFGBYTE_U8_SS_TCH_STY_NLVL1_DEV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1A6UL)))    //1A6 - ss_tch_sty_nlvl1_dev_thres
#define CFGBYTE_U8_SS_TCH_STY_NLVL1_DEV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1A7UL)))    //1A7 - ss_tch_sty_nlvl1_dev_thres
#define CFGBYTE_U8_SS_TCH_STY_NLVL2_DEV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1A8UL)))    //1A8 - ss_tch_sty_nlvl2_dev_thres
#define CFGBYTE_U8_SS_TCH_STY_NLVL2_DEV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1A9UL)))    //1A9 - ss_tch_sty_nlvl2_dev_thres
#define CFGBYTE_U8_SS_NOISE_CMM_POS_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1AAUL)))    //1AA - ss_noise_cmm_pos_thres
#define CFGBYTE_U8_SS_NOISE_CMM_POS_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1ABUL)))    //1AB - ss_noise_cmm_pos_thres
#define CFGBYTE_U8_SS_NOISE_CMM_NEG_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1ACUL)))    //1AC - ss_noise_cmm_neg_thres
#define CFGBYTE_U8_SS_NOISE_CMM_NEG_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1ADUL)))    //1AD - ss_noise_cmm_neg_thres
#define CFGBYTE_U8_SS_TCH_NOISE_POS_THRES_BURST_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1AEUL)))    //1AE - ss_tch_noise_pos_thres_burst
#define CFGBYTE_U8_SS_TCH_NOISE_POS_THRES_BURST_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1AFUL)))    //1AF - ss_tch_noise_pos_thres_burst
#define CFGBYTE_U8_SS_TCH_BITMAP_EDGE_TCH_NODE_LIMIT_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0x1B1UL)))    //1B1 - ss_tch_bitmap_edge_tch_node_limit_thres
#define CFGBYTE_U8_SS_TCH_CFG_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x1B2UL)))    //1B2 - ss_tch_cfg
#define CFGBYTE_U8_SS_TCH_CFG_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x1B3UL)))    //1B3 - ss_tch_cfg
#define CFGBYTE_U8_SS_TCH_DET_THRES_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x1B4UL)))    //1B4 - ss_tch_det_thres
#define CFGBYTE_U8_SS_TCH_DET_THRES_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x1B5UL)))    //1B5 - ss_tch_det_thres
#define CFGBYTE_U8_SS_TCH_DET_THRES_NOISY_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1B6UL)))    //1B6 - ss_tch_det_thres_noisy
#define CFGBYTE_U8_SS_TCH_DET_THRES_NOISY_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1B7UL)))    //1B7 - ss_tch_det_thres_noisy
#define CFGBYTE_U8_SS_TCH_WATERSHED_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1B8UL)))    //1B8 - ss_tch_watershed_thres
#define CFGBYTE_U8_SS_TCH_WATERSHED_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1B9UL)))    //1B9 - ss_tch_watershed_thres
#define CFGBYTE_U8_SS_TCH_CENTROID_CFG      (*((uint8_t *)((uint32_t)fwCfgp + 0x1BAUL)))    //1BA - ss_tch_centroid_cfg
#define CFGBYTE_U8_SS_BITMAP_FGR_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1BBUL)))    //1BB - ss_bitmap_fgr_thres
#define CFGBYTE_U8_SS_BITMAP_FGR_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1BCUL)))    //1BC - ss_bitmap_fgr_thres
#define CFGBYTE_U8_SS_BITMAP_STY_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1BDUL)))    //1BD - ss_bitmap_sty_thres
#define CFGBYTE_U8_SS_BITMAP_STY_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1BEUL)))    //1BE - ss_bitmap_sty_thres
#define CFGBYTE_U8_SS_BITMAP_GLV_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1BFUL)))    //1BF - ss_bitmap_glv_thres
#define CFGBYTE_U8_SS_BITMAP_GLV_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1C0UL)))    //1C0 - ss_bitmap_glv_thres
#define CFGBYTE_U8_SS_BITMAP_WTR_FGR_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1C1UL)))    //1C1 - ss_bitmap_wtr_fgr_thres
#define CFGBYTE_U8_SS_BITMAP_WTR_FGR_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1C2UL)))    //1C2 - ss_bitmap_wtr_fgr_thres
#define CFGBYTE_U8_SS_TCH_BITMAP_TCH_CNT_LIMIT_THRES    (*((uint8_t *)((uint32_t)fwCfgp + 0x1C3UL)))    //1C3 - ss_tch_bitmap_tch_cnt_limit_thres
#define CFGBYTE_U8_SS_TCH_ADAPTIVE_SCAN_DBNC    (*((uint8_t *)((uint32_t)fwCfgp + 0x1C4UL)))    //1C4 - ss_tch_adaptive_scan_dbnc
#define CFGBYTE_U8_SS_INTG_LNR_CMM_SLP_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x1C5UL)))    //1C5 - ss_intg_lnr_cmm_slp_thres
#define CFGBYTE_U8_SS_INTG_LNR_CMM_SLP_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x1C6UL)))    //1C6 - ss_intg_lnr_cmm_slp_thres
#define CFGBYTE_U8_SS_INTG_LNR_CMM_AVG_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x1C7UL)))    //1C7 - ss_intg_lnr_cmm_avg_thres
#define CFGBYTE_U8_SS_INTG_LNR_CMM_AVG_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x1C8UL)))    //1C8 - ss_intg_lnr_cmm_avg_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_LEVEL_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1CAUL)))    //1CA - ss_lnr_cmm_smp_level_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_LEVEL_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1CBUL)))    //1CB - ss_lnr_cmm_smp_level_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_LEVEL_NOISY_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1CCUL)))    //1CC - ss_lnr_cmm_smp_level_noisy_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_LEVEL_NOISY_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1CDUL)))    //1CD - ss_lnr_cmm_smp_level_noisy_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x1CEUL)))    //1CE - ss_lnr_cmm_smp_diff_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x1CFUL)))    //1CF - ss_lnr_cmm_smp_diff_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_DIFF_NOISY_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1D0UL)))    //1D0 - ss_lnr_cmm_smp_diff_noisy_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_DIFF_NOISY_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1D1UL)))    //1D1 - ss_lnr_cmm_smp_diff_noisy_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_CNT_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x1D2UL)))    //1D2 - ss_lnr_cmm_smp_cnt_thres
#define CFGBYTE_U8_SS_LNR_CMM_SMP_CNT_THRES_HYST    (*((uint8_t *)((uint32_t)fwCfgp + 0x1D3UL)))    //1D3 - ss_lnr_cmm_smp_cnt_thres_hyst
#define CFGBYTE_U8_SS_LNR_CMM_SMP_CNT_MVA_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x1D4UL)))    //1D4 - ss_lnr_cmm_smp_cnt_mva_thres
#define CFGBYTE_U8_SS_LNR_CMM_COMP_LIMIT_DIFF_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1D5UL)))    //1D5 - ss_lnr_cmm_comp_limit_diff_thres
#define CFGBYTE_U8_SS_LNR_CMM_COMP_LIMIT_DIFF_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1D6UL)))    //1D6 - ss_lnr_cmm_comp_limit_diff_thres
#define CFGBYTE_U8_SS_LNR_CMM_COMP_LIMIT_INTG_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1D7UL)))    //1D7 - ss_lnr_cmm_comp_limit_intg_thres
#define CFGBYTE_U8_SS_LNR_CMM_COMP_LIMIT_INTG_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1D8UL)))    //1D8 - ss_lnr_cmm_comp_limit_intg_thres
#define CFGBYTE_U8_SS_LNR_CMM_COMP_LIMIT_MVA_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1D9UL)))    //1D9 - ss_lnr_cmm_comp_limit_mva_thres
#define CFGBYTE_U8_SS_LNR_CMM_COMP_LIMIT_MVA_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1DAUL)))    //1DA - ss_lnr_cmm_comp_limit_mva_thres
#define CFGBYTE_U8_SS_LNR_CMM_RX_ERODE_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x1DBUL)))    //1DB - ss_lnr_cmm_rx_erode_cnt
#define CFGBYTE_U8_SS_LNR_CMM_TX_ERODE_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x1DCUL)))    //1DC - ss_lnr_cmm_tx_erode_cnt
#define CFGBYTE_U8_SS_LNR_CMM_MVA_CH_EXPAND_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0x1DDUL)))    //1DD - ss_lnr_cmm_mva_ch_expand_cnt
#define CFGBYTE_U8_SF_LNR_CMM_SMP_LEVEL_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x1DFUL)))    //1DF - sf_lnr_cmm_smp_level_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_LEVEL_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x1E0UL)))    //1E0 - sf_lnr_cmm_smp_level_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_LEVEL_NOISY_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1E1UL)))    //1E1 - sf_lnr_cmm_smp_level_noisy_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_LEVEL_NOISY_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1E2UL)))    //1E2 - sf_lnr_cmm_smp_level_noisy_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x1E3UL)))    //1E3 - sf_lnr_cmm_smp_diff_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x1E4UL)))    //1E4 - sf_lnr_cmm_smp_diff_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_DIFF_NOISY_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1E5UL)))    //1E5 - sf_lnr_cmm_smp_diff_noisy_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_DIFF_NOISY_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1E6UL)))    //1E6 - sf_lnr_cmm_smp_diff_noisy_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_CNT_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x1E7UL)))    //1E7 - sf_lnr_cmm_smp_cnt_thres
#define CFGBYTE_U8_SF_LNR_CMM_SMP_CNT_THRES_HYST    (*((uint8_t *)((uint32_t)fwCfgp + 0x1E8UL)))    //1E8 - sf_lnr_cmm_smp_cnt_thres_hyst
#define CFGBYTE_U8_SF_LNR_CMM_SMP_CNT_MVA_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x1E9UL)))    //1E9 - sf_lnr_cmm_smp_cnt_mva_thres
#define CFGBYTE_U8_SF_LNR_CMM_COMP_LIMIT_DIFF_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1EAUL)))    //1EA - sf_lnr_cmm_comp_limit_diff_thres
#define CFGBYTE_U8_SF_LNR_CMM_COMP_LIMIT_DIFF_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1EBUL)))    //1EB - sf_lnr_cmm_comp_limit_diff_thres
#define CFGBYTE_U8_SF_LNR_CMM_COMP_LIMIT_INTG_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1ECUL)))    //1EC - sf_lnr_cmm_comp_limit_intg_thres
#define CFGBYTE_U8_SF_LNR_CMM_COMP_LIMIT_INTG_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1EDUL)))    //1ED - sf_lnr_cmm_comp_limit_intg_thres
#define CFGBYTE_U8_SF_LNR_CMM_COMP_LIMIT_MVA_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x1EEUL)))    //1EE - sf_lnr_cmm_comp_limit_mva_thres
#define CFGBYTE_U8_SF_LNR_CMM_COMP_LIMIT_MVA_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x1EFUL)))    //1EF - sf_lnr_cmm_comp_limit_mva_thres
#define CFGBYTE_U8_SF_LNR_CMM_RX_ERODE_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x1F0UL)))    //1F0 - sf_lnr_cmm_rx_erode_cnt
#define CFGBYTE_U8_SF_LNR_CMM_TX_ERODE_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x1F1UL)))    //1F1 - sf_lnr_cmm_tx_erode_cnt
#define CFGBYTE_U8_SF_LNR_CMM_MVA_CH_EXPAND_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0x1F2UL)))    //1F2 - sf_lnr_cmm_mva_ch_expand_cnt
#define CFGBYTE_U8_SS_DET_CFG               (*((uint8_t *)((uint32_t)fwCfgp + 0x1F4UL)))    //1F4 - ss_det_cfg
#define CFGBYTE_U8_SS_DET_NODE_CNT          (*((uint8_t *)((uint32_t)fwCfgp + 0x1F5UL)))    //1F5 - ss_det_node_cnt
#define CFGBYTE_U8_SS_DET_THRES_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x1F6UL)))    //1F6 - ss_det_thres
#define CFGBYTE_U8_SS_DET_THRES_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x1F7UL)))    //1F7 - ss_det_thres
#define CFGBYTE_U8_SS_DET_THRES_GLV_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x1F8UL)))    //1F8 - ss_det_thres_glv
#define CFGBYTE_U8_SS_DET_THRES_GLV_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x1F9UL)))    //1F9 - ss_det_thres_glv
#define CFGBYTE_U8_SS_LP_DET_THRES_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x1FAUL)))    //1FA - ss_lp_det_thres
#define CFGBYTE_U8_SS_LP_DET_THRES_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x1FBUL)))    //1FB - ss_lp_det_thres
#define CFGBYTE_U8_SS_DET_CMM_POS_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1FCUL)))    //1FC - ss_det_cmm_pos_thres
#define CFGBYTE_U8_SS_DET_CMM_POS_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1FDUL)))    //1FD - ss_det_cmm_pos_thres
#define CFGBYTE_U8_SS_DET_CMM_NEG_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x1FEUL)))    //1FE - ss_det_cmm_neg_thres
#define CFGBYTE_U8_SS_DET_CMM_NEG_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x1FFUL)))    //1FF - ss_det_cmm_neg_thres
#define CFGBYTE_U8_SS_WTR_CFG_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x200UL)))    //200 - ss_wtr_cfg
#define CFGBYTE_U8_SS_WTR_CFG_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x201UL)))    //201 - ss_wtr_cfg
#define CFGBYTE_U8_SS_WTR_DBNC              (*((uint8_t *)((uint32_t)fwCfgp + 0x202UL)))    //202 - ss_wtr_dbnc
#define CFGBYTE_U8_SS_WTR_TCH_IN_DLY        (*((uint8_t *)((uint32_t)fwCfgp + 0x203UL)))    //203 - ss_wtr_tch_in_dly
#define CFGBYTE_U8_SS_WTR_TCH_OUT_DLY       (*((uint8_t *)((uint32_t)fwCfgp + 0x204UL)))    //204 - ss_wtr_tch_out_dly
#define CFGBYTE_U8_SS_WTR_MS_DET_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x205UL)))    //205 - ss_wtr_ms_det_thres
#define CFGBYTE_U8_SS_WTR_MS_DET_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x206UL)))    //206 - ss_wtr_ms_det_thres
#define CFGBYTE_U8_SS_WTR_MS_DET_THRES_HYST_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x207UL)))    //207 - ss_wtr_ms_det_thres_hyst
#define CFGBYTE_U8_SS_WTR_MS_DET_THRES_HYST_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x208UL)))    //208 - ss_wtr_ms_det_thres_hyst
#define CFGBYTE_U8_SS_WTR_MIN_THRES         (*((uint8_t *)((uint32_t)fwCfgp + 0x209UL)))    //209 - ss_wtr_min_thres
#define CFGBYTE_U8_LP_SS_WTR_MS_DET_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x20AUL)))    //20A - lp_ss_wtr_ms_det_thres
#define CFGBYTE_U8_LP_SS_WTR_MS_DET_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x20BUL)))    //20B - lp_ss_wtr_ms_det_thres
#define CFGBYTE_U8_LP_SS_WTR_MS_DET_THRES_HYST_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x20CUL)))    //20C - lp_ss_wtr_ms_det_thres_hyst
#define CFGBYTE_U8_LP_SS_WTR_MS_DET_THRES_HYST_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x20DUL)))    //20D - lp_ss_wtr_ms_det_thres_hyst
#define CFGBYTE_U8_WTR_ENTRY_MT_TRIG_THD_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x20EUL)))    //20E - wtr_entry_mt_trig_thd
#define CFGBYTE_U8_WTR_ENTRY_MT_TRIG_THD_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x20FUL)))    //20F - wtr_entry_mt_trig_thd
#define CFGBYTE_U8_WTR_ENTRY_SS_TRIG_THD_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x210UL)))    //210 - wtr_entry_ss_trig_thd
#define CFGBYTE_U8_WTR_ENTRY_SS_TRIG_THD_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x211UL)))    //211 - wtr_entry_ss_trig_thd
#define CFGBYTE_U8_WTR_ENTRY_MS_NEG_FCAL_THD_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x212UL)))    //212 - wtr_entry_ms_neg_fcal_thd
#define CFGBYTE_U8_WTR_ENTRY_MS_NEG_FCAL_THD_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x213UL)))    //213 - wtr_entry_ms_neg_fcal_thd
#define CFGBYTE_U8_WTR_ENTRY_MS_POS_FCAL_THD_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x214UL)))    //214 - wtr_entry_ms_pos_fcal_thd
#define CFGBYTE_U8_WTR_ENTRY_MS_POS_FCAL_THD_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x215UL)))    //215 - wtr_entry_ms_pos_fcal_thd
#define CFGBYTE_U8_WTR_ENTRY_MS_NEG_NODE_CNT_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x216UL)))    //216 - wtr_entry_ms_neg_node_cnt
#define CFGBYTE_U8_WTR_ENTRY_MS_NEG_NODE_CNT_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x217UL)))    //217 - wtr_entry_ms_neg_node_cnt
#define CFGBYTE_U8_WTR_EXIT_CALIB_OFFSET_POS_THD_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x218UL)))    //218 - wtr_exit_calib_offset_pos_thd
#define CFGBYTE_U8_WTR_EXIT_CALIB_OFFSET_POS_THD_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x219UL)))    //219 - wtr_exit_calib_offset_pos_thd
#define CFGBYTE_U8_WTR_EXIT_CALIB_OFFSET_NEG_THD_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x21AUL)))    //21A - wtr_exit_calib_offset_neg_thd
#define CFGBYTE_U8_WTR_EXIT_CALIB_OFFSET_NEG_THD_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x21BUL)))    //21B - wtr_exit_calib_offset_neg_thd
#define CFGBYTE_U8_WTR_NODE_ACAL_FRM_CNT    (*((uint8_t *)((uint32_t)fwCfgp + 0x21CUL)))    //21C - wtr_node_acal_frm_cnt
#define CFGBYTE_U8_WTR_NODE_ACAL_WGH        (*((uint8_t *)((uint32_t)fwCfgp + 0x21DUL)))    //21D - wtr_node_acal_wgh
#define CFGBYTE_U8_WTR_EXIT_NEG_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x21EUL)))    //21E - wtr_exit_neg_thres
#define CFGBYTE_U8_WTR_EXIT_NEG_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x21FUL)))    //21F - wtr_exit_neg_thres
#define CFGBYTE_U8_WTR_MS_SPATIAL_THD_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x220UL)))    //220 - wtr_ms_spatial_thd
#define CFGBYTE_U8_WTR_MS_SPATIAL_THD_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x221UL)))    //221 - wtr_ms_spatial_thd
#define CFGBYTE_U8_WTR_ENTRY_MT_TRIG_THD_HYST_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x222UL)))    //222 - wtr_entry_mt_trig_thd_hyst
#define CFGBYTE_U8_WTR_ENTRY_MT_TRIG_THD_HYST_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x223UL)))    //223 - wtr_entry_mt_trig_thd_hyst
#define CFGBYTE_U8_WTR_DYNAMIC_FGR_THRES_PER    (*((uint8_t *)((uint32_t)fwCfgp + 0x224UL)))    //224 - wtr_dynamic_fgr_thres_per
#define CFGBYTE_U8_MS_WTR_ISLAND_SUM_RATIO_REJECT_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x225UL)))    //225 - ms_wtr_island_sum_ratio_reject
#define CFGBYTE_U8_MS_WTR_ISLAND_SUM_RATIO_REJECT_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x226UL)))    //226 - ms_wtr_island_sum_ratio_reject
#define CFGBYTE_U8_WTR_SS_DYNAMIC_FGR_THRES_PER (*((uint8_t *)((uint32_t)fwCfgp + 0x227UL)))    //227 - wtr_ss_dynamic_fgr_thres_per
#define CFGBYTE_U8_WTR_MIN_TRK_RAD_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x228UL)))    //228 - wtr_min_trk_rad
#define CFGBYTE_U8_WTR_MIN_TRK_RAD_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x229UL)))    //229 - wtr_min_trk_rad
#define CFGBYTE_U8_WTR_TRK_RAD_MUL          (*((uint8_t *)((uint32_t)fwCfgp + 0x22AUL)))    //22A - wtr_trk_rad_mul
#define CFGBYTE_U8_WTR_TCH_MRG_DIST_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x22BUL)))    //22B - wtr_tch_mrg_dist
#define CFGBYTE_U8_WTR_TCH_MRG_DIST_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x22CUL)))    //22C - wtr_tch_mrg_dist
#define CFGBYTE_U8_WTR_TCH_MRG_DIST_HYST_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x22DUL)))    //22D - wtr_tch_mrg_dist_hyst
#define CFGBYTE_U8_WTR_TCH_MRG_DIST_HYST_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x22EUL)))    //22E - wtr_tch_mrg_dist_hyst
#define CFGBYTE_U8_MS_WTR_SPATIAL_FLTR_PEAK_EXTEND_WGH  (*((uint8_t *)((uint32_t)fwCfgp + 0x22FUL)))    //22F - ms_wtr_spatial_fltr_peak_extend_wgh
#define CFGBYTE_U8_ACT_EDGE_TCH_ISLAND_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x230UL)))    //230 - act_edge_tch_island_thres
#define CFGBYTE_U8_ACT_EDGE_TCH_ISLAND_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x231UL)))    //231 - act_edge_tch_island_thres
#define CFGBYTE_U8_HORI_SCR_TCH_ISLAND_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x232UL)))    //232 - hori_scr_tch_island_thres
#define CFGBYTE_U8_HORI_SCR_TCH_ISLAND_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x233UL)))    //233 - hori_scr_tch_island_thres
#define CFGBYTE_U8_TCH_PREPROCESS_CFG_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x234UL)))    //234 - tch_preprocess_cfg
#define CFGBYTE_U8_TCH_PREPROCESS_CFG_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x235UL)))    //235 - tch_preprocess_cfg
#define CFGBYTE_U8_FRM_IIR_STDDEV0_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x236UL)))    //236 - frm_iir_stddev0
#define CFGBYTE_U8_FRM_IIR_STDDEV0_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x237UL)))    //237 - frm_iir_stddev0
#define CFGBYTE_U8_FRM_IIR_STDDEV1_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x238UL)))    //238 - frm_iir_stddev1
#define CFGBYTE_U8_FRM_IIR_STDDEV1_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x239UL)))    //239 - frm_iir_stddev1
#define CFGBYTE_U8_FRM_IIR_NOISY_STDDEV0_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x23AUL)))    //23A - frm_iir_noisy_stddev0
#define CFGBYTE_U8_FRM_IIR_NOISY_STDDEV0_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x23BUL)))    //23B - frm_iir_noisy_stddev0
#define CFGBYTE_U8_FRM_IIR_NOISY_STDDEV1_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x23CUL)))    //23C - frm_iir_noisy_stddev1
#define CFGBYTE_U8_FRM_IIR_NOISY_STDDEV1_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x23DUL)))    //23D - frm_iir_noisy_stddev1
#define CFGBYTE_U8_FRM_IIR_WGH              (*((uint8_t *)((uint32_t)fwCfgp + 0x23EUL)))    //23E - frm_iir_wgh
#define CFGBYTE_U8_FRM_IIR_NOISY_WGH        (*((uint8_t *)((uint32_t)fwCfgp + 0x23FUL)))    //23F - frm_iir_noisy_wgh
#define CFGBYTE_U8_NOTCH_FRM_IIR_WGH        (*((uint8_t *)((uint32_t)fwCfgp + 0x240UL)))    //240 - notch_frm_iir_wgh
#define CFGBYTE_U8_MS_WATERSHED_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x241UL)))    //241 - ms_watershed_thres
#define CFGBYTE_U8_MS_WATERSHED_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x242UL)))    //242 - ms_watershed_thres
#define CFGBYTE_U8_TCH_ISLAND_THRES_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x243UL)))    //243 - tch_island_thres
#define CFGBYTE_U8_TCH_ISLAND_THRES_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x244UL)))    //244 - tch_island_thres
#define CFGBYTE_U8_TCH_ISLAND_THRES_WTR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x245UL)))    //245 - tch_island_thres_wtr
#define CFGBYTE_U8_TCH_ISLAND_THRES_WTR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x246UL)))    //246 - tch_island_thres_wtr
#define CFGBYTE_U8_TCH_ISLAND_THRES_GLV_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x247UL)))    //247 - tch_island_thres_glv
#define CFGBYTE_U8_TCH_ISLAND_THRES_GLV_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x248UL)))    //248 - tch_island_thres_glv
#define CFGBYTE_U8_MS_AVG_CMM_THRES_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x249UL)))    //249 - ms_avg_cmm_thres
#define CFGBYTE_U8_MS_AVG_CMM_THRES_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x24AUL)))    //24A - ms_avg_cmm_thres
#define CFGBYTE_U8_MS_LNR_CMM_COMP_LIMIT_DIFF_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x24BUL)))    //24B - ms_lnr_cmm_comp_limit_diff_thres
#define CFGBYTE_U8_MS_LNR_CMM_COMP_LIMIT_DIFF_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x24CUL)))    //24C - ms_lnr_cmm_comp_limit_diff_thres
#define CFGBYTE_U8_MS_LNR_CMM_COMP_LIMIT_INTG_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x24DUL)))    //24D - ms_lnr_cmm_comp_limit_intg_thres
#define CFGBYTE_U8_MS_LNR_CMM_COMP_LIMIT_INTG_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x24EUL)))    //24E - ms_lnr_cmm_comp_limit_intg_thres
#define CFGBYTE_U8_MS_LNR_CMM_COMP_LIMIT_MVA_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x24FUL)))    //24F - ms_lnr_cmm_comp_limit_mva_thres
#define CFGBYTE_U8_MS_LNR_CMM_COMP_LIMIT_MVA_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x250UL)))    //250 - ms_lnr_cmm_comp_limit_mva_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_LEVEL_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x251UL)))    //251 - ms_lnr_cmm_smp_level_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_LEVEL_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x252UL)))    //252 - ms_lnr_cmm_smp_level_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_LEVEL_NOISY_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x253UL)))    //253 - ms_lnr_cmm_smp_level_noisy_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_LEVEL_NOISY_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x254UL)))    //254 - ms_lnr_cmm_smp_level_noisy_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x255UL)))    //255 - ms_lnr_cmm_smp_diff_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x256UL)))    //256 - ms_lnr_cmm_smp_diff_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_DIFF_NOISY_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x257UL)))    //257 - ms_lnr_cmm_smp_diff_noisy_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_DIFF_NOISY_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x258UL)))    //258 - ms_lnr_cmm_smp_diff_noisy_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_CNT_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x259UL)))    //259 - ms_lnr_cmm_smp_cnt_thres
#define CFGBYTE_U8_MS_LNR_CMM_SMP_CNT_THRES_HYST    (*((uint8_t *)((uint32_t)fwCfgp + 0x25AUL)))    //25A - ms_lnr_cmm_smp_cnt_thres_hyst
#define CFGBYTE_U8_MS_LNR_CMM_SMP_CNT_MVA_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x25BUL)))    //25B - ms_lnr_cmm_smp_cnt_mva_thres
#define CFGBYTE_U8_MS_LNR_CMM_RX_ERODE_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x25CUL)))    //25C - ms_lnr_cmm_rx_erode_cnt
#define CFGBYTE_U8_MS_LNR_CMM_TX_ERODE_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x25DUL)))    //25D - ms_lnr_cmm_tx_erode_cnt
#define CFGBYTE_U8_MS_LNR_CMM_MVA_CH_EXPAND_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0x25EUL)))    //25E - ms_lnr_cmm_mva_ch_expand_cnt
#define CFGBYTE_U8_MS_ALL_CH_ADJ_VAL        (*((uint8_t *)((uint32_t)fwCfgp + 0x25FUL)))    //25F - ms_all_ch_adj_val
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_DET_TRHES_NOISY_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x260UL)))    //260 - tch_cnt_frame_drop_ms_neg_det_trhes_noisy
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_DET_TRHES_NOISY_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x261UL)))    //261 - tch_cnt_frame_drop_ms_neg_det_trhes_noisy
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_SUM_TRHES_NOISY_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x262UL)))    //262 - tch_cnt_frame_drop_ms_neg_sum_trhes_noisy
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_SUM_TRHES_NOISY_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x263UL)))    //263 - tch_cnt_frame_drop_ms_neg_sum_trhes_noisy
#define CFGBYTE_U8_FRM_IIR_WIRELESS_WGH     (*((uint8_t *)((uint32_t)fwCfgp + 0x264UL)))    //264 - frm_iir_wireless_wgh
#define CFGBYTE_U8_FRAME_CHECK_CFG_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x266UL)))    //266 - frame_check_cfg
#define CFGBYTE_U8_FRAME_CHECK_CFG_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x267UL)))    //267 - frame_check_cfg
#define CFGBYTE_U8_MS_DROP_NOISY_FRAME_FCAL_DBNC    (*((uint8_t *)((uint32_t)fwCfgp + 0x268UL)))    //268 - ms_drop_noisy_frame_fcal_dbnc
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_WTR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x269UL)))    //269 - ms_diff_valid_pos_thres_wtr
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_WTR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x26AUL)))    //26A - ms_diff_valid_pos_thres_wtr
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_DET_TRHES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x26BUL)))    //26B - tch_cnt_frame_drop_ms_neg_det_trhes
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_DET_TRHES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x26CUL)))    //26C - tch_cnt_frame_drop_ms_neg_det_trhes
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_SUM_TRHES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x26DUL)))    //26D - tch_cnt_frame_drop_ms_neg_sum_trhes
#define CFGBYTE_U8_TCH_CNT_FRAME_DROP_MS_NEG_SUM_TRHES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x26EUL)))    //26E - tch_cnt_frame_drop_ms_neg_sum_trhes
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_QTO_NOISY_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x26FUL)))    //26F - ms_diff_valid_pos_thres_qto_noisy
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_QTO_NOISY_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x270UL)))    //270 - ms_diff_valid_pos_thres_qto_noisy
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_QTO_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x271UL)))    //271 - ms_diff_valid_pos_thres_qto
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_QTO_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x272UL)))    //272 - ms_diff_valid_pos_thres_qto
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x273UL)))    //273 - ms_diff_valid_pos_thres
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x274UL)))    //274 - ms_diff_valid_pos_thres
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_NLVL1_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x275UL)))    //275 - ms_diff_valid_pos_thres_nlvl1
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_NLVL1_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x276UL)))    //276 - ms_diff_valid_pos_thres_nlvl1
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_NLVL2_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x277UL)))    //277 - ms_diff_valid_pos_thres_nlvl2
#define CFGBYTE_U8_MS_DIFF_VALID_POS_THRES_NLVL2_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x278UL)))    //278 - ms_diff_valid_pos_thres_nlvl2
#define CFGBYTE_U8_MS_DIFF_FATAL_ERR_STR_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x279UL)))    //279 - ms_diff_fatal_err_str_thres
#define CFGBYTE_U8_MS_DIFF_FATAL_ERR_STR_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x27AUL)))    //27A - ms_diff_fatal_err_str_thres
#define CFGBYTE_U8_MS_DIFF_FATAL_ERR_NODE_NUM_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x27BUL)))    //27B - ms_diff_fatal_err_node_num_thres
#define CFGBYTE_U8_DYNAMIC_ISLAND_MIN_THRES_LP_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x27CUL)))    //27C - dynamic_island_min_thres_lp
#define CFGBYTE_U8_DYNAMIC_ISLAND_MIN_THRES_LP_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x27DUL)))    //27D - dynamic_island_min_thres_lp
#define CFGBYTE_U8_DYNAMIC_ISLAND_MAX_THRES_LP_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x27EUL)))    //27E - dynamic_island_max_thres_lp
#define CFGBYTE_U8_DYNAMIC_ISLAND_MAX_THRES_LP_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x27FUL)))    //27F - dynamic_island_max_thres_lp
#define CFGBYTE_U8_TCH_ISLND_PROCESS_CFG_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x280UL)))    //280 - tch_islnd_process_cfg
#define CFGBYTE_U8_TCH_ISLND_PROCESS_CFG_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x281UL)))    //281 - tch_islnd_process_cfg
#define CFGBYTE_U8_SPATIAL_PEAK_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x282UL)))    //282 - spatial_peak_thres
#define CFGBYTE_U8_SPATIAL_PEAK_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x283UL)))    //283 - spatial_peak_thres
#define CFGBYTE_U8_NORM_THRES_PERCENT       (*((uint8_t *)((uint32_t)fwCfgp + 0x284UL)))    //284 - norm_thres_percent
#define CFGBYTE_U8_GRV_NORM_PERCENT         (*((uint8_t *)((uint32_t)fwCfgp + 0x285UL)))    //285 - grv_norm_percent
#define CFGBYTE_U8_GRV_TOL_HORI_VERT_0      (*((uint8_t *)((uint32_t)fwCfgp + 0x286UL)))    //286 - grv_tol_hori_vert
#define CFGBYTE_U8_GRV_TOL_HORI_VERT_1      (*((uint8_t *)((uint32_t)fwCfgp + 0x287UL)))    //287 - grv_tol_hori_vert
#define CFGBYTE_U8_GRV_TOL_DIAG_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x288UL)))    //288 - grv_tol_diag
#define CFGBYTE_U8_GRV_TOL_DIAG_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x289UL)))    //289 - grv_tol_diag
#define CFGBYTE_U8_GRV_MIN_TCH_SEP_DIST_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x28AUL)))    //28A - grv_min_tch_sep_dist
#define CFGBYTE_U8_GRV_MIN_TCH_SEP_DIST_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x28BUL)))    //28B - grv_min_tch_sep_dist
#define CFGBYTE_U8_GRV_MIN_AREA             (*((uint8_t *)((uint32_t)fwCfgp + 0x28CUL)))    //28C - grv_min_area
#define CFGBYTE_U8_GRV_AXIS_INC_PERCENT     (*((uint8_t *)((uint32_t)fwCfgp + 0x28DUL)))    //28D - grv_axis_inc_percent
#define CFGBYTE_U8_GRV_SPEED_LIMIT_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x28EUL)))    //28E - grv_speed_limit
#define CFGBYTE_U8_GRV_SPEED_LIMIT_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x28FUL)))    //28F - grv_speed_limit
#define CFGBYTE_U8_GRV_NOISY_SPEED_LIMIT_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x290UL)))    //290 - grv_noisy_speed_limit
#define CFGBYTE_U8_GRV_NOISY_SPEED_LIMIT_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x291UL)))    //291 - grv_noisy_speed_limit
#define CFGBYTE_U8_GRV_WTR_TAIL_CUT_MIN_STR_RATE    (*((uint8_t *)((uint32_t)fwCfgp + 0x292UL)))    //292 - grv_wtr_tail_cut_min_str_rate
#define CFGBYTE_U8_WTR_GRV_NORM_PERCENT     (*((uint8_t *)((uint32_t)fwCfgp + 0x293UL)))    //293 - wtr_grv_norm_percent
#define CFGBYTE_U8_WTR_GRV_TOL_HORI_VERT_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x294UL)))    //294 - wtr_grv_tol_hori_vert
#define CFGBYTE_U8_WTR_GRV_TOL_HORI_VERT_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x295UL)))    //295 - wtr_grv_tol_hori_vert
#define CFGBYTE_U8_WTR_GRV_TOL_DIAG_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x296UL)))    //296 - wtr_grv_tol_diag
#define CFGBYTE_U8_WTR_GRV_TOL_DIAG_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x297UL)))    //297 - wtr_grv_tol_diag
#define CFGBYTE_U8_TCH_FRM_GRV_TOL_HORI_VERT_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x298UL)))    //298 - tch_frm_grv_tol_hori_vert
#define CFGBYTE_U8_TCH_FRM_GRV_TOL_HORI_VERT_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x299UL)))    //299 - tch_frm_grv_tol_hori_vert
#define CFGBYTE_U8_TCH_FRM_GRV_TOL_DIAG_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x29AUL)))    //29A - tch_frm_grv_tol_diag
#define CFGBYTE_U8_TCH_FRM_GRV_TOL_DIAG_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x29BUL)))    //29B - tch_frm_grv_tol_diag
#define CFGBYTE_U8_GRV_TCH_FRM_CNT          (*((uint8_t *)((uint32_t)fwCfgp + 0x29CUL)))    //29C - grv_tch_frm_cnt
#define CFGBYTE_U8_DYNAMIC_ISLAND_MAX_STR_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x29DUL)))    //29D - dynamic_island_max_str_thres
#define CFGBYTE_U8_DYNAMIC_ISLAND_MAX_STR_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x29EUL)))    //29E - dynamic_island_max_str_thres
#define CFGBYTE_U8_DYNAMIC_ISLAND_MAX_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x29FUL)))    //29F - dynamic_island_max_thres
#define CFGBYTE_U8_DYNAMIC_ISLAND_MAX_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x2A0UL)))    //2A0 - dynamic_island_max_thres
#define CFGBYTE_U8_DYNAMIC_ISLAND_MIN_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x2A1UL)))    //2A1 - dynamic_island_min_thres
#define CFGBYTE_U8_DYNAMIC_SUM_STR_MAX_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x2A2UL)))    //2A2 - dynamic_sum_str_max_thres
#define CFGBYTE_U8_DYNAMIC_SUM_STR_MAX_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x2A3UL)))    //2A3 - dynamic_sum_str_max_thres
#define CFGBYTE_U8_DYNAMIC_SUM_STR_MIN_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x2A4UL)))    //2A4 - dynamic_sum_str_min_thres
#define CFGBYTE_U8_DYNAMIC_SUM_STR_MIN_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x2A5UL)))    //2A5 - dynamic_sum_str_min_thres
#define CFGBYTE_U8_FGR_ECCEN_GAME_MAX_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x2A6UL)))    //2A6 - fgr_eccen_game_max_thres
#define CFGBYTE_U8_FGR_ECCEN_GAME_MAX_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x2A7UL)))    //2A7 - fgr_eccen_game_max_thres
#define CFGBYTE_U8_FGR_ECCEN_GAME_MIN_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x2A8UL)))    //2A8 - fgr_eccen_game_min_thres
#define CFGBYTE_U8_FGR_ECCEN_GAME_MIN_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x2A9UL)))    //2A9 - fgr_eccen_game_min_thres
#define CFGBYTE_U8_PALM_DET_CFG_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x2AAUL)))    //2AA - palm_det_cfg
#define CFGBYTE_U8_PALM_DET_CFG_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x2ABUL)))    //2AB - palm_det_cfg
#define CFGBYTE_U8_PALM_MT_DET_THRES_0      (*((uint8_t *)((uint32_t)fwCfgp + 0x2ACUL)))    //2AC - palm_mt_det_thres
#define CFGBYTE_U8_PALM_MT_DET_THRES_1      (*((uint8_t *)((uint32_t)fwCfgp + 0x2ADUL)))    //2AD - palm_mt_det_thres
#define CFGBYTE_U8_PALM_MAX_FORCE_LEN       (*((uint8_t *)((uint32_t)fwCfgp + 0x2AEUL)))    //2AE - palm_max_force_len
#define CFGBYTE_U8_PALM_MIN_SENSE_LEN       (*((uint8_t *)((uint32_t)fwCfgp + 0x2AFUL)))    //2AF - palm_min_sense_len
#define CFGBYTE_U8_PALM_MIN_CONT_SENSE_AREA (*((uint8_t *)((uint32_t)fwCfgp + 0x2B0UL)))    //2B0 - palm_min_cont_sense_area
#define CFGBYTE_U8_PALM_SS_DIFF_SLP_TOL_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x2B1UL)))    //2B1 - palm_ss_diff_slp_tol
#define CFGBYTE_U8_PALM_SS_DIFF_SLP_TOL_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x2B2UL)))    //2B2 - palm_ss_diff_slp_tol
#define CFGBYTE_U8_PALM_DET_DBNC            (*((uint8_t *)((uint32_t)fwCfgp + 0x2B3UL)))    //2B3 - palm_det_dbnc
#define CFGBYTE_U8_LP_EDGE_FGR_THRES_HYST_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x2B4UL)))    //2B4 - lp_edge_fgr_thres_hyst
#define CFGBYTE_U8_LP_EDGE_FGR_THRES_HYST_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x2B5UL)))    //2B5 - lp_edge_fgr_thres_hyst
#define CFGBYTE_U8_LP_FGR_THRES_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x2B6UL)))    //2B6 - lp_fgr_thres
#define CFGBYTE_U8_LP_FGR_THRES_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x2B7UL)))    //2B7 - lp_fgr_thres
#define CFGBYTE_U8_LP_FGR_THRES_HYST        (*((uint8_t *)((uint32_t)fwCfgp + 0x2B8UL)))    //2B8 - lp_fgr_thres_hyst
#define CFGBYTE_U8_FGR_THRES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x2B9UL)))    //2B9 - fgr_thres
#define CFGBYTE_U8_FGR_THRES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x2BAUL)))    //2BA - fgr_thres
#define CFGBYTE_U8_FGR_THRES_HYST           (*((uint8_t *)((uint32_t)fwCfgp + 0x2BBUL)))    //2BB - fgr_thres_hyst
#define CFGBYTE_U8_NOISE_ADD_FGR_THRES      (*((uint8_t *)((uint32_t)fwCfgp + 0x2BCUL)))    //2BC - noise_add_fgr_thres
#define CFGBYTE_U8_FGR_THRES_NL2_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x2BDUL)))    //2BD - fgr_thres_nl2
#define CFGBYTE_U8_FGR_THRES_NL2_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x2BEUL)))    //2BE - fgr_thres_nl2
#define CFGBYTE_U8_FGR_MIN_AREA             (*((uint8_t *)((uint32_t)fwCfgp + 0x2BFUL)))    //2BF - fgr_min_area
#define CFGBYTE_U8_FGR_MAX_AREA             (*((uint8_t *)((uint32_t)fwCfgp + 0x2C0UL)))    //2C0 - fgr_max_area
#define CFGBYTE_U8_FGR_MAX_ISLAND_LEN       (*((uint8_t *)((uint32_t)fwCfgp + 0x2C1UL)))    //2C1 - fgr_max_island_len
#define CFGBYTE_U8_NOISE_ADD_MIN_FGR_AREA   (*((uint8_t *)((uint32_t)fwCfgp + 0x2C2UL)))    //2C2 - noise_add_min_fgr_area
#define CFGBYTE_U8_NOISE_ADD_MIN_FGR_AREA_CORNER    (*((uint8_t *)((uint32_t)fwCfgp + 0x2C3UL)))    //2C3 - noise_add_min_fgr_area_corner
#define CFGBYTE_U8_FGR_ECCEN_THRES_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x2C4UL)))    //2C4 - fgr_eccen_thres
#define CFGBYTE_U8_FGR_ECCEN_THRES_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x2C5UL)))    //2C5 - fgr_eccen_thres
#define CFGBYTE_U8_FGR_ECCEN_NOISE_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x2C6UL)))    //2C6 - fgr_eccen_noise_thres
#define CFGBYTE_U8_FGR_ECCEN_NOISE_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x2C7UL)))    //2C7 - fgr_eccen_noise_thres
#define CFGBYTE_U8_FGR_SEP_MAX_AREA         (*((uint8_t *)((uint32_t)fwCfgp + 0x2C8UL)))    //2C8 - fgr_sep_max_area
#define CFGBYTE_U8_FGR_PEAK_ISLAND_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x2C9UL)))    //2C9 - fgr_peak_island_thres
#define CFGBYTE_U8_FGR_PEAK_ISLAND_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x2CAUL)))    //2CA - fgr_peak_island_thres
#define CFGBYTE_U8_FGR_PEAK_EDGE_ISLAND_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x2CBUL)))    //2CB - fgr_peak_edge_island_thres
#define CFGBYTE_U8_FGR_PEAK_EDGE_ISLAND_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x2CCUL)))    //2CC - fgr_peak_edge_island_thres
#define CFGBYTE_U8_GLV_PEAK_ISLAND_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x2CDUL)))    //2CD - glv_peak_island_thres
#define CFGBYTE_U8_GLV_PEAK_ISLAND_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x2CEUL)))    //2CE - glv_peak_island_thres
#define CFGBYTE_U8_LP_EDGE_FGR_THRES_0      (*((uint8_t *)((uint32_t)fwCfgp + 0x2CFUL)))    //2CF - lp_edge_fgr_thres
#define CFGBYTE_U8_LP_EDGE_FGR_THRES_1      (*((uint8_t *)((uint32_t)fwCfgp + 0x2D0UL)))    //2D0 - lp_edge_fgr_thres
#define CFGBYTE_U8_STY_CFG_0                (*((uint8_t *)((uint32_t)fwCfgp + 0x2D2UL)))    //2D2 - sty_cfg
#define CFGBYTE_U8_STY_CFG_1                (*((uint8_t *)((uint32_t)fwCfgp + 0x2D3UL)))    //2D3 - sty_cfg
#define CFGBYTE_U8_STY_THRES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x2D4UL)))    //2D4 - sty_thres
#define CFGBYTE_U8_STY_THRES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x2D5UL)))    //2D5 - sty_thres
#define CFGBYTE_U8_STY_THRES_HYST           (*((uint8_t *)((uint32_t)fwCfgp + 0x2D6UL)))    //2D6 - sty_thres_hyst
#define CFGBYTE_U8_NOISE_ADD_STY_THRES      (*((uint8_t *)((uint32_t)fwCfgp + 0x2D7UL)))    //2D7 - noise_add_sty_thres
#define CFGBYTE_U8_STY_MAX_SUM_STR_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x2D8UL)))    //2D8 - sty_max_sum_str
#define CFGBYTE_U8_STY_MAX_SUM_STR_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x2D9UL)))    //2D9 - sty_max_sum_str
#define CFGBYTE_U8_STY_MAX_TCH_AREA_NL1     (*((uint8_t *)((uint32_t)fwCfgp + 0x2DAUL)))    //2DA - sty_max_tch_area_nl1
#define CFGBYTE_U8_STY_MIN_AREA             (*((uint8_t *)((uint32_t)fwCfgp + 0x2DBUL)))    //2DB - sty_min_area
#define CFGBYTE_U8_NOISE_ADD_MIN_STY_AREA   (*((uint8_t *)((uint32_t)fwCfgp + 0x2DCUL)))    //2DC - noise_add_min_sty_area
#define CFGBYTE_U8_STY_MAX_AREA             (*((uint8_t *)((uint32_t)fwCfgp + 0x2DDUL)))    //2DD - sty_max_area
#define CFGBYTE_U8_STY_MAX_EDGE_AREA        (*((uint8_t *)((uint32_t)fwCfgp + 0x2DEUL)))    //2DE - sty_max_edge_area
#define CFGBYTE_U8_RMF_CEN_WGH              (*((uint8_t *)((uint32_t)fwCfgp + 0x2DFUL)))    //2DF - rmf_cen_wgh
#define CFGBYTE_U8_RMF_CEN_MIN_STR_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x2E0UL)))    //2E0 - rmf_cen_min_str
#define CFGBYTE_U8_RMF_CEN_MIN_STR_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x2E1UL)))    //2E1 - rmf_cen_min_str
#define CFGBYTE_U8_RMF_CEN_MAX_STR_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x2E2UL)))    //2E2 - rmf_cen_max_str
#define CFGBYTE_U8_RMF_CEN_MAX_STR_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x2E3UL)))    //2E3 - rmf_cen_max_str
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_GAME_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x2E4UL)))    //2E4 - mt_axis_mrg_max_dist_game_thres
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_GAME_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x2E5UL)))    //2E5 - mt_axis_mrg_max_dist_game_thres
#define CFGBYTE_U8_GLOVE_CFG_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x2E6UL)))    //2E6 - glove_cfg
#define CFGBYTE_U8_GLOVE_CFG_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x2E7UL)))    //2E7 - glove_cfg
#define CFGBYTE_U8_GLV_THRES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x2E8UL)))    //2E8 - glv_thres
#define CFGBYTE_U8_GLV_THRES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x2E9UL)))    //2E9 - glv_thres
#define CFGBYTE_U8_GLV_THRES_HYST           (*((uint8_t *)((uint32_t)fwCfgp + 0x2EAUL)))    //2EA - glv_thres_hyst
#define CFGBYTE_U8_NOISE_ADD_GLV_THRES      (*((uint8_t *)((uint32_t)fwCfgp + 0x2EBUL)))    //2EB - noise_add_glv_thres
#define CFGBYTE_U8_GLV_MIN_AREA_GLV_MODE    (*((uint8_t *)((uint32_t)fwCfgp + 0x2ECUL)))    //2EC - glv_min_area_glv_mode
#define CFGBYTE_U8_GLV_MIN_AREA_TCH_MODE    (*((uint8_t *)((uint32_t)fwCfgp + 0x2EDUL)))    //2ED - glv_min_area_tch_mode
#define CFGBYTE_U8_GLV_EDGE_MIN_AREA_GLV_MODE   (*((uint8_t *)((uint32_t)fwCfgp + 0x2EEUL)))    //2EE - glv_edge_min_area_glv_mode
#define CFGBYTE_U8_GLV_EDGE_MIN_AREA_TCH_MODE   (*((uint8_t *)((uint32_t)fwCfgp + 0x2EFUL)))    //2EF - glv_edge_min_area_tch_mode
#define CFGBYTE_U8_NOISE_ADD_MIN_GLV_AREA   (*((uint8_t *)((uint32_t)fwCfgp + 0x2F0UL)))    //2F0 - noise_add_min_glv_area
#define CFGBYTE_U8_GLV_TCH_IN_OUT_DLY       (*((uint8_t *)((uint32_t)fwCfgp + 0x2F1UL)))    //2F1 - glv_tch_in_out_dly
#define CFGBYTE_U8_GLV_IN_DLY_GLV_MODE      (*((uint8_t *)((uint32_t)fwCfgp + 0x2F2UL)))    //2F2 - glv_in_dly_glv_mode
#define CFGBYTE_U8_GLV_IN_DLY_GLV_MODE_NOISY    (*((uint8_t *)((uint32_t)fwCfgp + 0x2F3UL)))    //2F3 - glv_in_dly_glv_mode_noisy
#define CFGBYTE_U8_GLV_TCH_GROUP_PEAK_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x2F4UL)))    //2F4 - glv_tch_group_peak_thres
#define CFGBYTE_U8_GLV_TCH_GROUP_PEAK_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x2F5UL)))    //2F5 - glv_tch_group_peak_thres
#define CFGBYTE_U8_GLV_TCH_GROUP_PEAK_THRES_HYST    (*((uint8_t *)((uint32_t)fwCfgp + 0x2F6UL)))    //2F6 - glv_tch_group_peak_thres_hyst
#define CFGBYTE_U8_GLV_TCH_AREA_CNT         (*((uint8_t *)((uint32_t)fwCfgp + 0x2F7UL)))    //2F7 - glv_tch_area_cnt
#define CFGBYTE_U8_GLV_TCH_MAX_PEAK_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x2F8UL)))    //2F8 - glv_tch_max_peak_thres
#define CFGBYTE_U8_GLV_TCH_MAX_PEAK_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x2F9UL)))    //2F9 - glv_tch_max_peak_thres
#define CFGBYTE_U8_GLV_MODE_FGR_THRES_HYST  (*((uint8_t *)((uint32_t)fwCfgp + 0x2FAUL)))    //2FA - glv_mode_fgr_thres_hyst
#define CFGBYTE_U8_GLV_TCH_AREA_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x2FBUL)))    //2FB - glv_tch_area_thres
#define CFGBYTE_U8_GLV_TCH_AREA_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x2FCUL)))    //2FC - glv_tch_area_thres
#define CFGBYTE_U8_GLV_MAX_TCH_AREA         (*((uint8_t *)((uint32_t)fwCfgp + 0x2FDUL)))    //2FD - glv_max_tch_area
#define CFGBYTE_U8_FGR_TO_GLV_DBNCE_CNT     (*((uint8_t *)((uint32_t)fwCfgp + 0x2FEUL)))    //2FE - fgr_to_glv_dbnce_cnt
#define CFGBYTE_U8_GLV_CMM_VALID_CH_HI_THRES    (*((uint8_t *)((uint32_t)fwCfgp + 0x2FFUL)))    //2FF - glv_cmm_valid_ch_hi_thres
#define CFGBYTE_U8_GLV_CMM_VALID_CH_LOW_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x300UL)))    //300 - glv_cmm_valid_ch_low_thres
#define CFGBYTE_U8_GLV_MODE_FGR_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x301UL)))    //301 - glv_mode_fgr_thres
#define CFGBYTE_U8_GLV_MODE_FGR_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x302UL)))    //302 - glv_mode_fgr_thres
#define CFGBYTE_U8_GLV_TCH_AREA_CNT_HYST    (*((uint8_t *)((uint32_t)fwCfgp + 0x303UL)))    //303 - glv_tch_area_cnt_hyst
#define CFGBYTE_U8_GLV_MS_AVG_CMM_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x304UL)))    //304 - glv_ms_avg_cmm_thres
#define CFGBYTE_U8_GLV_MS_AVG_CMM_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x305UL)))    //305 - glv_ms_avg_cmm_thres
#define CFGBYTE_U8_GLV_MODE_BLK_STR_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x306UL)))    //306 - glv_mode_blk_str_thres
#define CFGBYTE_U8_GLV_MODE_BLK_STR_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x307UL)))    //307 - glv_mode_blk_str_thres
#define CFGBYTE_U8_GLV_MODE_BLK_TIME_MS     (*((uint8_t *)((uint32_t)fwCfgp + 0x308UL)))    //308 - glv_mode_blk_time_ms
#define CFGBYTE_U8_GLV_DIS_SELF_FORCE_BASELINE_P2P_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x309UL)))    //309 - glv_dis_self_force_baseline_p2p
#define CFGBYTE_U8_GLV_DIS_SELF_FORCE_BASELINE_P2P_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x30AUL)))    //30A - glv_dis_self_force_baseline_p2p
#define CFGBYTE_U8_COOR_IIR_TOL             (*((uint8_t *)((uint32_t)fwCfgp + 0x30BUL)))    //30B - coor_iir_tol
#define CFGBYTE_U8_TCH_POST_PROCESS_CFG_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x30CUL)))    //30C - tch_post_process_cfg
#define CFGBYTE_U8_TCH_POST_PROCESS_CFG_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x30DUL)))    //30D - tch_post_process_cfg
#define CFGBYTE_U8_MIN_TRK_RAD_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x30EUL)))    //30E - min_trk_rad
#define CFGBYTE_U8_MIN_TRK_RAD_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x30FUL)))    //30F - min_trk_rad
#define CFGBYTE_U8_MIN_TRK_RAD_AFTR_FRM_DROP_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x310UL)))    //310 - min_trk_rad_aftr_frm_drop
#define CFGBYTE_U8_MIN_TRK_RAD_AFTR_FRM_DROP_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x311UL)))    //311 - min_trk_rad_aftr_frm_drop
#define CFGBYTE_U8_NOISE_MIN_TRK_RAD_0      (*((uint8_t *)((uint32_t)fwCfgp + 0x312UL)))    //312 - noise_min_trk_rad
#define CFGBYTE_U8_NOISE_MIN_TRK_RAD_1      (*((uint8_t *)((uint32_t)fwCfgp + 0x313UL)))    //313 - noise_min_trk_rad
#define CFGBYTE_U8_NOISE_ADD_MIN_TRK_RAD_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x314UL)))    //314 - noise_add_min_trk_rad
#define CFGBYTE_U8_NOISE_ADD_MIN_TRK_RAD_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x315UL)))    //315 - noise_add_min_trk_rad
#define CFGBYTE_U8_NOISE_TRK_SPEED_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x316UL)))    //316 - noise_trk_speed_thres
#define CFGBYTE_U8_NOISE_TRK_SPEED_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x317UL)))    //317 - noise_trk_speed_thres
#define CFGBYTE_U8_TRK_RAD_MUL              (*((uint8_t *)((uint32_t)fwCfgp + 0x318UL)))    //318 - trk_rad_mul
#define CFGBYTE_U8_MIN_TRK_RAD_AFTR_TOUCH_ON_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x319UL)))    //319 - min_trk_rad_aftr_touch_on
#define CFGBYTE_U8_MIN_TRK_RAD_AFTR_TOUCH_ON_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x31AUL)))    //31A - min_trk_rad_aftr_touch_on
#define CFGBYTE_U8_TRK_PREDICT_FAST_TCH_SPEED   (*((uint8_t *)((uint32_t)fwCfgp + 0x31BUL)))    //31B - trk_predict_fast_tch_speed
#define CFGBYTE_U8_TRK_RAD_FAST_SWIPE_MUL_12    (*((uint8_t *)((uint32_t)fwCfgp + 0x31CUL)))    //31C - trk_rad_fast_swipe_mul_12
#define CFGBYTE_U8_TRK_RAD_FAST_SWIPE_MUL_23    (*((uint8_t *)((uint32_t)fwCfgp + 0x31DUL)))    //31D - trk_rad_fast_swipe_mul_23
#define CFGBYTE_U8_TRK_FAST_SWIPE_SPEED     (*((uint8_t *)((uint32_t)fwCfgp + 0x31EUL)))    //31E - trk_fast_swipe_speed
#define CFGBYTE_U8_TRK_RAD_MUL_FAST_SWIPE   (*((uint8_t *)((uint32_t)fwCfgp + 0x31FUL)))    //31F - trk_rad_mul_fast_swipe
#define CFGBYTE_U8_TRK_FAST_SWIPE_DBNC_OUT  (*((uint8_t *)((uint32_t)fwCfgp + 0x320UL)))    //320 - trk_fast_swipe_dbnc_out
#define CFGBYTE_U8_TCH_FAST_SWIPE_MIN_DIST_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x321UL)))    //321 - tch_fast_swipe_min_dist
#define CFGBYTE_U8_TCH_FAST_SWIPE_MIN_DIST_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x322UL)))    //322 - tch_fast_swipe_min_dist
#define CFGBYTE_U8_TCH_FAST_SWIPE_MIN_DIST_NOISY_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x323UL)))    //323 - tch_fast_swipe_min_dist_noisy
#define CFGBYTE_U8_TCH_FAST_SWIPE_MIN_DIST_NOISY_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x324UL)))    //324 - tch_fast_swipe_min_dist_noisy
#define CFGBYTE_U8_TCH_FAST_SWIPE_SPEED_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x325UL)))    //325 - tch_fast_swipe_speed
#define CFGBYTE_U8_TCH_FAST_SWIPE_SPEED_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x326UL)))    //326 - tch_fast_swipe_speed
#define CFGBYTE_U8_TCH_FAST_SWIPE_NOISY_SPEED_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x327UL)))    //327 - tch_fast_swipe_noisy_speed
#define CFGBYTE_U8_TCH_FAST_SWIPE_NOISY_SPEED_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x328UL)))    //328 - tch_fast_swipe_noisy_speed
#define CFGBYTE_U8_TCH_OUT_MRG_CHK_DBNC     (*((uint8_t *)((uint32_t)fwCfgp + 0x329UL)))    //329 - tch_out_mrg_chk_dbnc
#define CFGBYTE_U8_TCH_MRG_DIST_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x32AUL)))    //32A - tch_mrg_dist
#define CFGBYTE_U8_TCH_MRG_DIST_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x32BUL)))    //32B - tch_mrg_dist
#define CFGBYTE_U8_TCH_MRG_DIST_HYST_0      (*((uint8_t *)((uint32_t)fwCfgp + 0x32CUL)))    //32C - tch_mrg_dist_hyst
#define CFGBYTE_U8_TCH_MRG_DIST_HYST_1      (*((uint8_t *)((uint32_t)fwCfgp + 0x32DUL)))    //32D - tch_mrg_dist_hyst
#define CFGBYTE_U8_TCH_DET_FRM_CNT_MRG_DIST_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x32EUL)))    //32E - tch_det_frm_cnt_mrg_dist
#define CFGBYTE_U8_TCH_DET_FRM_CNT_MRG_DIST_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x32FUL)))    //32F - tch_det_frm_cnt_mrg_dist
#define CFGBYTE_U8_TCH_MRG_DIST_DET_FRM_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0x330UL)))    //330 - tch_mrg_dist_det_frm_cnt
#define CFGBYTE_U8_TCH_CURFIT_OTP_SPL_IDX   (*((uint8_t *)((uint32_t)fwCfgp + 0x331UL)))    //331 - tch_curfit_otp_spl_idx
#define CFGBYTE_U8_TCH_CURFIT_OTP_SPL_IDX_NOISY (*((uint8_t *)((uint32_t)fwCfgp + 0x332UL)))    //332 - tch_curfit_otp_spl_idx_noisy
#define CFGBYTE_U8_TCH_IN_DLY               (*((uint8_t *)((uint32_t)fwCfgp + 0x333UL)))    //333 - tch_in_dly
#define CFGBYTE_U8_TCH_IN_DLY_NOISY         (*((uint8_t *)((uint32_t)fwCfgp + 0x334UL)))    //334 - tch_in_dly_noisy
#define CFGBYTE_U8_TCH_IN_ADD_DLY_LNG_SHAPE (*((uint8_t *)((uint32_t)fwCfgp + 0x335UL)))    //335 - tch_in_add_dly_lng_shape
#define CFGBYTE_U8_TCH_IN_ADD_DLY_EDGE      (*((uint8_t *)((uint32_t)fwCfgp + 0x336UL)))    //336 - tch_in_add_dly_edge
#define CFGBYTE_U8_HIDDEN_TCH_IN_DLY        (*((uint8_t *)((uint32_t)fwCfgp + 0x337UL)))    //337 - hidden_tch_in_dly
#define CFGBYTE_U8_TCH_OUT_DLY              (*((uint8_t *)((uint32_t)fwCfgp + 0x338UL)))    //338 - tch_out_dly
#define CFGBYTE_U8_TCH_OUT_DLY_LNG_TAP      (*((uint8_t *)((uint32_t)fwCfgp + 0x339UL)))    //339 - tch_out_dly_lng_tap
#define CFGBYTE_U8_HIDDEN_TCH_OUT_DLY       (*((uint8_t *)((uint32_t)fwCfgp + 0x33AUL)))    //33A - hidden_tch_out_dly
#define CFGBYTE_U8_LVC_VEL_IIR_WGH          (*((uint8_t *)((uint32_t)fwCfgp + 0x33BUL)))    //33B - lvc_vel_iir_wgh
#define CFGBYTE_U8_LVC_MAX_CALC_RPT_TIME_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x33CUL)))    //33C - lvc_max_calc_rpt_time
#define CFGBYTE_U8_LVC_MAX_CALC_RPT_TIME_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x33DUL)))    //33D - lvc_max_calc_rpt_time
#define CFGBYTE_U8_LVC_VEL_SCALE_PER        (*((uint8_t *)((uint32_t)fwCfgp + 0x33EUL)))    //33E - lvc_vel_scale_per
#define CFGBYTE_U8_BTW_CFG                  (*((uint8_t *)((uint32_t)fwCfgp + 0x33FUL)))    //33F - btw_cfg
#define CFGBYTE_U8_BTW_CUTOFF_IDX           (*((uint8_t *)((uint32_t)fwCfgp + 0x340UL)))    //340 - btw_cutoff_idx
#define CFGBYTE_U8_BTW_SPEED_THRES_HI_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x341UL)))    //341 - btw_speed_thres_hi
#define CFGBYTE_U8_BTW_SPEED_THRES_HI_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x342UL)))    //342 - btw_speed_thres_hi
#define CFGBYTE_U8_BTW_SPEED_THRES_LO_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x343UL)))    //343 - btw_speed_thres_lo
#define CFGBYTE_U8_BTW_SPEED_THRES_LO_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x344UL)))    //344 - btw_speed_thres_lo
#define CFGBYTE_U8_BTW_MIN_CUTOFF_IDX       (*((uint8_t *)((uint32_t)fwCfgp + 0x345UL)))    //345 - btw_min_cutoff_idx
#define CFGBYTE_U8_BTW_MAX_CUTOFF_IDX       (*((uint8_t *)((uint32_t)fwCfgp + 0x346UL)))    //346 - btw_max_cutoff_idx
#define CFGBYTE_U8_BTW_MULTI_TCH_MAX_CUTOFF_IDX (*((uint8_t *)((uint32_t)fwCfgp + 0x347UL)))    //347 - btw_multi_tch_max_cutoff_idx
#define CFGBYTE_U8_BTW_MAX_CUTOFF_IDX_NOISE (*((uint8_t *)((uint32_t)fwCfgp + 0x348UL)))    //348 - btw_max_cutoff_idx_noise
#define CFGBYTE_U8_KM_EZ_SQ_SCALED_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x349UL)))    //349 - km_ez_sq_scaled
#define CFGBYTE_U8_KM_EZ_SQ_SCALED_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x34AUL)))    //34A - km_ez_sq_scaled
#define CFGBYTE_U8_KM_EZ_SQ_SCALED_2        (*((uint8_t *)((uint32_t)fwCfgp + 0x34BUL)))    //34B - km_ez_sq_scaled
#define CFGBYTE_U8_KM_EZ_SQ_SCALED_3        (*((uint8_t *)((uint32_t)fwCfgp + 0x34CUL)))    //34C - km_ez_sq_scaled
#define CFGBYTE_U8_KM_EX_SQ_0               (*((uint8_t *)((uint32_t)fwCfgp + 0x34DUL)))    //34D - km_ex_sq
#define CFGBYTE_U8_KM_EX_SQ_1               (*((uint8_t *)((uint32_t)fwCfgp + 0x34EUL)))    //34E - km_ex_sq
#define CFGBYTE_U8_KM_ACC_FLTR_W0           (*((uint8_t *)((uint32_t)fwCfgp + 0x34FUL)))    //34F - km_acc_fltr_w0
#define CFGBYTE_U8_TCH_MTOL_FTAP_CNT        (*((uint8_t *)((uint32_t)fwCfgp + 0x350UL)))    //350 - tch_mtol_ftap_cnt
#define CFGBYTE_U8_TCH_MTOL_FTAP_XY_TOL2    (*((uint8_t *)((uint32_t)fwCfgp + 0x351UL)))    //351 - tch_mtol_ftap_xy_tol2
#define CFGBYTE_U8_TCH_MTOL_FTAP_CNT_NOISE  (*((uint8_t *)((uint32_t)fwCfgp + 0x352UL)))    //352 - tch_mtol_ftap_cnt_noise
#define CFGBYTE_U8_TCH_MTOL_FTAP_XY_TOL2_NOISE  (*((uint8_t *)((uint32_t)fwCfgp + 0x353UL)))    //353 - tch_mtol_ftap_xy_tol2_noise
#define CFGBYTE_U8_TCH_MTOL_XY_TOL1         (*((uint8_t *)((uint32_t)fwCfgp + 0x354UL)))    //354 - tch_mtol_xy_tol1
#define CFGBYTE_U8_TCH_MTOL_XY_TOL2         (*((uint8_t *)((uint32_t)fwCfgp + 0x355UL)))    //355 - tch_mtol_xy_tol2
#define CFGBYTE_U8_TCH_MTOL_WGH             (*((uint8_t *)((uint32_t)fwCfgp + 0x356UL)))    //356 - tch_mtol_wgh
#define CFGBYTE_U8_TCH_MTOL_XY_TOL1_NOISE   (*((uint8_t *)((uint32_t)fwCfgp + 0x357UL)))    //357 - tch_mtol_xy_tol1_noise
#define CFGBYTE_U8_TCH_MTOL_XY_TOL2_NOISE   (*((uint8_t *)((uint32_t)fwCfgp + 0x358UL)))    //358 - tch_mtol_xy_tol2_noise
#define CFGBYTE_U8_TCH_MTOL_WGH_NOISE       (*((uint8_t *)((uint32_t)fwCfgp + 0x359UL)))    //359 - tch_mtol_wgh_noise
#define CFGBYTE_U8_MRG_TCH_MTOL_XY_TOL1     (*((uint8_t *)((uint32_t)fwCfgp + 0x35AUL)))    //35A - mrg_tch_mtol_xy_tol1
#define CFGBYTE_U8_MRG_TCH_MTOL_XY_TOL2     (*((uint8_t *)((uint32_t)fwCfgp + 0x35BUL)))    //35B - mrg_tch_mtol_xy_tol2
#define CFGBYTE_U8_MRG_TCH_MTOL_WGH         (*((uint8_t *)((uint32_t)fwCfgp + 0x35CUL)))    //35C - mrg_tch_mtol_wgh
#define CFGBYTE_U8_MRG_TCH_MTOL_XY_TOL1_NOISE   (*((uint8_t *)((uint32_t)fwCfgp + 0x35DUL)))    //35D - mrg_tch_mtol_xy_tol1_noise
#define CFGBYTE_U8_MRG_TCH_MTOL_XY_TOL2_NOISE   (*((uint8_t *)((uint32_t)fwCfgp + 0x35EUL)))    //35E - mrg_tch_mtol_xy_tol2_noise
#define CFGBYTE_U8_MRG_TCH_MTOL_WGH_NOISE   (*((uint8_t *)((uint32_t)fwCfgp + 0x35FUL)))    //35F - mrg_tch_mtol_wgh_noise
#define CFGBYTE_U8_TCH_MTOL_REF_UPDATE_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x360UL)))    //360 - tch_mtol_ref_update_cnt
#define CFGBYTE_U8_TCH_MTOL_REF_UPDATE_CNT_NOISE    (*((uint8_t *)((uint32_t)fwCfgp + 0x361UL)))    //361 - tch_mtol_ref_update_cnt_noise
#define CFGBYTE_U8_GLV_XY_WGH_EDGE          (*((uint8_t *)((uint32_t)fwCfgp + 0x362UL)))    //362 - glv_xy_wgh_edge
#define CFGBYTE_U8_TCH_XY_WGH_EDGE          (*((uint8_t *)((uint32_t)fwCfgp + 0x363UL)))    //363 - tch_xy_wgh_edge
#define CFGBYTE_U8_TCH_XY_WGH_NOISY_EDGE    (*((uint8_t *)((uint32_t)fwCfgp + 0x364UL)))    //364 - tch_xy_wgh_noisy_edge
#define CFGBYTE_U8_TCH_XY_WGH_NOISY         (*((uint8_t *)((uint32_t)fwCfgp + 0x365UL)))    //365 - tch_xy_wgh_noisy
#define CFGBYTE_U8_TCH_XY_WGH_NOISY_MULTIF  (*((uint8_t *)((uint32_t)fwCfgp + 0x366UL)))    //366 - tch_xy_wgh_noisy_multif
#define CFGBYTE_U8_MIN_TCH_XY_SPEED_NOISY_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x367UL)))    //367 - min_tch_xy_speed_noisy
#define CFGBYTE_U8_MIN_TCH_XY_SPEED_NOISY_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x368UL)))    //368 - min_tch_xy_speed_noisy
#define CFGBYTE_U8_MAX_TCH_XY_SPEED_NOISY_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x369UL)))    //369 - max_tch_xy_speed_noisy
#define CFGBYTE_U8_MAX_TCH_XY_SPEED_NOISY_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x36AUL)))    //36A - max_tch_xy_speed_noisy
#define CFGBYTE_U8_WTR_XY_WGH               (*((uint8_t *)((uint32_t)fwCfgp + 0x36BUL)))    //36B - wtr_xy_wgh
#define CFGBYTE_U8_WTR_XY_WGH_MULTIF        (*((uint8_t *)((uint32_t)fwCfgp + 0x36CUL)))    //36C - wtr_xy_wgh_multif
#define CFGBYTE_U8_MIN_WTR_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x36DUL)))    //36D - min_wtr_xy_speed
#define CFGBYTE_U8_MIN_WTR_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x36EUL)))    //36E - min_wtr_xy_speed
#define CFGBYTE_U8_MAX_WTR_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x36FUL)))    //36F - max_wtr_xy_speed
#define CFGBYTE_U8_MAX_WTR_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x370UL)))    //370 - max_wtr_xy_speed
#define CFGBYTE_U8_FLT_XY_WGH               (*((uint8_t *)((uint32_t)fwCfgp + 0x371UL)))    //371 - flt_xy_wgh
#define CFGBYTE_U8_FLT_XY_WGH_MULTF         (*((uint8_t *)((uint32_t)fwCfgp + 0x372UL)))    //372 - flt_xy_wgh_multf
#define CFGBYTE_U8_MIN_FLT_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x373UL)))    //373 - min_flt_xy_speed
#define CFGBYTE_U8_MIN_FLT_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x374UL)))    //374 - min_flt_xy_speed
#define CFGBYTE_U8_MAX_FLT_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x375UL)))    //375 - max_flt_xy_speed
#define CFGBYTE_U8_MAX_FLT_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x376UL)))    //376 - max_flt_xy_speed
#define CFGBYTE_U8_FGR_XY_WGH               (*((uint8_t *)((uint32_t)fwCfgp + 0x377UL)))    //377 - fgr_xy_wgh
#define CFGBYTE_U8_FGR_XY_WGH_MULTIF        (*((uint8_t *)((uint32_t)fwCfgp + 0x378UL)))    //378 - fgr_xy_wgh_multif
#define CFGBYTE_U8_STY_XY_WGH               (*((uint8_t *)((uint32_t)fwCfgp + 0x379UL)))    //379 - sty_xy_wgh
#define CFGBYTE_U8_GLV_XY_WGH               (*((uint8_t *)((uint32_t)fwCfgp + 0x37AUL)))    //37A - glv_xy_wgh
#define CFGBYTE_U8_TCH_WGH0                 (*((uint8_t *)((uint32_t)fwCfgp + 0x37BUL)))    //37B - tch_wgh0
#define CFGBYTE_U8_TCH_WGH1                 (*((uint8_t *)((uint32_t)fwCfgp + 0x37CUL)))    //37C - tch_wgh1
#define CFGBYTE_U8_MIN_TCH_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x37DUL)))    //37D - min_tch_xy_speed
#define CFGBYTE_U8_MIN_TCH_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x37EUL)))    //37E - min_tch_xy_speed
#define CFGBYTE_U8_MAX_TCH_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x37FUL)))    //37F - max_tch_xy_speed
#define CFGBYTE_U8_MAX_TCH_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x380UL)))    //380 - max_tch_xy_speed
#define CFGBYTE_U8_MIN_GLV_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x381UL)))    //381 - min_glv_xy_speed
#define CFGBYTE_U8_MIN_GLV_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x382UL)))    //382 - min_glv_xy_speed
#define CFGBYTE_U8_MAX_GLV_XY_SPEED_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x383UL)))    //383 - max_glv_xy_speed
#define CFGBYTE_U8_MAX_GLV_XY_SPEED_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x384UL)))    //384 - max_glv_xy_speed
#define CFGBYTE_U8_TCH_IIR_EN               (*((uint8_t *)((uint32_t)fwCfgp + 0x385UL)))    //385 - tch_iir_en
#define CFGBYTE_U8_TCH_IIR_STEP             (*((uint8_t *)((uint32_t)fwCfgp + 0x386UL)))    //386 - tch_iir_step
#define CFGBYTE_U8_FIRST_SLP_LIMIT_SPEED    (*((uint8_t *)((uint32_t)fwCfgp + 0x387UL)))    //387 - first_slp_limit_speed
#define CFGBYTE_U8_SPEED_IIR_WGH            (*((uint8_t *)((uint32_t)fwCfgp + 0x388UL)))    //388 - speed_iir_wgh
#define CFGBYTE_U8_NOISE_TCH_BLK_AVG_PERC   (*((uint8_t *)((uint32_t)fwCfgp + 0x389UL)))    //389 - noise_tch_blk_avg_perc
#define CFGBYTE_U8_NOISE_TCH_BLK_MIN_PEAK_STR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x38AUL)))    //38A - noise_tch_blk_min_peak_str
#define CFGBYTE_U8_NOISE_TCH_BLK_MIN_PEAK_STR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x38BUL)))    //38B - noise_tch_blk_min_peak_str
#define CFGBYTE_U8_TCH_IN_COOR_RPT_X_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0x38CUL)))    //38C - tch_in_coor_rpt_x_thres
#define CFGBYTE_U8_TCH_IN_COOR_RPT_Y_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0x38DUL)))    //38D - tch_in_coor_rpt_y_thres
#define CFGBYTE_U8_TCH_MRG_DIST_NOISY_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x38EUL)))    //38E - tch_mrg_dist_noisy
#define CFGBYTE_U8_TCH_MRG_DIST_NOISY_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x38FUL)))    //38F - tch_mrg_dist_noisy
#define CFGBYTE_U8_TCH_MRG_DIST_HYST_NOISY_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x390UL)))    //390 - tch_mrg_dist_hyst_noisy
#define CFGBYTE_U8_TCH_MRG_DIST_HYST_NOISY_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x391UL)))    //391 - tch_mrg_dist_hyst_noisy
#define CFGBYTE_U8_COOR_IIR_EDGE_X_TOP_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x392UL)))    //392 - coor_iir_edge_x_top_width
#define CFGBYTE_U8_COOR_IIR_EDGE_X_TOP_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x393UL)))    //393 - coor_iir_edge_x_top_width
#define CFGBYTE_U8_COOR_IIR_EDGE_X_BTM_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x394UL)))    //394 - coor_iir_edge_x_btm_width
#define CFGBYTE_U8_COOR_IIR_EDGE_X_BTM_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x395UL)))    //395 - coor_iir_edge_x_btm_width
#define CFGBYTE_U8_COOR_IIR_EDGE_Y_TOP_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x396UL)))    //396 - coor_iir_edge_y_top_width
#define CFGBYTE_U8_COOR_IIR_EDGE_Y_TOP_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x397UL)))    //397 - coor_iir_edge_y_top_width
#define CFGBYTE_U8_COOR_IIR_EDGE_Y_BTM_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x398UL)))    //398 - coor_iir_edge_y_btm_width
#define CFGBYTE_U8_COOR_IIR_EDGE_Y_BTM_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x399UL)))    //399 - coor_iir_edge_y_btm_width
#define CFGBYTE_U8_CHK_BNC_BACK_EN          (*((uint8_t *)((uint32_t)fwCfgp + 0x39AUL)))    //39A - chk_bnc_back_en
#define CFGBYTE_U8_BNC_BACK_ADD_SPEED_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x39BUL)))    //39B - bnc_back_add_speed
#define CFGBYTE_U8_BNC_BACK_ADD_SPEED_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x39CUL)))    //39C - bnc_back_add_speed
#define CFGBYTE_U8_BORDER_LIMIT_AREA_0      (*((uint8_t *)((uint32_t)fwCfgp + 0x39DUL)))    //39D - border_limit_area
#define CFGBYTE_U8_BORDER_LIMIT_AREA_1      (*((uint8_t *)((uint32_t)fwCfgp + 0x39EUL)))    //39E - border_limit_area
#define CFGBYTE_U8_BORDER_LIMIT_AREA_2      (*((uint8_t *)((uint32_t)fwCfgp + 0x39FUL)))    //39F - border_limit_area
#define CFGBYTE_U8_BORDER_LIMIT_AREA_3      (*((uint8_t *)((uint32_t)fwCfgp + 0x3A0UL)))    //3A0 - border_limit_area
#define CFGBYTE_U8_MT_AXIS_CFG              (*((uint8_t *)((uint32_t)fwCfgp + 0x3A1UL)))    //3A1 - mt_axis_cfg
#define CFGBYTE_U8_MT_AXIS_AVG_ROW_THRES    (*((uint8_t *)((uint32_t)fwCfgp + 0x3A2UL)))    //3A2 - mt_axis_avg_row_thres
#define CFGBYTE_U8_MT_AXIS_AVG_COL_THRES    (*((uint8_t *)((uint32_t)fwCfgp + 0x3A3UL)))    //3A3 - mt_axis_avg_col_thres
#define CFGBYTE_U8_MT_AXIS_AVG_IIR_WGH      (*((uint8_t *)((uint32_t)fwCfgp + 0x3A4UL)))    //3A4 - mt_axis_avg_iir_wgh
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_NODE_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0x3A5UL)))    //3A5 - mt_axis_mrg_max_node_cnt
#define CFGBYTE_U8_MT_AXIS_GRV_THRES_0      (*((uint8_t *)((uint32_t)fwCfgp + 0x3A6UL)))    //3A6 - mt_axis_grv_thres
#define CFGBYTE_U8_MT_AXIS_GRV_THRES_1      (*((uint8_t *)((uint32_t)fwCfgp + 0x3A7UL)))    //3A7 - mt_axis_grv_thres
#define CFGBYTE_U8_MT_AXIS_SUM_MAX_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x3A8UL)))    //3A8 - mt_axis_sum_max_thres
#define CFGBYTE_U8_MT_AXIS_SUM_MAX_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x3A9UL)))    //3A9 - mt_axis_sum_max_thres
#define CFGBYTE_U8_MT_AXIS_SUM_MAX_HYST_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3AAUL)))    //3AA - mt_axis_sum_max_hyst
#define CFGBYTE_U8_MT_AXIS_SUM_MAX_HYST_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3ABUL)))    //3AB - mt_axis_sum_max_hyst
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x3ACUL)))    //3AC - mt_axis_mrg_max_dist_thres
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x3ADUL)))    //3AD - mt_axis_mrg_max_dist_thres
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_HYST_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x3AEUL)))    //3AE - mt_axis_mrg_max_dist_hyst
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_HYST_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x3AFUL)))    //3AF - mt_axis_mrg_max_dist_hyst
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_BOUND_CNT    (*((uint8_t *)((uint32_t)fwCfgp + 0x3B0UL)))    //3B0 - mt_axis_mrg_max_bound_cnt
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_BOUND_CNT_NOISY  (*((uint8_t *)((uint32_t)fwCfgp + 0x3B1UL)))    //3B1 - mt_axis_mrg_max_bound_cnt_noisy
#define CFGBYTE_U8_MT_AXIS_SUM_MAX_THRES_NOISY_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3B2UL)))    //3B2 - mt_axis_sum_max_thres_noisy
#define CFGBYTE_U8_MT_AXIS_SUM_MAX_THRES_NOISY_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3B3UL)))    //3B3 - mt_axis_sum_max_thres_noisy
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_THRES_NOISY_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3B4UL)))    //3B4 - mt_axis_mrg_max_dist_thres_noisy
#define CFGBYTE_U8_MT_AXIS_MRG_MAX_DIST_THRES_NOISY_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3B5UL)))    //3B5 - mt_axis_mrg_max_dist_thres_noisy
#define CFGBYTE_U8_MT_AXIS_GRV_THRES_NOISY_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3B6UL)))    //3B6 - mt_axis_grv_thres_noisy
#define CFGBYTE_U8_MT_AXIS_GRV_THRES_NOISY_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3B7UL)))    //3B7 - mt_axis_grv_thres_noisy
#define CFGBYTE_U8_MT_AXIS_SUM_PEAK_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x3B8UL)))    //3B8 - mt_axis_sum_peak_thres
#define CFGBYTE_U8_MT_AXIS_SUM_PEAK_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x3B9UL)))    //3B9 - mt_axis_sum_peak_thres
#define CFGBYTE_U8_MT_AXIS_SUM_PEAK_THRES_NOISY_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3BAUL)))    //3BA - mt_axis_sum_peak_thres_noisy
#define CFGBYTE_U8_MT_AXIS_SUM_PEAK_THRES_NOISY_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3BBUL)))    //3BB - mt_axis_sum_peak_thres_noisy
#define CFGBYTE_U8_MT_AXIS_MRG_MULTI_DIST_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3BCUL)))    //3BC - mt_axis_mrg_multi_dist_thres
#define CFGBYTE_U8_MT_AXIS_MRG_MULTI_DIST_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3BDUL)))    //3BD - mt_axis_mrg_multi_dist_thres
#define CFGBYTE_U8_MT_AXIS_SUM_MULTI_BND_MAX_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3BEUL)))    //3BE - mt_axis_sum_multi_bnd_max_thres
#define CFGBYTE_U8_MT_AXIS_SUM_MULTI_BND_MAX_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3BFUL)))    //3BF - mt_axis_sum_multi_bnd_max_thres
#define CFGBYTE_U8_MT_AXIS_PEAK_ISLAND_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0x3C0UL)))    //3C0 - mt_axis_peak_island_cnt
#define CFGBYTE_U8_AXIS_MT_EXPAND_NODE      (*((uint8_t *)((uint32_t)fwCfgp + 0x3C1UL)))    //3C1 - axis_mt_expand_node
#define CFGBYTE_U8_MT_AXIS_SS_SENSE_STR_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x3C2UL)))    //3C2 - mt_axis_ss_sense_str_thres
#define CFGBYTE_U8_MT_AXIS_SS_FORCE_STR_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x3C3UL)))    //3C3 - mt_axis_ss_force_str_thres
#define CFGBYTE_U8_MT_AXIS_SS_GRV_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3C4UL)))    //3C4 - mt_axis_ss_grv_thres
#define CFGBYTE_U8_MT_AXIS_SS_GRV_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3C5UL)))    //3C5 - mt_axis_ss_grv_thres
#define CFGBYTE_U8_MS_RES_STR_CH            (*((uint8_t *)((uint32_t)fwCfgp + 0x3C7UL)))    //3C7 - ms_res_str_ch
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_LOW_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3C8UL)))    //3C8 - ms_res_str_flt_thres_low
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_LOW_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3C9UL)))    //3C9 - ms_res_str_flt_thres_low
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_HIGH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x3CAUL)))    //3CA - ms_res_str_flt_thres_high
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_HIGH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x3CBUL)))    //3CB - ms_res_str_flt_thres_high
#define CFGBYTE_U8_MS_RES_STR_FLT_PEAK_THRES_LOW_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x3CCUL)))    //3CC - ms_res_str_flt_peak_thres_low
#define CFGBYTE_U8_MS_RES_STR_FLT_PEAK_THRES_LOW_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x3CDUL)))    //3CD - ms_res_str_flt_peak_thres_low
#define CFGBYTE_U8_MS_RES_STR_FLT_PEAK_THRES_HIGH_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x3CEUL)))    //3CE - ms_res_str_flt_peak_thres_high
#define CFGBYTE_U8_MS_RES_STR_FLT_PEAK_THRES_HIGH_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x3CFUL)))    //3CF - ms_res_str_flt_peak_thres_high
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_GAP_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3D0UL)))    //3D0 - ms_res_str_flt_thres_gap
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_GAP_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3D1UL)))    //3D1 - ms_res_str_flt_thres_gap
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_GAP_R0_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3D2UL)))    //3D2 - ms_res_str_flt_thres_gap_r0
#define CFGBYTE_U8_MS_RES_STR_FLT_THRES_GAP_R0_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3D3UL)))    //3D3 - ms_res_str_flt_thres_gap_r0
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_LOW_SPEED_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3D4UL)))    //3D4 - tch_mtol2_acc_xy_tol_game_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_LOW_SPEED_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3D5UL)))    //3D5 - tch_mtol2_acc_xy_tol_game_low_speed
#define CFGBYTE_U8_MTOL_2_CFG_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x3D6UL)))    //3D6 - mtol_2_cfg
#define CFGBYTE_U8_MTOL_2_CFG_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x3D7UL)))    //3D7 - mtol_2_cfg
#define CFGBYTE_U8_FTAP_MTOL2_EDGE_TCH_TO   (*((uint8_t *)((uint32_t)fwCfgp + 0x3D8UL)))    //3D8 - ftap_mtol2_edge_tch_to
#define CFGBYTE_U8_FTAP_MTOL2_TO            (*((uint8_t *)((uint32_t)fwCfgp + 0x3D9UL)))    //3D9 - ftap_mtol2_to
#define CFGBYTE_U8_FTAP_MTOL2_SLOW_TCH_SPEED_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0x3DAUL)))    //3DA - ftap_mtol2_slow_tch_speed_thres
#define CFGBYTE_U8_FTAP_MTOL2_SLOW_TCH_RPT_RANGE_PERCENT    (*((uint8_t *)((uint32_t)fwCfgp + 0x3DBUL)))    //3DB - ftap_mtol2_slow_tch_rpt_range_percent
#define CFGBYTE_U8_FTAP_MTOL2_SLOW_GAP_COMP_STEP    (*((uint8_t *)((uint32_t)fwCfgp + 0x3DCUL)))    //3DC - ftap_mtol2_slow_gap_comp_step
#define CFGBYTE_U8_TCH_MTOL2_FTAP_IIR_STEP  (*((uint8_t *)((uint32_t)fwCfgp + 0x3DDUL)))    //3DD - tch_mtol2_ftap_iir_step
#define CFGBYTE_U8_TCH_MTOL2_FTAP_XY_TOL_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x3DEUL)))    //3DE - tch_mtol2_ftap_xy_tol
#define CFGBYTE_U8_TCH_MTOL2_FTAP_XY_TOL_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x3DFUL)))    //3DF - tch_mtol2_ftap_xy_tol
#define CFGBYTE_U8_TCH_MTOL2_FTAP_XY_TOL_NOISY_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3E0UL)))    //3E0 - tch_mtol2_ftap_xy_tol_noisy
#define CFGBYTE_U8_TCH_MTOL2_FTAP_XY_TOL_NOISY_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3E1UL)))    //3E1 - tch_mtol2_ftap_xy_tol_noisy
#define CFGBYTE_U8_FTAP_XY_SPEED_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x3E2UL)))    //3E2 - ftap_xy_speed
#define CFGBYTE_U8_FTAP_XY_SPEED_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x3E3UL)))    //3E3 - ftap_xy_speed
#define CFGBYTE_U8_FTAP_XY_SPEED_NOISY_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3E4UL)))    //3E4 - ftap_xy_speed_noisy
#define CFGBYTE_U8_FTAP_XY_SPEED_NOISY_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3E5UL)))    //3E5 - ftap_xy_speed_noisy
#define CFGBYTE_U8_FTAP_XY_WGH              (*((uint8_t *)((uint32_t)fwCfgp + 0x3E6UL)))    //3E6 - ftap_xy_wgh
#define CFGBYTE_U8_FTAP_XY_WGH_NOISY        (*((uint8_t *)((uint32_t)fwCfgp + 0x3E7UL)))    //3E7 - ftap_xy_wgh_noisy
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_LOW_SPEED_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x3E8UL)))    //3E8 - tch_mtol2_acc_xy_tol_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_LOW_SPEED_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x3E9UL)))    //3E9 - tch_mtol2_acc_xy_tol_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_NOISY_LOW_SPEED_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3EAUL)))    //3EA - tch_mtol2_acc_xy_tol_noisy_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_NOISY_LOW_SPEED_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3EBUL)))    //3EB - tch_mtol2_acc_xy_tol_noisy_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_MIN_COMP   (*((uint8_t *)((uint32_t)fwCfgp + 0x3ECUL)))    //3EC - tch_mtol2_acc_min_comp
#define CFGBYTE_U8_TCH_MTOL2_ACC_MAX_COMP   (*((uint8_t *)((uint32_t)fwCfgp + 0x3EDUL)))    //3ED - tch_mtol2_acc_max_comp
#define CFGBYTE_U8_TCH_MTOL2_ACC_COMP_MIN_SPEED (*((uint8_t *)((uint32_t)fwCfgp + 0x3EEUL)))    //3EE - tch_mtol2_acc_comp_min_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_COMP_MAX_SPEED (*((uint8_t *)((uint32_t)fwCfgp + 0x3EFUL)))    //3EF - tch_mtol2_acc_comp_max_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_EDGE2CENTER_TO (*((uint8_t *)((uint32_t)fwCfgp + 0x3F0UL)))    //3F0 - tch_mtol2_acc_edge2center_to
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_HIGH_SPEED_0   (*((uint8_t *)((uint32_t)fwCfgp + 0x3F1UL)))    //3F1 - tch_mtol2_acc_xy_tol_game_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_HIGH_SPEED_1   (*((uint8_t *)((uint32_t)fwCfgp + 0x3F2UL)))    //3F2 - tch_mtol2_acc_xy_tol_game_high_speed
#define CFGBYTE_U8_MS_LNZ_CFG               (*((uint8_t *)((uint32_t)fwCfgp + 0x3F3UL)))    //3F3 - ms_lnz_cfg
#define CFGBYTE_U8_TRENCH_LNZ_S_BORDER_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3F4UL)))    //3F4 - trench_lnz_s_border
#define CFGBYTE_U8_TRENCH_LNZ_S_BORDER_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3F5UL)))    //3F5 - trench_lnz_s_border
#define CFGBYTE_U8_TRENCH_LNZ_F_BORDER_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x3F6UL)))    //3F6 - trench_lnz_f_border
#define CFGBYTE_U8_TRENCH_LNZ_F_BORDER_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x3F7UL)))    //3F7 - trench_lnz_f_border
#define CFGBYTE_U8_MS_LNZ_TABLE_CFG0        (*((uint8_t *)((uint32_t)fwCfgp + 0x3F8UL)))    //3F8 - ms_lnz_table_cfg0
#define CFGBYTE_U8_MS_LNZ_TABLE_CFG1        (*((uint8_t *)((uint32_t)fwCfgp + 0x3F9UL)))    //3F9 - ms_lnz_table_cfg1
#define CFGBYTE_U8_MS_LNZ_TABLE_CFG2        (*((uint8_t *)((uint32_t)fwCfgp + 0x3FAUL)))    //3FA - ms_lnz_table_cfg2
#define CFGBYTE_U8_MS_LNZ_TABLE_CFG3        (*((uint8_t *)((uint32_t)fwCfgp + 0x3FBUL)))    //3FB - ms_lnz_table_cfg3
#define CFGBYTE_U8_MS_LNZ_TABLE_CFG4        (*((uint8_t *)((uint32_t)fwCfgp + 0x3FCUL)))    //3FC - ms_lnz_table_cfg4
#define CFGBYTE_U8_MS_LNZ_TABLE_CFG5        (*((uint8_t *)((uint32_t)fwCfgp + 0x3FDUL)))    //3FD - ms_lnz_table_cfg5
#define CFGBYTE_U8_MS_LNZ_TABLE_CFG6        (*((uint8_t *)((uint32_t)fwCfgp + 0x3FEUL)))    //3FE - ms_lnz_table_cfg6
#define CFGBYTE_U8_MS_LNZ_ENTRY_0_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x3FFUL)))    //3FF - ms_lnz_entry_0
#define CFGBYTE_U8_MS_LNZ_ENTRY_0_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x400UL)))    //400 - ms_lnz_entry_0
#define CFGBYTE_U8_MS_LNZ_ENTRY_1_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x401UL)))    //401 - ms_lnz_entry_1
#define CFGBYTE_U8_MS_LNZ_ENTRY_1_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x402UL)))    //402 - ms_lnz_entry_1
#define CFGBYTE_U8_MS_LNZ_ENTRY_2_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x403UL)))    //403 - ms_lnz_entry_2
#define CFGBYTE_U8_MS_LNZ_ENTRY_2_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x404UL)))    //404 - ms_lnz_entry_2
#define CFGBYTE_U8_MS_LNZ_ENTRY_3_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x405UL)))    //405 - ms_lnz_entry_3
#define CFGBYTE_U8_MS_LNZ_ENTRY_3_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x406UL)))    //406 - ms_lnz_entry_3
#define CFGBYTE_U8_MS_LNZ_ENTRY_4_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x407UL)))    //407 - ms_lnz_entry_4
#define CFGBYTE_U8_MS_LNZ_ENTRY_4_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x408UL)))    //408 - ms_lnz_entry_4
#define CFGBYTE_U8_MS_LNZ_ENTRY_5_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x409UL)))    //409 - ms_lnz_entry_5
#define CFGBYTE_U8_MS_LNZ_ENTRY_5_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x40AUL)))    //40A - ms_lnz_entry_5
#define CFGBYTE_U8_MS_LNZ_ENTRY_6_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x40BUL)))    //40B - ms_lnz_entry_6
#define CFGBYTE_U8_MS_LNZ_ENTRY_6_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x40CUL)))    //40C - ms_lnz_entry_6
#define CFGBYTE_U8_MS_LNZ_ENTRY_7_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x40DUL)))    //40D - ms_lnz_entry_7
#define CFGBYTE_U8_MS_LNZ_ENTRY_7_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x40EUL)))    //40E - ms_lnz_entry_7
#define CFGBYTE_U8_MS_LNZ_ENTRY_8_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x40FUL)))    //40F - ms_lnz_entry_8
#define CFGBYTE_U8_MS_LNZ_ENTRY_8_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x410UL)))    //410 - ms_lnz_entry_8
#define CFGBYTE_U8_MS_LNZ_ENTRY_9_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x411UL)))    //411 - ms_lnz_entry_9
#define CFGBYTE_U8_MS_LNZ_ENTRY_9_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x412UL)))    //412 - ms_lnz_entry_9
#define CFGBYTE_U8_MS_LNZ_ENTRY_10_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x413UL)))    //413 - ms_lnz_entry_10
#define CFGBYTE_U8_MS_LNZ_ENTRY_10_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x414UL)))    //414 - ms_lnz_entry_10
#define CFGBYTE_U8_MS_LNZ_ENTRY_11_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x415UL)))    //415 - ms_lnz_entry_11
#define CFGBYTE_U8_MS_LNZ_ENTRY_11_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x416UL)))    //416 - ms_lnz_entry_11
#define CFGBYTE_U8_MS_LNZ_ENTRY_12_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x417UL)))    //417 - ms_lnz_entry_12
#define CFGBYTE_U8_MS_LNZ_ENTRY_12_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x418UL)))    //418 - ms_lnz_entry_12
#define CFGBYTE_U8_MS_LNZ_ENTRY_13_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x419UL)))    //419 - ms_lnz_entry_13
#define CFGBYTE_U8_MS_LNZ_ENTRY_13_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x41AUL)))    //41A - ms_lnz_entry_13
#define CFGBYTE_U8_MS_LNZ_ENTRY_14_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x41BUL)))    //41B - ms_lnz_entry_14
#define CFGBYTE_U8_MS_LNZ_ENTRY_14_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x41CUL)))    //41C - ms_lnz_entry_14
#define CFGBYTE_U8_MS_LNZ_ENTRY_15_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x41DUL)))    //41D - ms_lnz_entry_15
#define CFGBYTE_U8_MS_LNZ_ENTRY_15_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x41EUL)))    //41E - ms_lnz_entry_15
#define CFGBYTE_U8_MS_LNZ_ENTRY_16_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x41FUL)))    //41F - ms_lnz_entry_16
#define CFGBYTE_U8_MS_LNZ_ENTRY_16_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x420UL)))    //420 - ms_lnz_entry_16
#define CFGBYTE_U8_MS_LNZ_ENTRY_17_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x421UL)))    //421 - ms_lnz_entry_17
#define CFGBYTE_U8_MS_LNZ_ENTRY_17_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x422UL)))    //422 - ms_lnz_entry_17
#define CFGBYTE_U8_MS_LNZ_ENTRY_18_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x423UL)))    //423 - ms_lnz_entry_18
#define CFGBYTE_U8_MS_LNZ_ENTRY_18_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x424UL)))    //424 - ms_lnz_entry_18
#define CFGBYTE_U8_MS_LNZ_ENTRY_19_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x425UL)))    //425 - ms_lnz_entry_19
#define CFGBYTE_U8_MS_LNZ_ENTRY_19_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x426UL)))    //426 - ms_lnz_entry_19
#define CFGBYTE_U8_MS_LNZ_ENTRY_20_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x427UL)))    //427 - ms_lnz_entry_20
#define CFGBYTE_U8_MS_LNZ_ENTRY_20_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x428UL)))    //428 - ms_lnz_entry_20
#define CFGBYTE_U8_MS_LNZ_ENTRY_21_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x429UL)))    //429 - ms_lnz_entry_21
#define CFGBYTE_U8_MS_LNZ_ENTRY_21_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x42AUL)))    //42A - ms_lnz_entry_21
#define CFGBYTE_U8_MS_LNZ_ENTRY_22_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x42BUL)))    //42B - ms_lnz_entry_22
#define CFGBYTE_U8_MS_LNZ_ENTRY_22_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x42CUL)))    //42C - ms_lnz_entry_22
#define CFGBYTE_U8_MS_LNZ_ENTRY_23_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x42DUL)))    //42D - ms_lnz_entry_23
#define CFGBYTE_U8_MS_LNZ_ENTRY_23_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x42EUL)))    //42E - ms_lnz_entry_23
#define CFGBYTE_U8_MS_LNZ_ENTRY_24_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x42FUL)))    //42F - ms_lnz_entry_24
#define CFGBYTE_U8_MS_LNZ_ENTRY_24_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x430UL)))    //430 - ms_lnz_entry_24
#define CFGBYTE_U8_MS_LNZ_ENTRY_25_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x431UL)))    //431 - ms_lnz_entry_25
#define CFGBYTE_U8_MS_LNZ_ENTRY_25_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x432UL)))    //432 - ms_lnz_entry_25
#define CFGBYTE_U8_MS_LNZ_ENTRY_26_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x433UL)))    //433 - ms_lnz_entry_26
#define CFGBYTE_U8_MS_LNZ_ENTRY_26_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x434UL)))    //434 - ms_lnz_entry_26
#define CFGBYTE_U8_MS_LNZ_ENTRY_27_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x435UL)))    //435 - ms_lnz_entry_27
#define CFGBYTE_U8_MS_LNZ_ENTRY_27_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x436UL)))    //436 - ms_lnz_entry_27
#define CFGBYTE_U8_MS_LNZ_ENTRY_28_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x437UL)))    //437 - ms_lnz_entry_28
#define CFGBYTE_U8_MS_LNZ_ENTRY_28_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x438UL)))    //438 - ms_lnz_entry_28
#define CFGBYTE_U8_MS_LNZ_ENTRY_29_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x439UL)))    //439 - ms_lnz_entry_29
#define CFGBYTE_U8_MS_LNZ_ENTRY_29_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x43AUL)))    //43A - ms_lnz_entry_29
#define CFGBYTE_U8_MS_LNZ_ENTRY_30_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x43BUL)))    //43B - ms_lnz_entry_30
#define CFGBYTE_U8_MS_LNZ_ENTRY_30_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x43CUL)))    //43C - ms_lnz_entry_30
#define CFGBYTE_U8_MS_LNZ_ENTRY_31_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x43DUL)))    //43D - ms_lnz_entry_31
#define CFGBYTE_U8_MS_LNZ_ENTRY_31_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x43EUL)))    //43E - ms_lnz_entry_31
#define CFGBYTE_U8_MS_LNZ_ENTRY_32_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x43FUL)))    //43F - ms_lnz_entry_32
#define CFGBYTE_U8_MS_LNZ_ENTRY_32_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x440UL)))    //440 - ms_lnz_entry_32
#define CFGBYTE_U8_MS_LNZ_ENTRY_33_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x441UL)))    //441 - ms_lnz_entry_33
#define CFGBYTE_U8_MS_LNZ_ENTRY_33_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x442UL)))    //442 - ms_lnz_entry_33
#define CFGBYTE_U8_MS_LNZ_ENTRY_34_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x443UL)))    //443 - ms_lnz_entry_34
#define CFGBYTE_U8_MS_LNZ_ENTRY_34_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x444UL)))    //444 - ms_lnz_entry_34
#define CFGBYTE_U8_MS_LNZ_ENTRY_35_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x445UL)))    //445 - ms_lnz_entry_35
#define CFGBYTE_U8_MS_LNZ_ENTRY_35_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x446UL)))    //446 - ms_lnz_entry_35
#define CFGBYTE_U8_MS_LNZ_ENTRY_36_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x447UL)))    //447 - ms_lnz_entry_36
#define CFGBYTE_U8_MS_LNZ_ENTRY_36_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x448UL)))    //448 - ms_lnz_entry_36
#define CFGBYTE_U8_MS_LNZ_ENTRY_37_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x449UL)))    //449 - ms_lnz_entry_37
#define CFGBYTE_U8_MS_LNZ_ENTRY_37_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x44AUL)))    //44A - ms_lnz_entry_37
#define CFGBYTE_U8_MS_LNZ_ENTRY_38_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x44BUL)))    //44B - ms_lnz_entry_38
#define CFGBYTE_U8_MS_LNZ_ENTRY_38_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x44CUL)))    //44C - ms_lnz_entry_38
#define CFGBYTE_U8_MS_LNZ_ENTRY_39_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x44DUL)))    //44D - ms_lnz_entry_39
#define CFGBYTE_U8_MS_LNZ_ENTRY_39_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x44EUL)))    //44E - ms_lnz_entry_39
#define CFGBYTE_U8_MS_LNZ_ENTRY_40_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x44FUL)))    //44F - ms_lnz_entry_40
#define CFGBYTE_U8_MS_LNZ_ENTRY_40_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x450UL)))    //450 - ms_lnz_entry_40
#define CFGBYTE_U8_MS_LNZ_ENTRY_41_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x451UL)))    //451 - ms_lnz_entry_41
#define CFGBYTE_U8_MS_LNZ_ENTRY_41_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x452UL)))    //452 - ms_lnz_entry_41
#define CFGBYTE_U8_MS_LNZ_ENTRY_42_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x453UL)))    //453 - ms_lnz_entry_42
#define CFGBYTE_U8_MS_LNZ_ENTRY_42_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x454UL)))    //454 - ms_lnz_entry_42
#define CFGBYTE_U8_MS_LNZ_ENTRY_43_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x455UL)))    //455 - ms_lnz_entry_43
#define CFGBYTE_U8_MS_LNZ_ENTRY_43_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x456UL)))    //456 - ms_lnz_entry_43
#define CFGBYTE_U8_MS_LNZ_ENTRY_44_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x457UL)))    //457 - ms_lnz_entry_44
#define CFGBYTE_U8_MS_LNZ_ENTRY_44_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x458UL)))    //458 - ms_lnz_entry_44
#define CFGBYTE_U8_MS_LNZ_ENTRY_45_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x459UL)))    //459 - ms_lnz_entry_45
#define CFGBYTE_U8_MS_LNZ_ENTRY_45_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x45AUL)))    //45A - ms_lnz_entry_45
#define CFGBYTE_U8_MS_LNZ_ENTRY_46_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x45BUL)))    //45B - ms_lnz_entry_46
#define CFGBYTE_U8_MS_LNZ_ENTRY_46_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x45CUL)))    //45C - ms_lnz_entry_46
#define CFGBYTE_U8_MS_LNZ_ENTRY_47_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x45DUL)))    //45D - ms_lnz_entry_47
#define CFGBYTE_U8_MS_LNZ_ENTRY_47_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x45EUL)))    //45E - ms_lnz_entry_47
#define CFGBYTE_U8_MS_LNZ_ENTRY_48_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x45FUL)))    //45F - ms_lnz_entry_48
#define CFGBYTE_U8_MS_LNZ_ENTRY_48_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x460UL)))    //460 - ms_lnz_entry_48
#define CFGBYTE_U8_MS_LNZ_ENTRY_49_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x461UL)))    //461 - ms_lnz_entry_49
#define CFGBYTE_U8_MS_LNZ_ENTRY_49_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x462UL)))    //462 - ms_lnz_entry_49
#define CFGBYTE_U8_MS_LNZ_ENTRY_50_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x463UL)))    //463 - ms_lnz_entry_50
#define CFGBYTE_U8_MS_LNZ_ENTRY_50_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x464UL)))    //464 - ms_lnz_entry_50
#define CFGBYTE_U8_MS_LNZ_ENTRY_51_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x465UL)))    //465 - ms_lnz_entry_51
#define CFGBYTE_U8_MS_LNZ_ENTRY_51_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x466UL)))    //466 - ms_lnz_entry_51
#define CFGBYTE_U8_MS_LNZ_ENTRY_52_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x467UL)))    //467 - ms_lnz_entry_52
#define CFGBYTE_U8_MS_LNZ_ENTRY_52_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x468UL)))    //468 - ms_lnz_entry_52
#define CFGBYTE_U8_MS_LNZ_ENTRY_53_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x469UL)))    //469 - ms_lnz_entry_53
#define CFGBYTE_U8_MS_LNZ_ENTRY_53_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x46AUL)))    //46A - ms_lnz_entry_53
#define CFGBYTE_U8_MS_LNZ_ENTRY_54_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x46BUL)))    //46B - ms_lnz_entry_54
#define CFGBYTE_U8_MS_LNZ_ENTRY_54_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x46CUL)))    //46C - ms_lnz_entry_54
#define CFGBYTE_U8_MS_LNZ_ENTRY_55_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x46DUL)))    //46D - ms_lnz_entry_55
#define CFGBYTE_U8_MS_LNZ_ENTRY_55_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x46EUL)))    //46E - ms_lnz_entry_55
#define CFGBYTE_U8_MS_LNZ_ENTRY_56_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x46FUL)))    //46F - ms_lnz_entry_56
#define CFGBYTE_U8_MS_LNZ_ENTRY_56_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x470UL)))    //470 - ms_lnz_entry_56
#define CFGBYTE_U8_MS_LNZ_ENTRY_57_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x471UL)))    //471 - ms_lnz_entry_57
#define CFGBYTE_U8_MS_LNZ_ENTRY_57_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x472UL)))    //472 - ms_lnz_entry_57
#define CFGBYTE_U8_MS_LNZ_ENTRY_58_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x473UL)))    //473 - ms_lnz_entry_58
#define CFGBYTE_U8_MS_LNZ_ENTRY_58_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x474UL)))    //474 - ms_lnz_entry_58
#define CFGBYTE_U8_MS_LNZ_ENTRY_59_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x475UL)))    //475 - ms_lnz_entry_59
#define CFGBYTE_U8_MS_LNZ_ENTRY_59_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x476UL)))    //476 - ms_lnz_entry_59
#define CFGBYTE_U8_MS_LNZ_ENTRY_60_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x477UL)))    //477 - ms_lnz_entry_60
#define CFGBYTE_U8_MS_LNZ_ENTRY_60_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x478UL)))    //478 - ms_lnz_entry_60
#define CFGBYTE_U8_MS_LNZ_ENTRY_61_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x479UL)))    //479 - ms_lnz_entry_61
#define CFGBYTE_U8_MS_LNZ_ENTRY_61_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x47AUL)))    //47A - ms_lnz_entry_61
#define CFGBYTE_U8_MS_LNZ_ENTRY_62_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x47BUL)))    //47B - ms_lnz_entry_62
#define CFGBYTE_U8_MS_LNZ_ENTRY_62_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x47CUL)))    //47C - ms_lnz_entry_62
#define CFGBYTE_U8_MS_LNZ_ENTRY_63_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x47DUL)))    //47D - ms_lnz_entry_63
#define CFGBYTE_U8_MS_LNZ_ENTRY_63_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x47EUL)))    //47E - ms_lnz_entry_63
#define CFGBYTE_U8_MS_LNZ_ENTRY_64_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x47FUL)))    //47F - ms_lnz_entry_64
#define CFGBYTE_U8_MS_LNZ_ENTRY_64_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x480UL)))    //480 - ms_lnz_entry_64
#define CFGBYTE_U8_MS_LNZ_ENTRY_65_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x481UL)))    //481 - ms_lnz_entry_65
#define CFGBYTE_U8_MS_LNZ_ENTRY_65_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x482UL)))    //482 - ms_lnz_entry_65
#define CFGBYTE_U8_MS_LNZ_ENTRY_66_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x483UL)))    //483 - ms_lnz_entry_66
#define CFGBYTE_U8_MS_LNZ_ENTRY_66_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x484UL)))    //484 - ms_lnz_entry_66
#define CFGBYTE_U8_MS_LNZ_ENTRY_67_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x485UL)))    //485 - ms_lnz_entry_67
#define CFGBYTE_U8_MS_LNZ_ENTRY_67_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x486UL)))    //486 - ms_lnz_entry_67
#define CFGBYTE_U8_MS_LNZ_ENTRY_68_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x487UL)))    //487 - ms_lnz_entry_68
#define CFGBYTE_U8_MS_LNZ_ENTRY_68_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x488UL)))    //488 - ms_lnz_entry_68
#define CFGBYTE_U8_MS_LNZ_ENTRY_69_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x489UL)))    //489 - ms_lnz_entry_69
#define CFGBYTE_U8_MS_LNZ_ENTRY_69_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x48AUL)))    //48A - ms_lnz_entry_69
#define CFGBYTE_U8_MS_LNZ_ENTRY_70_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x48BUL)))    //48B - ms_lnz_entry_70
#define CFGBYTE_U8_MS_LNZ_ENTRY_70_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x48CUL)))    //48C - ms_lnz_entry_70
#define CFGBYTE_U8_MS_LNZ_ENTRY_71_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x48DUL)))    //48D - ms_lnz_entry_71
#define CFGBYTE_U8_MS_LNZ_ENTRY_71_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x48EUL)))    //48E - ms_lnz_entry_71
#define CFGBYTE_U8_MS_LNZ_ENTRY_72_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x48FUL)))    //48F - ms_lnz_entry_72
#define CFGBYTE_U8_MS_LNZ_ENTRY_72_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x490UL)))    //490 - ms_lnz_entry_72
#define CFGBYTE_U8_MS_LNZ_ENTRY_73_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x491UL)))    //491 - ms_lnz_entry_73
#define CFGBYTE_U8_MS_LNZ_ENTRY_73_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x492UL)))    //492 - ms_lnz_entry_73
#define CFGBYTE_U8_MS_LNZ_ENTRY_74_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x493UL)))    //493 - ms_lnz_entry_74
#define CFGBYTE_U8_MS_LNZ_ENTRY_74_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x494UL)))    //494 - ms_lnz_entry_74
#define CFGBYTE_U8_MS_LNZ_ENTRY_75_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x495UL)))    //495 - ms_lnz_entry_75
#define CFGBYTE_U8_MS_LNZ_ENTRY_75_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x496UL)))    //496 - ms_lnz_entry_75
#define CFGBYTE_U8_MS_LNZ_ENTRY_76_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x497UL)))    //497 - ms_lnz_entry_76
#define CFGBYTE_U8_MS_LNZ_ENTRY_76_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x498UL)))    //498 - ms_lnz_entry_76
#define CFGBYTE_U8_MS_LNZ_ENTRY_77_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x499UL)))    //499 - ms_lnz_entry_77
#define CFGBYTE_U8_MS_LNZ_ENTRY_77_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x49AUL)))    //49A - ms_lnz_entry_77
#define CFGBYTE_U8_MS_LNZ_ENTRY_78_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x49BUL)))    //49B - ms_lnz_entry_78
#define CFGBYTE_U8_MS_LNZ_ENTRY_78_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x49CUL)))    //49C - ms_lnz_entry_78
#define CFGBYTE_U8_MS_LNZ_ENTRY_79_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x49DUL)))    //49D - ms_lnz_entry_79
#define CFGBYTE_U8_MS_LNZ_ENTRY_79_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x49EUL)))    //49E - ms_lnz_entry_79
#define CFGBYTE_U8_MS_LNZ_ENTRY_80_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x49FUL)))    //49F - ms_lnz_entry_80
#define CFGBYTE_U8_MS_LNZ_ENTRY_80_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A0UL)))    //4A0 - ms_lnz_entry_80
#define CFGBYTE_U8_MS_LNZ_ENTRY_81_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A1UL)))    //4A1 - ms_lnz_entry_81
#define CFGBYTE_U8_MS_LNZ_ENTRY_81_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A2UL)))    //4A2 - ms_lnz_entry_81
#define CFGBYTE_U8_MS_LNZ_ENTRY_82_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A3UL)))    //4A3 - ms_lnz_entry_82
#define CFGBYTE_U8_MS_LNZ_ENTRY_82_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A4UL)))    //4A4 - ms_lnz_entry_82
#define CFGBYTE_U8_MS_LNZ_ENTRY_83_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A5UL)))    //4A5 - ms_lnz_entry_83
#define CFGBYTE_U8_MS_LNZ_ENTRY_83_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A6UL)))    //4A6 - ms_lnz_entry_83
#define CFGBYTE_U8_MS_LNZ_ENTRY_84_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A7UL)))    //4A7 - ms_lnz_entry_84
#define CFGBYTE_U8_MS_LNZ_ENTRY_84_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A8UL)))    //4A8 - ms_lnz_entry_84
#define CFGBYTE_U8_MS_LNZ_ENTRY_85_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4A9UL)))    //4A9 - ms_lnz_entry_85
#define CFGBYTE_U8_MS_LNZ_ENTRY_85_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4AAUL)))    //4AA - ms_lnz_entry_85
#define CFGBYTE_U8_MS_LNZ_ENTRY_86_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4ABUL)))    //4AB - ms_lnz_entry_86
#define CFGBYTE_U8_MS_LNZ_ENTRY_86_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4ACUL)))    //4AC - ms_lnz_entry_86
#define CFGBYTE_U8_MS_LNZ_ENTRY_87_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4ADUL)))    //4AD - ms_lnz_entry_87
#define CFGBYTE_U8_MS_LNZ_ENTRY_87_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4AEUL)))    //4AE - ms_lnz_entry_87
#define CFGBYTE_U8_MS_LNZ_ENTRY_88_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4AFUL)))    //4AF - ms_lnz_entry_88
#define CFGBYTE_U8_MS_LNZ_ENTRY_88_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B0UL)))    //4B0 - ms_lnz_entry_88
#define CFGBYTE_U8_MS_LNZ_ENTRY_89_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B1UL)))    //4B1 - ms_lnz_entry_89
#define CFGBYTE_U8_MS_LNZ_ENTRY_89_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B2UL)))    //4B2 - ms_lnz_entry_89
#define CFGBYTE_U8_MS_LNZ_ENTRY_90_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B3UL)))    //4B3 - ms_lnz_entry_90
#define CFGBYTE_U8_MS_LNZ_ENTRY_90_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B4UL)))    //4B4 - ms_lnz_entry_90
#define CFGBYTE_U8_MS_LNZ_ENTRY_91_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B5UL)))    //4B5 - ms_lnz_entry_91
#define CFGBYTE_U8_MS_LNZ_ENTRY_91_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B6UL)))    //4B6 - ms_lnz_entry_91
#define CFGBYTE_U8_MS_LNZ_ENTRY_92_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B7UL)))    //4B7 - ms_lnz_entry_92
#define CFGBYTE_U8_MS_LNZ_ENTRY_92_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B8UL)))    //4B8 - ms_lnz_entry_92
#define CFGBYTE_U8_MS_LNZ_ENTRY_93_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4B9UL)))    //4B9 - ms_lnz_entry_93
#define CFGBYTE_U8_MS_LNZ_ENTRY_93_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4BAUL)))    //4BA - ms_lnz_entry_93
#define CFGBYTE_U8_MS_LNZ_ENTRY_94_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4BBUL)))    //4BB - ms_lnz_entry_94
#define CFGBYTE_U8_MS_LNZ_ENTRY_94_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4BCUL)))    //4BC - ms_lnz_entry_94
#define CFGBYTE_U8_MS_LNZ_ENTRY_95_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4BDUL)))    //4BD - ms_lnz_entry_95
#define CFGBYTE_U8_MS_LNZ_ENTRY_95_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4BEUL)))    //4BE - ms_lnz_entry_95
#define CFGBYTE_U8_MS_LNZ_ENTRY_96_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4BFUL)))    //4BF - ms_lnz_entry_96
#define CFGBYTE_U8_MS_LNZ_ENTRY_96_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4C0UL)))    //4C0 - ms_lnz_entry_96
#define CFGBYTE_U8_MS_LNZ_ENTRY_97_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4C1UL)))    //4C1 - ms_lnz_entry_97
#define CFGBYTE_U8_MS_LNZ_ENTRY_97_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4C2UL)))    //4C2 - ms_lnz_entry_97
#define CFGBYTE_U8_MS_LNZ_ENTRY_98_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4C3UL)))    //4C3 - ms_lnz_entry_98
#define CFGBYTE_U8_MS_LNZ_ENTRY_98_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4C4UL)))    //4C4 - ms_lnz_entry_98
#define CFGBYTE_U8_MS_LNZ_ENTRY_99_0        (*((uint8_t *)((uint32_t)fwCfgp + 0x4C5UL)))    //4C5 - ms_lnz_entry_99
#define CFGBYTE_U8_MS_LNZ_ENTRY_99_1        (*((uint8_t *)((uint32_t)fwCfgp + 0x4C6UL)))    //4C6 - ms_lnz_entry_99
#define CFGBYTE_U8_MS_LNZ_ENTRY_100_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4C7UL)))    //4C7 - ms_lnz_entry_100
#define CFGBYTE_U8_MS_LNZ_ENTRY_100_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4C8UL)))    //4C8 - ms_lnz_entry_100
#define CFGBYTE_U8_MS_LNZ_ENTRY_101_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4C9UL)))    //4C9 - ms_lnz_entry_101
#define CFGBYTE_U8_MS_LNZ_ENTRY_101_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4CAUL)))    //4CA - ms_lnz_entry_101
#define CFGBYTE_U8_MS_LNZ_ENTRY_102_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4CBUL)))    //4CB - ms_lnz_entry_102
#define CFGBYTE_U8_MS_LNZ_ENTRY_102_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4CCUL)))    //4CC - ms_lnz_entry_102
#define CFGBYTE_U8_MS_LNZ_ENTRY_103_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4CDUL)))    //4CD - ms_lnz_entry_103
#define CFGBYTE_U8_MS_LNZ_ENTRY_103_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4CEUL)))    //4CE - ms_lnz_entry_103
#define CFGBYTE_U8_MS_LNZ_ENTRY_104_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4CFUL)))    //4CF - ms_lnz_entry_104
#define CFGBYTE_U8_MS_LNZ_ENTRY_104_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D0UL)))    //4D0 - ms_lnz_entry_104
#define CFGBYTE_U8_MS_LNZ_ENTRY_105_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D1UL)))    //4D1 - ms_lnz_entry_105
#define CFGBYTE_U8_MS_LNZ_ENTRY_105_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D2UL)))    //4D2 - ms_lnz_entry_105
#define CFGBYTE_U8_MS_LNZ_ENTRY_106_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D3UL)))    //4D3 - ms_lnz_entry_106
#define CFGBYTE_U8_MS_LNZ_ENTRY_106_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D4UL)))    //4D4 - ms_lnz_entry_106
#define CFGBYTE_U8_MS_LNZ_ENTRY_107_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D5UL)))    //4D5 - ms_lnz_entry_107
#define CFGBYTE_U8_MS_LNZ_ENTRY_107_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D6UL)))    //4D6 - ms_lnz_entry_107
#define CFGBYTE_U8_MS_LNZ_ENTRY_108_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D7UL)))    //4D7 - ms_lnz_entry_108
#define CFGBYTE_U8_MS_LNZ_ENTRY_108_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D8UL)))    //4D8 - ms_lnz_entry_108
#define CFGBYTE_U8_MS_LNZ_ENTRY_109_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4D9UL)))    //4D9 - ms_lnz_entry_109
#define CFGBYTE_U8_MS_LNZ_ENTRY_109_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4DAUL)))    //4DA - ms_lnz_entry_109
#define CFGBYTE_U8_MS_LNZ_ENTRY_110_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4DBUL)))    //4DB - ms_lnz_entry_110
#define CFGBYTE_U8_MS_LNZ_ENTRY_110_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4DCUL)))    //4DC - ms_lnz_entry_110
#define CFGBYTE_U8_MS_LNZ_ENTRY_111_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4DDUL)))    //4DD - ms_lnz_entry_111
#define CFGBYTE_U8_MS_LNZ_ENTRY_111_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4DEUL)))    //4DE - ms_lnz_entry_111
#define CFGBYTE_U8_MS_LNZ_ENTRY_112_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4DFUL)))    //4DF - ms_lnz_entry_112
#define CFGBYTE_U8_MS_LNZ_ENTRY_112_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E0UL)))    //4E0 - ms_lnz_entry_112
#define CFGBYTE_U8_MS_LNZ_ENTRY_113_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E1UL)))    //4E1 - ms_lnz_entry_113
#define CFGBYTE_U8_MS_LNZ_ENTRY_113_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E2UL)))    //4E2 - ms_lnz_entry_113
#define CFGBYTE_U8_MS_LNZ_ENTRY_114_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E3UL)))    //4E3 - ms_lnz_entry_114
#define CFGBYTE_U8_MS_LNZ_ENTRY_114_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E4UL)))    //4E4 - ms_lnz_entry_114
#define CFGBYTE_U8_MS_LNZ_ENTRY_115_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E5UL)))    //4E5 - ms_lnz_entry_115
#define CFGBYTE_U8_MS_LNZ_ENTRY_115_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E6UL)))    //4E6 - ms_lnz_entry_115
#define CFGBYTE_U8_MS_LNZ_ENTRY_116_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E7UL)))    //4E7 - ms_lnz_entry_116
#define CFGBYTE_U8_MS_LNZ_ENTRY_116_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E8UL)))    //4E8 - ms_lnz_entry_116
#define CFGBYTE_U8_MS_LNZ_ENTRY_117_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4E9UL)))    //4E9 - ms_lnz_entry_117
#define CFGBYTE_U8_MS_LNZ_ENTRY_117_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4EAUL)))    //4EA - ms_lnz_entry_117
#define CFGBYTE_U8_MS_LNZ_ENTRY_118_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4EBUL)))    //4EB - ms_lnz_entry_118
#define CFGBYTE_U8_MS_LNZ_ENTRY_118_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4ECUL)))    //4EC - ms_lnz_entry_118
#define CFGBYTE_U8_MS_LNZ_ENTRY_119_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4EDUL)))    //4ED - ms_lnz_entry_119
#define CFGBYTE_U8_MS_LNZ_ENTRY_119_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4EEUL)))    //4EE - ms_lnz_entry_119
#define CFGBYTE_U8_MS_LNZ_ENTRY_120_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4EFUL)))    //4EF - ms_lnz_entry_120
#define CFGBYTE_U8_MS_LNZ_ENTRY_120_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F0UL)))    //4F0 - ms_lnz_entry_120
#define CFGBYTE_U8_MS_LNZ_ENTRY_121_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F1UL)))    //4F1 - ms_lnz_entry_121
#define CFGBYTE_U8_MS_LNZ_ENTRY_121_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F2UL)))    //4F2 - ms_lnz_entry_121
#define CFGBYTE_U8_MS_LNZ_ENTRY_122_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F3UL)))    //4F3 - ms_lnz_entry_122
#define CFGBYTE_U8_MS_LNZ_ENTRY_122_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F4UL)))    //4F4 - ms_lnz_entry_122
#define CFGBYTE_U8_MS_LNZ_ENTRY_123_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F5UL)))    //4F5 - ms_lnz_entry_123
#define CFGBYTE_U8_MS_LNZ_ENTRY_123_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F6UL)))    //4F6 - ms_lnz_entry_123
#define CFGBYTE_U8_MS_LNZ_ENTRY_124_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F7UL)))    //4F7 - ms_lnz_entry_124
#define CFGBYTE_U8_MS_LNZ_ENTRY_124_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F8UL)))    //4F8 - ms_lnz_entry_124
#define CFGBYTE_U8_MS_LNZ_ENTRY_125_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4F9UL)))    //4F9 - ms_lnz_entry_125
#define CFGBYTE_U8_MS_LNZ_ENTRY_125_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4FAUL)))    //4FA - ms_lnz_entry_125
#define CFGBYTE_U8_MS_LNZ_ENTRY_126_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4FBUL)))    //4FB - ms_lnz_entry_126
#define CFGBYTE_U8_MS_LNZ_ENTRY_126_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4FCUL)))    //4FC - ms_lnz_entry_126
#define CFGBYTE_U8_MS_LNZ_ENTRY_127_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4FDUL)))    //4FD - ms_lnz_entry_127
#define CFGBYTE_U8_MS_LNZ_ENTRY_127_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x4FEUL)))    //4FE - ms_lnz_entry_127
#define CFGBYTE_U8_MS_LNZ_ENTRY_128_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x4FFUL)))    //4FF - ms_lnz_entry_128
#define CFGBYTE_U8_MS_LNZ_ENTRY_128_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x500UL)))    //500 - ms_lnz_entry_128
#define CFGBYTE_U8_MS_LNZ_ENTRY_129_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x501UL)))    //501 - ms_lnz_entry_129
#define CFGBYTE_U8_MS_LNZ_ENTRY_129_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x502UL)))    //502 - ms_lnz_entry_129
#define CFGBYTE_U8_MS_LNZ_ENTRY_130_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x503UL)))    //503 - ms_lnz_entry_130
#define CFGBYTE_U8_MS_LNZ_ENTRY_130_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x504UL)))    //504 - ms_lnz_entry_130
#define CFGBYTE_U8_MS_LNZ_ENTRY_131_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x505UL)))    //505 - ms_lnz_entry_131
#define CFGBYTE_U8_MS_LNZ_ENTRY_131_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x506UL)))    //506 - ms_lnz_entry_131
#define CFGBYTE_U8_MS_LNZ_ENTRY_132_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x507UL)))    //507 - ms_lnz_entry_132
#define CFGBYTE_U8_MS_LNZ_ENTRY_132_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x508UL)))    //508 - ms_lnz_entry_132
#define CFGBYTE_U8_MS_LNZ_ENTRY_133_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x509UL)))    //509 - ms_lnz_entry_133
#define CFGBYTE_U8_MS_LNZ_ENTRY_133_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x50AUL)))    //50A - ms_lnz_entry_133
#define CFGBYTE_U8_MS_LNZ_ENTRY_134_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x50BUL)))    //50B - ms_lnz_entry_134
#define CFGBYTE_U8_MS_LNZ_ENTRY_134_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x50CUL)))    //50C - ms_lnz_entry_134
#define CFGBYTE_U8_MS_LNZ_ENTRY_135_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x50DUL)))    //50D - ms_lnz_entry_135
#define CFGBYTE_U8_MS_LNZ_ENTRY_135_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x50EUL)))    //50E - ms_lnz_entry_135
#define CFGBYTE_U8_MS_LNZ_ENTRY_136_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x50FUL)))    //50F - ms_lnz_entry_136
#define CFGBYTE_U8_MS_LNZ_ENTRY_136_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x510UL)))    //510 - ms_lnz_entry_136
#define CFGBYTE_U8_MS_LNZ_ENTRY_137_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x511UL)))    //511 - ms_lnz_entry_137
#define CFGBYTE_U8_MS_LNZ_ENTRY_137_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x512UL)))    //512 - ms_lnz_entry_137
#define CFGBYTE_U8_MS_LNZ_ENTRY_138_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x513UL)))    //513 - ms_lnz_entry_138
#define CFGBYTE_U8_MS_LNZ_ENTRY_138_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x514UL)))    //514 - ms_lnz_entry_138
#define CFGBYTE_U8_MS_LNZ_ENTRY_139_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x515UL)))    //515 - ms_lnz_entry_139
#define CFGBYTE_U8_MS_LNZ_ENTRY_139_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x516UL)))    //516 - ms_lnz_entry_139
#define CFGBYTE_U8_MS_LNZ_ENTRY_140_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x517UL)))    //517 - ms_lnz_entry_140
#define CFGBYTE_U8_MS_LNZ_ENTRY_140_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x518UL)))    //518 - ms_lnz_entry_140
#define CFGBYTE_U8_MS_LNZ_ENTRY_141_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x519UL)))    //519 - ms_lnz_entry_141
#define CFGBYTE_U8_MS_LNZ_ENTRY_141_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x51AUL)))    //51A - ms_lnz_entry_141
#define CFGBYTE_U8_MS_LNZ_ENTRY_142_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x51BUL)))    //51B - ms_lnz_entry_142
#define CFGBYTE_U8_MS_LNZ_ENTRY_142_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x51CUL)))    //51C - ms_lnz_entry_142
#define CFGBYTE_U8_MS_LNZ_ENTRY_143_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x51DUL)))    //51D - ms_lnz_entry_143
#define CFGBYTE_U8_MS_LNZ_ENTRY_143_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x51EUL)))    //51E - ms_lnz_entry_143
#define CFGBYTE_U8_MS_LNZ_ENTRY_144_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x51FUL)))    //51F - ms_lnz_entry_144
#define CFGBYTE_U8_MS_LNZ_ENTRY_144_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x520UL)))    //520 - ms_lnz_entry_144
#define CFGBYTE_U8_MS_LNZ_ENTRY_145_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x521UL)))    //521 - ms_lnz_entry_145
#define CFGBYTE_U8_MS_LNZ_ENTRY_145_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x522UL)))    //522 - ms_lnz_entry_145
#define CFGBYTE_U8_MS_LNZ_ENTRY_146_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x523UL)))    //523 - ms_lnz_entry_146
#define CFGBYTE_U8_MS_LNZ_ENTRY_146_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x524UL)))    //524 - ms_lnz_entry_146
#define CFGBYTE_U8_MS_LNZ_ENTRY_147_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x525UL)))    //525 - ms_lnz_entry_147
#define CFGBYTE_U8_MS_LNZ_ENTRY_147_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x526UL)))    //526 - ms_lnz_entry_147
#define CFGBYTE_U8_MS_LNZ_ENTRY_148_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x527UL)))    //527 - ms_lnz_entry_148
#define CFGBYTE_U8_MS_LNZ_ENTRY_148_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x528UL)))    //528 - ms_lnz_entry_148
#define CFGBYTE_U8_MS_LNZ_ENTRY_149_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x529UL)))    //529 - ms_lnz_entry_149
#define CFGBYTE_U8_MS_LNZ_ENTRY_149_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x52AUL)))    //52A - ms_lnz_entry_149
#define CFGBYTE_U8_MS_LNZ_ENTRY_150_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x52BUL)))    //52B - ms_lnz_entry_150
#define CFGBYTE_U8_MS_LNZ_ENTRY_150_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x52CUL)))    //52C - ms_lnz_entry_150
#define CFGBYTE_U8_MS_LNZ_ENTRY_151_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x52DUL)))    //52D - ms_lnz_entry_151
#define CFGBYTE_U8_MS_LNZ_ENTRY_151_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x52EUL)))    //52E - ms_lnz_entry_151
#define CFGBYTE_U8_MS_LNZ_ENTRY_152_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x52FUL)))    //52F - ms_lnz_entry_152
#define CFGBYTE_U8_MS_LNZ_ENTRY_152_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x530UL)))    //530 - ms_lnz_entry_152
#define CFGBYTE_U8_MS_LNZ_ENTRY_153_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x531UL)))    //531 - ms_lnz_entry_153
#define CFGBYTE_U8_MS_LNZ_ENTRY_153_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x532UL)))    //532 - ms_lnz_entry_153
#define CFGBYTE_U8_MS_LNZ_ENTRY_154_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x533UL)))    //533 - ms_lnz_entry_154
#define CFGBYTE_U8_MS_LNZ_ENTRY_154_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x534UL)))    //534 - ms_lnz_entry_154
#define CFGBYTE_U8_MS_LNZ_ENTRY_155_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x535UL)))    //535 - ms_lnz_entry_155
#define CFGBYTE_U8_MS_LNZ_ENTRY_155_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x536UL)))    //536 - ms_lnz_entry_155
#define CFGBYTE_U8_MS_LNZ_ENTRY_156_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x537UL)))    //537 - ms_lnz_entry_156
#define CFGBYTE_U8_MS_LNZ_ENTRY_156_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x538UL)))    //538 - ms_lnz_entry_156
#define CFGBYTE_U8_MS_LNZ_ENTRY_157_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x539UL)))    //539 - ms_lnz_entry_157
#define CFGBYTE_U8_MS_LNZ_ENTRY_157_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x53AUL)))    //53A - ms_lnz_entry_157
#define CFGBYTE_U8_MS_LNZ_ENTRY_158_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x53BUL)))    //53B - ms_lnz_entry_158
#define CFGBYTE_U8_MS_LNZ_ENTRY_158_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x53CUL)))    //53C - ms_lnz_entry_158
#define CFGBYTE_U8_MS_LNZ_ENTRY_159_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x53DUL)))    //53D - ms_lnz_entry_159
#define CFGBYTE_U8_MS_LNZ_ENTRY_159_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x53EUL)))    //53E - ms_lnz_entry_159
#define CFGBYTE_U8_MS_LNZ_ENTRY_160_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x53FUL)))    //53F - ms_lnz_entry_160
#define CFGBYTE_U8_MS_LNZ_ENTRY_160_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x540UL)))    //540 - ms_lnz_entry_160
#define CFGBYTE_U8_MS_LNZ_ENTRY_161_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x541UL)))    //541 - ms_lnz_entry_161
#define CFGBYTE_U8_MS_LNZ_ENTRY_161_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x542UL)))    //542 - ms_lnz_entry_161
#define CFGBYTE_U8_MS_LNZ_ENTRY_162_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x543UL)))    //543 - ms_lnz_entry_162
#define CFGBYTE_U8_MS_LNZ_ENTRY_162_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x544UL)))    //544 - ms_lnz_entry_162
#define CFGBYTE_U8_MS_LNZ_ENTRY_163_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x545UL)))    //545 - ms_lnz_entry_163
#define CFGBYTE_U8_MS_LNZ_ENTRY_163_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x546UL)))    //546 - ms_lnz_entry_163
#define CFGBYTE_U8_MS_LNZ_ENTRY_164_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x547UL)))    //547 - ms_lnz_entry_164
#define CFGBYTE_U8_MS_LNZ_ENTRY_164_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x548UL)))    //548 - ms_lnz_entry_164
#define CFGBYTE_U8_MS_LNZ_ENTRY_165_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x549UL)))    //549 - ms_lnz_entry_165
#define CFGBYTE_U8_MS_LNZ_ENTRY_165_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x54AUL)))    //54A - ms_lnz_entry_165
#define CFGBYTE_U8_MS_LNZ_ENTRY_166_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x54BUL)))    //54B - ms_lnz_entry_166
#define CFGBYTE_U8_MS_LNZ_ENTRY_166_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x54CUL)))    //54C - ms_lnz_entry_166
#define CFGBYTE_U8_MS_LNZ_ENTRY_167_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x54DUL)))    //54D - ms_lnz_entry_167
#define CFGBYTE_U8_MS_LNZ_ENTRY_167_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x54EUL)))    //54E - ms_lnz_entry_167
#define CFGBYTE_U8_MS_LNZ_ENTRY_168_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x54FUL)))    //54F - ms_lnz_entry_168
#define CFGBYTE_U8_MS_LNZ_ENTRY_168_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x550UL)))    //550 - ms_lnz_entry_168
#define CFGBYTE_U8_MS_LNZ_ENTRY_169_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x551UL)))    //551 - ms_lnz_entry_169
#define CFGBYTE_U8_MS_LNZ_ENTRY_169_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x552UL)))    //552 - ms_lnz_entry_169
#define CFGBYTE_U8_MS_LNZ_ENTRY_170_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x553UL)))    //553 - ms_lnz_entry_170
#define CFGBYTE_U8_MS_LNZ_ENTRY_170_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x554UL)))    //554 - ms_lnz_entry_170
#define CFGBYTE_U8_MS_LNZ_ENTRY_171_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x555UL)))    //555 - ms_lnz_entry_171
#define CFGBYTE_U8_MS_LNZ_ENTRY_171_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x556UL)))    //556 - ms_lnz_entry_171
#define CFGBYTE_U8_MS_LNZ_ENTRY_172_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x557UL)))    //557 - ms_lnz_entry_172
#define CFGBYTE_U8_MS_LNZ_ENTRY_172_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x558UL)))    //558 - ms_lnz_entry_172
#define CFGBYTE_U8_MS_LNZ_ENTRY_173_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x559UL)))    //559 - ms_lnz_entry_173
#define CFGBYTE_U8_MS_LNZ_ENTRY_173_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x55AUL)))    //55A - ms_lnz_entry_173
#define CFGBYTE_U8_MS_LNZ_ENTRY_174_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x55BUL)))    //55B - ms_lnz_entry_174
#define CFGBYTE_U8_MS_LNZ_ENTRY_174_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x55CUL)))    //55C - ms_lnz_entry_174
#define CFGBYTE_U8_MS_LNZ_ENTRY_175_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x55DUL)))    //55D - ms_lnz_entry_175
#define CFGBYTE_U8_MS_LNZ_ENTRY_175_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x55EUL)))    //55E - ms_lnz_entry_175
#define CFGBYTE_U8_MS_LNZ_ENTRY_176_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x55FUL)))    //55F - ms_lnz_entry_176
#define CFGBYTE_U8_MS_LNZ_ENTRY_176_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x560UL)))    //560 - ms_lnz_entry_176
#define CFGBYTE_U8_MS_LNZ_ENTRY_177_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x561UL)))    //561 - ms_lnz_entry_177
#define CFGBYTE_U8_MS_LNZ_ENTRY_177_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x562UL)))    //562 - ms_lnz_entry_177
#define CFGBYTE_U8_MS_LNZ_ENTRY_178_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x563UL)))    //563 - ms_lnz_entry_178
#define CFGBYTE_U8_MS_LNZ_ENTRY_178_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x564UL)))    //564 - ms_lnz_entry_178
#define CFGBYTE_U8_MS_LNZ_ENTRY_179_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x565UL)))    //565 - ms_lnz_entry_179
#define CFGBYTE_U8_MS_LNZ_ENTRY_179_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x566UL)))    //566 - ms_lnz_entry_179
#define CFGBYTE_U8_MS_LNZ_ENTRY_180_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x567UL)))    //567 - ms_lnz_entry_180
#define CFGBYTE_U8_MS_LNZ_ENTRY_180_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x568UL)))    //568 - ms_lnz_entry_180
#define CFGBYTE_U8_MS_LNZ_ENTRY_181_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x569UL)))    //569 - ms_lnz_entry_181
#define CFGBYTE_U8_MS_LNZ_ENTRY_181_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x56AUL)))    //56A - ms_lnz_entry_181
#define CFGBYTE_U8_MS_LNZ_ENTRY_182_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x56BUL)))    //56B - ms_lnz_entry_182
#define CFGBYTE_U8_MS_LNZ_ENTRY_182_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x56CUL)))    //56C - ms_lnz_entry_182
#define CFGBYTE_U8_MS_LNZ_ENTRY_183_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x56DUL)))    //56D - ms_lnz_entry_183
#define CFGBYTE_U8_MS_LNZ_ENTRY_183_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x56EUL)))    //56E - ms_lnz_entry_183
#define CFGBYTE_U8_MS_LNZ_ENTRY_184_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x56FUL)))    //56F - ms_lnz_entry_184
#define CFGBYTE_U8_MS_LNZ_ENTRY_184_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x570UL)))    //570 - ms_lnz_entry_184
#define CFGBYTE_U8_MS_LNZ_ENTRY_185_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x571UL)))    //571 - ms_lnz_entry_185
#define CFGBYTE_U8_MS_LNZ_ENTRY_185_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x572UL)))    //572 - ms_lnz_entry_185
#define CFGBYTE_U8_MS_LNZ_ENTRY_186_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x573UL)))    //573 - ms_lnz_entry_186
#define CFGBYTE_U8_MS_LNZ_ENTRY_186_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x574UL)))    //574 - ms_lnz_entry_186
#define CFGBYTE_U8_MS_LNZ_ENTRY_187_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x575UL)))    //575 - ms_lnz_entry_187
#define CFGBYTE_U8_MS_LNZ_ENTRY_187_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x576UL)))    //576 - ms_lnz_entry_187
#define CFGBYTE_U8_MS_LNZ_ENTRY_188_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x577UL)))    //577 - ms_lnz_entry_188
#define CFGBYTE_U8_MS_LNZ_ENTRY_188_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x578UL)))    //578 - ms_lnz_entry_188
#define CFGBYTE_U8_MS_LNZ_ENTRY_189_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x579UL)))    //579 - ms_lnz_entry_189
#define CFGBYTE_U8_MS_LNZ_ENTRY_189_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x57AUL)))    //57A - ms_lnz_entry_189
#define CFGBYTE_U8_MS_LNZ_ENTRY_190_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x57BUL)))    //57B - ms_lnz_entry_190
#define CFGBYTE_U8_MS_LNZ_ENTRY_190_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x57CUL)))    //57C - ms_lnz_entry_190
#define CFGBYTE_U8_MS_LNZ_ENTRY_191_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x57DUL)))    //57D - ms_lnz_entry_191
#define CFGBYTE_U8_MS_LNZ_ENTRY_191_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x57EUL)))    //57E - ms_lnz_entry_191
#define CFGBYTE_U8_MS_LNZ_ENTRY_192_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x57FUL)))    //57F - ms_lnz_entry_192
#define CFGBYTE_U8_MS_LNZ_ENTRY_192_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x580UL)))    //580 - ms_lnz_entry_192
#define CFGBYTE_U8_MS_LNZ_ENTRY_193_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x581UL)))    //581 - ms_lnz_entry_193
#define CFGBYTE_U8_MS_LNZ_ENTRY_193_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x582UL)))    //582 - ms_lnz_entry_193
#define CFGBYTE_U8_MS_LNZ_ENTRY_194_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x583UL)))    //583 - ms_lnz_entry_194
#define CFGBYTE_U8_MS_LNZ_ENTRY_194_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x584UL)))    //584 - ms_lnz_entry_194
#define CFGBYTE_U8_MS_LNZ_ENTRY_195_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x585UL)))    //585 - ms_lnz_entry_195
#define CFGBYTE_U8_MS_LNZ_ENTRY_195_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x586UL)))    //586 - ms_lnz_entry_195
#define CFGBYTE_U8_MS_LNZ_ENTRY_196_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x587UL)))    //587 - ms_lnz_entry_196
#define CFGBYTE_U8_MS_LNZ_ENTRY_196_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x588UL)))    //588 - ms_lnz_entry_196
#define CFGBYTE_U8_MS_LNZ_ENTRY_197_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x589UL)))    //589 - ms_lnz_entry_197
#define CFGBYTE_U8_MS_LNZ_ENTRY_197_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x58AUL)))    //58A - ms_lnz_entry_197
#define CFGBYTE_U8_MS_LNZ_ENTRY_198_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x58BUL)))    //58B - ms_lnz_entry_198
#define CFGBYTE_U8_MS_LNZ_ENTRY_198_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x58CUL)))    //58C - ms_lnz_entry_198
#define CFGBYTE_U8_MS_LNZ_ENTRY_199_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x58DUL)))    //58D - ms_lnz_entry_199
#define CFGBYTE_U8_MS_LNZ_ENTRY_199_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x58EUL)))    //58E - ms_lnz_entry_199
#define CFGBYTE_U8_OS_COEF_CFG0             (*((uint8_t *)((uint32_t)fwCfgp + 0x591UL)))    //591 - os_coef_cfg0
#define CFGBYTE_U8_OS_COEF_CFG1             (*((uint8_t *)((uint32_t)fwCfgp + 0x592UL)))    //592 - os_coef_cfg1
#define CFGBYTE_U8_OS_COEF_CFG2             (*((uint8_t *)((uint32_t)fwCfgp + 0x593UL)))    //593 - os_coef_cfg2
#define CFGBYTE_U8_OS_COEF_CFG3             (*((uint8_t *)((uint32_t)fwCfgp + 0x594UL)))    //594 - os_coef_cfg3
#define CFGBYTE_U8_OS_COEF_CFG4             (*((uint8_t *)((uint32_t)fwCfgp + 0x595UL)))    //595 - os_coef_cfg4
#define CFGBYTE_U8_OS_COEF_CFG5             (*((uint8_t *)((uint32_t)fwCfgp + 0x596UL)))    //596 - os_coef_cfg5
#define CFGBYTE_U8_OS_COEF_CFG6             (*((uint8_t *)((uint32_t)fwCfgp + 0x597UL)))    //597 - os_coef_cfg6
#define CFGBYTE_U8_OS_COEF_CFG7             (*((uint8_t *)((uint32_t)fwCfgp + 0x598UL)))    //598 - os_coef_cfg7
#define CFGBYTE_U8_OS_COEF_CFG8             (*((uint8_t *)((uint32_t)fwCfgp + 0x599UL)))    //599 - os_coef_cfg8
#define CFGBYTE_U8_OS_COEF_CFG9             (*((uint8_t *)((uint32_t)fwCfgp + 0x59AUL)))    //59A - os_coef_cfg9
#define CFGBYTE_U8_OS_COEF_CFG10            (*((uint8_t *)((uint32_t)fwCfgp + 0x59BUL)))    //59B - os_coef_cfg10
#define CFGBYTE_U8_OS_COEF_CFG11            (*((uint8_t *)((uint32_t)fwCfgp + 0x59CUL)))    //59C - os_coef_cfg11
#define CFGBYTE_U8_OS_COEF_CFG12            (*((uint8_t *)((uint32_t)fwCfgp + 0x59DUL)))    //59D - os_coef_cfg12
#define CFGBYTE_U8_OS_COEF_CFG13            (*((uint8_t *)((uint32_t)fwCfgp + 0x59EUL)))    //59E - os_coef_cfg13
#define CFGBYTE_U8_OS_COEF_CFG14            (*((uint8_t *)((uint32_t)fwCfgp + 0x59FUL)))    //59F - os_coef_cfg14
#define CFGBYTE_U8_OS_COEF_CFG15            (*((uint8_t *)((uint32_t)fwCfgp + 0x5A0UL)))    //5A0 - os_coef_cfg15
#define CFGBYTE_U8_OS_COEF_CFG16            (*((uint8_t *)((uint32_t)fwCfgp + 0x5A1UL)))    //5A1 - os_coef_cfg16
#define CFGBYTE_U8_OS_COEF_CFG17            (*((uint8_t *)((uint32_t)fwCfgp + 0x5A2UL)))    //5A2 - os_coef_cfg17
#define CFGBYTE_U8_OS_COEF_CFG18            (*((uint8_t *)((uint32_t)fwCfgp + 0x5A3UL)))    //5A3 - os_coef_cfg18
#define CFGBYTE_U8_OS_COEF_CFG19            (*((uint8_t *)((uint32_t)fwCfgp + 0x5A4UL)))    //5A4 - os_coef_cfg19
#define CFGBYTE_U8_OS_COEF_0_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5A5UL)))    //5A5 - os_coef_0
#define CFGBYTE_U8_OS_COEF_0_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5A6UL)))    //5A6 - os_coef_0
#define CFGBYTE_U8_OS_COEF_1_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5A7UL)))    //5A7 - os_coef_1
#define CFGBYTE_U8_OS_COEF_1_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5A8UL)))    //5A8 - os_coef_1
#define CFGBYTE_U8_OS_COEF_2_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5A9UL)))    //5A9 - os_coef_2
#define CFGBYTE_U8_OS_COEF_2_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5AAUL)))    //5AA - os_coef_2
#define CFGBYTE_U8_OS_COEF_3_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5ABUL)))    //5AB - os_coef_3
#define CFGBYTE_U8_OS_COEF_3_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5ACUL)))    //5AC - os_coef_3
#define CFGBYTE_U8_OS_COEF_4_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5ADUL)))    //5AD - os_coef_4
#define CFGBYTE_U8_OS_COEF_4_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5AEUL)))    //5AE - os_coef_4
#define CFGBYTE_U8_OS_COEF_5_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5AFUL)))    //5AF - os_coef_5
#define CFGBYTE_U8_OS_COEF_5_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B0UL)))    //5B0 - os_coef_5
#define CFGBYTE_U8_OS_COEF_6_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B1UL)))    //5B1 - os_coef_6
#define CFGBYTE_U8_OS_COEF_6_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B2UL)))    //5B2 - os_coef_6
#define CFGBYTE_U8_OS_COEF_7_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B3UL)))    //5B3 - os_coef_7
#define CFGBYTE_U8_OS_COEF_7_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B4UL)))    //5B4 - os_coef_7
#define CFGBYTE_U8_OS_COEF_8_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B5UL)))    //5B5 - os_coef_8
#define CFGBYTE_U8_OS_COEF_8_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B6UL)))    //5B6 - os_coef_8
#define CFGBYTE_U8_OS_COEF_9_0              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B7UL)))    //5B7 - os_coef_9
#define CFGBYTE_U8_OS_COEF_9_1              (*((uint8_t *)((uint32_t)fwCfgp + 0x5B8UL)))    //5B8 - os_coef_9
#define CFGBYTE_U8_OS_COEF_10_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5B9UL)))    //5B9 - os_coef_10
#define CFGBYTE_U8_OS_COEF_10_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5BAUL)))    //5BA - os_coef_10
#define CFGBYTE_U8_OS_COEF_11_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5BBUL)))    //5BB - os_coef_11
#define CFGBYTE_U8_OS_COEF_11_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5BCUL)))    //5BC - os_coef_11
#define CFGBYTE_U8_OS_COEF_12_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5BDUL)))    //5BD - os_coef_12
#define CFGBYTE_U8_OS_COEF_12_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5BEUL)))    //5BE - os_coef_12
#define CFGBYTE_U8_OS_COEF_13_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5BFUL)))    //5BF - os_coef_13
#define CFGBYTE_U8_OS_COEF_13_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C0UL)))    //5C0 - os_coef_13
#define CFGBYTE_U8_OS_COEF_14_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C1UL)))    //5C1 - os_coef_14
#define CFGBYTE_U8_OS_COEF_14_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C2UL)))    //5C2 - os_coef_14
#define CFGBYTE_U8_OS_COEF_15_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C3UL)))    //5C3 - os_coef_15
#define CFGBYTE_U8_OS_COEF_15_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C4UL)))    //5C4 - os_coef_15
#define CFGBYTE_U8_OS_COEF_16_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C5UL)))    //5C5 - os_coef_16
#define CFGBYTE_U8_OS_COEF_16_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C6UL)))    //5C6 - os_coef_16
#define CFGBYTE_U8_OS_COEF_17_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C7UL)))    //5C7 - os_coef_17
#define CFGBYTE_U8_OS_COEF_17_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C8UL)))    //5C8 - os_coef_17
#define CFGBYTE_U8_OS_COEF_18_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5C9UL)))    //5C9 - os_coef_18
#define CFGBYTE_U8_OS_COEF_18_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5CAUL)))    //5CA - os_coef_18
#define CFGBYTE_U8_OS_COEF_19_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5CBUL)))    //5CB - os_coef_19
#define CFGBYTE_U8_OS_COEF_19_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5CCUL)))    //5CC - os_coef_19
#define CFGBYTE_U8_OS_COEF_20_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5CDUL)))    //5CD - os_coef_20
#define CFGBYTE_U8_OS_COEF_20_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5CEUL)))    //5CE - os_coef_20
#define CFGBYTE_U8_OS_COEF_21_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5CFUL)))    //5CF - os_coef_21
#define CFGBYTE_U8_OS_COEF_21_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D0UL)))    //5D0 - os_coef_21
#define CFGBYTE_U8_OS_COEF_22_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D1UL)))    //5D1 - os_coef_22
#define CFGBYTE_U8_OS_COEF_22_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D2UL)))    //5D2 - os_coef_22
#define CFGBYTE_U8_OS_COEF_23_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D3UL)))    //5D3 - os_coef_23
#define CFGBYTE_U8_OS_COEF_23_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D4UL)))    //5D4 - os_coef_23
#define CFGBYTE_U8_OS_COEF_24_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D5UL)))    //5D5 - os_coef_24
#define CFGBYTE_U8_OS_COEF_24_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D6UL)))    //5D6 - os_coef_24
#define CFGBYTE_U8_OS_COEF_25_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D7UL)))    //5D7 - os_coef_25
#define CFGBYTE_U8_OS_COEF_25_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D8UL)))    //5D8 - os_coef_25
#define CFGBYTE_U8_OS_COEF_26_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5D9UL)))    //5D9 - os_coef_26
#define CFGBYTE_U8_OS_COEF_26_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5DAUL)))    //5DA - os_coef_26
#define CFGBYTE_U8_OS_COEF_27_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5DBUL)))    //5DB - os_coef_27
#define CFGBYTE_U8_OS_COEF_27_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5DCUL)))    //5DC - os_coef_27
#define CFGBYTE_U8_OS_COEF_28_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5DDUL)))    //5DD - os_coef_28
#define CFGBYTE_U8_OS_COEF_28_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5DEUL)))    //5DE - os_coef_28
#define CFGBYTE_U8_OS_COEF_29_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5DFUL)))    //5DF - os_coef_29
#define CFGBYTE_U8_OS_COEF_29_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E0UL)))    //5E0 - os_coef_29
#define CFGBYTE_U8_OS_COEF_30_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E1UL)))    //5E1 - os_coef_30
#define CFGBYTE_U8_OS_COEF_30_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E2UL)))    //5E2 - os_coef_30
#define CFGBYTE_U8_OS_COEF_31_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E3UL)))    //5E3 - os_coef_31
#define CFGBYTE_U8_OS_COEF_31_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E4UL)))    //5E4 - os_coef_31
#define CFGBYTE_U8_OS_COEF_32_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E5UL)))    //5E5 - os_coef_32
#define CFGBYTE_U8_OS_COEF_32_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E6UL)))    //5E6 - os_coef_32
#define CFGBYTE_U8_OS_COEF_33_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E7UL)))    //5E7 - os_coef_33
#define CFGBYTE_U8_OS_COEF_33_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E8UL)))    //5E8 - os_coef_33
#define CFGBYTE_U8_OS_COEF_34_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5E9UL)))    //5E9 - os_coef_34
#define CFGBYTE_U8_OS_COEF_34_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5EAUL)))    //5EA - os_coef_34
#define CFGBYTE_U8_OS_COEF_35_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5EBUL)))    //5EB - os_coef_35
#define CFGBYTE_U8_OS_COEF_35_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5ECUL)))    //5EC - os_coef_35
#define CFGBYTE_U8_OS_COEF_36_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5EDUL)))    //5ED - os_coef_36
#define CFGBYTE_U8_OS_COEF_36_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5EEUL)))    //5EE - os_coef_36
#define CFGBYTE_U8_OS_COEF_37_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5EFUL)))    //5EF - os_coef_37
#define CFGBYTE_U8_OS_COEF_37_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F0UL)))    //5F0 - os_coef_37
#define CFGBYTE_U8_OS_COEF_38_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F1UL)))    //5F1 - os_coef_38
#define CFGBYTE_U8_OS_COEF_38_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F2UL)))    //5F2 - os_coef_38
#define CFGBYTE_U8_OS_COEF_39_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F3UL)))    //5F3 - os_coef_39
#define CFGBYTE_U8_OS_COEF_39_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F4UL)))    //5F4 - os_coef_39
#define CFGBYTE_U8_OS_COEF_40_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F5UL)))    //5F5 - os_coef_40
#define CFGBYTE_U8_OS_COEF_40_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F6UL)))    //5F6 - os_coef_40
#define CFGBYTE_U8_OS_COEF_41_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F7UL)))    //5F7 - os_coef_41
#define CFGBYTE_U8_OS_COEF_41_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F8UL)))    //5F8 - os_coef_41
#define CFGBYTE_U8_OS_COEF_42_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5F9UL)))    //5F9 - os_coef_42
#define CFGBYTE_U8_OS_COEF_42_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5FAUL)))    //5FA - os_coef_42
#define CFGBYTE_U8_OS_COEF_43_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5FBUL)))    //5FB - os_coef_43
#define CFGBYTE_U8_OS_COEF_43_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5FCUL)))    //5FC - os_coef_43
#define CFGBYTE_U8_OS_COEF_44_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5FDUL)))    //5FD - os_coef_44
#define CFGBYTE_U8_OS_COEF_44_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x5FEUL)))    //5FE - os_coef_44
#define CFGBYTE_U8_OS_COEF_45_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x5FFUL)))    //5FF - os_coef_45
#define CFGBYTE_U8_OS_COEF_45_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x600UL)))    //600 - os_coef_45
#define CFGBYTE_U8_OS_COEF_46_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x601UL)))    //601 - os_coef_46
#define CFGBYTE_U8_OS_COEF_46_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x602UL)))    //602 - os_coef_46
#define CFGBYTE_U8_OS_COEF_47_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x603UL)))    //603 - os_coef_47
#define CFGBYTE_U8_OS_COEF_47_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x604UL)))    //604 - os_coef_47
#define CFGBYTE_U8_OS_COEF_48_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x605UL)))    //605 - os_coef_48
#define CFGBYTE_U8_OS_COEF_48_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x606UL)))    //606 - os_coef_48
#define CFGBYTE_U8_OS_COEF_49_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x607UL)))    //607 - os_coef_49
#define CFGBYTE_U8_OS_COEF_49_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x608UL)))    //608 - os_coef_49
#define CFGBYTE_U8_OS_COEF_50_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x609UL)))    //609 - os_coef_50
#define CFGBYTE_U8_OS_COEF_50_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x60AUL)))    //60A - os_coef_50
#define CFGBYTE_U8_OS_COEF_51_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x60BUL)))    //60B - os_coef_51
#define CFGBYTE_U8_OS_COEF_51_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x60CUL)))    //60C - os_coef_51
#define CFGBYTE_U8_OS_COEF_52_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x60DUL)))    //60D - os_coef_52
#define CFGBYTE_U8_OS_COEF_52_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x60EUL)))    //60E - os_coef_52
#define CFGBYTE_U8_OS_COEF_53_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x60FUL)))    //60F - os_coef_53
#define CFGBYTE_U8_OS_COEF_53_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x610UL)))    //610 - os_coef_53
#define CFGBYTE_U8_OS_COEF_54_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x611UL)))    //611 - os_coef_54
#define CFGBYTE_U8_OS_COEF_54_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x612UL)))    //612 - os_coef_54
#define CFGBYTE_U8_OS_COEF_55_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x613UL)))    //613 - os_coef_55
#define CFGBYTE_U8_OS_COEF_55_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x614UL)))    //614 - os_coef_55
#define CFGBYTE_U8_OS_COEF_56_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x615UL)))    //615 - os_coef_56
#define CFGBYTE_U8_OS_COEF_56_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x616UL)))    //616 - os_coef_56
#define CFGBYTE_U8_OS_COEF_57_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x617UL)))    //617 - os_coef_57
#define CFGBYTE_U8_OS_COEF_57_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x618UL)))    //618 - os_coef_57
#define CFGBYTE_U8_OS_COEF_58_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x619UL)))    //619 - os_coef_58
#define CFGBYTE_U8_OS_COEF_58_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x61AUL)))    //61A - os_coef_58
#define CFGBYTE_U8_OS_COEF_59_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x61BUL)))    //61B - os_coef_59
#define CFGBYTE_U8_OS_COEF_59_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x61CUL)))    //61C - os_coef_59
#define CFGBYTE_U8_OS_COEF_60_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x61DUL)))    //61D - os_coef_60
#define CFGBYTE_U8_OS_COEF_60_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x61EUL)))    //61E - os_coef_60
#define CFGBYTE_U8_OS_COEF_61_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x61FUL)))    //61F - os_coef_61
#define CFGBYTE_U8_OS_COEF_61_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x620UL)))    //620 - os_coef_61
#define CFGBYTE_U8_OS_COEF_62_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x621UL)))    //621 - os_coef_62
#define CFGBYTE_U8_OS_COEF_62_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x622UL)))    //622 - os_coef_62
#define CFGBYTE_U8_OS_COEF_63_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x623UL)))    //623 - os_coef_63
#define CFGBYTE_U8_OS_COEF_63_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x624UL)))    //624 - os_coef_63
#define CFGBYTE_U8_SS_DET_AFE_CFG0          (*((uint8_t *)((uint32_t)fwCfgp + 0x627UL)))    //627 - ss_det_afe_cfg0
#define CFGBYTE_U8_SS_DET_AFE_CFG1          (*((uint8_t *)((uint32_t)fwCfgp + 0x628UL)))    //628 - ss_det_afe_cfg1
#define CFGBYTE_U8_SS_DET_AFE_CFG2          (*((uint8_t *)((uint32_t)fwCfgp + 0x629UL)))    //629 - ss_det_afe_cfg2
#define CFGBYTE_U8_SS_DET_AFE_CFG3          (*((uint8_t *)((uint32_t)fwCfgp + 0x62AUL)))    //62A - ss_det_afe_cfg3
#define CFGBYTE_U8_SS_DET_AFE_CFG4          (*((uint8_t *)((uint32_t)fwCfgp + 0x62BUL)))    //62B - ss_det_afe_cfg4
#define CFGBYTE_U8_SS_DET_AFE_CFG5          (*((uint8_t *)((uint32_t)fwCfgp + 0x62CUL)))    //62C - ss_det_afe_cfg5
#define CFGBYTE_U8_SS_DET_R_CYC_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x62DUL)))    //62D - ss_det_r_cyc
#define CFGBYTE_U8_SS_DET_R_CYC_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x62EUL)))    //62E - ss_det_r_cyc
#define CFGBYTE_U8_SS_DET_T_CYC_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x62FUL)))    //62F - ss_det_t_cyc
#define CFGBYTE_U8_SS_DET_T_CYC_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x630UL)))    //630 - ss_det_t_cyc
#define CFGBYTE_U8_SS_DET_RL_CYC_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x631UL)))    //631 - ss_det_rl_cyc
#define CFGBYTE_U8_SS_DET_RL_CYC_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x632UL)))    //632 - ss_det_rl_cyc
#define CFGBYTE_U8_SS_DET_OS_DLY_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x633UL)))    //633 - ss_det_os_dly
#define CFGBYTE_U8_SS_DET_OS_DLY_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x634UL)))    //634 - ss_det_os_dly
#define CFGBYTE_U8_SS_DET_F_IX_RANGE_CFG_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x635UL)))    //635 - ss_det_f_ix_range_cfg_0
#define CFGBYTE_U8_SS_DET_F_IX_RANGE_CFG_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x636UL)))    //636 - ss_det_f_ix_range_cfg_1
#define CFGBYTE_U8_SS_DET_S_IX_RANGE_CFG_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x637UL)))    //637 - ss_det_s_ix_range_cfg_0
#define CFGBYTE_U8_SS_DET_S_IX_RANGE_CFG_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x638UL)))    //638 - ss_det_s_ix_range_cfg_1
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL0    (*((uint8_t *)((uint32_t)fwCfgp + 0x639UL)))    //639 - ss_det_high_res_prfl0
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL1    (*((uint8_t *)((uint32_t)fwCfgp + 0x63AUL)))    //63A - ss_det_high_res_prfl1
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL2    (*((uint8_t *)((uint32_t)fwCfgp + 0x63BUL)))    //63B - ss_det_high_res_prfl2
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL3    (*((uint8_t *)((uint32_t)fwCfgp + 0x63CUL)))    //63C - ss_det_high_res_prfl3
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL4    (*((uint8_t *)((uint32_t)fwCfgp + 0x63DUL)))    //63D - ss_det_high_res_prfl4
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL5    (*((uint8_t *)((uint32_t)fwCfgp + 0x63EUL)))    //63E - ss_det_high_res_prfl5
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL6_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x63FUL)))    //63F - ss_det_high_res_prfl6
#define CFGBYTE_U8_SS_DET_HIGH_RES_PRFL6_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x640UL)))    //640 - ss_det_high_res_prfl6
#define CFGBYTE_U8_GES_DBLTAP_1ST_TAP_LEAVE_TO  (*((uint8_t *)((uint32_t)fwCfgp + 0x645UL)))    //645 - ges_dbltap_1st_tap_leave_to
#define CFGBYTE_U8_GES_DBLTAP_2ND_TAP_ENTER_TO  (*((uint8_t *)((uint32_t)fwCfgp + 0x646UL)))    //646 - ges_dbltap_2nd_tap_enter_to
#define CFGBYTE_U8_GES_DBLTAP_2ND_TAP_LEAVE_TO  (*((uint8_t *)((uint32_t)fwCfgp + 0x647UL)))    //647 - ges_dbltap_2nd_tap_leave_to
#define CFGBYTE_U8_GES_DBLTAP_BOUNDARY_SKIP_X   (*((uint8_t *)((uint32_t)fwCfgp + 0x648UL)))    //648 - ges_dbltap_boundary_skip_x
#define CFGBYTE_U8_GES_DBLTAP_BOUNDARY_SKIP_Y   (*((uint8_t *)((uint32_t)fwCfgp + 0x649UL)))    //649 - ges_dbltap_boundary_skip_y
#define CFGBYTE_U8_GES_DBLTAP_TCH_AREA_MAX  (*((uint8_t *)((uint32_t)fwCfgp + 0x64AUL)))    //64A - ges_dbltap_tch_area_max
#define CFGBYTE_U8_GES_DBLTAP_AREA_DIFF_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x64BUL)))    //64B - ges_dbltap_area_diff_thres
#define CFGBYTE_U8_GES_DBLTAP_COOR_DIST_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x64CUL)))    //64C - ges_dbltap_coor_dist_thres
#define CFGBYTE_U8_GES_SHP_TCH_TO           (*((uint8_t *)((uint32_t)fwCfgp + 0x64DUL)))    //64D - ges_shp_tch_to
#define CFGBYTE_U8_GES_SHP_TCH_AREA_MAX     (*((uint8_t *)((uint32_t)fwCfgp + 0x64EUL)))    //64E - ges_shp_tch_area_max
#define CFGBYTE_U8_GES_SHP_LINE_MIN_INPUT   (*((uint8_t *)((uint32_t)fwCfgp + 0x64FUL)))    //64F - ges_shp_line_min_input
#define CFGBYTE_U8_GES_SHP_HLINE_MIN_DELTA_X    (*((uint8_t *)((uint32_t)fwCfgp + 0x650UL)))    //650 - ges_shp_hline_min_delta_x
#define CFGBYTE_U8_GES_SHP_HLINE_MAX_DELTA_Y    (*((uint8_t *)((uint32_t)fwCfgp + 0x651UL)))    //651 - ges_shp_hline_max_delta_y
#define CFGBYTE_U8_GES_SHP_VLINE_MAX_DELTA_X    (*((uint8_t *)((uint32_t)fwCfgp + 0x652UL)))    //652 - ges_shp_vline_max_delta_x
#define CFGBYTE_U8_GES_SHP_VLINE_MIN_DELTA_Y    (*((uint8_t *)((uint32_t)fwCfgp + 0x653UL)))    //653 - ges_shp_vline_min_delta_y
#define CFGBYTE_U8_GES_SHP_AVG_LINE_ERR_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x654UL)))    //654 - ges_shp_avg_line_err_thres
#define CFGBYTE_U8_GES_SHP_MAX_LINE_ERR_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x655UL)))    //655 - ges_shp_max_line_err_thres
#define CFGBYTE_U8_GES_SHP_LTR_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0x656UL)))    //656 - ges_shp_ltr_cfg
#define CFGBYTE_U8_GES_SHP_LTR_MIN_INPUT    (*((uint8_t *)((uint32_t)fwCfgp + 0x657UL)))    //657 - ges_shp_ltr_min_input
#define CFGBYTE_U8_GES_SHP_LTR_MIN_DELTA_X  (*((uint8_t *)((uint32_t)fwCfgp + 0x658UL)))    //658 - ges_shp_ltr_min_delta_x
#define CFGBYTE_U8_GES_SHP_LTR_MIN_DELTA_Y  (*((uint8_t *)((uint32_t)fwCfgp + 0x659UL)))    //659 - ges_shp_ltr_min_delta_y
#define CFGBYTE_U8_GES_SHP_LTR_ASPECT_RATIO_CHK (*((uint8_t *)((uint32_t)fwCfgp + 0x65AUL)))    //65A - ges_shp_ltr_aspect_ratio_chk
#define CFGBYTE_U8_GES_SHP_PRED_MATCH_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0x65BUL)))    //65B - ges_shp_pred_match_thres
#define CFGBYTE_U8_GES_SHP_PRED_DIR_ERR_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x65CUL)))    //65C - ges_shp_pred_dir_err_thres
#define CFGBYTE_U8_GES_SHP_RPT_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0x65DUL)))    //65D - ges_shp_rpt_cfg
#define CFGBYTE_U8_GES_SHP_RPT_TRACE_MIN    (*((uint8_t *)((uint32_t)fwCfgp + 0x65EUL)))    //65E - ges_shp_rpt_trace_min
#define CFGBYTE_U8_GES_SHP_RPT_TRACE_MAX    (*((uint8_t *)((uint32_t)fwCfgp + 0x65FUL)))    //65F - ges_shp_rpt_trace_max
#define CFGBYTE_U8_GES_SHP_C_START_END_DIST_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x661UL)))    //661 - ges_shp_c_start_end_dist_thres
#define CFGBYTE_U8_FGR_THUMB_XY_WGH_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0x664UL)))    //664 - fgr_thumb_xy_wgh_thres
#define CFGBYTE_U8_FGR_THUMB_XY_WGH         (*((uint8_t *)((uint32_t)fwCfgp + 0x665UL)))    //665 - fgr_thumb_xy_wgh
#define CFGBYTE_U8_MIN_FGR_THUMB_XY_SPEED_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x666UL)))    //666 - min_fgr_thumb_xy_speed
#define CFGBYTE_U8_MIN_FGR_THUMB_XY_SPEED_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x667UL)))    //667 - min_fgr_thumb_xy_speed
#define CFGBYTE_U8_MAX_FGR_THUMB_XY_SPEED_0 (*((uint8_t *)((uint32_t)fwCfgp + 0x668UL)))    //668 - max_fgr_thumb_xy_speed
#define CFGBYTE_U8_MAX_FGR_THUMB_XY_SPEED_1 (*((uint8_t *)((uint32_t)fwCfgp + 0x669UL)))    //669 - max_fgr_thumb_xy_speed
#define CFGBYTE_U8_FGR_THUMB_XY_WGH_GAME_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0x66AUL)))    //66A - fgr_thumb_xy_wgh_game_thres
#define CFGBYTE_U8_FGR_THUMB_XY_WGH_GAME    (*((uint8_t *)((uint32_t)fwCfgp + 0x66BUL)))    //66B - fgr_thumb_xy_wgh_game
#define CFGBYTE_U8_THUMB_SPEED_IIR_WGH      (*((uint8_t *)((uint32_t)fwCfgp + 0x66CUL)))    //66C - thumb_speed_iir_wgh
#define CFGBYTE_U8_1D_GRV_CFG               (*((uint8_t *)((uint32_t)fwCfgp + 0x670UL)))    //670 - 1d_grv_cfg
#define CFGBYTE_U8_1D_GRV_ISLND_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x671UL)))    //671 - 1d_grv_islnd_thres
#define CFGBYTE_U8_1D_GRV_ISLND_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x672UL)))    //672 - 1d_grv_islnd_thres
#define CFGBYTE_U8_1D_GRV_MIN_AREA          (*((uint8_t *)((uint32_t)fwCfgp + 0x673UL)))    //673 - 1d_grv_min_area
#define CFGBYTE_U8_1D_GRV_MAX_ISLAND_SUM_STR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0x674UL)))    //674 - 1d_grv_max_island_sum_str
#define CFGBYTE_U8_1D_GRV_MAX_ISLAND_SUM_STR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0x675UL)))    //675 - 1d_grv_max_island_sum_str
#define CFGBYTE_U8_1D_GRV_MAX_ISLAND_LEN    (*((uint8_t *)((uint32_t)fwCfgp + 0x676UL)))    //676 - 1d_grv_max_island_len
#define CFGBYTE_U8_1D_DIAG_GRV_TOL          (*((uint8_t *)((uint32_t)fwCfgp + 0x677UL)))    //677 - 1d_diag_grv_tol
#define CFGBYTE_U8_1D_GRV_TOL_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x678UL)))    //678 - 1d_grv_tol
#define CFGBYTE_U8_1D_GRV_TOL_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x679UL)))    //679 - 1d_grv_tol
#define CFGBYTE_U8_1D_GRV_TCH_BTW_CUTOFF_IDX    (*((uint8_t *)((uint32_t)fwCfgp + 0x67AUL)))    //67A - 1d_grv_tch_btw_cutoff_idx
#define CFGBYTE_U8_1D_GRV_TCH_MTOL_FTAP_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0x67BUL)))    //67B - 1d_grv_tch_mtol_ftap_cnt
#define CFGBYTE_U8_1D_GRV_TCH_MTOL_FTAP_XY_TOL2 (*((uint8_t *)((uint32_t)fwCfgp + 0x67CUL)))    //67C - 1d_grv_tch_mtol_ftap_xy_tol2
#define CFGBYTE_U8_1D_GRV_TCH_MTOL_XY_TOL2  (*((uint8_t *)((uint32_t)fwCfgp + 0x67DUL)))    //67D - 1d_grv_tch_mtol_xy_tol2
#define CFGBYTE_U8_1D_GRV_TCH_MTOL_XY_TOL1  (*((uint8_t *)((uint32_t)fwCfgp + 0x67EUL)))    //67E - 1d_grv_tch_mtol_xy_tol1
#define CFGBYTE_U8_1D_GRV_MTOL_WGH          (*((uint8_t *)((uint32_t)fwCfgp + 0x67FUL)))    //67F - 1d_grv_mtol_wgh
#define CFGBYTE_U8_MS_CMM_GROUP_RX_DISBLE_CNT_00    (*((uint8_t *)((uint32_t)fwCfgp + 0x682UL)))    //682 - ms_cmm_group_rx_disble_cnt_00
#define CFGBYTE_U8_MS_CMM_GROUP_RX_DISBLE_CNT_01    (*((uint8_t *)((uint32_t)fwCfgp + 0x683UL)))    //683 - ms_cmm_group_rx_disble_cnt_01
#define CFGBYTE_U8_MS_CMM_GROUP_RX_DISBLE_CNT_02    (*((uint8_t *)((uint32_t)fwCfgp + 0x684UL)))    //684 - ms_cmm_group_rx_disble_cnt_02
#define CFGBYTE_U8_MS_CMM_GROUP_TX_CH_00    (*((uint8_t *)((uint32_t)fwCfgp + 0x685UL)))    //685 - ms_cmm_group_tx_ch_00
#define CFGBYTE_U8_MS_CMM_GROUP_TX_CH_01    (*((uint8_t *)((uint32_t)fwCfgp + 0x686UL)))    //686 - ms_cmm_group_tx_ch_01
#define CFGBYTE_U8_MS_CMM_GROUP_TX_CH_02    (*((uint8_t *)((uint32_t)fwCfgp + 0x687UL)))    //687 - ms_cmm_group_tx_ch_02
#define CFGBYTE_U8_OSCI_TRIM_FALL_CNT_0     (*((uint8_t *)((uint32_t)fwCfgp + 0x688UL)))    //688 - osci_trim_fall_cnt
#define CFGBYTE_U8_OSCI_TRIM_FALL_CNT_1     (*((uint8_t *)((uint32_t)fwCfgp + 0x689UL)))    //689 - osci_trim_fall_cnt
#define CFGBYTE_U8_OSCI_TRIM_TIMER_CNT_0    (*((uint8_t *)((uint32_t)fwCfgp + 0x68AUL)))    //68A - osci_trim_timer_cnt
#define CFGBYTE_U8_OSCI_TRIM_TIMER_CNT_1    (*((uint8_t *)((uint32_t)fwCfgp + 0x68BUL)))    //68B - osci_trim_timer_cnt
#define CFGBYTE_U8_AOFFSET_CA2_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0x68DUL)))    //68D - aoffset_ca2_cfg
#define CFGBYTE_U8_AOFFSET_CA2_FULL_MAX     (*((uint8_t *)((uint32_t)fwCfgp + 0x68EUL)))    //68E - aoffset_ca2_full_max
#define CFGBYTE_U8_AOFFSET_CA2_FULL_MIN     (*((uint8_t *)((uint32_t)fwCfgp + 0x68FUL)))    //68F - aoffset_ca2_full_min
#define CFGBYTE_U8_AOFFSET_CA2_HALF_MAX     (*((uint8_t *)((uint32_t)fwCfgp + 0x690UL)))    //690 - aoffset_ca2_half_max
#define CFGBYTE_U8_AOFFSET_CA2_HALF_MIN     (*((uint8_t *)((uint32_t)fwCfgp + 0x691UL)))    //691 - aoffset_ca2_half_min
#define CFGBYTE_U8_AOFFSET_CA2_QUAR_MAX     (*((uint8_t *)((uint32_t)fwCfgp + 0x692UL)))    //692 - aoffset_ca2_quar_max
#define CFGBYTE_U8_AOFFSET_CA2_QUAR_MIN     (*((uint8_t *)((uint32_t)fwCfgp + 0x693UL)))    //693 - aoffset_ca2_quar_min
#define CFGBYTE_U8_AOFFSET_CA2_TRIM_RETRY_CNT   (*((uint8_t *)((uint32_t)fwCfgp + 0x694UL)))    //694 - aoffset_ca2_trim_retry_cnt
#define CFGBYTE_U8_ADC_COEF_CFG0            (*((uint8_t *)((uint32_t)fwCfgp + 0x697UL)))    //697 - adc_coef_cfg0
#define CFGBYTE_U8_ADC_COEF_CFG1_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x698UL)))    //698 - adc_coef_cfg1
#define CFGBYTE_U8_ADC_COEF_CFG1_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x699UL)))    //699 - adc_coef_cfg1
#define CFGBYTE_U8_ADC_COEF_CFG2            (*((uint8_t *)((uint32_t)fwCfgp + 0x69AUL)))    //69A - adc_coef_cfg2
#define CFGBYTE_U8_ADC_COEF_CFG3_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x69BUL)))    //69B - adc_coef_cfg3
#define CFGBYTE_U8_ADC_COEF_CFG3_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x69CUL)))    //69C - adc_coef_cfg3
#define CFGBYTE_U8_ADC_COEF_CFG4            (*((uint8_t *)((uint32_t)fwCfgp + 0x69DUL)))    //69D - adc_coef_cfg4
#define CFGBYTE_U8_ADC_COEF_CFG5_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x69EUL)))    //69E - adc_coef_cfg5
#define CFGBYTE_U8_ADC_COEF_CFG5_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x69FUL)))    //69F - adc_coef_cfg5
#define CFGBYTE_U8_ADC_COEF_CFG6            (*((uint8_t *)((uint32_t)fwCfgp + 0x6A0UL)))    //6A0 - adc_coef_cfg6
#define CFGBYTE_U8_ADC_COEF_CFG7_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x6A1UL)))    //6A1 - adc_coef_cfg7
#define CFGBYTE_U8_ADC_COEF_CFG7_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x6A2UL)))    //6A2 - adc_coef_cfg7
#define CFGBYTE_U8_ADC_COEF_CFG8            (*((uint8_t *)((uint32_t)fwCfgp + 0x6A3UL)))    //6A3 - adc_coef_cfg8
#define CFGBYTE_U8_ADC_COEF_CFG9_0          (*((uint8_t *)((uint32_t)fwCfgp + 0x6A4UL)))    //6A4 - adc_coef_cfg9
#define CFGBYTE_U8_ADC_COEF_CFG9_1          (*((uint8_t *)((uint32_t)fwCfgp + 0x6A5UL)))    //6A5 - adc_coef_cfg9
#define CFGBYTE_U8_ADC_COEF_CFG10           (*((uint8_t *)((uint32_t)fwCfgp + 0x6A6UL)))    //6A6 - adc_coef_cfg10
#define CFGBYTE_U8_ADC_COEF_CFG11_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x6A7UL)))    //6A7 - adc_coef_cfg11
#define CFGBYTE_U8_ADC_COEF_CFG11_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x6A8UL)))    //6A8 - adc_coef_cfg11
#define CFGBYTE_U8_ADC_COEF_CFG12           (*((uint8_t *)((uint32_t)fwCfgp + 0x6A9UL)))    //6A9 - adc_coef_cfg12
#define CFGBYTE_U8_ADC_COEF_CFG13_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x6AAUL)))    //6AA - adc_coef_cfg13
#define CFGBYTE_U8_ADC_COEF_CFG13_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x6ABUL)))    //6AB - adc_coef_cfg13
#define CFGBYTE_U8_ADC_COEF_CFG14           (*((uint8_t *)((uint32_t)fwCfgp + 0x6ACUL)))    //6AC - adc_coef_cfg14
#define CFGBYTE_U8_ADC_COEF_CFG15_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x6ADUL)))    //6AD - adc_coef_cfg15
#define CFGBYTE_U8_ADC_COEF_CFG15_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x6AEUL)))    //6AE - adc_coef_cfg15
#define CFGBYTE_U8_ADC_COEF_CFG16           (*((uint8_t *)((uint32_t)fwCfgp + 0x6AFUL)))    //6AF - adc_coef_cfg16
#define CFGBYTE_U8_ADC_COEF_CFG17_0         (*((uint8_t *)((uint32_t)fwCfgp + 0x6B0UL)))    //6B0 - adc_coef_cfg17
#define CFGBYTE_U8_ADC_COEF_CFG17_1         (*((uint8_t *)((uint32_t)fwCfgp + 0x6B1UL)))    //6B1 - adc_coef_cfg17
#define CFGBYTE_U8_ADC_COEF_0_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B2UL)))    //6B2 - adc_coef_0
#define CFGBYTE_U8_ADC_COEF_0_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B3UL)))    //6B3 - adc_coef_0
#define CFGBYTE_U8_ADC_COEF_1_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B4UL)))    //6B4 - adc_coef_1
#define CFGBYTE_U8_ADC_COEF_1_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B5UL)))    //6B5 - adc_coef_1
#define CFGBYTE_U8_ADC_COEF_2_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B6UL)))    //6B6 - adc_coef_2
#define CFGBYTE_U8_ADC_COEF_2_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B7UL)))    //6B7 - adc_coef_2
#define CFGBYTE_U8_ADC_COEF_3_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B8UL)))    //6B8 - adc_coef_3
#define CFGBYTE_U8_ADC_COEF_3_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6B9UL)))    //6B9 - adc_coef_3
#define CFGBYTE_U8_ADC_COEF_4_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6BAUL)))    //6BA - adc_coef_4
#define CFGBYTE_U8_ADC_COEF_4_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6BBUL)))    //6BB - adc_coef_4
#define CFGBYTE_U8_ADC_COEF_5_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6BCUL)))    //6BC - adc_coef_5
#define CFGBYTE_U8_ADC_COEF_5_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6BDUL)))    //6BD - adc_coef_5
#define CFGBYTE_U8_ADC_COEF_6_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6BEUL)))    //6BE - adc_coef_6
#define CFGBYTE_U8_ADC_COEF_6_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6BFUL)))    //6BF - adc_coef_6
#define CFGBYTE_U8_ADC_COEF_7_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6C0UL)))    //6C0 - adc_coef_7
#define CFGBYTE_U8_ADC_COEF_7_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6C1UL)))    //6C1 - adc_coef_7
#define CFGBYTE_U8_ADC_COEF_8_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6C2UL)))    //6C2 - adc_coef_8
#define CFGBYTE_U8_ADC_COEF_8_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6C3UL)))    //6C3 - adc_coef_8
#define CFGBYTE_U8_ADC_COEF_9_0             (*((uint8_t *)((uint32_t)fwCfgp + 0x6C4UL)))    //6C4 - adc_coef_9
#define CFGBYTE_U8_ADC_COEF_9_1             (*((uint8_t *)((uint32_t)fwCfgp + 0x6C5UL)))    //6C5 - adc_coef_9
#define CFGBYTE_U8_ADC_COEF_10_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6C6UL)))    //6C6 - adc_coef_10
#define CFGBYTE_U8_ADC_COEF_10_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6C7UL)))    //6C7 - adc_coef_10
#define CFGBYTE_U8_ADC_COEF_11_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6C8UL)))    //6C8 - adc_coef_11
#define CFGBYTE_U8_ADC_COEF_11_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6C9UL)))    //6C9 - adc_coef_11
#define CFGBYTE_U8_ADC_COEF_12_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6CAUL)))    //6CA - adc_coef_12
#define CFGBYTE_U8_ADC_COEF_12_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6CBUL)))    //6CB - adc_coef_12
#define CFGBYTE_U8_ADC_COEF_13_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6CCUL)))    //6CC - adc_coef_13
#define CFGBYTE_U8_ADC_COEF_13_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6CDUL)))    //6CD - adc_coef_13
#define CFGBYTE_U8_ADC_COEF_14_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6CEUL)))    //6CE - adc_coef_14
#define CFGBYTE_U8_ADC_COEF_14_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6CFUL)))    //6CF - adc_coef_14
#define CFGBYTE_U8_ADC_COEF_15_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D0UL)))    //6D0 - adc_coef_15
#define CFGBYTE_U8_ADC_COEF_15_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D1UL)))    //6D1 - adc_coef_15
#define CFGBYTE_U8_ADC_COEF_16_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D2UL)))    //6D2 - adc_coef_16
#define CFGBYTE_U8_ADC_COEF_16_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D3UL)))    //6D3 - adc_coef_16
#define CFGBYTE_U8_ADC_COEF_17_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D4UL)))    //6D4 - adc_coef_17
#define CFGBYTE_U8_ADC_COEF_17_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D5UL)))    //6D5 - adc_coef_17
#define CFGBYTE_U8_ADC_COEF_18_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D6UL)))    //6D6 - adc_coef_18
#define CFGBYTE_U8_ADC_COEF_18_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D7UL)))    //6D7 - adc_coef_18
#define CFGBYTE_U8_ADC_COEF_19_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D8UL)))    //6D8 - adc_coef_19
#define CFGBYTE_U8_ADC_COEF_19_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6D9UL)))    //6D9 - adc_coef_19
#define CFGBYTE_U8_ADC_COEF_20_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6DAUL)))    //6DA - adc_coef_20
#define CFGBYTE_U8_ADC_COEF_20_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6DBUL)))    //6DB - adc_coef_20
#define CFGBYTE_U8_ADC_COEF_21_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6DCUL)))    //6DC - adc_coef_21
#define CFGBYTE_U8_ADC_COEF_21_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6DDUL)))    //6DD - adc_coef_21
#define CFGBYTE_U8_ADC_COEF_22_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6DEUL)))    //6DE - adc_coef_22
#define CFGBYTE_U8_ADC_COEF_22_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6DFUL)))    //6DF - adc_coef_22
#define CFGBYTE_U8_ADC_COEF_23_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E0UL)))    //6E0 - adc_coef_23
#define CFGBYTE_U8_ADC_COEF_23_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E1UL)))    //6E1 - adc_coef_23
#define CFGBYTE_U8_ADC_COEF_24_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E2UL)))    //6E2 - adc_coef_24
#define CFGBYTE_U8_ADC_COEF_24_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E3UL)))    //6E3 - adc_coef_24
#define CFGBYTE_U8_ADC_COEF_25_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E4UL)))    //6E4 - adc_coef_25
#define CFGBYTE_U8_ADC_COEF_25_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E5UL)))    //6E5 - adc_coef_25
#define CFGBYTE_U8_ADC_COEF_26_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E6UL)))    //6E6 - adc_coef_26
#define CFGBYTE_U8_ADC_COEF_26_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E7UL)))    //6E7 - adc_coef_26
#define CFGBYTE_U8_ADC_COEF_27_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E8UL)))    //6E8 - adc_coef_27
#define CFGBYTE_U8_ADC_COEF_27_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6E9UL)))    //6E9 - adc_coef_27
#define CFGBYTE_U8_ADC_COEF_28_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6EAUL)))    //6EA - adc_coef_28
#define CFGBYTE_U8_ADC_COEF_28_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6EBUL)))    //6EB - adc_coef_28
#define CFGBYTE_U8_ADC_COEF_29_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6ECUL)))    //6EC - adc_coef_29
#define CFGBYTE_U8_ADC_COEF_29_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6EDUL)))    //6ED - adc_coef_29
#define CFGBYTE_U8_ADC_COEF_30_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6EEUL)))    //6EE - adc_coef_30
#define CFGBYTE_U8_ADC_COEF_30_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6EFUL)))    //6EF - adc_coef_30
#define CFGBYTE_U8_ADC_COEF_31_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F0UL)))    //6F0 - adc_coef_31
#define CFGBYTE_U8_ADC_COEF_31_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F1UL)))    //6F1 - adc_coef_31
#define CFGBYTE_U8_ADC_COEF_32_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F2UL)))    //6F2 - adc_coef_32
#define CFGBYTE_U8_ADC_COEF_32_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F3UL)))    //6F3 - adc_coef_32
#define CFGBYTE_U8_ADC_COEF_33_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F4UL)))    //6F4 - adc_coef_33
#define CFGBYTE_U8_ADC_COEF_33_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F5UL)))    //6F5 - adc_coef_33
#define CFGBYTE_U8_ADC_COEF_34_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F6UL)))    //6F6 - adc_coef_34
#define CFGBYTE_U8_ADC_COEF_34_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F7UL)))    //6F7 - adc_coef_34
#define CFGBYTE_U8_ADC_COEF_35_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F8UL)))    //6F8 - adc_coef_35
#define CFGBYTE_U8_ADC_COEF_35_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6F9UL)))    //6F9 - adc_coef_35
#define CFGBYTE_U8_ADC_COEF_36_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6FAUL)))    //6FA - adc_coef_36
#define CFGBYTE_U8_ADC_COEF_36_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6FBUL)))    //6FB - adc_coef_36
#define CFGBYTE_U8_ADC_COEF_37_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6FCUL)))    //6FC - adc_coef_37
#define CFGBYTE_U8_ADC_COEF_37_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6FDUL)))    //6FD - adc_coef_37
#define CFGBYTE_U8_ADC_COEF_38_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x6FEUL)))    //6FE - adc_coef_38
#define CFGBYTE_U8_ADC_COEF_38_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x6FFUL)))    //6FF - adc_coef_38
#define CFGBYTE_U8_ADC_COEF_39_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x700UL)))    //700 - adc_coef_39
#define CFGBYTE_U8_ADC_COEF_39_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x701UL)))    //701 - adc_coef_39
#define CFGBYTE_U8_ADC_COEF_40_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x702UL)))    //702 - adc_coef_40
#define CFGBYTE_U8_ADC_COEF_40_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x703UL)))    //703 - adc_coef_40
#define CFGBYTE_U8_ADC_COEF_41_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x704UL)))    //704 - adc_coef_41
#define CFGBYTE_U8_ADC_COEF_41_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x705UL)))    //705 - adc_coef_41
#define CFGBYTE_U8_ADC_COEF_42_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x706UL)))    //706 - adc_coef_42
#define CFGBYTE_U8_ADC_COEF_42_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x707UL)))    //707 - adc_coef_42
#define CFGBYTE_U8_ADC_COEF_43_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x708UL)))    //708 - adc_coef_43
#define CFGBYTE_U8_ADC_COEF_43_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x709UL)))    //709 - adc_coef_43
#define CFGBYTE_U8_ADC_COEF_44_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x70AUL)))    //70A - adc_coef_44
#define CFGBYTE_U8_ADC_COEF_44_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x70BUL)))    //70B - adc_coef_44
#define CFGBYTE_U8_ADC_COEF_45_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x70CUL)))    //70C - adc_coef_45
#define CFGBYTE_U8_ADC_COEF_45_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x70DUL)))    //70D - adc_coef_45
#define CFGBYTE_U8_ADC_COEF_46_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x70EUL)))    //70E - adc_coef_46
#define CFGBYTE_U8_ADC_COEF_46_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x70FUL)))    //70F - adc_coef_46
#define CFGBYTE_U8_ADC_COEF_47_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x710UL)))    //710 - adc_coef_47
#define CFGBYTE_U8_ADC_COEF_47_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x711UL)))    //711 - adc_coef_47
#define CFGBYTE_U8_ADC_COEF_48_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x712UL)))    //712 - adc_coef_48
#define CFGBYTE_U8_ADC_COEF_48_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x713UL)))    //713 - adc_coef_48
#define CFGBYTE_U8_ADC_COEF_49_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x714UL)))    //714 - adc_coef_49
#define CFGBYTE_U8_ADC_COEF_49_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x715UL)))    //715 - adc_coef_49
#define CFGBYTE_U8_ADC_COEF_50_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x716UL)))    //716 - adc_coef_50
#define CFGBYTE_U8_ADC_COEF_50_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x717UL)))    //717 - adc_coef_50
#define CFGBYTE_U8_ADC_COEF_51_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x718UL)))    //718 - adc_coef_51
#define CFGBYTE_U8_ADC_COEF_51_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x719UL)))    //719 - adc_coef_51
#define CFGBYTE_U8_ADC_COEF_52_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x71AUL)))    //71A - adc_coef_52
#define CFGBYTE_U8_ADC_COEF_52_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x71BUL)))    //71B - adc_coef_52
#define CFGBYTE_U8_ADC_COEF_53_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x71CUL)))    //71C - adc_coef_53
#define CFGBYTE_U8_ADC_COEF_53_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x71DUL)))    //71D - adc_coef_53
#define CFGBYTE_U8_ADC_COEF_54_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x71EUL)))    //71E - adc_coef_54
#define CFGBYTE_U8_ADC_COEF_54_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x71FUL)))    //71F - adc_coef_54
#define CFGBYTE_U8_ADC_COEF_55_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x720UL)))    //720 - adc_coef_55
#define CFGBYTE_U8_ADC_COEF_55_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x721UL)))    //721 - adc_coef_55
#define CFGBYTE_U8_ADC_COEF_56_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x722UL)))    //722 - adc_coef_56
#define CFGBYTE_U8_ADC_COEF_56_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x723UL)))    //723 - adc_coef_56
#define CFGBYTE_U8_ADC_COEF_57_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x724UL)))    //724 - adc_coef_57
#define CFGBYTE_U8_ADC_COEF_57_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x725UL)))    //725 - adc_coef_57
#define CFGBYTE_U8_ADC_COEF_58_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x726UL)))    //726 - adc_coef_58
#define CFGBYTE_U8_ADC_COEF_58_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x727UL)))    //727 - adc_coef_58
#define CFGBYTE_U8_ADC_COEF_59_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x728UL)))    //728 - adc_coef_59
#define CFGBYTE_U8_ADC_COEF_59_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x729UL)))    //729 - adc_coef_59
#define CFGBYTE_U8_ADC_COEF_60_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x72AUL)))    //72A - adc_coef_60
#define CFGBYTE_U8_ADC_COEF_60_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x72BUL)))    //72B - adc_coef_60
#define CFGBYTE_U8_ADC_COEF_61_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x72CUL)))    //72C - adc_coef_61
#define CFGBYTE_U8_ADC_COEF_61_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x72DUL)))    //72D - adc_coef_61
#define CFGBYTE_U8_ADC_COEF_62_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x72EUL)))    //72E - adc_coef_62
#define CFGBYTE_U8_ADC_COEF_62_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x72FUL)))    //72F - adc_coef_62
#define CFGBYTE_U8_ADC_COEF_63_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x730UL)))    //730 - adc_coef_63
#define CFGBYTE_U8_ADC_COEF_63_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x731UL)))    //731 - adc_coef_63
#define CFGBYTE_U8_ADC_COEF_64_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x732UL)))    //732 - adc_coef_64
#define CFGBYTE_U8_ADC_COEF_64_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x733UL)))    //733 - adc_coef_64
#define CFGBYTE_U8_ADC_COEF_65_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x734UL)))    //734 - adc_coef_65
#define CFGBYTE_U8_ADC_COEF_65_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x735UL)))    //735 - adc_coef_65
#define CFGBYTE_U8_ADC_COEF_66_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x736UL)))    //736 - adc_coef_66
#define CFGBYTE_U8_ADC_COEF_66_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x737UL)))    //737 - adc_coef_66
#define CFGBYTE_U8_ADC_COEF_67_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x738UL)))    //738 - adc_coef_67
#define CFGBYTE_U8_ADC_COEF_67_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x739UL)))    //739 - adc_coef_67
#define CFGBYTE_U8_ADC_COEF_68_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x73AUL)))    //73A - adc_coef_68
#define CFGBYTE_U8_ADC_COEF_68_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x73BUL)))    //73B - adc_coef_68
#define CFGBYTE_U8_ADC_COEF_69_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x73CUL)))    //73C - adc_coef_69
#define CFGBYTE_U8_ADC_COEF_69_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x73DUL)))    //73D - adc_coef_69
#define CFGBYTE_U8_ADC_COEF_70_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x73EUL)))    //73E - adc_coef_70
#define CFGBYTE_U8_ADC_COEF_70_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x73FUL)))    //73F - adc_coef_70
#define CFGBYTE_U8_ADC_COEF_71_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x740UL)))    //740 - adc_coef_71
#define CFGBYTE_U8_ADC_COEF_71_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x741UL)))    //741 - adc_coef_71
#define CFGBYTE_U8_ADC_COEF_72_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x742UL)))    //742 - adc_coef_72
#define CFGBYTE_U8_ADC_COEF_72_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x743UL)))    //743 - adc_coef_72
#define CFGBYTE_U8_ADC_COEF_73_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x744UL)))    //744 - adc_coef_73
#define CFGBYTE_U8_ADC_COEF_73_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x745UL)))    //745 - adc_coef_73
#define CFGBYTE_U8_ADC_COEF_74_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x746UL)))    //746 - adc_coef_74
#define CFGBYTE_U8_ADC_COEF_74_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x747UL)))    //747 - adc_coef_74
#define CFGBYTE_U8_ADC_COEF_75_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x748UL)))    //748 - adc_coef_75
#define CFGBYTE_U8_ADC_COEF_75_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x749UL)))    //749 - adc_coef_75
#define CFGBYTE_U8_ADC_COEF_76_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x74AUL)))    //74A - adc_coef_76
#define CFGBYTE_U8_ADC_COEF_76_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x74BUL)))    //74B - adc_coef_76
#define CFGBYTE_U8_ADC_COEF_77_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x74CUL)))    //74C - adc_coef_77
#define CFGBYTE_U8_ADC_COEF_77_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x74DUL)))    //74D - adc_coef_77
#define CFGBYTE_U8_ADC_COEF_78_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x74EUL)))    //74E - adc_coef_78
#define CFGBYTE_U8_ADC_COEF_78_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x74FUL)))    //74F - adc_coef_78
#define CFGBYTE_U8_ADC_COEF_79_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x750UL)))    //750 - adc_coef_79
#define CFGBYTE_U8_ADC_COEF_79_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x751UL)))    //751 - adc_coef_79
#define CFGBYTE_U8_ADC_COEF_80_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x752UL)))    //752 - adc_coef_80
#define CFGBYTE_U8_ADC_COEF_80_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x753UL)))    //753 - adc_coef_80
#define CFGBYTE_U8_ADC_COEF_81_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x754UL)))    //754 - adc_coef_81
#define CFGBYTE_U8_ADC_COEF_81_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x755UL)))    //755 - adc_coef_81
#define CFGBYTE_U8_ADC_COEF_82_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x756UL)))    //756 - adc_coef_82
#define CFGBYTE_U8_ADC_COEF_82_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x757UL)))    //757 - adc_coef_82
#define CFGBYTE_U8_ADC_COEF_83_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x758UL)))    //758 - adc_coef_83
#define CFGBYTE_U8_ADC_COEF_83_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x759UL)))    //759 - adc_coef_83
#define CFGBYTE_U8_ADC_COEF_84_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x75AUL)))    //75A - adc_coef_84
#define CFGBYTE_U8_ADC_COEF_84_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x75BUL)))    //75B - adc_coef_84
#define CFGBYTE_U8_ADC_COEF_85_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x75CUL)))    //75C - adc_coef_85
#define CFGBYTE_U8_ADC_COEF_85_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x75DUL)))    //75D - adc_coef_85
#define CFGBYTE_U8_ADC_COEF_86_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x75EUL)))    //75E - adc_coef_86
#define CFGBYTE_U8_ADC_COEF_86_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x75FUL)))    //75F - adc_coef_86
#define CFGBYTE_U8_ADC_COEF_87_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x760UL)))    //760 - adc_coef_87
#define CFGBYTE_U8_ADC_COEF_87_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x761UL)))    //761 - adc_coef_87
#define CFGBYTE_U8_ADC_COEF_88_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x762UL)))    //762 - adc_coef_88
#define CFGBYTE_U8_ADC_COEF_88_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x763UL)))    //763 - adc_coef_88
#define CFGBYTE_U8_ADC_COEF_89_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x764UL)))    //764 - adc_coef_89
#define CFGBYTE_U8_ADC_COEF_89_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x765UL)))    //765 - adc_coef_89
#define CFGBYTE_U8_ADC_COEF_90_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x766UL)))    //766 - adc_coef_90
#define CFGBYTE_U8_ADC_COEF_90_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x767UL)))    //767 - adc_coef_90
#define CFGBYTE_U8_ADC_COEF_91_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x768UL)))    //768 - adc_coef_91
#define CFGBYTE_U8_ADC_COEF_91_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x769UL)))    //769 - adc_coef_91
#define CFGBYTE_U8_ADC_COEF_92_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x76AUL)))    //76A - adc_coef_92
#define CFGBYTE_U8_ADC_COEF_92_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x76BUL)))    //76B - adc_coef_92
#define CFGBYTE_U8_ADC_COEF_93_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x76CUL)))    //76C - adc_coef_93
#define CFGBYTE_U8_ADC_COEF_93_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x76DUL)))    //76D - adc_coef_93
#define CFGBYTE_U8_ADC_COEF_94_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x76EUL)))    //76E - adc_coef_94
#define CFGBYTE_U8_ADC_COEF_94_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x76FUL)))    //76F - adc_coef_94
#define CFGBYTE_U8_ADC_COEF_95_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x770UL)))    //770 - adc_coef_95
#define CFGBYTE_U8_ADC_COEF_95_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x771UL)))    //771 - adc_coef_95
#define CFGBYTE_U8_ADC_COEF_96_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x772UL)))    //772 - adc_coef_96
#define CFGBYTE_U8_ADC_COEF_96_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x773UL)))    //773 - adc_coef_96
#define CFGBYTE_U8_ADC_COEF_97_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x774UL)))    //774 - adc_coef_97
#define CFGBYTE_U8_ADC_COEF_97_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x775UL)))    //775 - adc_coef_97
#define CFGBYTE_U8_ADC_COEF_98_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x776UL)))    //776 - adc_coef_98
#define CFGBYTE_U8_ADC_COEF_98_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x777UL)))    //777 - adc_coef_98
#define CFGBYTE_U8_ADC_COEF_99_0            (*((uint8_t *)((uint32_t)fwCfgp + 0x778UL)))    //778 - adc_coef_99
#define CFGBYTE_U8_ADC_COEF_99_1            (*((uint8_t *)((uint32_t)fwCfgp + 0x779UL)))    //779 - adc_coef_99
#define CFGBYTE_U8_ADC_COEF_100_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x77AUL)))    //77A - adc_coef_100
#define CFGBYTE_U8_ADC_COEF_100_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x77BUL)))    //77B - adc_coef_100
#define CFGBYTE_U8_ADC_COEF_101_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x77CUL)))    //77C - adc_coef_101
#define CFGBYTE_U8_ADC_COEF_101_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x77DUL)))    //77D - adc_coef_101
#define CFGBYTE_U8_ADC_COEF_102_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x77EUL)))    //77E - adc_coef_102
#define CFGBYTE_U8_ADC_COEF_102_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x77FUL)))    //77F - adc_coef_102
#define CFGBYTE_U8_ADC_COEF_103_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x780UL)))    //780 - adc_coef_103
#define CFGBYTE_U8_ADC_COEF_103_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x781UL)))    //781 - adc_coef_103
#define CFGBYTE_U8_ADC_COEF_104_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x782UL)))    //782 - adc_coef_104
#define CFGBYTE_U8_ADC_COEF_104_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x783UL)))    //783 - adc_coef_104
#define CFGBYTE_U8_ADC_COEF_105_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x784UL)))    //784 - adc_coef_105
#define CFGBYTE_U8_ADC_COEF_105_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x785UL)))    //785 - adc_coef_105
#define CFGBYTE_U8_ADC_COEF_106_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x786UL)))    //786 - adc_coef_106
#define CFGBYTE_U8_ADC_COEF_106_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x787UL)))    //787 - adc_coef_106
#define CFGBYTE_U8_ADC_COEF_107_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x788UL)))    //788 - adc_coef_107
#define CFGBYTE_U8_ADC_COEF_107_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x789UL)))    //789 - adc_coef_107
#define CFGBYTE_U8_ADC_COEF_108_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x78AUL)))    //78A - adc_coef_108
#define CFGBYTE_U8_ADC_COEF_108_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x78BUL)))    //78B - adc_coef_108
#define CFGBYTE_U8_ADC_COEF_109_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x78CUL)))    //78C - adc_coef_109
#define CFGBYTE_U8_ADC_COEF_109_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x78DUL)))    //78D - adc_coef_109
#define CFGBYTE_U8_ADC_COEF_110_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x78EUL)))    //78E - adc_coef_110
#define CFGBYTE_U8_ADC_COEF_110_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x78FUL)))    //78F - adc_coef_110
#define CFGBYTE_U8_ADC_COEF_111_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x790UL)))    //790 - adc_coef_111
#define CFGBYTE_U8_ADC_COEF_111_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x791UL)))    //791 - adc_coef_111
#define CFGBYTE_U8_ADC_COEF_112_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x792UL)))    //792 - adc_coef_112
#define CFGBYTE_U8_ADC_COEF_112_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x793UL)))    //793 - adc_coef_112
#define CFGBYTE_U8_ADC_COEF_113_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x794UL)))    //794 - adc_coef_113
#define CFGBYTE_U8_ADC_COEF_113_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x795UL)))    //795 - adc_coef_113
#define CFGBYTE_U8_ADC_COEF_114_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x796UL)))    //796 - adc_coef_114
#define CFGBYTE_U8_ADC_COEF_114_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x797UL)))    //797 - adc_coef_114
#define CFGBYTE_U8_ADC_COEF_115_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x798UL)))    //798 - adc_coef_115
#define CFGBYTE_U8_ADC_COEF_115_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x799UL)))    //799 - adc_coef_115
#define CFGBYTE_U8_ADC_COEF_116_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x79AUL)))    //79A - adc_coef_116
#define CFGBYTE_U8_ADC_COEF_116_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x79BUL)))    //79B - adc_coef_116
#define CFGBYTE_U8_ADC_COEF_117_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x79CUL)))    //79C - adc_coef_117
#define CFGBYTE_U8_ADC_COEF_117_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x79DUL)))    //79D - adc_coef_117
#define CFGBYTE_U8_ADC_COEF_118_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x79EUL)))    //79E - adc_coef_118
#define CFGBYTE_U8_ADC_COEF_118_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x79FUL)))    //79F - adc_coef_118
#define CFGBYTE_U8_ADC_COEF_119_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A0UL)))    //7A0 - adc_coef_119
#define CFGBYTE_U8_ADC_COEF_119_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A1UL)))    //7A1 - adc_coef_119
#define CFGBYTE_U8_ADC_COEF_120_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A2UL)))    //7A2 - adc_coef_120
#define CFGBYTE_U8_ADC_COEF_120_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A3UL)))    //7A3 - adc_coef_120
#define CFGBYTE_U8_ADC_COEF_121_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A4UL)))    //7A4 - adc_coef_121
#define CFGBYTE_U8_ADC_COEF_121_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A5UL)))    //7A5 - adc_coef_121
#define CFGBYTE_U8_ADC_COEF_122_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A6UL)))    //7A6 - adc_coef_122
#define CFGBYTE_U8_ADC_COEF_122_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A7UL)))    //7A7 - adc_coef_122
#define CFGBYTE_U8_ADC_COEF_123_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A8UL)))    //7A8 - adc_coef_123
#define CFGBYTE_U8_ADC_COEF_123_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7A9UL)))    //7A9 - adc_coef_123
#define CFGBYTE_U8_ADC_COEF_124_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7AAUL)))    //7AA - adc_coef_124
#define CFGBYTE_U8_ADC_COEF_124_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7ABUL)))    //7AB - adc_coef_124
#define CFGBYTE_U8_ADC_COEF_125_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7ACUL)))    //7AC - adc_coef_125
#define CFGBYTE_U8_ADC_COEF_125_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7ADUL)))    //7AD - adc_coef_125
#define CFGBYTE_U8_ADC_COEF_126_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7AEUL)))    //7AE - adc_coef_126
#define CFGBYTE_U8_ADC_COEF_126_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7AFUL)))    //7AF - adc_coef_126
#define CFGBYTE_U8_ADC_COEF_127_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B0UL)))    //7B0 - adc_coef_127
#define CFGBYTE_U8_ADC_COEF_127_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B1UL)))    //7B1 - adc_coef_127
#define CFGBYTE_U8_ADC_COEF_128_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B2UL)))    //7B2 - adc_coef_128
#define CFGBYTE_U8_ADC_COEF_128_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B3UL)))    //7B3 - adc_coef_128
#define CFGBYTE_U8_ADC_COEF_129_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B4UL)))    //7B4 - adc_coef_129
#define CFGBYTE_U8_ADC_COEF_129_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B5UL)))    //7B5 - adc_coef_129
#define CFGBYTE_U8_ADC_COEF_130_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B6UL)))    //7B6 - adc_coef_130
#define CFGBYTE_U8_ADC_COEF_130_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B7UL)))    //7B7 - adc_coef_130
#define CFGBYTE_U8_ADC_COEF_131_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B8UL)))    //7B8 - adc_coef_131
#define CFGBYTE_U8_ADC_COEF_131_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7B9UL)))    //7B9 - adc_coef_131
#define CFGBYTE_U8_ADC_COEF_132_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7BAUL)))    //7BA - adc_coef_132
#define CFGBYTE_U8_ADC_COEF_132_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7BBUL)))    //7BB - adc_coef_132
#define CFGBYTE_U8_ADC_COEF_133_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7BCUL)))    //7BC - adc_coef_133
#define CFGBYTE_U8_ADC_COEF_133_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7BDUL)))    //7BD - adc_coef_133
#define CFGBYTE_U8_ADC_COEF_134_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7BEUL)))    //7BE - adc_coef_134
#define CFGBYTE_U8_ADC_COEF_134_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7BFUL)))    //7BF - adc_coef_134
#define CFGBYTE_U8_ADC_COEF_135_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C0UL)))    //7C0 - adc_coef_135
#define CFGBYTE_U8_ADC_COEF_135_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C1UL)))    //7C1 - adc_coef_135
#define CFGBYTE_U8_ADC_COEF_136_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C2UL)))    //7C2 - adc_coef_136
#define CFGBYTE_U8_ADC_COEF_136_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C3UL)))    //7C3 - adc_coef_136
#define CFGBYTE_U8_ADC_COEF_137_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C4UL)))    //7C4 - adc_coef_137
#define CFGBYTE_U8_ADC_COEF_137_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C5UL)))    //7C5 - adc_coef_137
#define CFGBYTE_U8_ADC_COEF_138_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C6UL)))    //7C6 - adc_coef_138
#define CFGBYTE_U8_ADC_COEF_138_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C7UL)))    //7C7 - adc_coef_138
#define CFGBYTE_U8_ADC_COEF_139_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C8UL)))    //7C8 - adc_coef_139
#define CFGBYTE_U8_ADC_COEF_139_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7C9UL)))    //7C9 - adc_coef_139
#define CFGBYTE_U8_ADC_COEF_140_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7CAUL)))    //7CA - adc_coef_140
#define CFGBYTE_U8_ADC_COEF_140_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7CBUL)))    //7CB - adc_coef_140
#define CFGBYTE_U8_ADC_COEF_141_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7CCUL)))    //7CC - adc_coef_141
#define CFGBYTE_U8_ADC_COEF_141_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7CDUL)))    //7CD - adc_coef_141
#define CFGBYTE_U8_ADC_COEF_142_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7CEUL)))    //7CE - adc_coef_142
#define CFGBYTE_U8_ADC_COEF_142_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7CFUL)))    //7CF - adc_coef_142
#define CFGBYTE_U8_ADC_COEF_143_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D0UL)))    //7D0 - adc_coef_143
#define CFGBYTE_U8_ADC_COEF_143_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D1UL)))    //7D1 - adc_coef_143
#define CFGBYTE_U8_ADC_COEF_144_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D2UL)))    //7D2 - adc_coef_144
#define CFGBYTE_U8_ADC_COEF_144_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D3UL)))    //7D3 - adc_coef_144
#define CFGBYTE_U8_ADC_COEF_145_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D4UL)))    //7D4 - adc_coef_145
#define CFGBYTE_U8_ADC_COEF_145_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D5UL)))    //7D5 - adc_coef_145
#define CFGBYTE_U8_ADC_COEF_146_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D6UL)))    //7D6 - adc_coef_146
#define CFGBYTE_U8_ADC_COEF_146_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D7UL)))    //7D7 - adc_coef_146
#define CFGBYTE_U8_ADC_COEF_147_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D8UL)))    //7D8 - adc_coef_147
#define CFGBYTE_U8_ADC_COEF_147_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7D9UL)))    //7D9 - adc_coef_147
#define CFGBYTE_U8_ADC_COEF_148_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7DAUL)))    //7DA - adc_coef_148
#define CFGBYTE_U8_ADC_COEF_148_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7DBUL)))    //7DB - adc_coef_148
#define CFGBYTE_U8_ADC_COEF_149_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7DCUL)))    //7DC - adc_coef_149
#define CFGBYTE_U8_ADC_COEF_149_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7DDUL)))    //7DD - adc_coef_149
#define CFGBYTE_U8_ADC_COEF_150_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7DEUL)))    //7DE - adc_coef_150
#define CFGBYTE_U8_ADC_COEF_150_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7DFUL)))    //7DF - adc_coef_150
#define CFGBYTE_U8_ADC_COEF_151_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E0UL)))    //7E0 - adc_coef_151
#define CFGBYTE_U8_ADC_COEF_151_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E1UL)))    //7E1 - adc_coef_151
#define CFGBYTE_U8_ADC_COEF_152_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E2UL)))    //7E2 - adc_coef_152
#define CFGBYTE_U8_ADC_COEF_152_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E3UL)))    //7E3 - adc_coef_152
#define CFGBYTE_U8_ADC_COEF_153_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E4UL)))    //7E4 - adc_coef_153
#define CFGBYTE_U8_ADC_COEF_153_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E5UL)))    //7E5 - adc_coef_153
#define CFGBYTE_U8_ADC_COEF_154_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E6UL)))    //7E6 - adc_coef_154
#define CFGBYTE_U8_ADC_COEF_154_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E7UL)))    //7E7 - adc_coef_154
#define CFGBYTE_U8_ADC_COEF_155_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E8UL)))    //7E8 - adc_coef_155
#define CFGBYTE_U8_ADC_COEF_155_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7E9UL)))    //7E9 - adc_coef_155
#define CFGBYTE_U8_ADC_COEF_156_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7EAUL)))    //7EA - adc_coef_156
#define CFGBYTE_U8_ADC_COEF_156_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7EBUL)))    //7EB - adc_coef_156
#define CFGBYTE_U8_ADC_COEF_157_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7ECUL)))    //7EC - adc_coef_157
#define CFGBYTE_U8_ADC_COEF_157_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7EDUL)))    //7ED - adc_coef_157
#define CFGBYTE_U8_ADC_COEF_158_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7EEUL)))    //7EE - adc_coef_158
#define CFGBYTE_U8_ADC_COEF_158_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7EFUL)))    //7EF - adc_coef_158
#define CFGBYTE_U8_ADC_COEF_159_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F0UL)))    //7F0 - adc_coef_159
#define CFGBYTE_U8_ADC_COEF_159_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F1UL)))    //7F1 - adc_coef_159
#define CFGBYTE_U8_ADC_COEF_160_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F2UL)))    //7F2 - adc_coef_160
#define CFGBYTE_U8_ADC_COEF_160_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F3UL)))    //7F3 - adc_coef_160
#define CFGBYTE_U8_ADC_COEF_161_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F4UL)))    //7F4 - adc_coef_161
#define CFGBYTE_U8_ADC_COEF_161_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F5UL)))    //7F5 - adc_coef_161
#define CFGBYTE_U8_ADC_COEF_162_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F6UL)))    //7F6 - adc_coef_162
#define CFGBYTE_U8_ADC_COEF_162_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F7UL)))    //7F7 - adc_coef_162
#define CFGBYTE_U8_ADC_COEF_163_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F8UL)))    //7F8 - adc_coef_163
#define CFGBYTE_U8_ADC_COEF_163_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7F9UL)))    //7F9 - adc_coef_163
#define CFGBYTE_U8_ADC_COEF_164_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7FAUL)))    //7FA - adc_coef_164
#define CFGBYTE_U8_ADC_COEF_164_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7FBUL)))    //7FB - adc_coef_164
#define CFGBYTE_U8_ADC_COEF_165_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7FCUL)))    //7FC - adc_coef_165
#define CFGBYTE_U8_ADC_COEF_165_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7FDUL)))    //7FD - adc_coef_165
#define CFGBYTE_U8_ADC_COEF_166_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x7FEUL)))    //7FE - adc_coef_166
#define CFGBYTE_U8_ADC_COEF_166_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x7FFUL)))    //7FF - adc_coef_166
#define CFGBYTE_U8_ADC_COEF_167_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x800UL)))    //800 - adc_coef_167
#define CFGBYTE_U8_ADC_COEF_167_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x801UL)))    //801 - adc_coef_167
#define CFGBYTE_U8_ADC_COEF_168_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x802UL)))    //802 - adc_coef_168
#define CFGBYTE_U8_ADC_COEF_168_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x803UL)))    //803 - adc_coef_168
#define CFGBYTE_U8_ADC_COEF_169_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x804UL)))    //804 - adc_coef_169
#define CFGBYTE_U8_ADC_COEF_169_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x805UL)))    //805 - adc_coef_169
#define CFGBYTE_U8_ADC_COEF_170_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x806UL)))    //806 - adc_coef_170
#define CFGBYTE_U8_ADC_COEF_170_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x807UL)))    //807 - adc_coef_170
#define CFGBYTE_U8_ADC_COEF_171_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x808UL)))    //808 - adc_coef_171
#define CFGBYTE_U8_ADC_COEF_171_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x809UL)))    //809 - adc_coef_171
#define CFGBYTE_U8_ADC_COEF_172_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x80AUL)))    //80A - adc_coef_172
#define CFGBYTE_U8_ADC_COEF_172_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x80BUL)))    //80B - adc_coef_172
#define CFGBYTE_U8_ADC_COEF_173_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x80CUL)))    //80C - adc_coef_173
#define CFGBYTE_U8_ADC_COEF_173_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x80DUL)))    //80D - adc_coef_173
#define CFGBYTE_U8_ADC_COEF_174_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x80EUL)))    //80E - adc_coef_174
#define CFGBYTE_U8_ADC_COEF_174_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x80FUL)))    //80F - adc_coef_174
#define CFGBYTE_U8_ADC_COEF_175_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x810UL)))    //810 - adc_coef_175
#define CFGBYTE_U8_ADC_COEF_175_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x811UL)))    //811 - adc_coef_175
#define CFGBYTE_U8_ADC_COEF_176_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x812UL)))    //812 - adc_coef_176
#define CFGBYTE_U8_ADC_COEF_176_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x813UL)))    //813 - adc_coef_176
#define CFGBYTE_U8_ADC_COEF_177_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x814UL)))    //814 - adc_coef_177
#define CFGBYTE_U8_ADC_COEF_177_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x815UL)))    //815 - adc_coef_177
#define CFGBYTE_U8_ADC_COEF_178_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x816UL)))    //816 - adc_coef_178
#define CFGBYTE_U8_ADC_COEF_178_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x817UL)))    //817 - adc_coef_178
#define CFGBYTE_U8_ADC_COEF_179_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x818UL)))    //818 - adc_coef_179
#define CFGBYTE_U8_ADC_COEF_179_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x819UL)))    //819 - adc_coef_179
#define CFGBYTE_U8_ADC_COEF_180_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x81AUL)))    //81A - adc_coef_180
#define CFGBYTE_U8_ADC_COEF_180_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x81BUL)))    //81B - adc_coef_180
#define CFGBYTE_U8_ADC_COEF_181_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x81CUL)))    //81C - adc_coef_181
#define CFGBYTE_U8_ADC_COEF_181_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x81DUL)))    //81D - adc_coef_181
#define CFGBYTE_U8_ADC_COEF_182_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x81EUL)))    //81E - adc_coef_182
#define CFGBYTE_U8_ADC_COEF_182_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x81FUL)))    //81F - adc_coef_182
#define CFGBYTE_U8_ADC_COEF_183_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x820UL)))    //820 - adc_coef_183
#define CFGBYTE_U8_ADC_COEF_183_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x821UL)))    //821 - adc_coef_183
#define CFGBYTE_U8_ADC_COEF_184_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x822UL)))    //822 - adc_coef_184
#define CFGBYTE_U8_ADC_COEF_184_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x823UL)))    //823 - adc_coef_184
#define CFGBYTE_U8_ADC_COEF_185_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x824UL)))    //824 - adc_coef_185
#define CFGBYTE_U8_ADC_COEF_185_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x825UL)))    //825 - adc_coef_185
#define CFGBYTE_U8_ADC_COEF_186_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x826UL)))    //826 - adc_coef_186
#define CFGBYTE_U8_ADC_COEF_186_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x827UL)))    //827 - adc_coef_186
#define CFGBYTE_U8_ADC_COEF_187_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x828UL)))    //828 - adc_coef_187
#define CFGBYTE_U8_ADC_COEF_187_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x829UL)))    //829 - adc_coef_187
#define CFGBYTE_U8_ADC_COEF_188_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x82AUL)))    //82A - adc_coef_188
#define CFGBYTE_U8_ADC_COEF_188_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x82BUL)))    //82B - adc_coef_188
#define CFGBYTE_U8_ADC_COEF_189_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x82CUL)))    //82C - adc_coef_189
#define CFGBYTE_U8_ADC_COEF_189_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x82DUL)))    //82D - adc_coef_189
#define CFGBYTE_U8_ADC_COEF_190_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x82EUL)))    //82E - adc_coef_190
#define CFGBYTE_U8_ADC_COEF_190_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x82FUL)))    //82F - adc_coef_190
#define CFGBYTE_U8_ADC_COEF_191_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x830UL)))    //830 - adc_coef_191
#define CFGBYTE_U8_ADC_COEF_191_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x831UL)))    //831 - adc_coef_191
#define CFGBYTE_U8_ADC_COEF_192_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x832UL)))    //832 - adc_coef_192
#define CFGBYTE_U8_ADC_COEF_192_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x833UL)))    //833 - adc_coef_192
#define CFGBYTE_U8_ADC_COEF_193_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x834UL)))    //834 - adc_coef_193
#define CFGBYTE_U8_ADC_COEF_193_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x835UL)))    //835 - adc_coef_193
#define CFGBYTE_U8_ADC_COEF_194_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x836UL)))    //836 - adc_coef_194
#define CFGBYTE_U8_ADC_COEF_194_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x837UL)))    //837 - adc_coef_194
#define CFGBYTE_U8_ADC_COEF_195_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x838UL)))    //838 - adc_coef_195
#define CFGBYTE_U8_ADC_COEF_195_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x839UL)))    //839 - adc_coef_195
#define CFGBYTE_U8_ADC_COEF_196_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x83AUL)))    //83A - adc_coef_196
#define CFGBYTE_U8_ADC_COEF_196_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x83BUL)))    //83B - adc_coef_196
#define CFGBYTE_U8_ADC_COEF_197_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x83CUL)))    //83C - adc_coef_197
#define CFGBYTE_U8_ADC_COEF_197_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x83DUL)))    //83D - adc_coef_197
#define CFGBYTE_U8_ADC_COEF_198_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x83EUL)))    //83E - adc_coef_198
#define CFGBYTE_U8_ADC_COEF_198_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x83FUL)))    //83F - adc_coef_198
#define CFGBYTE_U8_ADC_COEF_199_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x840UL)))    //840 - adc_coef_199
#define CFGBYTE_U8_ADC_COEF_199_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x841UL)))    //841 - adc_coef_199
#define CFGBYTE_U8_ADC_COEF_200_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x842UL)))    //842 - adc_coef_200
#define CFGBYTE_U8_ADC_COEF_200_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x843UL)))    //843 - adc_coef_200
#define CFGBYTE_U8_ADC_COEF_201_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x844UL)))    //844 - adc_coef_201
#define CFGBYTE_U8_ADC_COEF_201_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x845UL)))    //845 - adc_coef_201
#define CFGBYTE_U8_ADC_COEF_202_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x846UL)))    //846 - adc_coef_202
#define CFGBYTE_U8_ADC_COEF_202_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x847UL)))    //847 - adc_coef_202
#define CFGBYTE_U8_ADC_COEF_203_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x848UL)))    //848 - adc_coef_203
#define CFGBYTE_U8_ADC_COEF_203_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x849UL)))    //849 - adc_coef_203
#define CFGBYTE_U8_ADC_COEF_204_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x84AUL)))    //84A - adc_coef_204
#define CFGBYTE_U8_ADC_COEF_204_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x84BUL)))    //84B - adc_coef_204
#define CFGBYTE_U8_ADC_COEF_205_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x84CUL)))    //84C - adc_coef_205
#define CFGBYTE_U8_ADC_COEF_205_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x84DUL)))    //84D - adc_coef_205
#define CFGBYTE_U8_ADC_COEF_206_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x84EUL)))    //84E - adc_coef_206
#define CFGBYTE_U8_ADC_COEF_206_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x84FUL)))    //84F - adc_coef_206
#define CFGBYTE_U8_ADC_COEF_207_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x850UL)))    //850 - adc_coef_207
#define CFGBYTE_U8_ADC_COEF_207_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x851UL)))    //851 - adc_coef_207
#define CFGBYTE_U8_ADC_COEF_208_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x852UL)))    //852 - adc_coef_208
#define CFGBYTE_U8_ADC_COEF_208_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x853UL)))    //853 - adc_coef_208
#define CFGBYTE_U8_ADC_COEF_209_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x854UL)))    //854 - adc_coef_209
#define CFGBYTE_U8_ADC_COEF_209_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x855UL)))    //855 - adc_coef_209
#define CFGBYTE_U8_ADC_COEF_210_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x856UL)))    //856 - adc_coef_210
#define CFGBYTE_U8_ADC_COEF_210_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x857UL)))    //857 - adc_coef_210
#define CFGBYTE_U8_ADC_COEF_211_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x858UL)))    //858 - adc_coef_211
#define CFGBYTE_U8_ADC_COEF_211_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x859UL)))    //859 - adc_coef_211
#define CFGBYTE_U8_ADC_COEF_212_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x85AUL)))    //85A - adc_coef_212
#define CFGBYTE_U8_ADC_COEF_212_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x85BUL)))    //85B - adc_coef_212
#define CFGBYTE_U8_ADC_COEF_213_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x85CUL)))    //85C - adc_coef_213
#define CFGBYTE_U8_ADC_COEF_213_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x85DUL)))    //85D - adc_coef_213
#define CFGBYTE_U8_ADC_COEF_214_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x85EUL)))    //85E - adc_coef_214
#define CFGBYTE_U8_ADC_COEF_214_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x85FUL)))    //85F - adc_coef_214
#define CFGBYTE_U8_ADC_COEF_215_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x860UL)))    //860 - adc_coef_215
#define CFGBYTE_U8_ADC_COEF_215_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x861UL)))    //861 - adc_coef_215
#define CFGBYTE_U8_ADC_COEF_216_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x862UL)))    //862 - adc_coef_216
#define CFGBYTE_U8_ADC_COEF_216_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x863UL)))    //863 - adc_coef_216
#define CFGBYTE_U8_ADC_COEF_217_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x864UL)))    //864 - adc_coef_217
#define CFGBYTE_U8_ADC_COEF_217_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x865UL)))    //865 - adc_coef_217
#define CFGBYTE_U8_ADC_COEF_218_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x866UL)))    //866 - adc_coef_218
#define CFGBYTE_U8_ADC_COEF_218_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x867UL)))    //867 - adc_coef_218
#define CFGBYTE_U8_ADC_COEF_219_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x868UL)))    //868 - adc_coef_219
#define CFGBYTE_U8_ADC_COEF_219_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x869UL)))    //869 - adc_coef_219
#define CFGBYTE_U8_ADC_COEF_220_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x86AUL)))    //86A - adc_coef_220
#define CFGBYTE_U8_ADC_COEF_220_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x86BUL)))    //86B - adc_coef_220
#define CFGBYTE_U8_ADC_COEF_221_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x86CUL)))    //86C - adc_coef_221
#define CFGBYTE_U8_ADC_COEF_221_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x86DUL)))    //86D - adc_coef_221
#define CFGBYTE_U8_ADC_COEF_222_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x86EUL)))    //86E - adc_coef_222
#define CFGBYTE_U8_ADC_COEF_222_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x86FUL)))    //86F - adc_coef_222
#define CFGBYTE_U8_ADC_COEF_223_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x870UL)))    //870 - adc_coef_223
#define CFGBYTE_U8_ADC_COEF_223_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x871UL)))    //871 - adc_coef_223
#define CFGBYTE_U8_ADC_COEF_224_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x872UL)))    //872 - adc_coef_224
#define CFGBYTE_U8_ADC_COEF_224_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x873UL)))    //873 - adc_coef_224
#define CFGBYTE_U8_ADC_COEF_225_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x874UL)))    //874 - adc_coef_225
#define CFGBYTE_U8_ADC_COEF_225_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x875UL)))    //875 - adc_coef_225
#define CFGBYTE_U8_ADC_COEF_226_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x876UL)))    //876 - adc_coef_226
#define CFGBYTE_U8_ADC_COEF_226_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x877UL)))    //877 - adc_coef_226
#define CFGBYTE_U8_ADC_COEF_227_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x878UL)))    //878 - adc_coef_227
#define CFGBYTE_U8_ADC_COEF_227_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x879UL)))    //879 - adc_coef_227
#define CFGBYTE_U8_ADC_COEF_228_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x87AUL)))    //87A - adc_coef_228
#define CFGBYTE_U8_ADC_COEF_228_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x87BUL)))    //87B - adc_coef_228
#define CFGBYTE_U8_ADC_COEF_229_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x87CUL)))    //87C - adc_coef_229
#define CFGBYTE_U8_ADC_COEF_229_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x87DUL)))    //87D - adc_coef_229
#define CFGBYTE_U8_ADC_COEF_230_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x87EUL)))    //87E - adc_coef_230
#define CFGBYTE_U8_ADC_COEF_230_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x87FUL)))    //87F - adc_coef_230
#define CFGBYTE_U8_ADC_COEF_231_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x880UL)))    //880 - adc_coef_231
#define CFGBYTE_U8_ADC_COEF_231_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x881UL)))    //881 - adc_coef_231
#define CFGBYTE_U8_ADC_COEF_232_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x882UL)))    //882 - adc_coef_232
#define CFGBYTE_U8_ADC_COEF_232_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x883UL)))    //883 - adc_coef_232
#define CFGBYTE_U8_ADC_COEF_233_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x884UL)))    //884 - adc_coef_233
#define CFGBYTE_U8_ADC_COEF_233_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x885UL)))    //885 - adc_coef_233
#define CFGBYTE_U8_ADC_COEF_234_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x886UL)))    //886 - adc_coef_234
#define CFGBYTE_U8_ADC_COEF_234_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x887UL)))    //887 - adc_coef_234
#define CFGBYTE_U8_ADC_COEF_235_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x888UL)))    //888 - adc_coef_235
#define CFGBYTE_U8_ADC_COEF_235_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x889UL)))    //889 - adc_coef_235
#define CFGBYTE_U8_ADC_COEF_236_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x88AUL)))    //88A - adc_coef_236
#define CFGBYTE_U8_ADC_COEF_236_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x88BUL)))    //88B - adc_coef_236
#define CFGBYTE_U8_ADC_COEF_237_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x88CUL)))    //88C - adc_coef_237
#define CFGBYTE_U8_ADC_COEF_237_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x88DUL)))    //88D - adc_coef_237
#define CFGBYTE_U8_ADC_COEF_238_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x88EUL)))    //88E - adc_coef_238
#define CFGBYTE_U8_ADC_COEF_238_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x88FUL)))    //88F - adc_coef_238
#define CFGBYTE_U8_ADC_COEF_239_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x890UL)))    //890 - adc_coef_239
#define CFGBYTE_U8_ADC_COEF_239_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x891UL)))    //891 - adc_coef_239
#define CFGBYTE_U8_ADC_COEF_240_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x892UL)))    //892 - adc_coef_240
#define CFGBYTE_U8_ADC_COEF_240_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x893UL)))    //893 - adc_coef_240
#define CFGBYTE_U8_ADC_COEF_241_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x894UL)))    //894 - adc_coef_241
#define CFGBYTE_U8_ADC_COEF_241_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x895UL)))    //895 - adc_coef_241
#define CFGBYTE_U8_ADC_COEF_242_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x896UL)))    //896 - adc_coef_242
#define CFGBYTE_U8_ADC_COEF_242_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x897UL)))    //897 - adc_coef_242
#define CFGBYTE_U8_ADC_COEF_243_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x898UL)))    //898 - adc_coef_243
#define CFGBYTE_U8_ADC_COEF_243_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x899UL)))    //899 - adc_coef_243
#define CFGBYTE_U8_ADC_COEF_244_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x89AUL)))    //89A - adc_coef_244
#define CFGBYTE_U8_ADC_COEF_244_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x89BUL)))    //89B - adc_coef_244
#define CFGBYTE_U8_ADC_COEF_245_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x89CUL)))    //89C - adc_coef_245
#define CFGBYTE_U8_ADC_COEF_245_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x89DUL)))    //89D - adc_coef_245
#define CFGBYTE_U8_ADC_COEF_246_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x89EUL)))    //89E - adc_coef_246
#define CFGBYTE_U8_ADC_COEF_246_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x89FUL)))    //89F - adc_coef_246
#define CFGBYTE_U8_ADC_COEF_247_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A0UL)))    //8A0 - adc_coef_247
#define CFGBYTE_U8_ADC_COEF_247_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A1UL)))    //8A1 - adc_coef_247
#define CFGBYTE_U8_ADC_COEF_248_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A2UL)))    //8A2 - adc_coef_248
#define CFGBYTE_U8_ADC_COEF_248_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A3UL)))    //8A3 - adc_coef_248
#define CFGBYTE_U8_ADC_COEF_249_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A4UL)))    //8A4 - adc_coef_249
#define CFGBYTE_U8_ADC_COEF_249_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A5UL)))    //8A5 - adc_coef_249
#define CFGBYTE_U8_ADC_COEF_250_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A6UL)))    //8A6 - adc_coef_250
#define CFGBYTE_U8_ADC_COEF_250_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A7UL)))    //8A7 - adc_coef_250
#define CFGBYTE_U8_ADC_COEF_251_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A8UL)))    //8A8 - adc_coef_251
#define CFGBYTE_U8_ADC_COEF_251_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8A9UL)))    //8A9 - adc_coef_251
#define CFGBYTE_U8_ADC_COEF_252_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8AAUL)))    //8AA - adc_coef_252
#define CFGBYTE_U8_ADC_COEF_252_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8ABUL)))    //8AB - adc_coef_252
#define CFGBYTE_U8_ADC_COEF_253_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8ACUL)))    //8AC - adc_coef_253
#define CFGBYTE_U8_ADC_COEF_253_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8ADUL)))    //8AD - adc_coef_253
#define CFGBYTE_U8_ADC_COEF_254_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8AEUL)))    //8AE - adc_coef_254
#define CFGBYTE_U8_ADC_COEF_254_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8AFUL)))    //8AF - adc_coef_254
#define CFGBYTE_U8_ADC_COEF_255_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B0UL)))    //8B0 - adc_coef_255
#define CFGBYTE_U8_ADC_COEF_255_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B1UL)))    //8B1 - adc_coef_255
#define CFGBYTE_U8_ADC_COEF_256_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B2UL)))    //8B2 - adc_coef_256
#define CFGBYTE_U8_ADC_COEF_256_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B3UL)))    //8B3 - adc_coef_256
#define CFGBYTE_U8_ADC_COEF_257_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B4UL)))    //8B4 - adc_coef_257
#define CFGBYTE_U8_ADC_COEF_257_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B5UL)))    //8B5 - adc_coef_257
#define CFGBYTE_U8_ADC_COEF_258_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B6UL)))    //8B6 - adc_coef_258
#define CFGBYTE_U8_ADC_COEF_258_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B7UL)))    //8B7 - adc_coef_258
#define CFGBYTE_U8_ADC_COEF_259_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B8UL)))    //8B8 - adc_coef_259
#define CFGBYTE_U8_ADC_COEF_259_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8B9UL)))    //8B9 - adc_coef_259
#define CFGBYTE_U8_ADC_COEF_260_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8BAUL)))    //8BA - adc_coef_260
#define CFGBYTE_U8_ADC_COEF_260_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8BBUL)))    //8BB - adc_coef_260
#define CFGBYTE_U8_ADC_COEF_261_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8BCUL)))    //8BC - adc_coef_261
#define CFGBYTE_U8_ADC_COEF_261_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8BDUL)))    //8BD - adc_coef_261
#define CFGBYTE_U8_ADC_COEF_262_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8BEUL)))    //8BE - adc_coef_262
#define CFGBYTE_U8_ADC_COEF_262_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8BFUL)))    //8BF - adc_coef_262
#define CFGBYTE_U8_ADC_COEF_263_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C0UL)))    //8C0 - adc_coef_263
#define CFGBYTE_U8_ADC_COEF_263_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C1UL)))    //8C1 - adc_coef_263
#define CFGBYTE_U8_ADC_COEF_264_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C2UL)))    //8C2 - adc_coef_264
#define CFGBYTE_U8_ADC_COEF_264_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C3UL)))    //8C3 - adc_coef_264
#define CFGBYTE_U8_ADC_COEF_265_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C4UL)))    //8C4 - adc_coef_265
#define CFGBYTE_U8_ADC_COEF_265_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C5UL)))    //8C5 - adc_coef_265
#define CFGBYTE_U8_ADC_COEF_266_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C6UL)))    //8C6 - adc_coef_266
#define CFGBYTE_U8_ADC_COEF_266_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C7UL)))    //8C7 - adc_coef_266
#define CFGBYTE_U8_ADC_COEF_267_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C8UL)))    //8C8 - adc_coef_267
#define CFGBYTE_U8_ADC_COEF_267_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8C9UL)))    //8C9 - adc_coef_267
#define CFGBYTE_U8_ADC_COEF_268_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8CAUL)))    //8CA - adc_coef_268
#define CFGBYTE_U8_ADC_COEF_268_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8CBUL)))    //8CB - adc_coef_268
#define CFGBYTE_U8_ADC_COEF_269_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8CCUL)))    //8CC - adc_coef_269
#define CFGBYTE_U8_ADC_COEF_269_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8CDUL)))    //8CD - adc_coef_269
#define CFGBYTE_U8_ADC_COEF_270_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8CEUL)))    //8CE - adc_coef_270
#define CFGBYTE_U8_ADC_COEF_270_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8CFUL)))    //8CF - adc_coef_270
#define CFGBYTE_U8_ADC_COEF_271_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D0UL)))    //8D0 - adc_coef_271
#define CFGBYTE_U8_ADC_COEF_271_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D1UL)))    //8D1 - adc_coef_271
#define CFGBYTE_U8_ADC_COEF_272_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D2UL)))    //8D2 - adc_coef_272
#define CFGBYTE_U8_ADC_COEF_272_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D3UL)))    //8D3 - adc_coef_272
#define CFGBYTE_U8_ADC_COEF_273_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D4UL)))    //8D4 - adc_coef_273
#define CFGBYTE_U8_ADC_COEF_273_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D5UL)))    //8D5 - adc_coef_273
#define CFGBYTE_U8_ADC_COEF_274_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D6UL)))    //8D6 - adc_coef_274
#define CFGBYTE_U8_ADC_COEF_274_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D7UL)))    //8D7 - adc_coef_274
#define CFGBYTE_U8_ADC_COEF_275_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D8UL)))    //8D8 - adc_coef_275
#define CFGBYTE_U8_ADC_COEF_275_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8D9UL)))    //8D9 - adc_coef_275
#define CFGBYTE_U8_ADC_COEF_276_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8DAUL)))    //8DA - adc_coef_276
#define CFGBYTE_U8_ADC_COEF_276_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8DBUL)))    //8DB - adc_coef_276
#define CFGBYTE_U8_ADC_COEF_277_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8DCUL)))    //8DC - adc_coef_277
#define CFGBYTE_U8_ADC_COEF_277_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8DDUL)))    //8DD - adc_coef_277
#define CFGBYTE_U8_ADC_COEF_278_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8DEUL)))    //8DE - adc_coef_278
#define CFGBYTE_U8_ADC_COEF_278_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8DFUL)))    //8DF - adc_coef_278
#define CFGBYTE_U8_ADC_COEF_279_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E0UL)))    //8E0 - adc_coef_279
#define CFGBYTE_U8_ADC_COEF_279_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E1UL)))    //8E1 - adc_coef_279
#define CFGBYTE_U8_ADC_COEF_280_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E2UL)))    //8E2 - adc_coef_280
#define CFGBYTE_U8_ADC_COEF_280_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E3UL)))    //8E3 - adc_coef_280
#define CFGBYTE_U8_ADC_COEF_281_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E4UL)))    //8E4 - adc_coef_281
#define CFGBYTE_U8_ADC_COEF_281_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E5UL)))    //8E5 - adc_coef_281
#define CFGBYTE_U8_ADC_COEF_282_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E6UL)))    //8E6 - adc_coef_282
#define CFGBYTE_U8_ADC_COEF_282_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E7UL)))    //8E7 - adc_coef_282
#define CFGBYTE_U8_ADC_COEF_283_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E8UL)))    //8E8 - adc_coef_283
#define CFGBYTE_U8_ADC_COEF_283_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8E9UL)))    //8E9 - adc_coef_283
#define CFGBYTE_U8_ADC_COEF_284_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8EAUL)))    //8EA - adc_coef_284
#define CFGBYTE_U8_ADC_COEF_284_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8EBUL)))    //8EB - adc_coef_284
#define CFGBYTE_U8_ADC_COEF_285_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8ECUL)))    //8EC - adc_coef_285
#define CFGBYTE_U8_ADC_COEF_285_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8EDUL)))    //8ED - adc_coef_285
#define CFGBYTE_U8_ADC_COEF_286_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8EEUL)))    //8EE - adc_coef_286
#define CFGBYTE_U8_ADC_COEF_286_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8EFUL)))    //8EF - adc_coef_286
#define CFGBYTE_U8_ADC_COEF_287_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F0UL)))    //8F0 - adc_coef_287
#define CFGBYTE_U8_ADC_COEF_287_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F1UL)))    //8F1 - adc_coef_287
#define CFGBYTE_U8_ADC_COEF_288_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F2UL)))    //8F2 - adc_coef_288
#define CFGBYTE_U8_ADC_COEF_288_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F3UL)))    //8F3 - adc_coef_288
#define CFGBYTE_U8_ADC_COEF_289_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F4UL)))    //8F4 - adc_coef_289
#define CFGBYTE_U8_ADC_COEF_289_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F5UL)))    //8F5 - adc_coef_289
#define CFGBYTE_U8_ADC_COEF_290_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F6UL)))    //8F6 - adc_coef_290
#define CFGBYTE_U8_ADC_COEF_290_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F7UL)))    //8F7 - adc_coef_290
#define CFGBYTE_U8_ADC_COEF_291_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F8UL)))    //8F8 - adc_coef_291
#define CFGBYTE_U8_ADC_COEF_291_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8F9UL)))    //8F9 - adc_coef_291
#define CFGBYTE_U8_ADC_COEF_292_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8FAUL)))    //8FA - adc_coef_292
#define CFGBYTE_U8_ADC_COEF_292_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8FBUL)))    //8FB - adc_coef_292
#define CFGBYTE_U8_ADC_COEF_293_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8FCUL)))    //8FC - adc_coef_293
#define CFGBYTE_U8_ADC_COEF_293_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8FDUL)))    //8FD - adc_coef_293
#define CFGBYTE_U8_ADC_COEF_294_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x8FEUL)))    //8FE - adc_coef_294
#define CFGBYTE_U8_ADC_COEF_294_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x8FFUL)))    //8FF - adc_coef_294
#define CFGBYTE_U8_ADC_COEF_295_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x900UL)))    //900 - adc_coef_295
#define CFGBYTE_U8_ADC_COEF_295_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x901UL)))    //901 - adc_coef_295
#define CFGBYTE_U8_ADC_COEF_296_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x902UL)))    //902 - adc_coef_296
#define CFGBYTE_U8_ADC_COEF_296_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x903UL)))    //903 - adc_coef_296
#define CFGBYTE_U8_ADC_COEF_297_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x904UL)))    //904 - adc_coef_297
#define CFGBYTE_U8_ADC_COEF_297_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x905UL)))    //905 - adc_coef_297
#define CFGBYTE_U8_ADC_COEF_298_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x906UL)))    //906 - adc_coef_298
#define CFGBYTE_U8_ADC_COEF_298_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x907UL)))    //907 - adc_coef_298
#define CFGBYTE_U8_ADC_COEF_299_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x908UL)))    //908 - adc_coef_299
#define CFGBYTE_U8_ADC_COEF_299_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x909UL)))    //909 - adc_coef_299
#define CFGBYTE_U8_ADC_COEF_300_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x90AUL)))    //90A - adc_coef_300
#define CFGBYTE_U8_ADC_COEF_300_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x90BUL)))    //90B - adc_coef_300
#define CFGBYTE_U8_ADC_COEF_301_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x90CUL)))    //90C - adc_coef_301
#define CFGBYTE_U8_ADC_COEF_301_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x90DUL)))    //90D - adc_coef_301
#define CFGBYTE_U8_ADC_COEF_302_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x90EUL)))    //90E - adc_coef_302
#define CFGBYTE_U8_ADC_COEF_302_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x90FUL)))    //90F - adc_coef_302
#define CFGBYTE_U8_ADC_COEF_303_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x910UL)))    //910 - adc_coef_303
#define CFGBYTE_U8_ADC_COEF_303_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x911UL)))    //911 - adc_coef_303
#define CFGBYTE_U8_ADC_COEF_304_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x912UL)))    //912 - adc_coef_304
#define CFGBYTE_U8_ADC_COEF_304_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x913UL)))    //913 - adc_coef_304
#define CFGBYTE_U8_ADC_COEF_305_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x914UL)))    //914 - adc_coef_305
#define CFGBYTE_U8_ADC_COEF_305_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x915UL)))    //915 - adc_coef_305
#define CFGBYTE_U8_ADC_COEF_306_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x916UL)))    //916 - adc_coef_306
#define CFGBYTE_U8_ADC_COEF_306_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x917UL)))    //917 - adc_coef_306
#define CFGBYTE_U8_ADC_COEF_307_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x918UL)))    //918 - adc_coef_307
#define CFGBYTE_U8_ADC_COEF_307_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x919UL)))    //919 - adc_coef_307
#define CFGBYTE_U8_ADC_COEF_308_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x91AUL)))    //91A - adc_coef_308
#define CFGBYTE_U8_ADC_COEF_308_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x91BUL)))    //91B - adc_coef_308
#define CFGBYTE_U8_ADC_COEF_309_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x91CUL)))    //91C - adc_coef_309
#define CFGBYTE_U8_ADC_COEF_309_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x91DUL)))    //91D - adc_coef_309
#define CFGBYTE_U8_ADC_COEF_310_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x91EUL)))    //91E - adc_coef_310
#define CFGBYTE_U8_ADC_COEF_310_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x91FUL)))    //91F - adc_coef_310
#define CFGBYTE_U8_ADC_COEF_311_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x920UL)))    //920 - adc_coef_311
#define CFGBYTE_U8_ADC_COEF_311_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x921UL)))    //921 - adc_coef_311
#define CFGBYTE_U8_ADC_COEF_312_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x922UL)))    //922 - adc_coef_312
#define CFGBYTE_U8_ADC_COEF_312_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x923UL)))    //923 - adc_coef_312
#define CFGBYTE_U8_ADC_COEF_313_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x924UL)))    //924 - adc_coef_313
#define CFGBYTE_U8_ADC_COEF_313_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x925UL)))    //925 - adc_coef_313
#define CFGBYTE_U8_ADC_COEF_314_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x926UL)))    //926 - adc_coef_314
#define CFGBYTE_U8_ADC_COEF_314_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x927UL)))    //927 - adc_coef_314
#define CFGBYTE_U8_ADC_COEF_315_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x928UL)))    //928 - adc_coef_315
#define CFGBYTE_U8_ADC_COEF_315_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x929UL)))    //929 - adc_coef_315
#define CFGBYTE_U8_ADC_COEF_316_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x92AUL)))    //92A - adc_coef_316
#define CFGBYTE_U8_ADC_COEF_316_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x92BUL)))    //92B - adc_coef_316
#define CFGBYTE_U8_ADC_COEF_317_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x92CUL)))    //92C - adc_coef_317
#define CFGBYTE_U8_ADC_COEF_317_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x92DUL)))    //92D - adc_coef_317
#define CFGBYTE_U8_ADC_COEF_318_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x92EUL)))    //92E - adc_coef_318
#define CFGBYTE_U8_ADC_COEF_318_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x92FUL)))    //92F - adc_coef_318
#define CFGBYTE_U8_ADC_COEF_319_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x930UL)))    //930 - adc_coef_319
#define CFGBYTE_U8_ADC_COEF_319_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x931UL)))    //931 - adc_coef_319
#define CFGBYTE_U8_ADC_COEF_320_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x932UL)))    //932 - adc_coef_320
#define CFGBYTE_U8_ADC_COEF_320_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x933UL)))    //933 - adc_coef_320
#define CFGBYTE_U8_ADC_COEF_321_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x934UL)))    //934 - adc_coef_321
#define CFGBYTE_U8_ADC_COEF_321_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x935UL)))    //935 - adc_coef_321
#define CFGBYTE_U8_ADC_COEF_322_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x936UL)))    //936 - adc_coef_322
#define CFGBYTE_U8_ADC_COEF_322_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x937UL)))    //937 - adc_coef_322
#define CFGBYTE_U8_ADC_COEF_323_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x938UL)))    //938 - adc_coef_323
#define CFGBYTE_U8_ADC_COEF_323_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x939UL)))    //939 - adc_coef_323
#define CFGBYTE_U8_ADC_COEF_324_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x93AUL)))    //93A - adc_coef_324
#define CFGBYTE_U8_ADC_COEF_324_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x93BUL)))    //93B - adc_coef_324
#define CFGBYTE_U8_ADC_COEF_325_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x93CUL)))    //93C - adc_coef_325
#define CFGBYTE_U8_ADC_COEF_325_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x93DUL)))    //93D - adc_coef_325
#define CFGBYTE_U8_ADC_COEF_326_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x93EUL)))    //93E - adc_coef_326
#define CFGBYTE_U8_ADC_COEF_326_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x93FUL)))    //93F - adc_coef_326
#define CFGBYTE_U8_ADC_COEF_327_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x940UL)))    //940 - adc_coef_327
#define CFGBYTE_U8_ADC_COEF_327_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x941UL)))    //941 - adc_coef_327
#define CFGBYTE_U8_ADC_COEF_328_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x942UL)))    //942 - adc_coef_328
#define CFGBYTE_U8_ADC_COEF_328_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x943UL)))    //943 - adc_coef_328
#define CFGBYTE_U8_ADC_COEF_329_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x944UL)))    //944 - adc_coef_329
#define CFGBYTE_U8_ADC_COEF_329_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x945UL)))    //945 - adc_coef_329
#define CFGBYTE_U8_ADC_COEF_330_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x946UL)))    //946 - adc_coef_330
#define CFGBYTE_U8_ADC_COEF_330_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x947UL)))    //947 - adc_coef_330
#define CFGBYTE_U8_ADC_COEF_331_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x948UL)))    //948 - adc_coef_331
#define CFGBYTE_U8_ADC_COEF_331_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x949UL)))    //949 - adc_coef_331
#define CFGBYTE_U8_ADC_COEF_332_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x94AUL)))    //94A - adc_coef_332
#define CFGBYTE_U8_ADC_COEF_332_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x94BUL)))    //94B - adc_coef_332
#define CFGBYTE_U8_ADC_COEF_333_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x94CUL)))    //94C - adc_coef_333
#define CFGBYTE_U8_ADC_COEF_333_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x94DUL)))    //94D - adc_coef_333
#define CFGBYTE_U8_ADC_COEF_334_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x94EUL)))    //94E - adc_coef_334
#define CFGBYTE_U8_ADC_COEF_334_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x94FUL)))    //94F - adc_coef_334
#define CFGBYTE_U8_ADC_COEF_335_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x950UL)))    //950 - adc_coef_335
#define CFGBYTE_U8_ADC_COEF_335_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x951UL)))    //951 - adc_coef_335
#define CFGBYTE_U8_ADC_COEF_336_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x952UL)))    //952 - adc_coef_336
#define CFGBYTE_U8_ADC_COEF_336_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x953UL)))    //953 - adc_coef_336
#define CFGBYTE_U8_ADC_COEF_337_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x954UL)))    //954 - adc_coef_337
#define CFGBYTE_U8_ADC_COEF_337_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x955UL)))    //955 - adc_coef_337
#define CFGBYTE_U8_ADC_COEF_338_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x956UL)))    //956 - adc_coef_338
#define CFGBYTE_U8_ADC_COEF_338_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x957UL)))    //957 - adc_coef_338
#define CFGBYTE_U8_ADC_COEF_339_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x958UL)))    //958 - adc_coef_339
#define CFGBYTE_U8_ADC_COEF_339_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x959UL)))    //959 - adc_coef_339
#define CFGBYTE_U8_ADC_COEF_340_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x95AUL)))    //95A - adc_coef_340
#define CFGBYTE_U8_ADC_COEF_340_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x95BUL)))    //95B - adc_coef_340
#define CFGBYTE_U8_ADC_COEF_341_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x95CUL)))    //95C - adc_coef_341
#define CFGBYTE_U8_ADC_COEF_341_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x95DUL)))    //95D - adc_coef_341
#define CFGBYTE_U8_ADC_COEF_342_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x95EUL)))    //95E - adc_coef_342
#define CFGBYTE_U8_ADC_COEF_342_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x95FUL)))    //95F - adc_coef_342
#define CFGBYTE_U8_ADC_COEF_343_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x960UL)))    //960 - adc_coef_343
#define CFGBYTE_U8_ADC_COEF_343_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x961UL)))    //961 - adc_coef_343
#define CFGBYTE_U8_ADC_COEF_344_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x962UL)))    //962 - adc_coef_344
#define CFGBYTE_U8_ADC_COEF_344_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x963UL)))    //963 - adc_coef_344
#define CFGBYTE_U8_ADC_COEF_345_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x964UL)))    //964 - adc_coef_345
#define CFGBYTE_U8_ADC_COEF_345_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x965UL)))    //965 - adc_coef_345
#define CFGBYTE_U8_ADC_COEF_346_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x966UL)))    //966 - adc_coef_346
#define CFGBYTE_U8_ADC_COEF_346_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x967UL)))    //967 - adc_coef_346
#define CFGBYTE_U8_ADC_COEF_347_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x968UL)))    //968 - adc_coef_347
#define CFGBYTE_U8_ADC_COEF_347_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x969UL)))    //969 - adc_coef_347
#define CFGBYTE_U8_ADC_COEF_348_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x96AUL)))    //96A - adc_coef_348
#define CFGBYTE_U8_ADC_COEF_348_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x96BUL)))    //96B - adc_coef_348
#define CFGBYTE_U8_ADC_COEF_349_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x96CUL)))    //96C - adc_coef_349
#define CFGBYTE_U8_ADC_COEF_349_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x96DUL)))    //96D - adc_coef_349
#define CFGBYTE_U8_ADC_COEF_350_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x96EUL)))    //96E - adc_coef_350
#define CFGBYTE_U8_ADC_COEF_350_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x96FUL)))    //96F - adc_coef_350
#define CFGBYTE_U8_ADC_COEF_351_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x970UL)))    //970 - adc_coef_351
#define CFGBYTE_U8_ADC_COEF_351_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x971UL)))    //971 - adc_coef_351
#define CFGBYTE_U8_ADC_COEF_352_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x972UL)))    //972 - adc_coef_352
#define CFGBYTE_U8_ADC_COEF_352_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x973UL)))    //973 - adc_coef_352
#define CFGBYTE_U8_ADC_COEF_353_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x974UL)))    //974 - adc_coef_353
#define CFGBYTE_U8_ADC_COEF_353_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x975UL)))    //975 - adc_coef_353
#define CFGBYTE_U8_ADC_COEF_354_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x976UL)))    //976 - adc_coef_354
#define CFGBYTE_U8_ADC_COEF_354_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x977UL)))    //977 - adc_coef_354
#define CFGBYTE_U8_ADC_COEF_355_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x978UL)))    //978 - adc_coef_355
#define CFGBYTE_U8_ADC_COEF_355_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x979UL)))    //979 - adc_coef_355
#define CFGBYTE_U8_ADC_COEF_356_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x97AUL)))    //97A - adc_coef_356
#define CFGBYTE_U8_ADC_COEF_356_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x97BUL)))    //97B - adc_coef_356
#define CFGBYTE_U8_ADC_COEF_357_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x97CUL)))    //97C - adc_coef_357
#define CFGBYTE_U8_ADC_COEF_357_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x97DUL)))    //97D - adc_coef_357
#define CFGBYTE_U8_ADC_COEF_358_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x97EUL)))    //97E - adc_coef_358
#define CFGBYTE_U8_ADC_COEF_358_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x97FUL)))    //97F - adc_coef_358
#define CFGBYTE_U8_ADC_COEF_359_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x980UL)))    //980 - adc_coef_359
#define CFGBYTE_U8_ADC_COEF_359_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x981UL)))    //981 - adc_coef_359
#define CFGBYTE_U8_ADC_COEF_360_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x982UL)))    //982 - adc_coef_360
#define CFGBYTE_U8_ADC_COEF_360_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x983UL)))    //983 - adc_coef_360
#define CFGBYTE_U8_ADC_COEF_361_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x984UL)))    //984 - adc_coef_361
#define CFGBYTE_U8_ADC_COEF_361_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x985UL)))    //985 - adc_coef_361
#define CFGBYTE_U8_ADC_COEF_362_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x986UL)))    //986 - adc_coef_362
#define CFGBYTE_U8_ADC_COEF_362_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x987UL)))    //987 - adc_coef_362
#define CFGBYTE_U8_ADC_COEF_363_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x988UL)))    //988 - adc_coef_363
#define CFGBYTE_U8_ADC_COEF_363_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x989UL)))    //989 - adc_coef_363
#define CFGBYTE_U8_ADC_COEF_364_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x98AUL)))    //98A - adc_coef_364
#define CFGBYTE_U8_ADC_COEF_364_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x98BUL)))    //98B - adc_coef_364
#define CFGBYTE_U8_ADC_COEF_365_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x98CUL)))    //98C - adc_coef_365
#define CFGBYTE_U8_ADC_COEF_365_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x98DUL)))    //98D - adc_coef_365
#define CFGBYTE_U8_ADC_COEF_366_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x98EUL)))    //98E - adc_coef_366
#define CFGBYTE_U8_ADC_COEF_366_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x98FUL)))    //98F - adc_coef_366
#define CFGBYTE_U8_ADC_COEF_367_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x990UL)))    //990 - adc_coef_367
#define CFGBYTE_U8_ADC_COEF_367_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x991UL)))    //991 - adc_coef_367
#define CFGBYTE_U8_ADC_COEF_368_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x992UL)))    //992 - adc_coef_368
#define CFGBYTE_U8_ADC_COEF_368_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x993UL)))    //993 - adc_coef_368
#define CFGBYTE_U8_ADC_COEF_369_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x994UL)))    //994 - adc_coef_369
#define CFGBYTE_U8_ADC_COEF_369_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x995UL)))    //995 - adc_coef_369
#define CFGBYTE_U8_ADC_COEF_370_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x996UL)))    //996 - adc_coef_370
#define CFGBYTE_U8_ADC_COEF_370_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x997UL)))    //997 - adc_coef_370
#define CFGBYTE_U8_ADC_COEF_371_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x998UL)))    //998 - adc_coef_371
#define CFGBYTE_U8_ADC_COEF_371_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x999UL)))    //999 - adc_coef_371
#define CFGBYTE_U8_ADC_COEF_372_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x99AUL)))    //99A - adc_coef_372
#define CFGBYTE_U8_ADC_COEF_372_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x99BUL)))    //99B - adc_coef_372
#define CFGBYTE_U8_ADC_COEF_373_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x99CUL)))    //99C - adc_coef_373
#define CFGBYTE_U8_ADC_COEF_373_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x99DUL)))    //99D - adc_coef_373
#define CFGBYTE_U8_ADC_COEF_374_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x99EUL)))    //99E - adc_coef_374
#define CFGBYTE_U8_ADC_COEF_374_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x99FUL)))    //99F - adc_coef_374
#define CFGBYTE_U8_ADC_COEF_375_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A0UL)))    //9A0 - adc_coef_375
#define CFGBYTE_U8_ADC_COEF_375_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A1UL)))    //9A1 - adc_coef_375
#define CFGBYTE_U8_ADC_COEF_376_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A2UL)))    //9A2 - adc_coef_376
#define CFGBYTE_U8_ADC_COEF_376_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A3UL)))    //9A3 - adc_coef_376
#define CFGBYTE_U8_ADC_COEF_377_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A4UL)))    //9A4 - adc_coef_377
#define CFGBYTE_U8_ADC_COEF_377_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A5UL)))    //9A5 - adc_coef_377
#define CFGBYTE_U8_ADC_COEF_378_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A6UL)))    //9A6 - adc_coef_378
#define CFGBYTE_U8_ADC_COEF_378_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A7UL)))    //9A7 - adc_coef_378
#define CFGBYTE_U8_ADC_COEF_379_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A8UL)))    //9A8 - adc_coef_379
#define CFGBYTE_U8_ADC_COEF_379_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9A9UL)))    //9A9 - adc_coef_379
#define CFGBYTE_U8_ADC_COEF_380_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9AAUL)))    //9AA - adc_coef_380
#define CFGBYTE_U8_ADC_COEF_380_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9ABUL)))    //9AB - adc_coef_380
#define CFGBYTE_U8_ADC_COEF_381_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9ACUL)))    //9AC - adc_coef_381
#define CFGBYTE_U8_ADC_COEF_381_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9ADUL)))    //9AD - adc_coef_381
#define CFGBYTE_U8_ADC_COEF_382_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9AEUL)))    //9AE - adc_coef_382
#define CFGBYTE_U8_ADC_COEF_382_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9AFUL)))    //9AF - adc_coef_382
#define CFGBYTE_U8_ADC_COEF_383_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B0UL)))    //9B0 - adc_coef_383
#define CFGBYTE_U8_ADC_COEF_383_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B1UL)))    //9B1 - adc_coef_383
#define CFGBYTE_U8_ADC_COEF_384_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B2UL)))    //9B2 - adc_coef_384
#define CFGBYTE_U8_ADC_COEF_384_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B3UL)))    //9B3 - adc_coef_384
#define CFGBYTE_U8_ADC_COEF_385_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B4UL)))    //9B4 - adc_coef_385
#define CFGBYTE_U8_ADC_COEF_385_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B5UL)))    //9B5 - adc_coef_385
#define CFGBYTE_U8_ADC_COEF_386_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B6UL)))    //9B6 - adc_coef_386
#define CFGBYTE_U8_ADC_COEF_386_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B7UL)))    //9B7 - adc_coef_386
#define CFGBYTE_U8_ADC_COEF_387_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B8UL)))    //9B8 - adc_coef_387
#define CFGBYTE_U8_ADC_COEF_387_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9B9UL)))    //9B9 - adc_coef_387
#define CFGBYTE_U8_ADC_COEF_388_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9BAUL)))    //9BA - adc_coef_388
#define CFGBYTE_U8_ADC_COEF_388_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9BBUL)))    //9BB - adc_coef_388
#define CFGBYTE_U8_ADC_COEF_389_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9BCUL)))    //9BC - adc_coef_389
#define CFGBYTE_U8_ADC_COEF_389_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9BDUL)))    //9BD - adc_coef_389
#define CFGBYTE_U8_ADC_COEF_390_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9BEUL)))    //9BE - adc_coef_390
#define CFGBYTE_U8_ADC_COEF_390_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9BFUL)))    //9BF - adc_coef_390
#define CFGBYTE_U8_ADC_COEF_391_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C0UL)))    //9C0 - adc_coef_391
#define CFGBYTE_U8_ADC_COEF_391_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C1UL)))    //9C1 - adc_coef_391
#define CFGBYTE_U8_ADC_COEF_392_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C2UL)))    //9C2 - adc_coef_392
#define CFGBYTE_U8_ADC_COEF_392_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C3UL)))    //9C3 - adc_coef_392
#define CFGBYTE_U8_ADC_COEF_393_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C4UL)))    //9C4 - adc_coef_393
#define CFGBYTE_U8_ADC_COEF_393_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C5UL)))    //9C5 - adc_coef_393
#define CFGBYTE_U8_ADC_COEF_394_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C6UL)))    //9C6 - adc_coef_394
#define CFGBYTE_U8_ADC_COEF_394_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C7UL)))    //9C7 - adc_coef_394
#define CFGBYTE_U8_ADC_COEF_395_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C8UL)))    //9C8 - adc_coef_395
#define CFGBYTE_U8_ADC_COEF_395_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9C9UL)))    //9C9 - adc_coef_395
#define CFGBYTE_U8_ADC_COEF_396_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9CAUL)))    //9CA - adc_coef_396
#define CFGBYTE_U8_ADC_COEF_396_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9CBUL)))    //9CB - adc_coef_396
#define CFGBYTE_U8_ADC_COEF_397_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9CCUL)))    //9CC - adc_coef_397
#define CFGBYTE_U8_ADC_COEF_397_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9CDUL)))    //9CD - adc_coef_397
#define CFGBYTE_U8_ADC_COEF_398_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9CEUL)))    //9CE - adc_coef_398
#define CFGBYTE_U8_ADC_COEF_398_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9CFUL)))    //9CF - adc_coef_398
#define CFGBYTE_U8_ADC_COEF_399_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D0UL)))    //9D0 - adc_coef_399
#define CFGBYTE_U8_ADC_COEF_399_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D1UL)))    //9D1 - adc_coef_399
#define CFGBYTE_U8_ADC_COEF_400_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D2UL)))    //9D2 - adc_coef_400
#define CFGBYTE_U8_ADC_COEF_400_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D3UL)))    //9D3 - adc_coef_400
#define CFGBYTE_U8_ADC_COEF_401_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D4UL)))    //9D4 - adc_coef_401
#define CFGBYTE_U8_ADC_COEF_401_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D5UL)))    //9D5 - adc_coef_401
#define CFGBYTE_U8_ADC_COEF_402_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D6UL)))    //9D6 - adc_coef_402
#define CFGBYTE_U8_ADC_COEF_402_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D7UL)))    //9D7 - adc_coef_402
#define CFGBYTE_U8_ADC_COEF_403_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D8UL)))    //9D8 - adc_coef_403
#define CFGBYTE_U8_ADC_COEF_403_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9D9UL)))    //9D9 - adc_coef_403
#define CFGBYTE_U8_ADC_COEF_404_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9DAUL)))    //9DA - adc_coef_404
#define CFGBYTE_U8_ADC_COEF_404_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9DBUL)))    //9DB - adc_coef_404
#define CFGBYTE_U8_ADC_COEF_405_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9DCUL)))    //9DC - adc_coef_405
#define CFGBYTE_U8_ADC_COEF_405_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9DDUL)))    //9DD - adc_coef_405
#define CFGBYTE_U8_ADC_COEF_406_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9DEUL)))    //9DE - adc_coef_406
#define CFGBYTE_U8_ADC_COEF_406_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9DFUL)))    //9DF - adc_coef_406
#define CFGBYTE_U8_ADC_COEF_407_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E0UL)))    //9E0 - adc_coef_407
#define CFGBYTE_U8_ADC_COEF_407_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E1UL)))    //9E1 - adc_coef_407
#define CFGBYTE_U8_ADC_COEF_408_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E2UL)))    //9E2 - adc_coef_408
#define CFGBYTE_U8_ADC_COEF_408_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E3UL)))    //9E3 - adc_coef_408
#define CFGBYTE_U8_ADC_COEF_409_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E4UL)))    //9E4 - adc_coef_409
#define CFGBYTE_U8_ADC_COEF_409_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E5UL)))    //9E5 - adc_coef_409
#define CFGBYTE_U8_ADC_COEF_410_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E6UL)))    //9E6 - adc_coef_410
#define CFGBYTE_U8_ADC_COEF_410_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E7UL)))    //9E7 - adc_coef_410
#define CFGBYTE_U8_ADC_COEF_411_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E8UL)))    //9E8 - adc_coef_411
#define CFGBYTE_U8_ADC_COEF_411_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9E9UL)))    //9E9 - adc_coef_411
#define CFGBYTE_U8_ADC_COEF_412_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9EAUL)))    //9EA - adc_coef_412
#define CFGBYTE_U8_ADC_COEF_412_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9EBUL)))    //9EB - adc_coef_412
#define CFGBYTE_U8_ADC_COEF_413_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9ECUL)))    //9EC - adc_coef_413
#define CFGBYTE_U8_ADC_COEF_413_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9EDUL)))    //9ED - adc_coef_413
#define CFGBYTE_U8_ADC_COEF_414_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9EEUL)))    //9EE - adc_coef_414
#define CFGBYTE_U8_ADC_COEF_414_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9EFUL)))    //9EF - adc_coef_414
#define CFGBYTE_U8_ADC_COEF_415_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F0UL)))    //9F0 - adc_coef_415
#define CFGBYTE_U8_ADC_COEF_415_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F1UL)))    //9F1 - adc_coef_415
#define CFGBYTE_U8_ADC_COEF_416_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F2UL)))    //9F2 - adc_coef_416
#define CFGBYTE_U8_ADC_COEF_416_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F3UL)))    //9F3 - adc_coef_416
#define CFGBYTE_U8_ADC_COEF_417_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F4UL)))    //9F4 - adc_coef_417
#define CFGBYTE_U8_ADC_COEF_417_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F5UL)))    //9F5 - adc_coef_417
#define CFGBYTE_U8_ADC_COEF_418_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F6UL)))    //9F6 - adc_coef_418
#define CFGBYTE_U8_ADC_COEF_418_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F7UL)))    //9F7 - adc_coef_418
#define CFGBYTE_U8_ADC_COEF_419_0           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F8UL)))    //9F8 - adc_coef_419
#define CFGBYTE_U8_ADC_COEF_419_1           (*((uint8_t *)((uint32_t)fwCfgp + 0x9F9UL)))    //9F9 - adc_coef_419
#define CFGBYTE_U8_BDR_REJ_CFG              (*((uint8_t *)((uint32_t)fwCfgp + 0x9FAUL)))    //9FA - bdr_rej_cfg
#define CFGBYTE_U8_BDR_REJ_TOP_COOR_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x9FBUL)))    //9FB - bdr_rej_top_coor
#define CFGBYTE_U8_BDR_REJ_TOP_COOR_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x9FCUL)))    //9FC - bdr_rej_top_coor
#define CFGBYTE_U8_BDR_REJ_BTM_COOR_0       (*((uint8_t *)((uint32_t)fwCfgp + 0x9FDUL)))    //9FD - bdr_rej_btm_coor
#define CFGBYTE_U8_BDR_REJ_BTM_COOR_1       (*((uint8_t *)((uint32_t)fwCfgp + 0x9FEUL)))    //9FE - bdr_rej_btm_coor
#define CFGBYTE_U8_GRIP_REPORT_TAP_CNT      (*((uint8_t *)((uint32_t)fwCfgp + 0xA00UL)))    //A00 - grip_report_tap_cnt
#define CFGBYTE_U8_GRIP_REPORT_MOVE_DISTANCE    (*((uint8_t *)((uint32_t)fwCfgp + 0xA01UL)))    //A01 - grip_report_move_distance
#define CFGBYTE_U8_EDGE_REJ_COOR_0          (*((uint8_t *)((uint32_t)fwCfgp + 0xA02UL)))    //A02 - edge_rej_coor
#define CFGBYTE_U8_EDGE_REJ_COOR_1          (*((uint8_t *)((uint32_t)fwCfgp + 0xA03UL)))    //A03 - edge_rej_coor
#define CFGBYTE_U8_EDGE_REJ_CENTRE_X_ST_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA04UL)))    //A04 - edge_rej_centre_x_st
#define CFGBYTE_U8_EDGE_REJ_CENTRE_X_ST_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA05UL)))    //A05 - edge_rej_centre_x_st
#define CFGBYTE_U8_EDGE_REJ_CENTRE_X_END_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA06UL)))    //A06 - edge_rej_centre_x_end
#define CFGBYTE_U8_EDGE_REJ_CENTRE_X_END_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA07UL)))    //A07 - edge_rej_centre_x_end
#define CFGBYTE_U8_EDGE_REJ_CENTER_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA08UL)))    //A08 - edge_rej_center_coor
#define CFGBYTE_U8_EDGE_REJ_CENTER_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA09UL)))    //A09 - edge_rej_center_coor
#define CFGBYTE_U8_POST_FRM_CFG2            (*((uint8_t *)((uint32_t)fwCfgp + 0xA0BUL)))    //A0B - post_frm_cfg2
#define CFGBYTE_U8_POST_FRM_CFG             (*((uint8_t *)((uint32_t)fwCfgp + 0xA0CUL)))    //A0C - post_frm_cfg
#define CFGBYTE_U8_MS_PURE_RAW_STR_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA0DUL)))    //A0D - ms_pure_raw_str_thres
#define CFGBYTE_U8_MS_PURE_RAW_STR_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA0EUL)))    //A0E - ms_pure_raw_str_thres
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA0FUL)))    //A0F - ms_pure_raw_diff_thres
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA10UL)))    //A10 - ms_pure_raw_diff_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_MIN_NODES   (*((uint8_t *)((uint32_t)fwCfgp + 0xA11UL)))    //A11 - ms_pure_raw_fcal_min_nodes
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_DBNC    (*((uint8_t *)((uint32_t)fwCfgp + 0xA12UL)))    //A12 - ms_pure_raw_fcal_dbnc
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EXCEPT_TBL_NUM  (*((uint8_t *)((uint32_t)fwCfgp + 0xA13UL)))    //A13 - ms_pure_raw_fcal_except_tbl_num
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EXCEPT_CH_01    (*((uint8_t *)((uint32_t)fwCfgp + 0xA14UL)))    //A14 - ms_pure_raw_fcal_except_ch_01
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EXCEPT_CH_02    (*((uint8_t *)((uint32_t)fwCfgp + 0xA15UL)))    //A15 - ms_pure_raw_fcal_except_ch_02
#define CFGBYTE_U8_MS_PURE_RAW_STR_GLV_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA16UL)))    //A16 - ms_pure_raw_str_glv_thres
#define CFGBYTE_U8_MS_PURE_RAW_STR_GLV_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA17UL)))    //A17 - ms_pure_raw_str_glv_thres
#define CFGBYTE_U8_INV_MT_SS_DET_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA18UL)))    //A18 - inv_mt_ss_det_thres
#define CFGBYTE_U8_INV_MT_SS_DET_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA19UL)))    //A19 - inv_mt_ss_det_thres
#define CFGBYTE_U8_INV_MT_MT_DET_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA1AUL)))    //A1A - inv_mt_mt_det_thres
#define CFGBYTE_U8_INV_MT_MT_DET_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA1BUL)))    //A1B - inv_mt_mt_det_thres
#define CFGBYTE_U8_INV_MT_FCAL_MIN_NODES    (*((uint8_t *)((uint32_t)fwCfgp + 0xA1CUL)))    //A1C - inv_mt_fcal_min_nodes
#define CFGBYTE_U8_INV_MT_FCAL_DBNC         (*((uint8_t *)((uint32_t)fwCfgp + 0xA1DUL)))    //A1D - inv_mt_fcal_dbnc
#define CFGBYTE_U8_INV_SS_MT_DET_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA1EUL)))    //A1E - inv_ss_mt_det_thres
#define CFGBYTE_U8_INV_SS_MT_DET_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA1FUL)))    //A1F - inv_ss_mt_det_thres
#define CFGBYTE_U8_INV_SS_SS_DET_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA20UL)))    //A20 - inv_ss_ss_det_thres
#define CFGBYTE_U8_INV_SS_SS_DET_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA21UL)))    //A21 - inv_ss_ss_det_thres
#define CFGBYTE_U8_INV_SS_FCAL_MIN_NODES    (*((uint8_t *)((uint32_t)fwCfgp + 0xA22UL)))    //A22 - inv_ss_fcal_min_nodes
#define CFGBYTE_U8_INV_SS_FCAL_DBNC         (*((uint8_t *)((uint32_t)fwCfgp + 0xA23UL)))    //A23 - inv_ss_fcal_dbnc
#define CFGBYTE_U8_MS_NEG_STR_THRE_FOR_CALIB_DIRTY_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA24UL)))    //A24 - ms_neg_str_thre_for_calib_dirty
#define CFGBYTE_U8_MS_NEG_STR_THRE_FOR_CALIB_DIRTY_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA25UL)))    //A25 - ms_neg_str_thre_for_calib_dirty
#define CFGBYTE_U8_MS_NEG_SUM_THRE_HYS_FOR_CALIB_DIRTY_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA26UL)))    //A26 - ms_neg_sum_thre_hys_for_calib_dirty
#define CFGBYTE_U8_MS_NEG_SUM_THRE_HYS_FOR_CALIB_DIRTY_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA27UL)))    //A27 - ms_neg_sum_thre_hys_for_calib_dirty
#define CFGBYTE_U8_MS_NODE_CNT_FOR_CALIB_DIRTY  (*((uint8_t *)((uint32_t)fwCfgp + 0xA28UL)))    //A28 - ms_node_cnt_for_calib_dirty
#define CFGBYTE_U8_MS_NODE_CNT_HYS_FOR_CALIB_DIRTY  (*((uint8_t *)((uint32_t)fwCfgp + 0xA29UL)))    //A29 - ms_node_cnt_hys_for_calib_dirty
#define CFGBYTE_U8_TCH_IN_ADD_DLY_DIRTY_CALIB   (*((uint8_t *)((uint32_t)fwCfgp + 0xA2AUL)))    //A2A - tch_in_add_dly_dirty_calib
#define CFGBYTE_U8_SS_TCH_NEG_SUM_POS_STR_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA2BUL)))    //A2B - ss_tch_neg_sum_pos_str_thres
#define CFGBYTE_U8_SS_TCH_NEG_SUM_POS_STR_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA2CUL)))    //A2C - ss_tch_neg_sum_pos_str_thres
#define CFGBYTE_U8_SS_TCH_NEG_SUM_NEG_STR_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA2DUL)))    //A2D - ss_tch_neg_sum_neg_str_thres
#define CFGBYTE_U8_SS_TCH_NEG_SUM_NEG_STR_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA2EUL)))    //A2E - ss_tch_neg_sum_neg_str_thres
#define CFGBYTE_U8_SS_TCH_NEG_SUM_LOW_TEMP_FCAL_DBNC    (*((uint8_t *)((uint32_t)fwCfgp + 0xA2FUL)))    //A2F - ss_tch_neg_sum_low_temp_fcal_dbnc
#define CFGBYTE_U8_MS_PURE_IGNORE_ST_CH     (*((uint8_t *)((uint32_t)fwCfgp + 0xA30UL)))    //A30 - ms_pure_ignore_st_ch
#define CFGBYTE_U8_MS_PURE_IGNORE_END_CH    (*((uint8_t *)((uint32_t)fwCfgp + 0xA31UL)))    //A31 - ms_pure_ignore_end_ch
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_CFG   (*((uint8_t *)((uint32_t)fwCfgp + 0xA32UL)))    //A32 - ms_pure_raw_stddev_cfg
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_MAX_PURE_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA33UL)))    //A33 - ms_pure_raw_stddev_max_pure_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_MAX_PURE_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA34UL)))    //A34 - ms_pure_raw_stddev_max_pure_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_INVALID_STR_FILTER_CENTER_RATIO_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA35UL)))    //A35 - ms_pure_raw_stddev_invalid_str_filter_center_ratio_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_INVALID_STR_FILTER_CENTER_RATIO_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA36UL)))    //A36 - ms_pure_raw_stddev_invalid_str_filter_center_ratio_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_INVALID_STR_FILTER_EDGE_RATIO_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA37UL)))    //A37 - ms_pure_raw_stddev_invalid_str_filter_edge_ratio_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_INVALID_STR_FILTER_EDGE_RATIO_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA38UL)))    //A38 - ms_pure_raw_stddev_invalid_str_filter_edge_ratio_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_INVALID_FILTER_PURE_RATIO_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA39UL)))    //A39 - ms_pure_raw_stddev_invalid_filter_pure_ratio_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_INVALID_FILTER_PURE_RATIO_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA3AUL)))    //A3A - ms_pure_raw_stddev_invalid_filter_pure_ratio_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_FCAL_DBNC (*((uint8_t *)((uint32_t)fwCfgp + 0xA3BUL)))    //A3B - ms_pure_raw_stddev_fcal_dbnc
#define CFGBYTE_U8_MS_PURE_RAW_SLP_CMM_POS_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA3CUL)))    //A3C - ms_pure_raw_slp_cmm_pos_thres
#define CFGBYTE_U8_MS_PURE_RAW_SLP_CMM_POS_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA3DUL)))    //A3D - ms_pure_raw_slp_cmm_pos_thres
#define CFGBYTE_U8_MS_PURE_RAW_SLP_CMM_NEG_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA3EUL)))    //A3E - ms_pure_raw_slp_cmm_neg_thres
#define CFGBYTE_U8_MS_PURE_RAW_SLP_CMM_NEG_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA3FUL)))    //A3F - ms_pure_raw_slp_cmm_neg_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_FILTER_ONLY_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA40UL)))    //A40 - ms_pure_raw_stddev_filter_only_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_FILTER_ONLY_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA41UL)))    //A41 - ms_pure_raw_stddev_filter_only_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_STR_ONLY_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA42UL)))    //A42 - ms_pure_raw_stddev_str_only_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_STR_ONLY_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA43UL)))    //A43 - ms_pure_raw_stddev_str_only_thres
#define CFGBYTE_U8_NOTCH_STR_CMP_CFG        (*((uint8_t *)((uint32_t)fwCfgp + 0xA44UL)))    //A44 - notch_str_cmp_cfg
#define CFGBYTE_U8_NORTH_STR_CMP_PERCENT    (*((uint8_t *)((uint32_t)fwCfgp + 0xA45UL)))    //A45 - north_str_cmp_percent
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_TOP_WGH_01 (*((uint8_t *)((uint32_t)fwCfgp + 0xA46UL)))    //A46 - notch_str_cmp_gau_top_wgh_01
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_TOP_WGH_02 (*((uint8_t *)((uint32_t)fwCfgp + 0xA47UL)))    //A47 - notch_str_cmp_gau_top_wgh_02
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_TOP_WGH_03 (*((uint8_t *)((uint32_t)fwCfgp + 0xA48UL)))    //A48 - notch_str_cmp_gau_top_wgh_03
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_CENT_WGH_01    (*((uint8_t *)((uint32_t)fwCfgp + 0xA49UL)))    //A49 - notch_str_cmp_gau_cent_wgh_01
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_CENT_WGH_02    (*((uint8_t *)((uint32_t)fwCfgp + 0xA4AUL)))    //A4A - notch_str_cmp_gau_cent_wgh_02
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_CENT_WGH_03    (*((uint8_t *)((uint32_t)fwCfgp + 0xA4BUL)))    //A4B - notch_str_cmp_gau_cent_wgh_03
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_BTM_WGH_01 (*((uint8_t *)((uint32_t)fwCfgp + 0xA4CUL)))    //A4C - notch_str_cmp_gau_btm_wgh_01
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_BTM_WGH_02 (*((uint8_t *)((uint32_t)fwCfgp + 0xA4DUL)))    //A4D - notch_str_cmp_gau_btm_wgh_02
#define CFGBYTE_U8_NOTCH_STR_CMP_GAU_BTM_WGH_03 (*((uint8_t *)((uint32_t)fwCfgp + 0xA4EUL)))    //A4E - notch_str_cmp_gau_btm_wgh_03
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_R1_RAW_SHIFT_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA4FUL)))    //A4F - ms_pure_raw_fcal_r1_raw_shift_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_R1_RAW_SHIFT_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA50UL)))    //A50 - ms_pure_raw_fcal_r1_raw_shift_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_RLAST_RAW_SHIFT_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA51UL)))    //A51 - ms_pure_raw_fcal_rlast_raw_shift_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_RLAST_RAW_SHIFT_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA52UL)))    //A52 - ms_pure_raw_fcal_rlast_raw_shift_thres
#define CFGBYTE_U8_TEMP_INFO_CFG            (*((uint8_t *)((uint32_t)fwCfgp + 0xA53UL)))    //A53 - temp_info_cfg
#define CFGBYTE_U8_LOW_TEMP_ENTRY_THRES     (*((uint8_t *)((uint32_t)fwCfgp + 0xA54UL)))    //A54 - low_temp_entry_thres
#define CFGBYTE_U8_LOW_TEMP_EXIT_THRES      (*((uint8_t *)((uint32_t)fwCfgp + 0xA55UL)))    //A55 - low_temp_exit_thres
#define CFGBYTE_U8_LOW_TEMP_FGR_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0xA56UL)))    //A56 - low_temp_fgr_thres
#define CFGBYTE_U8_LOW_TEMP_FGR_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0xA57UL)))    //A57 - low_temp_fgr_thres
#define CFGBYTE_U8_LOW_TEMP_FGR_THRES_HYST  (*((uint8_t *)((uint32_t)fwCfgp + 0xA58UL)))    //A58 - low_temp_fgr_thres_hyst
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_MAX_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA59UL)))    //A59 - ms_pure_raw_diff_max_thres
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_MAX_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA5AUL)))    //A5A - ms_pure_raw_diff_max_thres
#define CFGBYTE_U8_GRP_CORNER_0_MIN_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA5BUL)))    //A5B - grp_corner_0_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_0_MIN_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA5CUL)))    //A5C - grp_corner_0_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_0_MIN_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA5DUL)))    //A5D - grp_corner_0_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_0_MIN_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA5EUL)))    //A5E - grp_corner_0_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_0_MAX_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA5FUL)))    //A5F - grp_corner_0_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_0_MAX_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA60UL)))    //A60 - grp_corner_0_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_0_MAX_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA61UL)))    //A61 - grp_corner_0_max_y_coor
#define CFGBYTE_U8_GRP_CORNER_0_MAX_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA62UL)))    //A62 - grp_corner_0_max_y_coor
#define CFGBYTE_U8_GRP_CORNER_1_MIN_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA63UL)))    //A63 - grp_corner_1_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_1_MIN_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA64UL)))    //A64 - grp_corner_1_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_1_MIN_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA65UL)))    //A65 - grp_corner_1_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_1_MIN_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA66UL)))    //A66 - grp_corner_1_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_1_MAX_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA67UL)))    //A67 - grp_corner_1_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_1_MAX_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA68UL)))    //A68 - grp_corner_1_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_1_MAX_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA69UL)))    //A69 - grp_corner_1_max_y_coor
#define CFGBYTE_U8_GRP_CORNER_1_MAX_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA6AUL)))    //A6A - grp_corner_1_max_y_coor
#define CFGBYTE_U8_GRP_CORNER_2_MIN_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA6BUL)))    //A6B - grp_corner_2_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_2_MIN_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA6CUL)))    //A6C - grp_corner_2_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_2_MIN_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA6DUL)))    //A6D - grp_corner_2_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_2_MIN_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA6EUL)))    //A6E - grp_corner_2_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_2_MAX_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA6FUL)))    //A6F - grp_corner_2_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_2_MAX_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA70UL)))    //A70 - grp_corner_2_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_2_MAX_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA71UL)))    //A71 - grp_corner_2_max_y_coor
#define CFGBYTE_U8_GRP_CORNER_2_MAX_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA72UL)))    //A72 - grp_corner_2_max_y_coor
#define CFGBYTE_U8_GRP_CORNER_3_MIN_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA73UL)))    //A73 - grp_corner_3_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_3_MIN_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA74UL)))    //A74 - grp_corner_3_min_x_coor
#define CFGBYTE_U8_GRP_CORNER_3_MIN_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA75UL)))    //A75 - grp_corner_3_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_3_MIN_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA76UL)))    //A76 - grp_corner_3_min_y_coor
#define CFGBYTE_U8_GRP_CORNER_3_MAX_X_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA77UL)))    //A77 - grp_corner_3_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_3_MAX_X_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA78UL)))    //A78 - grp_corner_3_max_x_coor
#define CFGBYTE_U8_GRP_CORNER_3_MAX_Y_COOR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xA79UL)))    //A79 - grp_corner_3_max_y_coor
#define CFGBYTE_U8_GRP_CORNER_3_MAX_Y_COOR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xA7AUL)))    //A7A - grp_corner_3_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MIN_X_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA7CUL)))    //A7C - grp_dead_zone_left_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MIN_X_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA7DUL)))    //A7D - grp_dead_zone_left_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MIN_Y_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA7EUL)))    //A7E - grp_dead_zone_left_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MIN_Y_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA7FUL)))    //A7F - grp_dead_zone_left_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MAX_X_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA80UL)))    //A80 - grp_dead_zone_left_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MAX_X_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA81UL)))    //A81 - grp_dead_zone_left_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MAX_Y_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA82UL)))    //A82 - grp_dead_zone_left_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_LEFT_MAX_Y_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA83UL)))    //A83 - grp_dead_zone_left_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MIN_X_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA84UL)))    //A84 - grp_edge_zone_left_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MIN_X_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA85UL)))    //A85 - grp_edge_zone_left_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MIN_Y_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA86UL)))    //A86 - grp_edge_zone_left_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MIN_Y_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA87UL)))    //A87 - grp_edge_zone_left_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MAX_X_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA88UL)))    //A88 - grp_edge_zone_left_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MAX_X_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA89UL)))    //A89 - grp_edge_zone_left_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MAX_Y_COOR_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xA8AUL)))    //A8A - grp_edge_zone_left_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_LEFT_MAX_Y_COOR_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xA8BUL)))    //A8B - grp_edge_zone_left_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MIN_X_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA8CUL)))    //A8C - grp_dead_zone_right_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MIN_X_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA8DUL)))    //A8D - grp_dead_zone_right_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MIN_Y_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA8EUL)))    //A8E - grp_dead_zone_right_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MIN_Y_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA8FUL)))    //A8F - grp_dead_zone_right_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MAX_X_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA90UL)))    //A90 - grp_dead_zone_right_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MAX_X_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA91UL)))    //A91 - grp_dead_zone_right_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MAX_Y_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA92UL)))    //A92 - grp_dead_zone_right_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_RIGHT_MAX_Y_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA93UL)))    //A93 - grp_dead_zone_right_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MIN_X_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA94UL)))    //A94 - grp_edge_zone_right_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MIN_X_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA95UL)))    //A95 - grp_edge_zone_right_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MIN_Y_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA96UL)))    //A96 - grp_edge_zone_right_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MIN_Y_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA97UL)))    //A97 - grp_edge_zone_right_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MAX_X_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA98UL)))    //A98 - grp_edge_zone_right_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MAX_X_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA99UL)))    //A99 - grp_edge_zone_right_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MAX_Y_COOR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xA9AUL)))    //A9A - grp_edge_zone_right_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_RIGHT_MAX_Y_COOR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xA9BUL)))    //A9B - grp_edge_zone_right_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MIN_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA9CUL)))    //A9C - grp_dead_zone_top_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MIN_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA9DUL)))    //A9D - grp_dead_zone_top_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MIN_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xA9EUL)))    //A9E - grp_dead_zone_top_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MIN_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xA9FUL)))    //A9F - grp_dead_zone_top_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MAX_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA0UL)))    //AA0 - grp_dead_zone_top_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MAX_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA1UL)))    //AA1 - grp_dead_zone_top_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MAX_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA2UL)))    //AA2 - grp_dead_zone_top_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_TOP_MAX_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA3UL)))    //AA3 - grp_dead_zone_top_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MIN_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA4UL)))    //AA4 - grp_edge_zone_top_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MIN_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA5UL)))    //AA5 - grp_edge_zone_top_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MIN_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA6UL)))    //AA6 - grp_edge_zone_top_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MIN_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA7UL)))    //AA7 - grp_edge_zone_top_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MAX_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA8UL)))    //AA8 - grp_edge_zone_top_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MAX_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAA9UL)))    //AA9 - grp_edge_zone_top_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MAX_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAAAUL)))    //AAA - grp_edge_zone_top_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_TOP_MAX_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAABUL)))    //AAB - grp_edge_zone_top_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MIN_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAACUL)))    //AAC - grp_dead_zone_btm_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MIN_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAADUL)))    //AAD - grp_dead_zone_btm_min_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MIN_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAAEUL)))    //AAE - grp_dead_zone_btm_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MIN_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAAFUL)))    //AAF - grp_dead_zone_btm_min_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MAX_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB0UL)))    //AB0 - grp_dead_zone_btm_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MAX_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB1UL)))    //AB1 - grp_dead_zone_btm_max_x_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MAX_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB2UL)))    //AB2 - grp_dead_zone_btm_max_y_coor
#define CFGBYTE_U8_GRP_DEAD_ZONE_BTM_MAX_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB3UL)))    //AB3 - grp_dead_zone_btm_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MIN_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB4UL)))    //AB4 - grp_edge_zone_btm_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MIN_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB5UL)))    //AB5 - grp_edge_zone_btm_min_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MIN_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB6UL)))    //AB6 - grp_edge_zone_btm_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MIN_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB7UL)))    //AB7 - grp_edge_zone_btm_min_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MAX_X_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB8UL)))    //AB8 - grp_edge_zone_btm_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MAX_X_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAB9UL)))    //AB9 - grp_edge_zone_btm_max_x_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MAX_Y_COOR_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xABAUL)))    //ABA - grp_edge_zone_btm_max_y_coor
#define CFGBYTE_U8_GRP_EDGE_ZONE_BTM_MAX_Y_COOR_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xABBUL)))    //ABB - grp_edge_zone_btm_max_y_coor
#define CFGBYTE_U8_MS_HOP_RAW_OFFSET_DBG    (*((uint8_t *)((uint32_t)fwCfgp + 0xABCUL)))    //ABC - ms_hop_raw_offset_dbg
#define CFGBYTE_U8_MS_HOP_RAW_OFFSET_CFG_01 (*((uint8_t *)((uint32_t)fwCfgp + 0xABDUL)))    //ABD - ms_hop_raw_offset_cfg_01
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_HIAA_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xABEUL)))    //ABE - ms_pure_raw_diff_hiaa_thres
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_HIAA_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xABFUL)))    //ABF - ms_pure_raw_diff_hiaa_thres
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_FORCE_ENABLE_FRAMES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xAC0UL)))    //AC0 - ms_pure_raw_stddev_force_enable_frames
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_FORCE_ENABLE_FRAMES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xAC1UL)))    //AC1 - ms_pure_raw_stddev_force_enable_frames
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_MAX_COOR_SPEED_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xAC2UL)))    //AC2 - ms_pure_raw_stddev_max_coor_speed
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_MAX_COOR_SPEED_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xAC3UL)))    //AC3 - ms_pure_raw_stddev_max_coor_speed
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_MAX_DIFF_STR_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xAC4UL)))    //AC4 - ms_pure_raw_stddev_max_diff_str
#define CFGBYTE_U8_MS_PURE_RAW_STDDEV_MAX_DIFF_STR_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xAC5UL)))    //AC5 - ms_pure_raw_stddev_max_diff_str
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_SPECIAL_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xAC6UL)))    //AC6 - ms_pure_raw_diff_special_thres
#define CFGBYTE_U8_MS_PURE_RAW_DIFF_SPECIAL_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xAC7UL)))    //AC7 - ms_pure_raw_diff_special_thres
#define CFGBYTE_U8_ISLAND_SUM_CFG           (*((uint8_t *)((uint32_t)fwCfgp + 0xAC8UL)))    //AC8 - island_sum_cfg
#define CFGBYTE_U8_ISLAND_SUM_MOTION_ACTIVE_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xAC9UL)))    //AC9 - island_sum_motion_active_thres
#define CFGBYTE_U8_ISLAND_SUM_MOTION_ACTIVE_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xACAUL)))    //ACA - island_sum_motion_active_thres
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_MOTION_ACTIVE_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xACBUL)))    //ACB - island_sum_game_mode_motion_active_thres
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_MOTION_ACTIVE_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xACCUL)))    //ACC - island_sum_game_mode_motion_active_thres
#define CFGBYTE_U8_ISLAND_SUM_RPT_NUM_LIMIT (*((uint8_t *)((uint32_t)fwCfgp + 0xACDUL)))    //ACD - island_sum_rpt_num_limit
#define CFGBYTE_U8_ISLAND_SUM_BASE_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xACEUL)))    //ACE - island_sum_base_thres
#define CFGBYTE_U8_ISLAND_SUM_BASE_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xACFUL)))    //ACF - island_sum_base_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_BASE_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xAD0UL)))    //AD0 - edge_island_sum_base_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_BASE_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xAD1UL)))    //AD1 - edge_island_sum_base_thres
#define CFGBYTE_U8_ISLAND_SUM_BASE_THRES_HYST_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xAD2UL)))    //AD2 - island_sum_base_thres_hyst
#define CFGBYTE_U8_ISLAND_SUM_BASE_THRES_HYST_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xAD3UL)))    //AD3 - island_sum_base_thres_hyst
#define CFGBYTE_U8_EDGE_ISLAND_SUM_BASE_THRES_HYST_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xAD4UL)))    //AD4 - edge_island_sum_base_thres_hyst
#define CFGBYTE_U8_EDGE_ISLAND_SUM_BASE_THRES_HYST_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xAD5UL)))    //AD5 - edge_island_sum_base_thres_hyst
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_BASE_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xAD6UL)))    //AD6 - island_sum_game_mode_base_thres
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_BASE_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xAD7UL)))    //AD7 - island_sum_game_mode_base_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_GAME_MODE_BASE_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAD8UL)))    //AD8 - edge_island_sum_game_mode_base_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_GAME_MODE_BASE_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAD9UL)))    //AD9 - edge_island_sum_game_mode_base_thres
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_BASE_THRES_HYST_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xADAUL)))    //ADA - island_sum_game_mode_base_thres_hyst
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_BASE_THRES_HYST_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xADBUL)))    //ADB - island_sum_game_mode_base_thres_hyst
#define CFGBYTE_U8_EDGE_ISLAND_SUM_GAME_MODE_BASE_THRES_HYST_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xADCUL)))    //ADC - edge_island_sum_game_mode_base_thres_hyst
#define CFGBYTE_U8_EDGE_ISLAND_SUM_GAME_MODE_BASE_THRES_HYST_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xADDUL)))    //ADD - edge_island_sum_game_mode_base_thres_hyst
#define CFGBYTE_U8_ISLAND_SUM_MAX_LIMIT_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xADEUL)))    //ADE - island_sum_max_limit_thres
#define CFGBYTE_U8_ISLAND_SUM_MAX_LIMIT_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xADFUL)))    //ADF - island_sum_max_limit_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_MAX_LIMIT_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xAE0UL)))    //AE0 - edge_island_sum_max_limit_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_MAX_LIMIT_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xAE1UL)))    //AE1 - edge_island_sum_max_limit_thres
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_MAX_LIMIT_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xAE2UL)))    //AE2 - island_sum_game_mode_max_limit_thres
#define CFGBYTE_U8_ISLAND_SUM_GAME_MODE_MAX_LIMIT_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xAE3UL)))    //AE3 - island_sum_game_mode_max_limit_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_GAME_MODE_MAX_LIMIT_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xAE4UL)))    //AE4 - edge_island_sum_game_mode_max_limit_thres
#define CFGBYTE_U8_EDGE_ISLAND_SUM_GAME_MODE_MAX_LIMIT_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xAE5UL)))    //AE5 - edge_island_sum_game_mode_max_limit_thres
#define CFGBYTE_U8_ISLAND_SUM_MAX_ADD_HIDDEN_LIMIT_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xAE6UL)))    //AE6 - island_sum_max_add_hidden_limit_thres
#define CFGBYTE_U8_ISLAND_SUM_MAX_ADD_HIDDEN_LIMIT_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xAE7UL)))    //AE7 - island_sum_max_add_hidden_limit_thres
#define CFGBYTE_U8_LSLAND_SUM_SPEED_CHK_BLK_STR_SUM_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xAE8UL)))    //AE8 - lsland_sum_speed_chk_blk_str_sum_thres
#define CFGBYTE_U8_LSLAND_SUM_SPEED_CHK_BLK_STR_SUM_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xAE9UL)))    //AE9 - lsland_sum_speed_chk_blk_str_sum_thres
#define CFGBYTE_U8_ISLAND_SUM_SPEED_LOW_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xAEAUL)))    //AEA - island_sum_speed_low_thres
#define CFGBYTE_U8_ISLAND_SUM_SPEED_HIGH_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0xAEBUL)))    //AEB - island_sum_speed_high_thres
#define CFGBYTE_U8_ISLAND_SUM_DYNAMIC_THRES_MIN_PER (*((uint8_t *)((uint32_t)fwCfgp + 0xAECUL)))    //AEC - island_sum_dynamic_thres_min_per
#define CFGBYTE_U8_ISLAND_SUM_DYNAMIC_THRES_MAX_PER (*((uint8_t *)((uint32_t)fwCfgp + 0xAEDUL)))    //AED - island_sum_dynamic_thres_max_per
#define CFGBYTE_U8_ISLAND_SUM_DYNAMIC_THRES_ADD_PER_IN_HIDDEN   (*((uint8_t *)((uint32_t)fwCfgp + 0xAEEUL)))    //AEE - island_sum_dynamic_thres_add_per_in_hidden
#define CFGBYTE_U8_LSLAND_SUM_SPEED_CHK_BLK_STR_SUM_MIN_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xAEFUL)))    //AEF - lsland_sum_speed_chk_blk_str_sum_min_thres
#define CFGBYTE_U8_LSLAND_SUM_SPEED_CHK_BLK_STR_SUM_MIN_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xAF0UL)))    //AF0 - lsland_sum_speed_chk_blk_str_sum_min_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EDGE_DIFF_R2R35_ADJUST_RATIO    (*((uint8_t *)((uint32_t)fwCfgp + 0xAF1UL)))    //AF1 - ms_pure_raw_fcal_edge_diff_r2r35_adjust_ratio
#define CFGBYTE_U8_MS_RAW_CMM_THRES_0       (*((uint8_t *)((uint32_t)fwCfgp + 0xAF4UL)))    //AF4 - ms_raw_cmm_thres
#define CFGBYTE_U8_MS_RAW_CMM_THRES_1       (*((uint8_t *)((uint32_t)fwCfgp + 0xAF5UL)))    //AF5 - ms_raw_cmm_thres
#define CFGBYTE_U8_MS_RAW_CMM_MAX_MIN_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xAF6UL)))    //AF6 - ms_raw_cmm_max_min_diff_thres
#define CFGBYTE_U8_MS_RAW_CMM_MAX_MIN_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xAF7UL)))    //AF7 - ms_raw_cmm_max_min_diff_thres
#define CFGBYTE_U8_MS_RAW_CMM_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xAF8UL)))    //AF8 - ms_raw_cmm_diff_thres
#define CFGBYTE_U8_MS_RAW_CMM_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xAF9UL)))    //AF9 - ms_raw_cmm_diff_thres
#define CFGBYTE_U8_MS_INTG_BND_LNR_CMM_CH   (*((uint8_t *)((uint32_t)fwCfgp + 0xAFAUL)))    //AFA - ms_intg_bnd_lnr_cmm_ch
#define CFGBYTE_U8_MS_DIFF_LNR_CMM_1ST_NOTCH_COEF_WGH   (*((uint8_t *)((uint32_t)fwCfgp + 0xAFBUL)))    //AFB - ms_diff_lnr_cmm_1st_notch_coef_wgh
#define CFGBYTE_U8_MS_DIFF_LNR_CMM_2ND_NOTCH_COEF_WGH   (*((uint8_t *)((uint32_t)fwCfgp + 0xAFCUL)))    //AFC - ms_diff_lnr_cmm_2nd_notch_coef_wgh
#define CFGBYTE_U8_ITO_AFE_CFG0             (*((uint8_t *)((uint32_t)fwCfgp + 0xAFEUL)))    //AFE - ito_afe_cfg0
#define CFGBYTE_U8_ITO_AFE_CFG1             (*((uint8_t *)((uint32_t)fwCfgp + 0xAFFUL)))    //AFF - ito_afe_cfg1
#define CFGBYTE_U8_ITO_AFE_CFG2             (*((uint8_t *)((uint32_t)fwCfgp + 0xB00UL)))    //B00 - ito_afe_cfg2
#define CFGBYTE_U8_ITO_AFE_CFG3             (*((uint8_t *)((uint32_t)fwCfgp + 0xB01UL)))    //B01 - ito_afe_cfg3
#define CFGBYTE_U8_ITO_AFE_CFG4             (*((uint8_t *)((uint32_t)fwCfgp + 0xB02UL)))    //B02 - ito_afe_cfg4
#define CFGBYTE_U8_ITO_AFE_CFG5             (*((uint8_t *)((uint32_t)fwCfgp + 0xB03UL)))    //B03 - ito_afe_cfg5
#define CFGBYTE_U8_ITO_T_CYC_0              (*((uint8_t *)((uint32_t)fwCfgp + 0xB04UL)))    //B04 - ito_t_cyc
#define CFGBYTE_U8_ITO_T_CYC_1              (*((uint8_t *)((uint32_t)fwCfgp + 0xB05UL)))    //B05 - ito_t_cyc
#define CFGBYTE_U8_ITO_R_CYC_0              (*((uint8_t *)((uint32_t)fwCfgp + 0xB06UL)))    //B06 - ito_r_cyc
#define CFGBYTE_U8_ITO_R_CYC_1              (*((uint8_t *)((uint32_t)fwCfgp + 0xB07UL)))    //B07 - ito_r_cyc
#define CFGBYTE_U8_ITO_OS_DLY_0             (*((uint8_t *)((uint32_t)fwCfgp + 0xB08UL)))    //B08 - ito_os_dly
#define CFGBYTE_U8_ITO_OS_DLY_1             (*((uint8_t *)((uint32_t)fwCfgp + 0xB09UL)))    //B09 - ito_os_dly
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL0       (*((uint8_t *)((uint32_t)fwCfgp + 0xB0AUL)))    //B0A - ito_high_res_prfl0
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL1       (*((uint8_t *)((uint32_t)fwCfgp + 0xB0BUL)))    //B0B - ito_high_res_prfl1
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL2       (*((uint8_t *)((uint32_t)fwCfgp + 0xB0CUL)))    //B0C - ito_high_res_prfl2
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL3       (*((uint8_t *)((uint32_t)fwCfgp + 0xB0DUL)))    //B0D - ito_high_res_prfl3
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL4       (*((uint8_t *)((uint32_t)fwCfgp + 0xB0EUL)))    //B0E - ito_high_res_prfl4
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL5       (*((uint8_t *)((uint32_t)fwCfgp + 0xB0FUL)))    //B0F - ito_high_res_prfl5
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL6_0     (*((uint8_t *)((uint32_t)fwCfgp + 0xB10UL)))    //B10 - ito_high_res_prfl6
#define CFGBYTE_U8_ITO_HIGH_RES_PRFL6_1     (*((uint8_t *)((uint32_t)fwCfgp + 0xB11UL)))    //B11 - ito_high_res_prfl6
#define CFGBYTE_U8_ITO_PANEL_OPEN_THRESHOLD (*((uint8_t *)((uint32_t)fwCfgp + 0xB12UL)))    //B12 - ito_panel_open_threshold
#define CFGBYTE_U8_ITO_KEY_OPEN_THRESHOLD   (*((uint8_t *)((uint32_t)fwCfgp + 0xB13UL)))    //B13 - ito_key_open_threshold
#define CFGBYTE_U8_ITO_RESISTOR_SETTING_VALUE   (*((uint8_t *)((uint32_t)fwCfgp + 0xB14UL)))    //B14 - ito_resistor_setting_value
#define CFGBYTE_U8_ITO_HI_FREQ_MS_KEY_OPEN_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xB16UL)))    //B16 - ito_hi_freq_ms_key_open_thres
#define CFGBYTE_U8_ITO_HI_FREQ_MS_KEY_OPEN_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xB17UL)))    //B17 - ito_hi_freq_ms_key_open_thres
#define CFGBYTE_U8_ITO_LOW_AFE_CFG0         (*((uint8_t *)((uint32_t)fwCfgp + 0xB18UL)))    //B18 - ito_low_afe_cfg0
#define CFGBYTE_U8_ITO_LOW_AFE_CFG1         (*((uint8_t *)((uint32_t)fwCfgp + 0xB19UL)))    //B19 - ito_low_afe_cfg1
#define CFGBYTE_U8_ITO_LOW_AFE_CFG2         (*((uint8_t *)((uint32_t)fwCfgp + 0xB1AUL)))    //B1A - ito_low_afe_cfg2
#define CFGBYTE_U8_ITO_LOW_AFE_CFG3         (*((uint8_t *)((uint32_t)fwCfgp + 0xB1BUL)))    //B1B - ito_low_afe_cfg3
#define CFGBYTE_U8_ITO_LOW_AFE_CFG4         (*((uint8_t *)((uint32_t)fwCfgp + 0xB1CUL)))    //B1C - ito_low_afe_cfg4
#define CFGBYTE_U8_ITO_LOW_AFE_CFG5         (*((uint8_t *)((uint32_t)fwCfgp + 0xB1DUL)))    //B1D - ito_low_afe_cfg5
#define CFGBYTE_U8_ITO_LOW_T_CYC_0          (*((uint8_t *)((uint32_t)fwCfgp + 0xB1EUL)))    //B1E - ito_low_t_cyc
#define CFGBYTE_U8_ITO_LOW_T_CYC_1          (*((uint8_t *)((uint32_t)fwCfgp + 0xB1FUL)))    //B1F - ito_low_t_cyc
#define CFGBYTE_U8_ITO_LOW_R_CYC_0          (*((uint8_t *)((uint32_t)fwCfgp + 0xB20UL)))    //B20 - ito_low_r_cyc
#define CFGBYTE_U8_ITO_LOW_R_CYC_1          (*((uint8_t *)((uint32_t)fwCfgp + 0xB21UL)))    //B21 - ito_low_r_cyc
#define CFGBYTE_U8_ITO_LOW_OS_DLY_0         (*((uint8_t *)((uint32_t)fwCfgp + 0xB22UL)))    //B22 - ito_low_os_dly
#define CFGBYTE_U8_ITO_LOW_OS_DLY_1         (*((uint8_t *)((uint32_t)fwCfgp + 0xB23UL)))    //B23 - ito_low_os_dly
#define CFGBYTE_U8_ITO_LOW_RES_PRFL0        (*((uint8_t *)((uint32_t)fwCfgp + 0xB24UL)))    //B24 - ito_low_res_prfl0
#define CFGBYTE_U8_ITO_LOW_RES_PRFL1        (*((uint8_t *)((uint32_t)fwCfgp + 0xB25UL)))    //B25 - ito_low_res_prfl1
#define CFGBYTE_U8_ITO_LOW_RES_PRFL2        (*((uint8_t *)((uint32_t)fwCfgp + 0xB26UL)))    //B26 - ito_low_res_prfl2
#define CFGBYTE_U8_ITO_LOW_RES_PRFL3        (*((uint8_t *)((uint32_t)fwCfgp + 0xB27UL)))    //B27 - ito_low_res_prfl3
#define CFGBYTE_U8_ITO_LOW_RES_PRFL4        (*((uint8_t *)((uint32_t)fwCfgp + 0xB28UL)))    //B28 - ito_low_res_prfl4
#define CFGBYTE_U8_ITO_LOW_RES_PRFL5        (*((uint8_t *)((uint32_t)fwCfgp + 0xB29UL)))    //B29 - ito_low_res_prfl5
#define CFGBYTE_U8_ITO_LOW_RES_PRFL6_0      (*((uint8_t *)((uint32_t)fwCfgp + 0xB2AUL)))    //B2A - ito_low_res_prfl6
#define CFGBYTE_U8_ITO_LOW_RES_PRFL6_1      (*((uint8_t *)((uint32_t)fwCfgp + 0xB2BUL)))    //B2B - ito_low_res_prfl6
#define CFGBYTE_U8_MS_ADJ_STR_CFG           (*((uint8_t *)((uint32_t)fwCfgp + 0xB2DUL)))    //B2D - ms_adj_str_cfg
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xB2EUL)))    //B2E - r0_ms_sense_cen_str_adj_0
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xB2FUL)))    //B2F - r0_ms_sense_cen_str_adj_1
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_2    (*((uint8_t *)((uint32_t)fwCfgp + 0xB30UL)))    //B30 - r0_ms_sense_cen_str_adj_2
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_3    (*((uint8_t *)((uint32_t)fwCfgp + 0xB31UL)))    //B31 - r0_ms_sense_cen_str_adj_3
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_4    (*((uint8_t *)((uint32_t)fwCfgp + 0xB32UL)))    //B32 - r0_ms_sense_cen_str_adj_4
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_5    (*((uint8_t *)((uint32_t)fwCfgp + 0xB33UL)))    //B33 - r0_ms_sense_cen_str_adj_5
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_6    (*((uint8_t *)((uint32_t)fwCfgp + 0xB34UL)))    //B34 - r0_ms_sense_cen_str_adj_6
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_7    (*((uint8_t *)((uint32_t)fwCfgp + 0xB35UL)))    //B35 - r0_ms_sense_cen_str_adj_7
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_8    (*((uint8_t *)((uint32_t)fwCfgp + 0xB36UL)))    //B36 - r0_ms_sense_cen_str_adj_8
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_9    (*((uint8_t *)((uint32_t)fwCfgp + 0xB37UL)))    //B37 - r0_ms_sense_cen_str_adj_9
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_10   (*((uint8_t *)((uint32_t)fwCfgp + 0xB38UL)))    //B38 - r0_ms_sense_cen_str_adj_10
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_11   (*((uint8_t *)((uint32_t)fwCfgp + 0xB39UL)))    //B39 - r0_ms_sense_cen_str_adj_11
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_12   (*((uint8_t *)((uint32_t)fwCfgp + 0xB3AUL)))    //B3A - r0_ms_sense_cen_str_adj_12
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_13   (*((uint8_t *)((uint32_t)fwCfgp + 0xB3BUL)))    //B3B - r0_ms_sense_cen_str_adj_13
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_14   (*((uint8_t *)((uint32_t)fwCfgp + 0xB3CUL)))    //B3C - r0_ms_sense_cen_str_adj_14
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_15   (*((uint8_t *)((uint32_t)fwCfgp + 0xB3DUL)))    //B3D - r0_ms_sense_cen_str_adj_15
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_16   (*((uint8_t *)((uint32_t)fwCfgp + 0xB3EUL)))    //B3E - r0_ms_sense_cen_str_adj_16
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_17   (*((uint8_t *)((uint32_t)fwCfgp + 0xB3FUL)))    //B3F - r0_ms_sense_cen_str_adj_17
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_18   (*((uint8_t *)((uint32_t)fwCfgp + 0xB40UL)))    //B40 - r0_ms_sense_cen_str_adj_18
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_19   (*((uint8_t *)((uint32_t)fwCfgp + 0xB41UL)))    //B41 - r0_ms_sense_cen_str_adj_19
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_20   (*((uint8_t *)((uint32_t)fwCfgp + 0xB42UL)))    //B42 - r0_ms_sense_cen_str_adj_20
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_21   (*((uint8_t *)((uint32_t)fwCfgp + 0xB43UL)))    //B43 - r0_ms_sense_cen_str_adj_21
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_22   (*((uint8_t *)((uint32_t)fwCfgp + 0xB44UL)))    //B44 - r0_ms_sense_cen_str_adj_22
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_23   (*((uint8_t *)((uint32_t)fwCfgp + 0xB45UL)))    //B45 - r0_ms_sense_cen_str_adj_23
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_24   (*((uint8_t *)((uint32_t)fwCfgp + 0xB46UL)))    //B46 - r0_ms_sense_cen_str_adj_24
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_25   (*((uint8_t *)((uint32_t)fwCfgp + 0xB47UL)))    //B47 - r0_ms_sense_cen_str_adj_25
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_26   (*((uint8_t *)((uint32_t)fwCfgp + 0xB48UL)))    //B48 - r0_ms_sense_cen_str_adj_26
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_27   (*((uint8_t *)((uint32_t)fwCfgp + 0xB49UL)))    //B49 - r0_ms_sense_cen_str_adj_27
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_28   (*((uint8_t *)((uint32_t)fwCfgp + 0xB4AUL)))    //B4A - r0_ms_sense_cen_str_adj_28
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_29   (*((uint8_t *)((uint32_t)fwCfgp + 0xB4BUL)))    //B4B - r0_ms_sense_cen_str_adj_29
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_30   (*((uint8_t *)((uint32_t)fwCfgp + 0xB4CUL)))    //B4C - r0_ms_sense_cen_str_adj_30
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_31   (*((uint8_t *)((uint32_t)fwCfgp + 0xB4DUL)))    //B4D - r0_ms_sense_cen_str_adj_31
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_32   (*((uint8_t *)((uint32_t)fwCfgp + 0xB4EUL)))    //B4E - r0_ms_sense_cen_str_adj_32
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_33   (*((uint8_t *)((uint32_t)fwCfgp + 0xB4FUL)))    //B4F - r0_ms_sense_cen_str_adj_33
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_34   (*((uint8_t *)((uint32_t)fwCfgp + 0xB50UL)))    //B50 - r0_ms_sense_cen_str_adj_34
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_35   (*((uint8_t *)((uint32_t)fwCfgp + 0xB51UL)))    //B51 - r0_ms_sense_cen_str_adj_35
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_36   (*((uint8_t *)((uint32_t)fwCfgp + 0xB52UL)))    //B52 - r0_ms_sense_cen_str_adj_36
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_37   (*((uint8_t *)((uint32_t)fwCfgp + 0xB53UL)))    //B53 - r0_ms_sense_cen_str_adj_37
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_38   (*((uint8_t *)((uint32_t)fwCfgp + 0xB54UL)))    //B54 - r0_ms_sense_cen_str_adj_38
#define CFGBYTE_U8_R0_MS_SENSE_CEN_STR_ADJ_39   (*((uint8_t *)((uint32_t)fwCfgp + 0xB55UL)))    //B55 - r0_ms_sense_cen_str_adj_39
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xB56UL)))    //B56 - r1_ms_sense_cen_str_adj_0
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xB57UL)))    //B57 - r1_ms_sense_cen_str_adj_1
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_2    (*((uint8_t *)((uint32_t)fwCfgp + 0xB58UL)))    //B58 - r1_ms_sense_cen_str_adj_2
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_3    (*((uint8_t *)((uint32_t)fwCfgp + 0xB59UL)))    //B59 - r1_ms_sense_cen_str_adj_3
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_4    (*((uint8_t *)((uint32_t)fwCfgp + 0xB5AUL)))    //B5A - r1_ms_sense_cen_str_adj_4
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_5    (*((uint8_t *)((uint32_t)fwCfgp + 0xB5BUL)))    //B5B - r1_ms_sense_cen_str_adj_5
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_6    (*((uint8_t *)((uint32_t)fwCfgp + 0xB5CUL)))    //B5C - r1_ms_sense_cen_str_adj_6
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_7    (*((uint8_t *)((uint32_t)fwCfgp + 0xB5DUL)))    //B5D - r1_ms_sense_cen_str_adj_7
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_8    (*((uint8_t *)((uint32_t)fwCfgp + 0xB5EUL)))    //B5E - r1_ms_sense_cen_str_adj_8
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_9    (*((uint8_t *)((uint32_t)fwCfgp + 0xB5FUL)))    //B5F - r1_ms_sense_cen_str_adj_9
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_10   (*((uint8_t *)((uint32_t)fwCfgp + 0xB60UL)))    //B60 - r1_ms_sense_cen_str_adj_10
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_11   (*((uint8_t *)((uint32_t)fwCfgp + 0xB61UL)))    //B61 - r1_ms_sense_cen_str_adj_11
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_12   (*((uint8_t *)((uint32_t)fwCfgp + 0xB62UL)))    //B62 - r1_ms_sense_cen_str_adj_12
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_13   (*((uint8_t *)((uint32_t)fwCfgp + 0xB63UL)))    //B63 - r1_ms_sense_cen_str_adj_13
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_14   (*((uint8_t *)((uint32_t)fwCfgp + 0xB64UL)))    //B64 - r1_ms_sense_cen_str_adj_14
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_15   (*((uint8_t *)((uint32_t)fwCfgp + 0xB65UL)))    //B65 - r1_ms_sense_cen_str_adj_15
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_16   (*((uint8_t *)((uint32_t)fwCfgp + 0xB66UL)))    //B66 - r1_ms_sense_cen_str_adj_16
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_17   (*((uint8_t *)((uint32_t)fwCfgp + 0xB67UL)))    //B67 - r1_ms_sense_cen_str_adj_17
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_18   (*((uint8_t *)((uint32_t)fwCfgp + 0xB68UL)))    //B68 - r1_ms_sense_cen_str_adj_18
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_19   (*((uint8_t *)((uint32_t)fwCfgp + 0xB69UL)))    //B69 - r1_ms_sense_cen_str_adj_19
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_20   (*((uint8_t *)((uint32_t)fwCfgp + 0xB6AUL)))    //B6A - r1_ms_sense_cen_str_adj_20
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_21   (*((uint8_t *)((uint32_t)fwCfgp + 0xB6BUL)))    //B6B - r1_ms_sense_cen_str_adj_21
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_22   (*((uint8_t *)((uint32_t)fwCfgp + 0xB6CUL)))    //B6C - r1_ms_sense_cen_str_adj_22
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_23   (*((uint8_t *)((uint32_t)fwCfgp + 0xB6DUL)))    //B6D - r1_ms_sense_cen_str_adj_23
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_24   (*((uint8_t *)((uint32_t)fwCfgp + 0xB6EUL)))    //B6E - r1_ms_sense_cen_str_adj_24
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_25   (*((uint8_t *)((uint32_t)fwCfgp + 0xB6FUL)))    //B6F - r1_ms_sense_cen_str_adj_25
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_26   (*((uint8_t *)((uint32_t)fwCfgp + 0xB70UL)))    //B70 - r1_ms_sense_cen_str_adj_26
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_27   (*((uint8_t *)((uint32_t)fwCfgp + 0xB71UL)))    //B71 - r1_ms_sense_cen_str_adj_27
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_28   (*((uint8_t *)((uint32_t)fwCfgp + 0xB72UL)))    //B72 - r1_ms_sense_cen_str_adj_28
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_29   (*((uint8_t *)((uint32_t)fwCfgp + 0xB73UL)))    //B73 - r1_ms_sense_cen_str_adj_29
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_30   (*((uint8_t *)((uint32_t)fwCfgp + 0xB74UL)))    //B74 - r1_ms_sense_cen_str_adj_30
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_31   (*((uint8_t *)((uint32_t)fwCfgp + 0xB75UL)))    //B75 - r1_ms_sense_cen_str_adj_31
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_32   (*((uint8_t *)((uint32_t)fwCfgp + 0xB76UL)))    //B76 - r1_ms_sense_cen_str_adj_32
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_33   (*((uint8_t *)((uint32_t)fwCfgp + 0xB77UL)))    //B77 - r1_ms_sense_cen_str_adj_33
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_34   (*((uint8_t *)((uint32_t)fwCfgp + 0xB78UL)))    //B78 - r1_ms_sense_cen_str_adj_34
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_35   (*((uint8_t *)((uint32_t)fwCfgp + 0xB79UL)))    //B79 - r1_ms_sense_cen_str_adj_35
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_36   (*((uint8_t *)((uint32_t)fwCfgp + 0xB7AUL)))    //B7A - r1_ms_sense_cen_str_adj_36
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_37   (*((uint8_t *)((uint32_t)fwCfgp + 0xB7BUL)))    //B7B - r1_ms_sense_cen_str_adj_37
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_38   (*((uint8_t *)((uint32_t)fwCfgp + 0xB7CUL)))    //B7C - r1_ms_sense_cen_str_adj_38
#define CFGBYTE_U8_R1_MS_SENSE_CEN_STR_ADJ_39   (*((uint8_t *)((uint32_t)fwCfgp + 0xB7DUL)))    //B7D - r1_ms_sense_cen_str_adj_39
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xB7EUL)))    //B7E - r2_ms_sense_cen_str_adj_0
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xB7FUL)))    //B7F - r2_ms_sense_cen_str_adj_1
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_2    (*((uint8_t *)((uint32_t)fwCfgp + 0xB80UL)))    //B80 - r2_ms_sense_cen_str_adj_2
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_3    (*((uint8_t *)((uint32_t)fwCfgp + 0xB81UL)))    //B81 - r2_ms_sense_cen_str_adj_3
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_4    (*((uint8_t *)((uint32_t)fwCfgp + 0xB82UL)))    //B82 - r2_ms_sense_cen_str_adj_4
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_5    (*((uint8_t *)((uint32_t)fwCfgp + 0xB83UL)))    //B83 - r2_ms_sense_cen_str_adj_5
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_6    (*((uint8_t *)((uint32_t)fwCfgp + 0xB84UL)))    //B84 - r2_ms_sense_cen_str_adj_6
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_7    (*((uint8_t *)((uint32_t)fwCfgp + 0xB85UL)))    //B85 - r2_ms_sense_cen_str_adj_7
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_8    (*((uint8_t *)((uint32_t)fwCfgp + 0xB86UL)))    //B86 - r2_ms_sense_cen_str_adj_8
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_9    (*((uint8_t *)((uint32_t)fwCfgp + 0xB87UL)))    //B87 - r2_ms_sense_cen_str_adj_9
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_10   (*((uint8_t *)((uint32_t)fwCfgp + 0xB88UL)))    //B88 - r2_ms_sense_cen_str_adj_10
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_11   (*((uint8_t *)((uint32_t)fwCfgp + 0xB89UL)))    //B89 - r2_ms_sense_cen_str_adj_11
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_12   (*((uint8_t *)((uint32_t)fwCfgp + 0xB8AUL)))    //B8A - r2_ms_sense_cen_str_adj_12
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_13   (*((uint8_t *)((uint32_t)fwCfgp + 0xB8BUL)))    //B8B - r2_ms_sense_cen_str_adj_13
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_14   (*((uint8_t *)((uint32_t)fwCfgp + 0xB8CUL)))    //B8C - r2_ms_sense_cen_str_adj_14
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_15   (*((uint8_t *)((uint32_t)fwCfgp + 0xB8DUL)))    //B8D - r2_ms_sense_cen_str_adj_15
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_16   (*((uint8_t *)((uint32_t)fwCfgp + 0xB8EUL)))    //B8E - r2_ms_sense_cen_str_adj_16
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_17   (*((uint8_t *)((uint32_t)fwCfgp + 0xB8FUL)))    //B8F - r2_ms_sense_cen_str_adj_17
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_18   (*((uint8_t *)((uint32_t)fwCfgp + 0xB90UL)))    //B90 - r2_ms_sense_cen_str_adj_18
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_19   (*((uint8_t *)((uint32_t)fwCfgp + 0xB91UL)))    //B91 - r2_ms_sense_cen_str_adj_19
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_20   (*((uint8_t *)((uint32_t)fwCfgp + 0xB92UL)))    //B92 - r2_ms_sense_cen_str_adj_20
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_21   (*((uint8_t *)((uint32_t)fwCfgp + 0xB93UL)))    //B93 - r2_ms_sense_cen_str_adj_21
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_22   (*((uint8_t *)((uint32_t)fwCfgp + 0xB94UL)))    //B94 - r2_ms_sense_cen_str_adj_22
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_23   (*((uint8_t *)((uint32_t)fwCfgp + 0xB95UL)))    //B95 - r2_ms_sense_cen_str_adj_23
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_24   (*((uint8_t *)((uint32_t)fwCfgp + 0xB96UL)))    //B96 - r2_ms_sense_cen_str_adj_24
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_25   (*((uint8_t *)((uint32_t)fwCfgp + 0xB97UL)))    //B97 - r2_ms_sense_cen_str_adj_25
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_26   (*((uint8_t *)((uint32_t)fwCfgp + 0xB98UL)))    //B98 - r2_ms_sense_cen_str_adj_26
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_27   (*((uint8_t *)((uint32_t)fwCfgp + 0xB99UL)))    //B99 - r2_ms_sense_cen_str_adj_27
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_28   (*((uint8_t *)((uint32_t)fwCfgp + 0xB9AUL)))    //B9A - r2_ms_sense_cen_str_adj_28
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_29   (*((uint8_t *)((uint32_t)fwCfgp + 0xB9BUL)))    //B9B - r2_ms_sense_cen_str_adj_29
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_30   (*((uint8_t *)((uint32_t)fwCfgp + 0xB9CUL)))    //B9C - r2_ms_sense_cen_str_adj_30
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_31   (*((uint8_t *)((uint32_t)fwCfgp + 0xB9DUL)))    //B9D - r2_ms_sense_cen_str_adj_31
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_32   (*((uint8_t *)((uint32_t)fwCfgp + 0xB9EUL)))    //B9E - r2_ms_sense_cen_str_adj_32
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_33   (*((uint8_t *)((uint32_t)fwCfgp + 0xB9FUL)))    //B9F - r2_ms_sense_cen_str_adj_33
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_34   (*((uint8_t *)((uint32_t)fwCfgp + 0xBA0UL)))    //BA0 - r2_ms_sense_cen_str_adj_34
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_35   (*((uint8_t *)((uint32_t)fwCfgp + 0xBA1UL)))    //BA1 - r2_ms_sense_cen_str_adj_35
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_36   (*((uint8_t *)((uint32_t)fwCfgp + 0xBA2UL)))    //BA2 - r2_ms_sense_cen_str_adj_36
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_37   (*((uint8_t *)((uint32_t)fwCfgp + 0xBA3UL)))    //BA3 - r2_ms_sense_cen_str_adj_37
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_38   (*((uint8_t *)((uint32_t)fwCfgp + 0xBA4UL)))    //BA4 - r2_ms_sense_cen_str_adj_38
#define CFGBYTE_U8_R2_MS_SENSE_CEN_STR_ADJ_39   (*((uint8_t *)((uint32_t)fwCfgp + 0xBA5UL)))    //BA5 - r2_ms_sense_cen_str_adj_39
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xBA6UL)))    //BA6 - r3_ms_sense_cen_str_adj_0
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xBA7UL)))    //BA7 - r3_ms_sense_cen_str_adj_1
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_2    (*((uint8_t *)((uint32_t)fwCfgp + 0xBA8UL)))    //BA8 - r3_ms_sense_cen_str_adj_2
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_3    (*((uint8_t *)((uint32_t)fwCfgp + 0xBA9UL)))    //BA9 - r3_ms_sense_cen_str_adj_3
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_4    (*((uint8_t *)((uint32_t)fwCfgp + 0xBAAUL)))    //BAA - r3_ms_sense_cen_str_adj_4
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_5    (*((uint8_t *)((uint32_t)fwCfgp + 0xBABUL)))    //BAB - r3_ms_sense_cen_str_adj_5
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_6    (*((uint8_t *)((uint32_t)fwCfgp + 0xBACUL)))    //BAC - r3_ms_sense_cen_str_adj_6
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_7    (*((uint8_t *)((uint32_t)fwCfgp + 0xBADUL)))    //BAD - r3_ms_sense_cen_str_adj_7
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_8    (*((uint8_t *)((uint32_t)fwCfgp + 0xBAEUL)))    //BAE - r3_ms_sense_cen_str_adj_8
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_9    (*((uint8_t *)((uint32_t)fwCfgp + 0xBAFUL)))    //BAF - r3_ms_sense_cen_str_adj_9
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_10   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB0UL)))    //BB0 - r3_ms_sense_cen_str_adj_10
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_11   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB1UL)))    //BB1 - r3_ms_sense_cen_str_adj_11
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_12   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB2UL)))    //BB2 - r3_ms_sense_cen_str_adj_12
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_13   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB3UL)))    //BB3 - r3_ms_sense_cen_str_adj_13
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_14   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB4UL)))    //BB4 - r3_ms_sense_cen_str_adj_14
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_15   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB5UL)))    //BB5 - r3_ms_sense_cen_str_adj_15
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_16   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB6UL)))    //BB6 - r3_ms_sense_cen_str_adj_16
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_17   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB7UL)))    //BB7 - r3_ms_sense_cen_str_adj_17
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_18   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB8UL)))    //BB8 - r3_ms_sense_cen_str_adj_18
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_19   (*((uint8_t *)((uint32_t)fwCfgp + 0xBB9UL)))    //BB9 - r3_ms_sense_cen_str_adj_19
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_20   (*((uint8_t *)((uint32_t)fwCfgp + 0xBBAUL)))    //BBA - r3_ms_sense_cen_str_adj_20
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_21   (*((uint8_t *)((uint32_t)fwCfgp + 0xBBBUL)))    //BBB - r3_ms_sense_cen_str_adj_21
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_22   (*((uint8_t *)((uint32_t)fwCfgp + 0xBBCUL)))    //BBC - r3_ms_sense_cen_str_adj_22
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_23   (*((uint8_t *)((uint32_t)fwCfgp + 0xBBDUL)))    //BBD - r3_ms_sense_cen_str_adj_23
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_24   (*((uint8_t *)((uint32_t)fwCfgp + 0xBBEUL)))    //BBE - r3_ms_sense_cen_str_adj_24
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_25   (*((uint8_t *)((uint32_t)fwCfgp + 0xBBFUL)))    //BBF - r3_ms_sense_cen_str_adj_25
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_26   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC0UL)))    //BC0 - r3_ms_sense_cen_str_adj_26
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_27   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC1UL)))    //BC1 - r3_ms_sense_cen_str_adj_27
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_28   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC2UL)))    //BC2 - r3_ms_sense_cen_str_adj_28
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_29   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC3UL)))    //BC3 - r3_ms_sense_cen_str_adj_29
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_30   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC4UL)))    //BC4 - r3_ms_sense_cen_str_adj_30
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_31   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC5UL)))    //BC5 - r3_ms_sense_cen_str_adj_31
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_32   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC6UL)))    //BC6 - r3_ms_sense_cen_str_adj_32
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_33   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC7UL)))    //BC7 - r3_ms_sense_cen_str_adj_33
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_34   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC8UL)))    //BC8 - r3_ms_sense_cen_str_adj_34
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_35   (*((uint8_t *)((uint32_t)fwCfgp + 0xBC9UL)))    //BC9 - r3_ms_sense_cen_str_adj_35
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_36   (*((uint8_t *)((uint32_t)fwCfgp + 0xBCAUL)))    //BCA - r3_ms_sense_cen_str_adj_36
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_37   (*((uint8_t *)((uint32_t)fwCfgp + 0xBCBUL)))    //BCB - r3_ms_sense_cen_str_adj_37
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_38   (*((uint8_t *)((uint32_t)fwCfgp + 0xBCCUL)))    //BCC - r3_ms_sense_cen_str_adj_38
#define CFGBYTE_U8_R3_MS_SENSE_CEN_STR_ADJ_39   (*((uint8_t *)((uint32_t)fwCfgp + 0xBCDUL)))    //BCD - r3_ms_sense_cen_str_adj_39
#define CFGBYTE_U8_R0_MS_SENSE_EDGE_STR_ADJ_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xBCEUL)))    //BCE - r0_ms_sense_edge_str_adj_0
#define CFGBYTE_U8_R0_MS_SENSE_EDGE_STR_ADJ_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xBCFUL)))    //BCF - r0_ms_sense_edge_str_adj_1
#define CFGBYTE_U8_R0_MS_SENSE_EDGE_STR_ADJ_2   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD0UL)))    //BD0 - r0_ms_sense_edge_str_adj_2
#define CFGBYTE_U8_R0_MS_SENSE_EDGE_STR_ADJ_3   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD1UL)))    //BD1 - r0_ms_sense_edge_str_adj_3
#define CFGBYTE_U8_R1_MS_SENSE_EDGE_STR_ADJ_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD2UL)))    //BD2 - r1_ms_sense_edge_str_adj_0
#define CFGBYTE_U8_R1_MS_SENSE_EDGE_STR_ADJ_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD3UL)))    //BD3 - r1_ms_sense_edge_str_adj_1
#define CFGBYTE_U8_R1_MS_SENSE_EDGE_STR_ADJ_2   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD4UL)))    //BD4 - r1_ms_sense_edge_str_adj_2
#define CFGBYTE_U8_R1_MS_SENSE_EDGE_STR_ADJ_3   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD5UL)))    //BD5 - r1_ms_sense_edge_str_adj_3
#define CFGBYTE_U8_R2_MS_SENSE_EDGE_STR_ADJ_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD6UL)))    //BD6 - r2_ms_sense_edge_str_adj_0
#define CFGBYTE_U8_R2_MS_SENSE_EDGE_STR_ADJ_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD7UL)))    //BD7 - r2_ms_sense_edge_str_adj_1
#define CFGBYTE_U8_R2_MS_SENSE_EDGE_STR_ADJ_2   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD8UL)))    //BD8 - r2_ms_sense_edge_str_adj_2
#define CFGBYTE_U8_R2_MS_SENSE_EDGE_STR_ADJ_3   (*((uint8_t *)((uint32_t)fwCfgp + 0xBD9UL)))    //BD9 - r2_ms_sense_edge_str_adj_3
#define CFGBYTE_U8_R3_MS_SENSE_EDGE_STR_ADJ_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xBDAUL)))    //BDA - r3_ms_sense_edge_str_adj_0
#define CFGBYTE_U8_R3_MS_SENSE_EDGE_STR_ADJ_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xBDBUL)))    //BDB - r3_ms_sense_edge_str_adj_1
#define CFGBYTE_U8_R3_MS_SENSE_EDGE_STR_ADJ_2   (*((uint8_t *)((uint32_t)fwCfgp + 0xBDCUL)))    //BDC - r3_ms_sense_edge_str_adj_2
#define CFGBYTE_U8_R3_MS_SENSE_EDGE_STR_ADJ_3   (*((uint8_t *)((uint32_t)fwCfgp + 0xBDDUL)))    //BDD - r3_ms_sense_edge_str_adj_3
#define CFGBYTE_U8_LNG_SHAPE_LENGTH_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xBE0UL)))    //BE0 - lng_shape_length_thres
#define CFGBYTE_U8_LNG_SHAPE_LENGTH_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xBE1UL)))    //BE1 - lng_shape_length_thres
#define CFGBYTE_U8_LNG_SHAPE_WIDTH_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xBE2UL)))    //BE2 - lng_shape_width_thres
#define CFGBYTE_U8_LNG_SHAPE_WIDTH_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xBE3UL)))    //BE3 - lng_shape_width_thres
#define CFGBYTE_U8_LNG_SHAPE_NODE_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xBE4UL)))    //BE4 - lng_shape_node_thres
#define CFGBYTE_U8_LNG_SHAPE_NODE_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xBE5UL)))    //BE5 - lng_shape_node_thres
#define CFGBYTE_U8_LNG_SHAPE_NODE_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xBE6UL)))    //BE6 - lng_shape_node_diff_thres
#define CFGBYTE_U8_LNG_SHAPE_NODE_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xBE7UL)))    //BE7 - lng_shape_node_diff_thres
#define CFGBYTE_U8_LNG_SHAPE_EXT_NODE_0     (*((uint8_t *)((uint32_t)fwCfgp + 0xBE8UL)))    //BE8 - lng_shape_ext_node
#define CFGBYTE_U8_LNG_SHAPE_EXT_NODE_1     (*((uint8_t *)((uint32_t)fwCfgp + 0xBE9UL)))    //BE9 - lng_shape_ext_node
#define CFGBYTE_U8_MS_RES_R01_RATIO_0       (*((uint8_t *)((uint32_t)fwCfgp + 0xBF0UL)))    //BF0 - ms_res_r01_ratio
#define CFGBYTE_U8_MS_RES_R01_RATIO_1       (*((uint8_t *)((uint32_t)fwCfgp + 0xBF1UL)))    //BF1 - ms_res_r01_ratio
#define CFGBYTE_U8_MS_RES_FGRR2_THRES_0     (*((uint8_t *)((uint32_t)fwCfgp + 0xBF2UL)))    //BF2 - ms_res_fgrR2_thres
#define CFGBYTE_U8_MS_RES_FGRR2_THRES_1     (*((uint8_t *)((uint32_t)fwCfgp + 0xBF3UL)))    //BF3 - ms_res_fgrR2_thres
#define CFGBYTE_U8_MS_RES_R12_RATIO_0       (*((uint8_t *)((uint32_t)fwCfgp + 0xBF4UL)))    //BF4 - ms_res_r12_ratio
#define CFGBYTE_U8_MS_RES_R12_RATIO_1       (*((uint8_t *)((uint32_t)fwCfgp + 0xBF5UL)))    //BF5 - ms_res_r12_ratio
#define CFGBYTE_U8_MS_SENSE_STR_ADD_ADJ_WTR (*((uint8_t *)((uint32_t)fwCfgp + 0xC13UL)))    //C13 - ms_sense_str_add_adj_wtr
#define CFGBYTE_U8_MS_SENSE_STR_ADD_ADJ_GLV (*((uint8_t *)((uint32_t)fwCfgp + 0xC14UL)))    //C14 - ms_sense_str_add_adj_glv
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xC15UL)))    //C15 - ms_sense_str_adj_camera_hole_idx_tx_0
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xC16UL)))    //C16 - ms_sense_str_adj_camera_hole_idx_rx_0
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xC17UL)))    //C17 - ms_sense_str_adj_camera_hole_idx_tx_1
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xC18UL)))    //C18 - ms_sense_str_adj_camera_hole_idx_rx_1
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_2    (*((uint8_t *)((uint32_t)fwCfgp + 0xC19UL)))    //C19 - ms_sense_str_adj_camera_hole_idx_tx_2
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_2    (*((uint8_t *)((uint32_t)fwCfgp + 0xC1AUL)))    //C1A - ms_sense_str_adj_camera_hole_idx_rx_2
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_TX_3    (*((uint8_t *)((uint32_t)fwCfgp + 0xC1BUL)))    //C1B - ms_sense_str_adj_camera_hole_idx_tx_3
#define CFGBYTE_U8_MS_SENSE_STR_ADJ_CAMERA_HOLE_IDX_RX_3    (*((uint8_t *)((uint32_t)fwCfgp + 0xC1CUL)))    //C1C - ms_sense_str_adj_camera_hole_idx_rx_3
#define CFGBYTE_U8_MS_SENSE_ADJ_FOR_HOLE_CONFIG (*((uint8_t *)((uint32_t)fwCfgp + 0xC1DUL)))    //C1D - ms_sense_adj_for_hole_config
#define CFGBYTE_U8_MS_SRC_SKIP_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC20UL)))    //C20 - ms_src_skip_bit_shift
#define CFGBYTE_U8_MS_SRC_HIGH_RES_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC21UL)))    //C21 - ms_src_high_res_bit_shift
#define CFGBYTE_U8_MS_SRC_HIGH_RES_MFS_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC22UL)))    //C22 - ms_src_high_res_mfs_bit_shift
#define CFGBYTE_U8_MS_SRC_HIGH_RES_FWA_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC23UL)))    //C23 - ms_src_high_res_fwa_bit_shift
#define CFGBYTE_U8_MS_SRC_HIGH_RES_FWA_NOISY_BIT_SHIFT  (*((uint8_t *)((uint32_t)fwCfgp + 0xC24UL)))    //C24 - ms_src_high_res_fwa_noisy_bit_shift
#define CFGBYTE_U8_MS_SRC_HIGH_RES_FWA_MFS_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC25UL)))    //C25 - ms_src_high_res_fwa_mfs_bit_shift
#define CFGBYTE_U8_MS_SRC_HIGH_RES_FWA_GLV_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC26UL)))    //C26 - ms_src_high_res_fwa_glv_bit_shift
#define CFGBYTE_U8_MS_SRC_LP_BIT_SHIFT      (*((uint8_t *)((uint32_t)fwCfgp + 0xC27UL)))    //C27 - ms_src_lp_bit_shift
#define CFGBYTE_U8_MS_SRC_CX_BIT_SHIFT      (*((uint8_t *)((uint32_t)fwCfgp + 0xC28UL)))    //C28 - ms_src_cx_bit_shift
#define CFGBYTE_U8_MS_SRC_LP_CX_BIT_SHIFT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC29UL)))    //C29 - ms_src_lp_cx_bit_shift
#define CFGBYTE_U8_MS_SRC_ITO_BIT_SHIFT     (*((uint8_t *)((uint32_t)fwCfgp + 0xC2AUL)))    //C2A - ms_src_ito_bit_shift
#define CFGBYTE_U8_MS_SRC_ITO_MICRO_BIT_SHIFT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC2BUL)))    //C2B - ms_src_ito_micro_bit_shift
#define CFGBYTE_U8_MS_SRC_IOFF_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC2CUL)))    //C2C - ms_src_ioff_bit_shift
#define CFGBYTE_U8_MS_SRC_AGING_BIT_SHIFT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC2DUL)))    //C2D - ms_src_aging_bit_shift
#define CFGBYTE_U8_MS_SRC_AOFF_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC2EUL)))    //C2E - ms_src_aoff_bit_shift
#define CFGBYTE_U8_MS_MRN_SKIP_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC2FUL)))    //C2F - ms_mrn_skip_bit_shift
#define CFGBYTE_U8_MS_MRN_DEFAULT_BIT_SHIFT (*((uint8_t *)((uint32_t)fwCfgp + 0xC30UL)))    //C30 - ms_mrn_default_bit_shift
#define CFGBYTE_U8_MS_MRN_MFS_BIT_SHIFT     (*((uint8_t *)((uint32_t)fwCfgp + 0xC31UL)))    //C31 - ms_mrn_mfs_bit_shift
#define CFGBYTE_U8_MS_MRN_MULTI_ACC_NOISY_BIT_SHIFT (*((uint8_t *)((uint32_t)fwCfgp + 0xC32UL)))    //C32 - ms_mrn_multi_acc_noisy_bit_shift
#define CFGBYTE_U8_MS_MRN_DUMMY_BIT_SHIFT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC33UL)))    //C33 - ms_mrn_dummy_bit_shift
#define CFGBYTE_U8_SS_TCH_SKIP_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC34UL)))    //C34 - ss_tch_skip_bit_shift
#define CFGBYTE_U8_SS_TCH_HIGH_RES_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC35UL)))    //C35 - ss_tch_high_res_bit_shift
#define CFGBYTE_U8_SS_TCH_CX_BIT_SHIFT      (*((uint8_t *)((uint32_t)fwCfgp + 0xC36UL)))    //C36 - ss_tch_cx_bit_shift
#define CFGBYTE_U8_SS_TCH_IX_BIT_SHIFT      (*((uint8_t *)((uint32_t)fwCfgp + 0xC37UL)))    //C37 - ss_tch_ix_bit_shift
#define CFGBYTE_U8_SS_TCH_IOFF_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC38UL)))    //C38 - ss_tch_ioff_bit_shift
#define CFGBYTE_U8_SS_TCH_JITTER_BIT_SHIFT  (*((uint8_t *)((uint32_t)fwCfgp + 0xC39UL)))    //C39 - ss_tch_jitter_bit_shift
#define CFGBYTE_U8_SS_DET_SKIP_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC3AUL)))    //C3A - ss_det_skip_bit_shift
#define CFGBYTE_U8_SS_DET_HIGH_RES_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC3BUL)))    //C3B - ss_det_high_res_bit_shift
#define CFGBYTE_U8_SS_DET_CX_BIT_SHIFT      (*((uint8_t *)((uint32_t)fwCfgp + 0xC3CUL)))    //C3C - ss_det_cx_bit_shift
#define CFGBYTE_U8_SS_DET_IX_BIT_SHIFT      (*((uint8_t *)((uint32_t)fwCfgp + 0xC3DUL)))    //C3D - ss_det_ix_bit_shift
#define CFGBYTE_U8_SS_DET_IOFF_BIT_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xC3EUL)))    //C3E - ss_det_ioff_bit_shift
#define CFGBYTE_U8_GES_LNG_PRS_BIG_MTOL     (*((uint8_t *)((uint32_t)fwCfgp + 0xC40UL)))    //C40 - ges_lng_prs_big_mtol
#define CFGBYTE_U8_GES_LNG_PRS_BIG_X_START_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xC41UL)))    //C41 - ges_lng_prs_big_x_start
#define CFGBYTE_U8_GES_LNG_PRS_BIG_X_START_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xC42UL)))    //C42 - ges_lng_prs_big_x_start
#define CFGBYTE_U8_GES_LNG_PRS_BIG_X_END_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xC43UL)))    //C43 - ges_lng_prs_big_x_end
#define CFGBYTE_U8_GES_LNG_PRS_BIG_X_END_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xC44UL)))    //C44 - ges_lng_prs_big_x_end
#define CFGBYTE_U8_GES_LNG_PRS_BIG_Y_START_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xC45UL)))    //C45 - ges_lng_prs_big_y_start
#define CFGBYTE_U8_GES_LNG_PRS_BIG_Y_START_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xC46UL)))    //C46 - ges_lng_prs_big_y_start
#define CFGBYTE_U8_GES_LNG_PRS_BIG_Y_END_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xC47UL)))    //C47 - ges_lng_prs_big_y_end
#define CFGBYTE_U8_GES_LNG_PRS_BIG_Y_END_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xC48UL)))    //C48 - ges_lng_prs_big_y_end
#define CFGBYTE_U8_LP_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_PER    (*((uint8_t *)((uint32_t)fwCfgp + 0xC49UL)))    //C49 - lp_ges_big_overlap_area_2_lngprs_area_per
#define CFGBYTE_U8_LP_GES_BIG_OVERLAP_AREA_2_TCH_AREA_PER   (*((uint8_t *)((uint32_t)fwCfgp + 0xC4AUL)))    //C4A - lp_ges_big_overlap_area_2_tch_area_per
#define CFGBYTE_U8_LP_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_HYST_PER   (*((uint8_t *)((uint32_t)fwCfgp + 0xC4BUL)))    //C4B - lp_ges_big_overlap_area_2_lngprs_area_hyst_per
#define CFGBYTE_U8_ACT_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_PER   (*((uint8_t *)((uint32_t)fwCfgp + 0xC4CUL)))    //C4C - act_ges_big_overlap_area_2_lngprs_area_per
#define CFGBYTE_U8_ACT_GES_BIG_OVERLAP_AREA_2_TCH_AREA_PER  (*((uint8_t *)((uint32_t)fwCfgp + 0xC4DUL)))    //C4D - act_ges_big_overlap_area_2_tch_area_per
#define CFGBYTE_U8_ACT_GES_BIG_OVERLAP_AREA_2_LNGPRS_AREA_HYST_PER  (*((uint8_t *)((uint32_t)fwCfgp + 0xC4EUL)))    //C4E - act_ges_big_overlap_area_2_lngprs_area_hyst_per
#define CFGBYTE_U8_GES_LNG_PRS_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0xC50UL)))    //C50 - ges_lng_prs_cfg
#define CFGBYTE_U8_GES_LNG_PRS_DUR          (*((uint8_t *)((uint32_t)fwCfgp + 0xC51UL)))    //C51 - ges_lng_prs_dur
#define CFGBYTE_U8_GES_LNG_PRS_MTOL         (*((uint8_t *)((uint32_t)fwCfgp + 0xC52UL)))    //C52 - ges_lng_prs_mtol
#define CFGBYTE_U8_GES_LNG_PRS_X_START_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xC53UL)))    //C53 - ges_lng_prs_x_start
#define CFGBYTE_U8_GES_LNG_PRS_X_START_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xC54UL)))    //C54 - ges_lng_prs_x_start
#define CFGBYTE_U8_GES_LNG_PRS_X_END_0      (*((uint8_t *)((uint32_t)fwCfgp + 0xC55UL)))    //C55 - ges_lng_prs_x_end
#define CFGBYTE_U8_GES_LNG_PRS_X_END_1      (*((uint8_t *)((uint32_t)fwCfgp + 0xC56UL)))    //C56 - ges_lng_prs_x_end
#define CFGBYTE_U8_GES_LNG_PRS_Y_START_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xC57UL)))    //C57 - ges_lng_prs_y_start
#define CFGBYTE_U8_GES_LNG_PRS_Y_START_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xC58UL)))    //C58 - ges_lng_prs_y_start
#define CFGBYTE_U8_GES_LNG_PRS_Y_END_0      (*((uint8_t *)((uint32_t)fwCfgp + 0xC59UL)))    //C59 - ges_lng_prs_y_end
#define CFGBYTE_U8_GES_LNG_PRS_Y_END_1      (*((uint8_t *)((uint32_t)fwCfgp + 0xC5AUL)))    //C5A - ges_lng_prs_y_end
#define CFGBYTE_U8_LP_GES_OVERLAP_AREA_2_LNG_PRS_AREA_PERCENT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC5BUL)))    //C5B - lp_ges_overlap_area_2_lng_prs_area_percent
#define CFGBYTE_U8_LP_GES_OVERLAP_AREA_2_TCH_AREA_PERCENT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC5CUL)))    //C5C - lp_ges_overlap_area_2_tch_area_percent
#define CFGBYTE_U8_ACTIVE_GES_OVERLAP_AREA_2_LNG_PRS_AREA_PERCENT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC5DUL)))    //C5D - active_ges_overlap_area_2_lng_prs_area_percent
#define CFGBYTE_U8_ACTIVE_GES_OVERLAP_AREA_2_TCH_AREA_PERCENT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC5EUL)))    //C5E - active_ges_overlap_area_2_tch_area_percent
#define CFGBYTE_U8_GES_LNG_PRS_STRENGTH_THRESHOLD_PERCENT   (*((uint8_t *)((uint32_t)fwCfgp + 0xC5FUL)))    //C5F - ges_lng_prs_strength_threshold_percent
#define CFGBYTE_U8_GES_LNG_PRS_X_START_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0xC60UL)))    //C60 - ges_lng_prs_x_start_offset
#define CFGBYTE_U8_GES_LNG_PRS_X_END_OFFSET (*((uint8_t *)((uint32_t)fwCfgp + 0xC61UL)))    //C61 - ges_lng_prs_x_end_offset
#define CFGBYTE_U8_GES_LNG_PRS_Y_START_OFFSET   (*((uint8_t *)((uint32_t)fwCfgp + 0xC62UL)))    //C62 - ges_lng_prs_y_start_offset
#define CFGBYTE_U8_GES_LNG_PRS_Y_END_OFFSET (*((uint8_t *)((uint32_t)fwCfgp + 0xC63UL)))    //C63 - ges_lng_prs_y_end_offset
#define CFGBYTE_U8_LP_GES_OVERLAP_AREA_2_LNG_PRS_AREA_HYST_PERCENT  (*((uint8_t *)((uint32_t)fwCfgp + 0xC64UL)))    //C64 - lp_ges_overlap_area_2_lng_prs_area_hyst_percent
#define CFGBYTE_U8_ACTIVE_GES_OVERLAP_AREA_2_LNG_PRS_AREA_HYST_PERCENT  (*((uint8_t *)((uint32_t)fwCfgp + 0xC65UL)))    //C65 - active_ges_overlap_area_2_lng_prs_area_hyst_percent
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_X_START_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xC67UL)))    //C67 - ges_lng_prs_cal_area_per_x_start
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_X_START_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xC68UL)))    //C68 - ges_lng_prs_cal_area_per_x_start
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_X_END_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xC69UL)))    //C69 - ges_lng_prs_cal_area_per_x_end
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_X_END_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xC6AUL)))    //C6A - ges_lng_prs_cal_area_per_x_end
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_Y_START_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xC6BUL)))    //C6B - ges_lng_prs_cal_area_per_y_start
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_Y_START_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xC6CUL)))    //C6C - ges_lng_prs_cal_area_per_y_start
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_Y_END_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xC6DUL)))    //C6D - ges_lng_prs_cal_area_per_y_end
#define CFGBYTE_U8_GES_LNG_PRS_CAL_AREA_PER_Y_END_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xC6EUL)))    //C6E - ges_lng_prs_cal_area_per_y_end
#define CFGBYTE_U8_GRP_CFG_0                (*((uint8_t *)((uint32_t)fwCfgp + 0xC70UL)))    //C70 - grp_cfg
#define CFGBYTE_U8_GRP_CFG_1                (*((uint8_t *)((uint32_t)fwCfgp + 0xC71UL)))    //C71 - grp_cfg
#define CFGBYTE_U8_GRP_THRES_0              (*((uint8_t *)((uint32_t)fwCfgp + 0xC72UL)))    //C72 - grp_thres
#define CFGBYTE_U8_GRP_THRES_1              (*((uint8_t *)((uint32_t)fwCfgp + 0xC73UL)))    //C73 - grp_thres
#define CFGBYTE_U8_GRP_THRES_HYST           (*((uint8_t *)((uint32_t)fwCfgp + 0xC74UL)))    //C74 - grp_thres_hyst
#define CFGBYTE_U8_GRP_NOISY_ADD_THRES      (*((uint8_t *)((uint32_t)fwCfgp + 0xC75UL)))    //C75 - grp_noisy_add_thres
#define CFGBYTE_U8_GRP_BNDRY_MAX_STR_0      (*((uint8_t *)((uint32_t)fwCfgp + 0xC76UL)))    //C76 - grp_bndry_max_str
#define CFGBYTE_U8_GRP_BNDRY_MAX_STR_1      (*((uint8_t *)((uint32_t)fwCfgp + 0xC77UL)))    //C77 - grp_bndry_max_str
#define CFGBYTE_U8_GRP_BNDRY_STR_GAIN_PERC  (*((uint8_t *)((uint32_t)fwCfgp + 0xC78UL)))    //C78 - grp_bndry_str_gain_perc
#define CFGBYTE_U8_GRP_AXES_MIN_AREA        (*((uint8_t *)((uint32_t)fwCfgp + 0xC79UL)))    //C79 - grp_axes_min_area
#define CFGBYTE_U8_GRP_EDGE_ZONE_DURATION   (*((uint8_t *)((uint32_t)fwCfgp + 0xC7AUL)))    //C7A - grp_edge_zone_duration
#define CFGBYTE_U8_GRP_EDGE_ZONE_DURATION_HYST  (*((uint8_t *)((uint32_t)fwCfgp + 0xC7BUL)))    //C7B - grp_edge_zone_duration_hyst
#define CFGBYTE_U8_GRP_STABLE_MIN_SUM_STR_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xC7CUL)))    //C7C - grp_stable_min_sum_str
#define CFGBYTE_U8_GRP_STABLE_MIN_SUM_STR_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xC7DUL)))    //C7D - grp_stable_min_sum_str
#define CFGBYTE_U8_GRP_DEAD_ZONE            (*((uint8_t *)((uint32_t)fwCfgp + 0xC7EUL)))    //C7E - grp_dead_zone
#define CFGBYTE_U8_GRP_DEAD_ZONE_HYST       (*((uint8_t *)((uint32_t)fwCfgp + 0xC7FUL)))    //C7F - grp_dead_zone_hyst
#define CFGBYTE_U8_GRP_EDGE_ZONE_RANGE      (*((uint8_t *)((uint32_t)fwCfgp + 0xC80UL)))    //C80 - grp_edge_zone_range
#define CFGBYTE_U8_GRP_EDGE_AXES_DIFF       (*((uint8_t *)((uint32_t)fwCfgp + 0xC81UL)))    //C81 - grp_edge_axes_diff
#define CFGBYTE_U8_GRP_EDGE_ZONE_HYST       (*((uint8_t *)((uint32_t)fwCfgp + 0xC82UL)))    //C82 - grp_edge_zone_hyst
#define CFGBYTE_U8_GRP_EDGE_ZONE            (*((uint8_t *)((uint32_t)fwCfgp + 0xC83UL)))    //C83 - grp_edge_zone
#define CFGBYTE_U8_GRP_EDGE_BIG_THUMB_AREA  (*((uint8_t *)((uint32_t)fwCfgp + 0xC84UL)))    //C84 - grp_edge_big_thumb_area
#define CFGBYTE_U8_GRP_EDGE_THUMB_ZONE      (*((uint8_t *)((uint32_t)fwCfgp + 0xC85UL)))    //C85 - grp_edge_thumb_zone
#define CFGBYTE_U8_GRP_MOVE2CENTER_BIG_AREA_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xC86UL)))    //C86 - grp_move2center_big_area_thres
#define CFGBYTE_U8_GRP_MOVE2CENTER_ADD_DLY  (*((uint8_t *)((uint32_t)fwCfgp + 0xC87UL)))    //C87 - grp_move2center_add_dly
#define CFGBYTE_U8_GRP_TOPBT_ZONE_TAP_MAX_PEAK_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xC88UL)))    //C88 - grp_topbt_zone_tap_max_peak_thres
#define CFGBYTE_U8_GRP_TOPBT_ZONE_TAP_MAX_PEAK_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xC89UL)))    //C89 - grp_topbt_zone_tap_max_peak_thres
#define CFGBYTE_U8_GRP_EDGE_ZONE_MIN_DURATION   (*((uint8_t *)((uint32_t)fwCfgp + 0xC8AUL)))    //C8A - grp_edge_zone_min_duration
#define CFGBYTE_U8_GRP_CORN_RJT_AREA        (*((uint8_t *)((uint32_t)fwCfgp + 0xC8BUL)))    //C8B - grp_corn_rjt_area
#define CFGBYTE_U8_GRP_EDGE_TOPBTM_ZONE     (*((uint8_t *)((uint32_t)fwCfgp + 0xC8CUL)))    //C8C - grp_edge_topbtm_zone
#define CFGBYTE_U8_GRP_EDGE_ZONE_TAP_MAX_PEAK_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xC8DUL)))    //C8D - grp_edge_zone_tap_max_peak_thres
#define CFGBYTE_U8_GRP_EDGE_ZONE_TAP_MAX_PEAK_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xC8EUL)))    //C8E - grp_edge_zone_tap_max_peak_thres
#define CFGBYTE_U8_GRP_FCAL_BLOCK_TAP_FRAME_CNT (*((uint8_t *)((uint32_t)fwCfgp + 0xC8FUL)))    //C8F - grp_fcal_block_tap_frame_cnt
#define CFGBYTE_U8_GRP_EDGE_MS_MIN_THRES_FAST_TAP_OVER_EDGE_LINE_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xC90UL)))    //C90 - grp_edge_ms_min_thres_fast_tap_over_edge_line
#define CFGBYTE_U8_GRP_EDGE_MS_MIN_THRES_FAST_TAP_OVER_EDGE_LINE_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xC91UL)))    //C91 - grp_edge_ms_min_thres_fast_tap_over_edge_line
#define CFGBYTE_U8_GRP_MOVE_THRES_0         (*((uint8_t *)((uint32_t)fwCfgp + 0xC92UL)))    //C92 - grp_move_thres
#define CFGBYTE_U8_GRP_MOVE_THRES_1         (*((uint8_t *)((uint32_t)fwCfgp + 0xC93UL)))    //C93 - grp_move_thres
#define CFGBYTE_U8_GRP_MOVE_ANGLE_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xC94UL)))    //C94 - grp_move_angle_thres
#define CFGBYTE_U8_GRP_MOVE_ANGLE_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xC95UL)))    //C95 - grp_move_angle_thres
#define CFGBYTE_U8_PALM_REJ_CFG             (*((uint8_t *)((uint32_t)fwCfgp + 0xC96UL)))    //C96 - palm_rej_cfg
#define CFGBYTE_U8_PALM_BLK_DBNC_CNT        (*((uint8_t *)((uint32_t)fwCfgp + 0xC97UL)))    //C97 - palm_blk_dbnc_cnt
#define CFGBYTE_U8_FGR_PALM_REL_DBNC        (*((uint8_t *)((uint32_t)fwCfgp + 0xC98UL)))    //C98 - fgr_palm_rel_dbnc
#define CFGBYTE_U8_GRP_EDGE_BIG_THUMB_AREA_SENSE    (*((uint8_t *)((uint32_t)fwCfgp + 0xC99UL)))    //C99 - grp_edge_big_thumb_area_sense
#define CFGBYTE_U8_EDGE_REJ_CFG_0           (*((uint8_t *)((uint32_t)fwCfgp + 0xC9AUL)))    //C9A - edge_rej_cfg
#define CFGBYTE_U8_EDGE_REJ_CFG_1           (*((uint8_t *)((uint32_t)fwCfgp + 0xC9BUL)))    //C9B - edge_rej_cfg
#define CFGBYTE_U8_GRP_COR_TCH_IN_ZONE      (*((uint8_t *)((uint32_t)fwCfgp + 0xC9DUL)))    //C9D - grp_cor_tch_in_zone
#define CFGBYTE_U8_GRP_COR_TCH_ZONE_HYST_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xC9EUL)))    //C9E - grp_cor_tch_zone_hyst
#define CFGBYTE_U8_GRP_COR_TCH_ZONE_HYST_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xC9FUL)))    //C9F - grp_cor_tch_zone_hyst
#define CFGBYTE_U8_GRP_COR_TCH_WGH          (*((uint8_t *)((uint32_t)fwCfgp + 0xCA0UL)))    //CA0 - grp_cor_tch_wgh
#define CFGBYTE_U8_GRP_COR_MAX_WGH_FRAME_CNT    (*((uint8_t *)((uint32_t)fwCfgp + 0xCA1UL)))    //CA1 - grp_cor_max_wgh_frame_cnt
#define CFGBYTE_U8_GRP_COR_FRAME_CNT_DIVIDER    (*((uint8_t *)((uint32_t)fwCfgp + 0xCA2UL)))    //CA2 - grp_cor_frame_cnt_divider
#define CFGBYTE_U8_GRP_COR_OUT_DBNC         (*((uint8_t *)((uint32_t)fwCfgp + 0xCA5UL)))    //CA5 - grp_cor_out_dbnc
#define CFGBYTE_U8_GRP_TCH_BORDER_STR_REMOVAL_DBNC_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xCA8UL)))    //CA8 - grp_tch_border_str_removal_dbnc
#define CFGBYTE_U8_GRP_TCH_BORDER_STR_REMOVAL_DBNC_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xCA9UL)))    //CA9 - grp_tch_border_str_removal_dbnc
#define CFGBYTE_U8_GRP_TCH_BORDER_STR_REMOVAL_RX_ST (*((uint8_t *)((uint32_t)fwCfgp + 0xCAAUL)))    //CAA - grp_tch_border_str_removal_rx_st
#define CFGBYTE_U8_GRP_TCH_BORDER_STR_REMOVAL_RX_ED (*((uint8_t *)((uint32_t)fwCfgp + 0xCABUL)))    //CAB - grp_tch_border_str_removal_rx_ed
#define CFGBYTE_U8_GRP_COR_DYNAMIC_REJ_TX_NODE_RANGE_NOR_MOD    (*((uint8_t *)((uint32_t)fwCfgp + 0xCAFUL)))    //CAF - grp_cor_dynamic_rej_tx_node_range_nor_mod
#define CFGBYTE_U8_GRP_COR_DYNAMIC_REJ_RX_NODE_RANGE_NOR_MOD    (*((uint8_t *)((uint32_t)fwCfgp + 0xCB0UL)))    //CB0 - grp_cor_dynamic_rej_rx_node_range_nor_mod
#define CFGBYTE_U8_GRP_COR_DYNAMIC_REJ_THD_PER_NOR_MOD  (*((uint8_t *)((uint32_t)fwCfgp + 0xCB1UL)))    //CB1 - grp_cor_dynamic_rej_thd_per_nor_mod
#define CFGBYTE_U8_GRP_COR_DYNAMIC_REJ_THD_PER_HYST_NOR_MOD (*((uint8_t *)((uint32_t)fwCfgp + 0xCB2UL)))    //CB2 - grp_cor_dynamic_rej_thd_per_hyst_nor_mod
#define CFGBYTE_U8_POCKET_PALM_REJ_AREA     (*((uint8_t *)((uint32_t)fwCfgp + 0xCB4UL)))    //CB4 - pocket_palm_rej_area
#define CFGBYTE_U8_POCKET_PALM_REJ_AREA_HYST    (*((uint8_t *)((uint32_t)fwCfgp + 0xCB5UL)))    //CB5 - pocket_palm_rej_area_hyst
#define CFGBYTE_U8_POCKET_PALM_REJ_SS_STR_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCB6UL)))    //CB6 - pocket_palm_rej_ss_str_thres
#define CFGBYTE_U8_POCKET_PALM_REJ_SS_STR_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCB7UL)))    //CB7 - pocket_palm_rej_ss_str_thres
#define CFGBYTE_U8_POCKET_PALM_REJ_SS_NODE_CNT_THRES    (*((uint8_t *)((uint32_t)fwCfgp + 0xCB8UL)))    //CB8 - pocket_palm_rej_ss_node_cnt_thres
#define CFGBYTE_U8_POCKET_PALM_REJ_SS_NODE_CNT_THRES_HYST   (*((uint8_t *)((uint32_t)fwCfgp + 0xCB9UL)))    //CB9 - pocket_palm_rej_ss_node_cnt_thres_hyst
#define CFGBYTE_U8_MS_TCH_NEG_DET_POS_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCBAUL)))    //CBA - ms_tch_neg_det_pos_thres
#define CFGBYTE_U8_MS_TCH_NEG_DET_POS_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCBBUL)))    //CBB - ms_tch_neg_det_pos_thres
#define CFGBYTE_U8_MS_TCH_NEG_DET_NEG_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCBCUL)))    //CBC - ms_tch_neg_det_neg_thres
#define CFGBYTE_U8_MS_TCH_NEG_DET_NEG_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCBDUL)))    //CBD - ms_tch_neg_det_neg_thres
#define CFGBYTE_U8_MS_TCH_NEG_DET_FCAL_MIN_NODES    (*((uint8_t *)((uint32_t)fwCfgp + 0xCBEUL)))    //CBE - ms_tch_neg_det_fcal_min_nodes
#define CFGBYTE_U8_MS_TCH_NEG_DET_FCAL_DBNC (*((uint8_t *)((uint32_t)fwCfgp + 0xCBFUL)))    //CBF - ms_tch_neg_det_fcal_dbnc
#define CFGBYTE_U8_CX_CMN_CORR_CONFIG_0     (*((uint8_t *)((uint32_t)fwCfgp + 0xCC0UL)))    //CC0 - cx_cmn_corr_config
#define CFGBYTE_U8_CX_CMN_CORR_CONFIG_1     (*((uint8_t *)((uint32_t)fwCfgp + 0xCC1UL)))    //CC1 - cx_cmn_corr_config
#define CFGBYTE_U8_MS_SCR_RAW_UP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xCC2UL)))    //CC2 - ms_scr_raw_up_thres
#define CFGBYTE_U8_MS_SCR_RAW_UP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xCC3UL)))    //CC3 - ms_scr_raw_up_thres
#define CFGBYTE_U8_MS_SCR_RAW_LOW_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCC4UL)))    //CC4 - ms_scr_raw_low_thres
#define CFGBYTE_U8_MS_SCR_RAW_LOW_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCC5UL)))    //CC5 - ms_scr_raw_low_thres
#define CFGBYTE_U8_MS_SCR_CX2_STEP_SIZE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCC6UL)))    //CC6 - ms_scr_cx2_step_size
#define CFGBYTE_U8_MS_SCR_CX2_STEP_SIZE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCC7UL)))    //CC7 - ms_scr_cx2_step_size
#define CFGBYTE_U8_MS_SCR_LP_RAW_UP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xCC8UL)))    //CC8 - ms_scr_lp_raw_up_thres
#define CFGBYTE_U8_MS_SCR_LP_RAW_UP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xCC9UL)))    //CC9 - ms_scr_lp_raw_up_thres
#define CFGBYTE_U8_MS_SCR_LP_RAW_LOW_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xCCAUL)))    //CCA - ms_scr_lp_raw_low_thres
#define CFGBYTE_U8_MS_SCR_LP_RAW_LOW_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xCCBUL)))    //CCB - ms_scr_lp_raw_low_thres
#define CFGBYTE_U8_MS_SCR_LP_CX2_STEP_SIZE_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xCCCUL)))    //CCC - ms_scr_lp_cx2_step_size
#define CFGBYTE_U8_MS_SCR_LP_CX2_STEP_SIZE_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xCCDUL)))    //CCD - ms_scr_lp_cx2_step_size
#define CFGBYTE_U8_SS_TCH_RAW_UP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xCCEUL)))    //CCE - ss_tch_raw_up_thres
#define CFGBYTE_U8_SS_TCH_RAW_UP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xCCFUL)))    //CCF - ss_tch_raw_up_thres
#define CFGBYTE_U8_SS_TCH_RAW_LOW_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCD0UL)))    //CD0 - ss_tch_raw_low_thres
#define CFGBYTE_U8_SS_TCH_RAW_LOW_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCD1UL)))    //CD1 - ss_tch_raw_low_thres
#define CFGBYTE_U8_SS_TCH_IX2_F_STEP_SIZE_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xCD2UL)))    //CD2 - ss_tch_ix2_f_step_size
#define CFGBYTE_U8_SS_TCH_IX2_F_STEP_SIZE_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xCD3UL)))    //CD3 - ss_tch_ix2_f_step_size
#define CFGBYTE_U8_SS_TCH_IX2_S_STEP_SIZE_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xCD4UL)))    //CD4 - ss_tch_ix2_s_step_size
#define CFGBYTE_U8_SS_TCH_IX2_S_STEP_SIZE_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xCD5UL)))    //CD5 - ss_tch_ix2_s_step_size
#define CFGBYTE_U8_SS_DET_RAW_UP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xCD6UL)))    //CD6 - ss_det_raw_up_thres
#define CFGBYTE_U8_SS_DET_RAW_UP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xCD7UL)))    //CD7 - ss_det_raw_up_thres
#define CFGBYTE_U8_SS_DET_RAW_LOW_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCD8UL)))    //CD8 - ss_det_raw_low_thres
#define CFGBYTE_U8_SS_DET_RAW_LOW_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCD9UL)))    //CD9 - ss_det_raw_low_thres
#define CFGBYTE_U8_SS_DET_IX2_STEP_SIZE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCDAUL)))    //CDA - ss_det_ix2_step_size
#define CFGBYTE_U8_SS_DET_IX2_STEP_SIZE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCDBUL)))    //CDB - ss_det_ix2_step_size
#define CFGBYTE_U8_MS_KEY_RAW_UP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xCDCUL)))    //CDC - ms_key_raw_up_thres
#define CFGBYTE_U8_MS_KEY_RAW_UP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xCDDUL)))    //CDD - ms_key_raw_up_thres
#define CFGBYTE_U8_MS_KEY_RAW_LOW_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCDEUL)))    //CDE - ms_key_raw_low_thres
#define CFGBYTE_U8_MS_KEY_RAW_LOW_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCDFUL)))    //CDF - ms_key_raw_low_thres
#define CFGBYTE_U8_MS_KEY_CX2_STEP_SIZE_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCE0UL)))    //CE0 - ms_key_cx2_step_size
#define CFGBYTE_U8_MS_KEY_CX2_STEP_SIZE_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCE1UL)))    //CE1 - ms_key_cx2_step_size
#define CFGBYTE_U8_MS_SCR_IOFF_ADJ_WIN      (*((uint8_t *)((uint32_t)fwCfgp + 0xCE2UL)))    //CE2 - ms_scr_ioff_adj_win
#define CFGBYTE_U8_SS_TCH_IOFF_ADJ_WIN      (*((uint8_t *)((uint32_t)fwCfgp + 0xCE3UL)))    //CE3 - ss_tch_ioff_adj_win
#define CFGBYTE_U8_SS_DET_IOFF_ADJ_WIN      (*((uint8_t *)((uint32_t)fwCfgp + 0xCE4UL)))    //CE4 - ss_det_ioff_adj_win
#define CFGBYTE_U8_REPORT_RATE_CFG          (*((uint8_t *)((uint32_t)fwCfgp + 0xCE5UL)))    //CE5 - report_rate_cfg
#define CFGBYTE_U8_GRP_COR_ZONE_DUR1_0      (*((uint8_t *)((uint32_t)fwCfgp + 0xCE8UL)))    //CE8 - grp_cor_zone_dur1
#define CFGBYTE_U8_GRP_COR_ZONE_DUR1_1      (*((uint8_t *)((uint32_t)fwCfgp + 0xCE9UL)))    //CE9 - grp_cor_zone_dur1
#define CFGBYTE_U8_GRP_COR_ZONE_DUR2_0      (*((uint8_t *)((uint32_t)fwCfgp + 0xCEAUL)))    //CEA - grp_cor_zone_dur2
#define CFGBYTE_U8_GRP_COR_ZONE_DUR2_1      (*((uint8_t *)((uint32_t)fwCfgp + 0xCEBUL)))    //CEB - grp_cor_zone_dur2
#define CFGBYTE_U8_CORNER_GRP_CFG           (*((uint8_t *)((uint32_t)fwCfgp + 0xCEDUL)))    //CED - corner_grp_cfg
#define CFGBYTE_U8_GRP_COR_VALID_AREA_X_START_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xCEEUL)))    //CEE - grp_cor_valid_area_x_start
#define CFGBYTE_U8_GRP_COR_VALID_AREA_X_START_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xCEFUL)))    //CEF - grp_cor_valid_area_x_start
#define CFGBYTE_U8_GRP_COR_VALID_AREA_X_END_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCF0UL)))    //CF0 - grp_cor_valid_area_x_end
#define CFGBYTE_U8_GRP_COR_VALID_AREA_X_END_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCF1UL)))    //CF1 - grp_cor_valid_area_x_end
#define CFGBYTE_U8_GRP_COR_VALID_AREA_Y_START_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xCF2UL)))    //CF2 - grp_cor_valid_area_y_start
#define CFGBYTE_U8_GRP_COR_VALID_AREA_Y_START_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xCF3UL)))    //CF3 - grp_cor_valid_area_y_start
#define CFGBYTE_U8_GRP_COR_VALID_AREA_Y_END_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCF4UL)))    //CF4 - grp_cor_valid_area_y_end
#define CFGBYTE_U8_GRP_COR_VALID_AREA_Y_END_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCF5UL)))    //CF5 - grp_cor_valid_area_y_end
#define CFGBYTE_U8_GRP_COR_DEAD_ZONE_WIDTH  (*((uint8_t *)((uint32_t)fwCfgp + 0xCF6UL)))    //CF6 - grp_cor_dead_zone_width
#define CFGBYTE_U8_GRP_COR_VALID_FINGER_FRAME_CNT   (*((uint8_t *)((uint32_t)fwCfgp + 0xCF7UL)))    //CF7 - grp_cor_valid_finger_frame_cnt
#define CFGBYTE_U8_GRP_COR_VALID_FINGER_LEAVE_CNT   (*((uint8_t *)((uint32_t)fwCfgp + 0xCF8UL)))    //CF8 - grp_cor_valid_finger_leave_cnt
#define CFGBYTE_U8_GRP_COR_SHAPE_PALM_ENTER_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xCF9UL)))    //CF9 - grp_cor_shape_palm_enter_thres
#define CFGBYTE_U8_GRP_COR_SHAPE_PALM_ENTER_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xCFAUL)))    //CFA - grp_cor_shape_palm_enter_thres
#define CFGBYTE_U8_GRP_COR_SHAPE_PALM_EXIT_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xCFBUL)))    //CFB - grp_cor_shape_palm_exit_thres
#define CFGBYTE_U8_GRP_COR_SHAPE_PALM_EXIT_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xCFCUL)))    //CFC - grp_cor_shape_palm_exit_thres
#define CFGBYTE_U8_GRP_COR_XY_SHAPE_RATIO_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCFDUL)))    //CFD - grp_cor_xy_shape_ratio_thres
#define CFGBYTE_U8_GRP_COR_XY_SHAPE_RATIO_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xCFEUL)))    //CFE - grp_cor_xy_shape_ratio_thres
#define CFGBYTE_U8_GRP_COR_YX_SHAPE_RATIO_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xCFFUL)))    //CFF - grp_cor_yx_shape_ratio_thres
#define CFGBYTE_U8_GRP_COR_YX_SHAPE_RATIO_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD00UL)))    //D00 - grp_cor_yx_shape_ratio_thres
#define CFGBYTE_U8_GRP_COR_RPT_TCH_IN_SPEED_RANGE   (*((uint8_t *)((uint32_t)fwCfgp + 0xD01UL)))    //D01 - grp_cor_rpt_tch_in_speed_range
#define CFGBYTE_U8_GRP_COR_AREA0_X_HEIGHT_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD02UL)))    //D02 - grp_cor_area0_x_height
#define CFGBYTE_U8_GRP_COR_AREA0_X_HEIGHT_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD03UL)))    //D03 - grp_cor_area0_x_height
#define CFGBYTE_U8_GRP_COR_AREA0_Y_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD04UL)))    //D04 - grp_cor_area0_y_width
#define CFGBYTE_U8_GRP_COR_AREA0_Y_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD05UL)))    //D05 - grp_cor_area0_y_width
#define CFGBYTE_U8_GRP_COR_AREA1_X_HEIGHT_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD06UL)))    //D06 - grp_cor_area1_x_height
#define CFGBYTE_U8_GRP_COR_AREA1_X_HEIGHT_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD07UL)))    //D07 - grp_cor_area1_x_height
#define CFGBYTE_U8_GRP_COR_AREA1_Y_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD08UL)))    //D08 - grp_cor_area1_y_width
#define CFGBYTE_U8_GRP_COR_AREA1_Y_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD09UL)))    //D09 - grp_cor_area1_y_width
#define CFGBYTE_U8_GRP_COR_AREA2_X_HEIGHT_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD0AUL)))    //D0A - grp_cor_area2_x_height
#define CFGBYTE_U8_GRP_COR_AREA2_X_HEIGHT_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD0BUL)))    //D0B - grp_cor_area2_x_height
#define CFGBYTE_U8_GRP_COR_AREA2_Y_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD0CUL)))    //D0C - grp_cor_area2_y_width
#define CFGBYTE_U8_GRP_COR_AREA2_Y_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD0DUL)))    //D0D - grp_cor_area2_y_width
#define CFGBYTE_U8_GRP_COR_AREA3_X_HEIGHT_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD0EUL)))    //D0E - grp_cor_area3_x_height
#define CFGBYTE_U8_GRP_COR_AREA3_X_HEIGHT_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD0FUL)))    //D0F - grp_cor_area3_x_height
#define CFGBYTE_U8_GRP_COR_AREA3_Y_WIDTH_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD10UL)))    //D10 - grp_cor_area3_y_width
#define CFGBYTE_U8_GRP_COR_AREA3_Y_WIDTH_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD11UL)))    //D11 - grp_cor_area3_y_width
#define CFGBYTE_U8_GRP_COR_PALM_DEBOUNCE_OUT_CNT    (*((uint8_t *)((uint32_t)fwCfgp + 0xD12UL)))    //D12 - grp_cor_palm_debounce_out_cnt
#define CFGBYTE_U8_GRP_COR_CASE2_AREA_Y_WIDTH_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD13UL)))    //D13 - grp_cor_case2_area_y_width
#define CFGBYTE_U8_GRP_COR_CASE2_AREA_Y_WIDTH_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD14UL)))    //D14 - grp_cor_case2_area_y_width
#define CFGBYTE_U8_GRP_COR_CASE2_AREA_X_HEIGHT_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD15UL)))    //D15 - grp_cor_case2_area_x_height
#define CFGBYTE_U8_GRP_COR_CASE2_AREA_X_HEIGHT_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD16UL)))    //D16 - grp_cor_case2_area_x_height
#define CFGBYTE_U8_GRP_DEAD_ZONE_TAP_PEAK_STR_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD17UL)))    //D17 - grp_dead_zone_tap_peak_str_thres
#define CFGBYTE_U8_GRP_DEAD_ZONE_TAP_PEAK_STR_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD18UL)))    //D18 - grp_dead_zone_tap_peak_str_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EDGE_AVG_POSITIVE_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0xD19UL)))    //D19 - ms_pure_raw_fcal_edge_avg_positive_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EDGE_AVG_NEGATIVE_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0xD1AUL)))    //D1A - ms_pure_raw_fcal_edge_avg_negative_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EDGE_AVG_NODE_VAL_RATIO_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xD1BUL)))    //D1B - ms_pure_raw_fcal_edge_avg_node_val_ratio_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EDGE_AVG_NODE_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0xD1CUL)))    //D1C - ms_pure_raw_fcal_edge_avg_node_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EDGE_RAW_ADJUST_RATIO   (*((uint8_t *)((uint32_t)fwCfgp + 0xD1DUL)))    //D1D - ms_pure_raw_fcal_edge_raw_adjust_ratio
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_EDGE_DIFF_ADJUST_RATIO  (*((uint8_t *)((uint32_t)fwCfgp + 0xD1EUL)))    //D1E - ms_pure_raw_fcal_edge_diff_adjust_ratio
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_HIGH_SPEED_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD1FUL)))    //D1F - tch_mtol2_acc_xy_tol_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_HIGH_SPEED_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD20UL)))    //D20 - tch_mtol2_acc_xy_tol_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_NOISY_HIGH_SPEED_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD21UL)))    //D21 - tch_mtol2_acc_xy_tol_noisy_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_NOISY_HIGH_SPEED_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD22UL)))    //D22 - tch_mtol2_acc_xy_tol_noisy_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_SPEED_LOW_THRESHOLD (*((uint8_t *)((uint32_t)fwCfgp + 0xD23UL)))    //D23 - tch_mtol2_acc_xy_tol_speed_low_threshold
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_SPEED_HIGH_THRESHOLD    (*((uint8_t *)((uint32_t)fwCfgp + 0xD24UL)))    //D24 - tch_mtol2_acc_xy_tol_speed_high_threshold
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_SPEED_TOTAL_THRESHOLD   (*((uint8_t *)((uint32_t)fwCfgp + 0xD25UL)))    //D25 - tch_mtol2_acc_xy_tol_speed_total_threshold
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_SPEED_IIR   (*((uint8_t *)((uint32_t)fwCfgp + 0xD26UL)))    //D26 - tch_mtol2_acc_xy_tol_speed_iir
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_PERCENT_ACC_IN_LOW_SPEED    (*((uint8_t *)((uint32_t)fwCfgp + 0xD27UL)))    //D27 - tch_mtol2_acc_xy_tol_percent_acc_in_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_EDGE_LOW_SPEED_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD28UL)))    //D28 - tch_mtol2_acc_xy_tol_edge_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_EDGE_LOW_SPEED_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD29UL)))    //D29 - tch_mtol2_acc_xy_tol_edge_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_EDGE_HIGH_SPEED_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD2AUL)))    //D2A - tch_mtol2_acc_xy_tol_edge_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_EDGE_HIGH_SPEED_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD2BUL)))    //D2B - tch_mtol2_acc_xy_tol_edge_high_speed
#define CFGBYTE_U8_WIRELESS_CHRGR_CFG       (*((uint8_t *)((uint32_t)fwCfgp + 0xD2CUL)))    //D2C - wireless_chrgr_cfg
#define CFGBYTE_U8_WIRELESS_CHRGR_GRV_TOL_HORI_VERT_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD2DUL)))    //D2D - wireless_chrgr_grv_tol_hori_vert
#define CFGBYTE_U8_WIRELESS_CHRGR_GRV_TOL_HORI_VERT_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD2EUL)))    //D2E - wireless_chrgr_grv_tol_hori_vert
#define CFGBYTE_U8_WIRELESS_CHRGR_GRV_TOL_DIAG_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD2FUL)))    //D2F - wireless_chrgr_grv_tol_diag
#define CFGBYTE_U8_WIRELESS_CHRGR_GRV_TOL_DIAG_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD30UL)))    //D30 - wireless_chrgr_grv_tol_diag
#define CFGBYTE_U8_WIRELESS_CHRGR_GRV_NORM_PERCENT  (*((uint8_t *)((uint32_t)fwCfgp + 0xD31UL)))    //D31 - wireless_chrgr_grv_norm_percent
#define CFGBYTE_U8_WIRELESS_CHRGR_TCH_THRES_INC (*((uint8_t *)((uint32_t)fwCfgp + 0xD32UL)))    //D32 - wireless_chrgr_tch_thres_inc
#define CFGBYTE_U8_WIRELESS_CHRGR_TCH_MRG_DIST_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD33UL)))    //D33 - wireless_chrgr_tch_mrg_dist
#define CFGBYTE_U8_WIRELESS_CHRGR_TCH_MRG_DIST_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD34UL)))    //D34 - wireless_chrgr_tch_mrg_dist
#define CFGBYTE_U8_WIRELESS_CHRGR_FGR_THRES_HYST    (*((uint8_t *)((uint32_t)fwCfgp + 0xD35UL)))    //D35 - wireless_chrgr_fgr_thres_hyst
#define CFGBYTE_U8_WIRELESS_CHRGR_ACAL_MS_SCR_UP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD36UL)))    //D36 - wireless_chrgr_acal_ms_scr_up_thres
#define CFGBYTE_U8_WIRELESS_CHRGR_ACAL_MS_SCR_UP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD37UL)))    //D37 - wireless_chrgr_acal_ms_scr_up_thres
#define CFGBYTE_U8_WIRELESS_CHRGR_ACAL_MS_SCR_LOW_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD38UL)))    //D38 - wireless_chrgr_acal_ms_scr_low_thres
#define CFGBYTE_U8_WIRELESS_CHRGR_ACAL_MS_SCR_LOW_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD39UL)))    //D39 - wireless_chrgr_acal_ms_scr_low_thres
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_CFG    (*((uint8_t *)((uint32_t)fwCfgp + 0xD3BUL)))    //D3B - pre_det_ghost_tch_cfg
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD3CUL)))    //D3C - pre_det_ghost_tch_thres
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD3DUL)))    //D3D - pre_det_ghost_tch_thres
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_MOVE_DIS_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD3EUL)))    //D3E - pre_det_ghost_tch_move_dis
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_MOVE_DIS_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD3FUL)))    //D3F - pre_det_ghost_tch_move_dis
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_TIME_OUT_CNT_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD40UL)))    //D40 - pre_det_ghost_tch_time_out_cnt
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_TIME_OUT_CNT_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD41UL)))    //D41 - pre_det_ghost_tch_time_out_cnt
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_DBNC_CNT_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD42UL)))    //D42 - pre_det_ghost_tch_dbnc_cnt
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_DBNC_CNT_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD43UL)))    //D43 - pre_det_ghost_tch_dbnc_cnt
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_CNT    (*((uint8_t *)((uint32_t)fwCfgp + 0xD44UL)))    //D44 - pre_det_ghost_tch_cnt
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_DUR_FRM_CNT_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD45UL)))    //D45 - pre_det_ghost_tch_dur_frm_cnt
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_DUR_FRM_CNT_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD46UL)))    //D46 - pre_det_ghost_tch_dur_frm_cnt
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_RST_DBNC_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD47UL)))    //D47 - pre_det_ghost_tch_rst_dbnc
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_RST_DBNC_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD48UL)))    //D48 - pre_det_ghost_tch_rst_dbnc
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_X_LEN_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD49UL)))    //D49 - pre_det_ghost_tch_cor_zone_x_len
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_X_LEN_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD4AUL)))    //D4A - pre_det_ghost_tch_cor_zone_x_len
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_Y_LEN_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD4BUL)))    //D4B - pre_det_ghost_tch_cor_zone_y_len
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_Y_LEN_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD4CUL)))    //D4C - pre_det_ghost_tch_cor_zone_y_len
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_X_SHORT_LEN_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD4DUL)))    //D4D - pre_det_ghost_tch_cor_zone_x_short_len
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_X_SHORT_LEN_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD4EUL)))    //D4E - pre_det_ghost_tch_cor_zone_x_short_len
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_Y_SHORT_LEN_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD4FUL)))    //D4F - pre_det_ghost_tch_cor_zone_y_short_len
#define CFGBYTE_U8_PRE_DET_GHOST_TCH_COR_ZONE_Y_SHORT_LEN_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD50UL)))    //D50 - pre_det_ghost_tch_cor_zone_y_short_len
#define CFGBYTE_U8_ACAL_MS_SCR_NEW_CFG      (*((uint8_t *)((uint32_t)fwCfgp + 0xD54UL)))    //D54 - acal_ms_scr_new_cfg
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD55UL)))    //D55 - acal_ms_scr_pure_raw_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD56UL)))    //D56 - acal_ms_scr_pure_raw_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_GLV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD57UL)))    //D57 - acal_ms_scr_pure_raw_glv_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_GLV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD58UL)))    //D58 - acal_ms_scr_pure_raw_glv_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD59UL)))    //D59 - acal_ms_scr_up_norm_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD5AUL)))    //D5A - acal_ms_scr_up_norm_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD5BUL)))    //D5B - acal_ms_scr_low_norm_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD5CUL)))    //D5C - acal_ms_scr_low_norm_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_GLV_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD5DUL)))    //D5D - acal_ms_scr_up_norm_glv_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_GLV_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD5EUL)))    //D5E - acal_ms_scr_up_norm_glv_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_GLV_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD5FUL)))    //D5F - acal_ms_scr_low_norm_glv_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_GLV_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD60UL)))    //D60 - acal_ms_scr_low_norm_glv_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD61UL)))    //D61 - acal_ms_scr_up_norm_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD62UL)))    //D62 - acal_ms_scr_up_norm_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD63UL)))    //D63 - acal_ms_scr_low_norm_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD64UL)))    //D64 - acal_ms_scr_low_norm_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_RO_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD65UL)))    //D65 - acal_ms_scr_up_norm_edge_ro_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_RO_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD66UL)))    //D66 - acal_ms_scr_up_norm_edge_ro_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_RO_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD67UL)))    //D67 - acal_ms_scr_low_norm_edge_ro_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_RO_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD68UL)))    //D68 - acal_ms_scr_low_norm_edge_ro_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD69UL)))    //D69 - acal_ms_scr_peak_str_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD6AUL)))    //D6A - acal_ms_scr_peak_str_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_HYST_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD6BUL)))    //D6B - acal_ms_scr_peak_str_hyst_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_HYST_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD6CUL)))    //D6C - acal_ms_scr_peak_str_hyst_thres
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_RX_CHANL_ST   (*((uint8_t *)((uint32_t)fwCfgp + 0xD6DUL)))    //D6D - acal_ms_scr_center_rx_chanl_st
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_RX_CHANL_ED   (*((uint8_t *)((uint32_t)fwCfgp + 0xD6EUL)))    //D6E - acal_ms_scr_center_rx_chanl_ed
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_TX_CHANL_ST   (*((uint8_t *)((uint32_t)fwCfgp + 0xD6FUL)))    //D6F - acal_ms_scr_center_tx_chanl_st
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_TX_CHANL_ED   (*((uint8_t *)((uint32_t)fwCfgp + 0xD70UL)))    //D70 - acal_ms_scr_center_tx_chanl_ed
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD71UL)))    //D71 - acal_ms_scr_up_filter_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD72UL)))    //D72 - acal_ms_scr_up_filter_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD73UL)))    //D73 - acal_ms_scr_low_filter_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD74UL)))    //D74 - acal_ms_scr_low_filter_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_EDGE_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD75UL)))    //D75 - acal_ms_scr_up_filter_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_EDGE_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD76UL)))    //D76 - acal_ms_scr_up_filter_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_EDGE_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD77UL)))    //D77 - acal_ms_scr_low_filter_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_EDGE_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD78UL)))    //D78 - acal_ms_scr_low_filter_edge_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_LP_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD7AUL)))    //D7A - acal_ms_scr_pure_raw_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_LP_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD7BUL)))    //D7B - acal_ms_scr_pure_raw_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_LP_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD7CUL)))    //D7C - acal_ms_scr_peak_str_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_LP_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD7DUL)))    //D7D - acal_ms_scr_peak_str_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_HYST_LP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD7EUL)))    //D7E - acal_ms_scr_peak_str_hyst_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PEAK_STR_HYST_LP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD7FUL)))    //D7F - acal_ms_scr_peak_str_hyst_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_RO_LP_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD80UL)))    //D80 - acal_ms_scr_up_norm_edge_ro_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_RO_LP_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD81UL)))    //D81 - acal_ms_scr_up_norm_edge_ro_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_RO_LP_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD82UL)))    //D82 - acal_ms_scr_low_norm_edge_ro_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_RO_LP_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD83UL)))    //D83 - acal_ms_scr_low_norm_edge_ro_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_RX_CHANL_LP_ST    (*((uint8_t *)((uint32_t)fwCfgp + 0xD84UL)))    //D84 - acal_ms_scr_center_rx_chanl_lp_st
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_RX_CHANL_LP_ED    (*((uint8_t *)((uint32_t)fwCfgp + 0xD85UL)))    //D85 - acal_ms_scr_center_rx_chanl_lp_ed
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_TX_CHANL_LP_ST    (*((uint8_t *)((uint32_t)fwCfgp + 0xD86UL)))    //D86 - acal_ms_scr_center_tx_chanl_lp_st
#define CFGBYTE_U8_ACAL_MS_SCR_CENTER_TX_CHANL_LP_ED    (*((uint8_t *)((uint32_t)fwCfgp + 0xD87UL)))    //D87 - acal_ms_scr_center_tx_chanl_lp_ed
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_LP_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD88UL)))    //D88 - acal_ms_scr_up_norm_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_LP_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD89UL)))    //D89 - acal_ms_scr_up_norm_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_LP_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD8AUL)))    //D8A - acal_ms_scr_low_norm_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_LP_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD8BUL)))    //D8B - acal_ms_scr_low_norm_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_LP_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xD8CUL)))    //D8C - acal_ms_scr_up_norm_edge_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_NORM_EDGE_LP_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xD8DUL)))    //D8D - acal_ms_scr_up_norm_edge_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_LP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD8EUL)))    //D8E - acal_ms_scr_low_norm_edge_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_NORM_EDGE_LP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD8FUL)))    //D8F - acal_ms_scr_low_norm_edge_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_LP_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xD90UL)))    //D90 - acal_ms_scr_up_filter_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_LP_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xD91UL)))    //D91 - acal_ms_scr_up_filter_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_LP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD92UL)))    //D92 - acal_ms_scr_low_filter_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_LP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD93UL)))    //D93 - acal_ms_scr_low_filter_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_EDGE_LP_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD94UL)))    //D94 - acal_ms_scr_up_filter_edge_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_UP_FILTER_EDGE_LP_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xD95UL)))    //D95 - acal_ms_scr_up_filter_edge_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_EDGE_LP_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xD96UL)))    //D96 - acal_ms_scr_low_filter_edge_lp_thres
#define CFGBYTE_U8_ACAL_MS_SCR_LOW_FILTER_EDGE_LP_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xD97UL)))    //D97 - acal_ms_scr_low_filter_edge_lp_thres
#define CFGBYTE_U8_LP_MS_PURE_RAW_FCAL_DBNC (*((uint8_t *)((uint32_t)fwCfgp + 0xD98UL)))    //D98 - lp_ms_pure_raw_fcal_dbnc
#define CFGBYTE_U8_LP_MS_PURE_RAW_STDDEV_FCAL_DBNC  (*((uint8_t *)((uint32_t)fwCfgp + 0xD99UL)))    //D99 - lp_ms_pure_raw_stddev_fcal_dbnc
#define CFGBYTE_U8_LP_MS_TCH_NEG_DET_FCAL_DBNC  (*((uint8_t *)((uint32_t)fwCfgp + 0xD9AUL)))    //D9A - lp_ms_tch_neg_det_fcal_dbnc
#define CFGBYTE_U8_LP_INV_MT_FCAL_DBNC      (*((uint8_t *)((uint32_t)fwCfgp + 0xD9BUL)))    //D9B - lp_inv_mt_fcal_dbnc
#define CFGBYTE_U8_LP_INV_SS_FCAL_DBNC      (*((uint8_t *)((uint32_t)fwCfgp + 0xD9CUL)))    //D9C - lp_inv_ss_fcal_dbnc
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_LNR_CMM_FILT_POS_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xD9FUL)))    //D9F - ms_pure_raw_fcal_lnr_cmm_filt_pos_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_LNR_CMM_FILT_POS_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDA0UL)))    //DA0 - ms_pure_raw_fcal_lnr_cmm_filt_pos_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_LNR_CMM_FILT_NEG_THRES_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDA1UL)))    //DA1 - ms_pure_raw_fcal_lnr_cmm_filt_neg_thres
#define CFGBYTE_U8_MS_PURE_RAW_FCAL_LNR_CMM_FILT_NEG_THRES_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDA2UL)))    //DA2 - ms_pure_raw_fcal_lnr_cmm_filt_neg_thres
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xDA3UL)))    //DA3 - ms_pure_fcal_apply_cmm_rx_ch_0
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xDA4UL)))    //DA4 - ms_pure_fcal_apply_cmm_rx_ch_1
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_2   (*((uint8_t *)((uint32_t)fwCfgp + 0xDA5UL)))    //DA5 - ms_pure_fcal_apply_cmm_rx_ch_2
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_3   (*((uint8_t *)((uint32_t)fwCfgp + 0xDA6UL)))    //DA6 - ms_pure_fcal_apply_cmm_rx_ch_3
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_4   (*((uint8_t *)((uint32_t)fwCfgp + 0xDA7UL)))    //DA7 - ms_pure_fcal_apply_cmm_rx_ch_4
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_5   (*((uint8_t *)((uint32_t)fwCfgp + 0xDA8UL)))    //DA8 - ms_pure_fcal_apply_cmm_rx_ch_5
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_6   (*((uint8_t *)((uint32_t)fwCfgp + 0xDA9UL)))    //DA9 - ms_pure_fcal_apply_cmm_rx_ch_6
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_7   (*((uint8_t *)((uint32_t)fwCfgp + 0xDAAUL)))    //DAA - ms_pure_fcal_apply_cmm_rx_ch_7
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_8   (*((uint8_t *)((uint32_t)fwCfgp + 0xDABUL)))    //DAB - ms_pure_fcal_apply_cmm_rx_ch_8
#define CFGBYTE_U8_MS_PURE_FCAL_APPLY_CMM_RX_CH_9   (*((uint8_t *)((uint32_t)fwCfgp + 0xDACUL)))    //DAC - ms_pure_fcal_apply_cmm_rx_ch_9
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_MFG_LOW_SPEED_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDB0UL)))    //DB0 - tch_mtol2_acc_xy_tol_game_mfg_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_MFG_LOW_SPEED_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDB1UL)))    //DB1 - tch_mtol2_acc_xy_tol_game_mfg_low_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_MFG_HIGH_SPEED_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xDB2UL)))    //DB2 - tch_mtol2_acc_xy_tol_game_mfg_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_XY_TOL_GAME_MFG_HIGH_SPEED_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xDB3UL)))    //DB3 - tch_mtol2_acc_xy_tol_game_mfg_high_speed
#define CFGBYTE_U8_TCH_MTOL2_ACC_AREA_THRES (*((uint8_t *)((uint32_t)fwCfgp + 0xDB4UL)))    //DB4 - tch_mtol2_acc_area_thres
#define CFGBYTE_U8_GRP_FTAP_DIST_THRES      (*((uint8_t *)((uint32_t)fwCfgp + 0xDB5UL)))    //DB5 - grp_ftap_dist_thres
#define CFGBYTE_U8_GRP_TOP_BTM_ADDT_TCH_OUT_DLY (*((uint8_t *)((uint32_t)fwCfgp + 0xDB6UL)))    //DB6 - grp_top_btm_addt_tch_out_dly
#define CFGBYTE_U8_TCH_MTOL2_ACC_MFG_MAX_COMP   (*((uint8_t *)((uint32_t)fwCfgp + 0xDB7UL)))    //DB7 - tch_mtol2_acc_mfg_max_comp
#define CFGBYTE_U8_SCALE_UP_SCR_RES_CFG     (*((uint8_t *)((uint32_t)fwCfgp + 0xDB8UL)))    //DB8 - scale_up_scr_res_cfg
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_CALIB_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xDBCUL)))    //DBC - acal_ms_scr_pure_raw_calib_diff_thres
#define CFGBYTE_U8_ACAL_MS_SCR_PURE_RAW_CALIB_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xDBDUL)))    //DBD - acal_ms_scr_pure_raw_calib_diff_thres
#define CFGBYTE_U8_BIT_SHIFT_ADJ_CFG        (*((uint8_t *)((uint32_t)fwCfgp + 0xDC0UL)))    //DC0 - bit_shift_adj_cfg
#define CFGBYTE_U8_MS_SCR_BIT_SHIFT_SETTING0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC1UL)))    //DC1 - ms_scr_bit_shift_setting0
#define CFGBYTE_U8_MS_SCR_BIT_SHIFT_SETTING1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC2UL)))    //DC2 - ms_scr_bit_shift_setting1
#define CFGBYTE_U8_MS_KEY_BIT_SHIFT_SETTING0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC3UL)))    //DC3 - ms_key_bit_shift_setting0
#define CFGBYTE_U8_MS_MRN_BIT_SHIFT_SETTING0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC4UL)))    //DC4 - ms_mrn_bit_shift_setting0
#define CFGBYTE_U8_SS_TCH_BIT_SHIFT_SETTING0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC5UL)))    //DC5 - ss_tch_bit_shift_setting0
#define CFGBYTE_U8_SS_DET_BIT_SHIFT_SETTING1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC6UL)))    //DC6 - ss_det_bit_shift_setting1
#define CFGBYTE_U8_SS_FRC_TCH_BIT_SHIFT_SETTING2    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC7UL)))    //DC7 - ss_frc_tch_bit_shift_setting2
#define CFGBYTE_U8_SS_HVR_BIT_SHIFT_SETTING3    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC8UL)))    //DC8 - ss_hvr_bit_shift_setting3
#define CFGBYTE_U8_GS_TCH_BIT_SHIFT_SETTING0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDC9UL)))    //DC9 - gs_tch_bit_shift_setting0
#define CFGBYTE_U8_FRAME_RATE_PRE_TCH       (*((uint8_t *)((uint32_t)fwCfgp + 0xDCCUL)))    //DCC - frame_rate_pre_tch
#define CFGBYTE_U8_SS_TCH_DUMMY_ANA_ACC     (*((uint8_t *)((uint32_t)fwCfgp + 0xDCDUL)))    //DCD - ss_tch_dummy_ana_acc
#define CFGBYTE_U8_TCH_PREDICT_TIME_ADJ     (*((uint8_t *)((uint32_t)fwCfgp + 0xDCEUL)))    //DCE - tch_predict_time_adj
#define CFGBYTE_U8_APWR_TCH_480_RPT         (*((uint8_t *)((uint32_t)fwCfgp + 0xDCFUL)))    //DCF - apwr_tch_480_rpt
#define CFGBYTE_U8_LNR_REG_TRK_PREDICT_FILTER_LEN   (*((uint8_t *)((uint32_t)fwCfgp + 0xDD0UL)))    //DD0 - lnr_reg_trk_predict_filter_len
#define CFGBYTE_U8_LNR_REG_TRK_PREDICT_X_IDX    (*((uint8_t *)((uint32_t)fwCfgp + 0xDD1UL)))    //DD1 - lnr_reg_trk_predict_x_idx
#define CFGBYTE_U8_LNR_REG_TRK_PREDICT_Y_IDX    (*((uint8_t *)((uint32_t)fwCfgp + 0xDD2UL)))    //DD2 - lnr_reg_trk_predict_y_idx
#define CFGBYTE_U8_LNR_REG_TRK_MIN_VAR_SPEED_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xDD3UL)))    //DD3 - lnr_reg_trk_min_var_speed
#define CFGBYTE_U8_LNR_REG_TRK_MIN_VAR_SPEED_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xDD4UL)))    //DD4 - lnr_reg_trk_min_var_speed
#define CFGBYTE_U8_LNR_REG_TRK_MAX_VAR_SPEED_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xDD5UL)))    //DD5 - lnr_reg_trk_max_var_speed
#define CFGBYTE_U8_LNR_REG_TRK_MAX_VAR_SPEED_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xDD6UL)))    //DD6 - lnr_reg_trk_max_var_speed
#define CFGBYTE_U8_LNR_REG_PREDICT_FRM_IDX_SHIFT    (*((uint8_t *)((uint32_t)fwCfgp + 0xDD7UL)))    //DD7 - lnr_reg_predict_frm_idx_shift
#define CFGBYTE_U8_SS_JITTER_SKIP_CH_EN     (*((uint8_t *)((uint32_t)fwCfgp + 0xDD8UL)))    //DD8 - ss_jitter_skip_ch_en
#define CFGBYTE_U8_FLTR_NOISE_LEVEL         (*((uint8_t *)((uint32_t)fwCfgp + 0xDD9UL)))    //DD9 - fltr_noise_level
#define CFGBYTE_U8_MS_MRN_ADJ_STDDEV_RATIO  (*((uint8_t *)((uint32_t)fwCfgp + 0xDDAUL)))    //DDA - ms_mrn_adj_stddev_ratio
#define CFGBYTE_U8_MS_MRN_R0_MIN_STDDEV_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xDDBUL)))    //DDB - ms_mrn_r0_min_stddev_thres
#define CFGBYTE_U8_TRK_RAD_MUL_COR_TCH      (*((uint8_t *)((uint32_t)fwCfgp + 0xDDCUL)))    //DDC - trk_rad_mul_cor_tch
#define CFGBYTE_U8_TRK_RAD_MUL_COR_TCH_FRM_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0xDDDUL)))    //DDD - trk_rad_mul_cor_tch_frm_cnt
#define CFGBYTE_U8_MIN_TRK_RAD_COR_TCH_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDDEUL)))    //DDE - min_trk_rad_cor_tch
#define CFGBYTE_U8_MIN_TRK_RAD_COR_TCH_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDDFUL)))    //DDF - min_trk_rad_cor_tch
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_X_START_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDE0UL)))    //DE0 - grp_edge_valid_area_x_start
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_X_START_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDE1UL)))    //DE1 - grp_edge_valid_area_x_start
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_X_END_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xDE2UL)))    //DE2 - grp_edge_valid_area_x_end
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_X_END_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xDE3UL)))    //DE3 - grp_edge_valid_area_x_end
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_Y_START_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xDE4UL)))    //DE4 - grp_edge_valid_area_y_start
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_Y_START_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xDE5UL)))    //DE5 - grp_edge_valid_area_y_start
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_Y_END_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xDE6UL)))    //DE6 - grp_edge_valid_area_y_end
#define CFGBYTE_U8_GRP_EDGE_VALID_AREA_Y_END_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xDE7UL)))    //DE7 - grp_edge_valid_area_y_end
#define CFGBYTE_U8_PALM_REJ_POS_STR_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xDE8UL)))    //DE8 - palm_rej_pos_str_thres
#define CFGBYTE_U8_PALM_REJ_POS_STR_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xDE9UL)))    //DE9 - palm_rej_pos_str_thres
#define CFGBYTE_U8_PALM_REJ_POS_STR_THRES_2 (*((uint8_t *)((uint32_t)fwCfgp + 0xDEAUL)))    //DEA - palm_rej_pos_str_thres
#define CFGBYTE_U8_PALM_REJ_POS_STR_THRES_3 (*((uint8_t *)((uint32_t)fwCfgp + 0xDEBUL)))    //DEB - palm_rej_pos_str_thres
#define CFGBYTE_U8_PALM_REJ_NEG_STR_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xDECUL)))    //DEC - palm_rej_neg_str_thres
#define CFGBYTE_U8_PALM_REJ_NEG_STR_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xDEDUL)))    //DED - palm_rej_neg_str_thres
#define CFGBYTE_U8_PALM_REJ_NEG_STR_THRES_2 (*((uint8_t *)((uint32_t)fwCfgp + 0xDEEUL)))    //DEE - palm_rej_neg_str_thres
#define CFGBYTE_U8_PALM_REJ_NEG_STR_THRES_3 (*((uint8_t *)((uint32_t)fwCfgp + 0xDEFUL)))    //DEF - palm_rej_neg_str_thres
#define CFGBYTE_U8_TCH_IN_DLY_LP            (*((uint8_t *)((uint32_t)fwCfgp + 0xDF0UL)))    //DF0 - tch_in_dly_lp
#define CFGBYTE_U8_GES_DBLTAP_2ND_TAP_ENTER_MIN_TO  (*((uint8_t *)((uint32_t)fwCfgp + 0xDF1UL)))    //DF1 - ges_dbltap_2nd_tap_enter_min_to
#define CFGBYTE_U8_VALID_TCH_PEAK_STR_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xDF2UL)))    //DF2 - valid_tch_peak_str_thres
#define CFGBYTE_U8_VALID_TCH_PEAK_STR_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xDF3UL)))    //DF3 - valid_tch_peak_str_thres
#define CFGBYTE_U8_NO_TCH_DEBOUNCE_THRES    (*((uint8_t *)((uint32_t)fwCfgp + 0xDF4UL)))    //DF4 - no_tch_debounce_thres
#define CFGBYTE_U8_FOD_TX_START_CH          (*((uint8_t *)((uint32_t)fwCfgp + 0xDF5UL)))    //DF5 - fod_tx_start_ch
#define CFGBYTE_U8_FOD_TX_END_CH            (*((uint8_t *)((uint32_t)fwCfgp + 0xDF6UL)))    //DF6 - fod_tx_end_ch
#define CFGBYTE_U8_FOD_RX_START_CH          (*((uint8_t *)((uint32_t)fwCfgp + 0xDF7UL)))    //DF7 - fod_rx_start_ch
#define CFGBYTE_U8_FOD_RX_END_CH            (*((uint8_t *)((uint32_t)fwCfgp + 0xDF8UL)))    //DF8 - fod_rx_end_ch
#define CFGBYTE_U8_MS_TCH_NEG_DET_FCAL_POS_MIN_NODES    (*((uint8_t *)((uint32_t)fwCfgp + 0xDF9UL)))    //DF9 - ms_tch_neg_det_fcal_pos_min_nodes
#define CFGBYTE_U8_MS_TCH_NEG_DET_FCAL_NEG_MIN_NODES    (*((uint8_t *)((uint32_t)fwCfgp + 0xDFAUL)))    //DFA - ms_tch_neg_det_fcal_neg_min_nodes
#define CFGBYTE_U8_MS_TCH_NEG_DET_FCAL_POS_NEG_RATIO    (*((uint8_t *)((uint32_t)fwCfgp + 0xDFBUL)))    //DFB - ms_tch_neg_det_fcal_pos_neg_ratio
#define CFGBYTE_U8_RPT_Z_MIN_0              (*((uint8_t *)((uint32_t)fwCfgp + 0xDFCUL)))    //DFC - rpt_z_min
#define CFGBYTE_U8_RPT_Z_MIN_1              (*((uint8_t *)((uint32_t)fwCfgp + 0xDFDUL)))    //DFD - rpt_z_min
#define CFGBYTE_U8_RPT_Z_MAX_0              (*((uint8_t *)((uint32_t)fwCfgp + 0xDFEUL)))    //DFE - rpt_z_max
#define CFGBYTE_U8_RPT_Z_MAX_1              (*((uint8_t *)((uint32_t)fwCfgp + 0xDFFUL)))    //DFF - rpt_z_max
#define CFGBYTE_U8_MS_LNR_CMM_BITMAP_IIR_STR_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0xE00UL)))    //E00 - ms_lnr_cmm_bitmap_iir_str_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_POS_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE04UL)))    //E04 - ms_pure_raw_lnr_cmm_chk_pos_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_POS_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE05UL)))    //E05 - ms_pure_raw_lnr_cmm_chk_pos_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_NEG_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE06UL)))    //E06 - ms_pure_raw_lnr_cmm_chk_neg_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_NEG_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE07UL)))    //E07 - ms_pure_raw_lnr_cmm_chk_neg_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_DIFF_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xE08UL)))    //E08 - ms_pure_raw_lnr_cmm_chk_diff_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_NODE_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xE09UL)))    //E09 - ms_pure_raw_lnr_cmm_chk_node_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_AVG_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE0AUL)))    //E0A - ms_pure_raw_lnr_cmm_chk_avg_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_AVG_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE0BUL)))    //E0B - ms_pure_raw_lnr_cmm_chk_avg_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_TCH_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE0CUL)))    //E0C - ms_pure_raw_lnr_cmm_chk_tch_thres
#define CFGBYTE_U8_MS_PURE_RAW_LNR_CMM_CHK_TCH_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE0DUL)))    //E0D - ms_pure_raw_lnr_cmm_chk_tch_thres
#define CFGBYTE_U8_MS_RES_STR_FLT_STR_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE10UL)))    //E10 - ms_res_str_flt_str_diff_thres
#define CFGBYTE_U8_MS_RES_STR_FLT_STR_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE11UL)))    //E11 - ms_res_str_flt_str_diff_thres
#define CFGBYTE_U8_MS_RES_STR_FLT_AVG_RATIO_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xE12UL)))    //E12 - ms_res_str_flt_avg_ratio
#define CFGBYTE_U8_MS_RES_STR_FLT_AVG_RATIO_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xE13UL)))    //E13 - ms_res_str_flt_avg_ratio
#define CFGBYTE_U8_MS_RES_STR_FLT_NBR_STR_DIFF_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE14UL)))    //E14 - ms_res_str_flt_nbr_str_diff_thres
#define CFGBYTE_U8_MS_RES_STR_FLT_NBR_STR_DIFF_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE15UL)))    //E15 - ms_res_str_flt_nbr_str_diff_thres
#define CFGBYTE_U8_MS_RES_STR_FLT_2ND_NBR_STR_THRES_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xE16UL)))    //E16 - ms_res_str_flt_2nd_nbr_str_thres
#define CFGBYTE_U8_MS_RES_STR_FLT_2ND_NBR_STR_THRES_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xE17UL)))    //E17 - ms_res_str_flt_2nd_nbr_str_thres
#define CFGBYTE_U8_MS_FLT_CHK_EN            (*((uint8_t *)((uint32_t)fwCfgp + 0xE18UL)))    //E18 - ms_flt_chk_en
#define CFGBYTE_U8_MS_STR_FLT_ENTER_MAX_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xE19UL)))    //E19 - ms_str_flt_enter_max_thres
#define CFGBYTE_U8_MS_STR_FLT_ENTER_MAX_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xE1AUL)))    //E1A - ms_str_flt_enter_max_thres
#define CFGBYTE_U8_MS_STR_FLT_LR_ENTER_MIN_NODE_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xE1BUL)))    //E1B - ms_str_flt_lr_enter_min_node_thres
#define CFGBYTE_U8_FLT_MT_AXIS_SUM_IIR_WGH  (*((uint8_t *)((uint32_t)fwCfgp + 0xE1CUL)))    //E1C - flt_mt_axis_sum_iir_wgh
#define CFGBYTE_U8_FLT_MT_AXIS_GRV_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE1DUL)))    //E1D - flt_mt_axis_grv_thres
#define CFGBYTE_U8_FLT_MT_AXIS_GRV_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE1EUL)))    //E1E - flt_mt_axis_grv_thres
#define CFGBYTE_U8_FLT_MT_AXIS_MRG_MAX_DIST_THRES_0 (*((uint8_t *)((uint32_t)fwCfgp + 0xE1FUL)))    //E1F - flt_mt_axis_mrg_max_dist_thres
#define CFGBYTE_U8_FLT_MT_AXIS_MRG_MAX_DIST_THRES_1 (*((uint8_t *)((uint32_t)fwCfgp + 0xE20UL)))    //E20 - flt_mt_axis_mrg_max_dist_thres
#define CFGBYTE_U8_FLT_MT_AXIS_MRG_MAX_BOUND_CNT    (*((uint8_t *)((uint32_t)fwCfgp + 0xE21UL)))    //E21 - flt_mt_axis_mrg_max_bound_cnt
#define CFGBYTE_U8_FLT_MT_AXIS_MRG_MAX_TCH_CNT  (*((uint8_t *)((uint32_t)fwCfgp + 0xE22UL)))    //E22 - flt_mt_axis_mrg_max_tch_cnt
#define CFGBYTE_U8_MS_STR_FLT_NODE_THRES_0  (*((uint8_t *)((uint32_t)fwCfgp + 0xE23UL)))    //E23 - ms_str_flt_node_thres
#define CFGBYTE_U8_MS_STR_FLT_NODE_THRES_1  (*((uint8_t *)((uint32_t)fwCfgp + 0xE24UL)))    //E24 - ms_str_flt_node_thres
#define CFGBYTE_U8_MS_STR_FLT_TB_ENTER_MIN_NODE_THRES   (*((uint8_t *)((uint32_t)fwCfgp + 0xE25UL)))    //E25 - ms_str_flt_tb_enter_min_node_thres
#define CFGBYTE_U8_MS_STR_FLT_LR_ENTER_MIN_NODE_THRES_HYST  (*((uint8_t *)((uint32_t)fwCfgp + 0xE26UL)))    //E26 - ms_str_flt_lr_enter_min_node_thres_hyst
#define CFGBYTE_U8_MS_STR_FLT_TB_ENTER_MIN_NODE_THRES_HYST  (*((uint8_t *)((uint32_t)fwCfgp + 0xE27UL)))    //E27 - ms_str_flt_tb_enter_min_node_thres_hyst
#define CFGBYTE_U8_MS_STR_FLT_ENTER_MAX_THRES_HYST_0    (*((uint8_t *)((uint32_t)fwCfgp + 0xE28UL)))    //E28 - ms_str_flt_enter_max_thres_hyst
#define CFGBYTE_U8_MS_STR_FLT_ENTER_MAX_THRES_HYST_1    (*((uint8_t *)((uint32_t)fwCfgp + 0xE29UL)))    //E29 - ms_str_flt_enter_max_thres_hyst
#define CFGBYTE_U8_MS_STR_FLT_ISLAND_CNT_THRES  (*((uint8_t *)((uint32_t)fwCfgp + 0xE2AUL)))    //E2A - ms_str_flt_island_cnt_thres
#define CFGBYTE_U8_MS_STR_FLT_ISLAND_NODE_RATIO_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xE2BUL)))    //E2B - ms_str_flt_island_node_ratio
#define CFGBYTE_U8_MS_STR_FLT_ISLAND_NODE_RATIO_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xE2CUL)))    //E2C - ms_str_flt_island_node_ratio
#define CFGBYTE_U8_GRP_EDGE_BIG_THUMB_AREA_TOTAL    (*((uint8_t *)((uint32_t)fwCfgp + 0xE2DUL)))    //E2D - grp_edge_big_thumb_area_total
#define CFGBYTE_U8_GRP_EDGE_BIG_THUMB_SUM_ECCEN_0   (*((uint8_t *)((uint32_t)fwCfgp + 0xE2EUL)))    //E2E - grp_edge_big_thumb_sum_eccen
#define CFGBYTE_U8_GRP_EDGE_BIG_THUMB_SUM_ECCEN_1   (*((uint8_t *)((uint32_t)fwCfgp + 0xE2FUL)))    //E2F - grp_edge_big_thumb_sum_eccen


#endif /* INC_FW_CFG_H_ */
