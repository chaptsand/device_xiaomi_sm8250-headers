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
#ifndef _BLKZONED_H
#define _BLKZONED_H
#include <linux/types.h>
#include <linux/ioctl.h>
enum blk_zone_type {
  BLK_ZONE_TYPE_CONVENTIONAL = 0x1,
  BLK_ZONE_TYPE_SEQWRITE_REQ = 0x2,
  BLK_ZONE_TYPE_SEQWRITE_PREF = 0x3,
};
enum blk_zone_cond {
  BLK_ZONE_COND_NOT_WP = 0x0,
  BLK_ZONE_COND_EMPTY = 0x1,
  BLK_ZONE_COND_IMP_OPEN = 0x2,
  BLK_ZONE_COND_EXP_OPEN = 0x3,
  BLK_ZONE_COND_CLOSED = 0x4,
  BLK_ZONE_COND_READONLY = 0xD,
  BLK_ZONE_COND_FULL = 0xE,
  BLK_ZONE_COND_OFFLINE = 0xF,
};
struct blk_zone {
  __u64 start;
  __u64 len;
  __u64 wp;
  __u8 type;
  __u8 cond;
  __u8 non_seq;
  __u8 reset;
  __u8 reserved[36];
};
struct blk_zone_report {
  __u64 sector;
  __u32 nr_zones;
  __u8 reserved[4];
  struct blk_zone zones[0];
};
struct blk_zone_range {
  __u64 sector;
  __u64 nr_sectors;
};
#define BLKREPORTZONE _IOWR(0x12, 130, struct blk_zone_report)
#define BLKRESETZONE _IOW(0x12, 131, struct blk_zone_range)
#endif
