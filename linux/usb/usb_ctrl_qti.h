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
#ifndef __UAPI_LINUX_USB_CTRL_QTI_H
#define __UAPI_LINUX_USB_CTRL_QTI_H
#include <linux/types.h>
#include <linux/ioctl.h>
#define MAX_QTI_PKT_SIZE 8192
#define QTI_CTRL_IOCTL_MAGIC 'r'
#define QTI_CTRL_GET_LINE_STATE _IOR(QTI_CTRL_IOCTL_MAGIC, 2, int)
#define QTI_CTRL_EP_LOOKUP _IOR(QTI_CTRL_IOCTL_MAGIC, 3, struct ep_info)
#define QTI_CTRL_MODEM_OFFLINE _IO(QTI_CTRL_IOCTL_MAGIC, 4)
#define QTI_CTRL_MODEM_ONLINE _IO(QTI_CTRL_IOCTL_MAGIC, 5)
#define QTI_CTRL_DATA_BUF_INFO _IOR(QTI_CTRL_IOCTL_MAGIC, 6, struct data_buf_info)
enum peripheral_ep_type {
  DATA_EP_TYPE_RESERVED = 0x0,
  DATA_EP_TYPE_HSIC = 0x1,
  DATA_EP_TYPE_HSUSB = 0x2,
  DATA_EP_TYPE_PCIE = 0x3,
  DATA_EP_TYPE_EMBEDDED = 0x4,
  DATA_EP_TYPE_BAM_DMUX = 0x5,
};
struct peripheral_ep_info {
  enum peripheral_ep_type ep_type;
  __u32 peripheral_iface_id;
};
struct ipa_ep_pair {
  __u32 cons_pipe_num;
  __u32 prod_pipe_num;
};
struct ep_info {
  struct peripheral_ep_info ph_ep_info;
  struct ipa_ep_pair ipa_ep_pair;
};
struct data_buf_info {
  __u32 epout_buf_len;
  __u32 epout_total_buf_len;
  __u32 epin_buf_len;
  __u32 epin_total_buf_len;
};
#endif
