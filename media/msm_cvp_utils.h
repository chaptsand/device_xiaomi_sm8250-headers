/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __MSM_CVP_UTILS_H__
#define __MSM_CVP_UTILS_H__
#include <linux/types.h>
#define MSM_CVP_HAL_INTERLACE_COLOR_FORMAT_NV12 0x2
#define MSM_CVP_HAL_INTERLACE_COLOR_FORMAT_NV12_UBWC 0x8002
#define MSM_CVP_EXTRADATA_FRAME_QP_ADV 0x1
struct msm_cvp_mastering_display_colour_sei_payload {
  unsigned int nDisplayPrimariesX[3];
  unsigned int nDisplayPrimariesY[3];
  unsigned int nWhitePointX;
  unsigned int nWhitePointY;
  unsigned int nMaxDisplayMasteringLuminance;
  unsigned int nMinDisplayMasteringLuminance;
};
#define MSM_CVP_EXTRADATA_NONE 0x00000000
#define MSM_CVP_EXTRADATA_MB_QUANTIZATION 0x00000001
#define MSM_CVP_EXTRADATA_INTERLACE_VIDEO 0x00000002
#define MSM_CVP_EXTRADATA_TIMESTAMP 0x00000005
#define MSM_CVP_EXTRADATA_S3D_FRAME_PACKING 0x00000006
#define MSM_CVP_EXTRADATA_FRAME_RATE 0x00000007
#define MSM_CVP_EXTRADATA_PANSCAN_WINDOW 0x00000008
#define MSM_CVP_EXTRADATA_RECOVERY_POINT_SEI 0x00000009
#define MSM_CVP_EXTRADATA_MPEG2_SEQDISP 0x0000000D
#define MSM_CVP_EXTRADATA_STREAM_USERDATA 0x0000000E
#define MSM_CVP_EXTRADATA_FRAME_QP 0x0000000F
#define MSM_CVP_EXTRADATA_FRAME_BITS_INFO 0x00000010
#define MSM_CVP_EXTRADATA_ROI_QP 0x00000013
#define MSM_CVP_EXTRADATA_VPX_COLORSPACE_INFO 0x00000014
#define MSM_CVP_EXTRADATA_MASTERING_DISPLAY_COLOUR_SEI 0x00000015
#define MSM_CVP_EXTRADATA_CONTENT_LIGHT_LEVEL_SEI 0x00000016
#define MSM_CVP_EXTRADATA_PQ_INFO 0x00000017
#define MSM_CVP_EXTRADATA_COLOUR_REMAPPING_INFO_SEI 0x00000018
#define MSM_CVP_EXTRADATA_UBWC_CR_STAT_INFO 0x00000019
#define MSM_CVP_EXTRADATA_HDR10PLUS_METADATA 0x0000001A
#define MSM_CVP_EXTRADATA_INPUT_CROP 0x0700000E
#define MSM_CVP_EXTRADATA_OUTPUT_CROP 0x0700000F
#define MSM_CVP_EXTRADATA_MULTISLICE_INFO 0x7F100000
#define MSM_CVP_EXTRADATA_NUM_CONCEALED_MB 0x7F100001
#define MSM_CVP_EXTRADATA_INDEX 0x7F100002
#define MSM_CVP_EXTRADATA_ASPECT_RATIO 0x7F100003
#define MSM_CVP_EXTRADATA_METADATA_LTR 0x7F100004
#define MSM_CVP_EXTRADATA_METADATA_MBI 0x7F100005
#define MSM_CVP_EXTRADATA_VUI_DISPLAY_INFO 0x7F100006
#define MSM_CVP_FRAMEPACK_CHECKERBOARD 0x00
#define MSM_CVP_FRAMEPACK_COLUMN_INTERLEAVE 0x01
#define MSM_CVP_FRAMEPACK_ROW_INTERLEAVE 0x02
#define MSM_CVP_FRAMEPACK_SIDE_BY_SIDE 0x03
#define MSM_CVP_FRAMEPACK_TOP_BOTTOM 0x04
#define MSM_CVP_FRAMEPACK_TEMPORAL_INTERLEAVE 0x05
#define MSM_CVP_USERDATA_TYPE_FRAME 0x1
#define MSM_CVP_USERDATA_TYPE_TOP_FIELD 0x2
#define MSM_CVP_USERDATA_TYPE_BOTTOM_FIELD 0x3
#define MSM_CVP_RESERVED_1 0
#define MSM_CVP_BT709_5 1
#define MSM_CVP_UNSPECIFIED 2
#define MSM_CVP_RESERVED_2 3
#define MSM_CVP_BT470_6_M 4
#define MSM_CVP_BT601_6_625 5
#define MSM_CVP_BT470_6_BG MSM_CVP_BT601_6_625
#define MSM_CVP_BT601_6_525 6
#define MSM_CVP_BIT_DEPTH_8 0
#define MSM_CVP_BIT_DEPTH_10 1
#define MSM_CVP_BIT_DEPTH_UNSUPPORTED 0XFFFFFFFF
#define MSM_CVP_COMPONENT 0
#define MSM_CVP_PAL 1
#define MSM_CVP_NTSC 2
#define MSM_CVP_COLOR_DESC_NOT_PRESENT 0
#define MSM_CVP_COLOR_DESC_PRESENT 1
#define MSM_CVP_PIC_STRUCT_MAYBE_INTERLACED 0x0
#define MSM_CVP_PIC_STRUCT_PROGRESSIVE 0x1
#define MSM_CVP_ALL_LAYER_ID 0xFF
#endif