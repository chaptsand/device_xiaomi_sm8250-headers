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
#ifndef _LINUX_VIRTIO_PMEM_H
#define _LINUX_VIRTIO_PMEM_H
#include <linux/types.h>
#include <linux/virtio_ids.h>
#include <linux/virtio_config.h>
struct virtio_pmem_config {
  __u64 start;
  __u64 size;
};
#define VIRTIO_PMEM_REQ_TYPE_FLUSH 0
struct virtio_pmem_resp {
  __u32 ret;
};
struct virtio_pmem_req {
  __u32 type;
};
#endif
