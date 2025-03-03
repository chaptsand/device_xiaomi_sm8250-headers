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
#ifndef _LINUX_SOCKET_H
#define _LINUX_SOCKET_H
#define _K_SS_MAXSIZE 128
#define _K_SS_ALIGNSIZE (__alignof__(struct sockaddr *))
typedef unsigned short __kernel_sa_family_t;
struct sockaddr_storage {
  __kernel_sa_family_t ss_family;
  char __data[_K_SS_MAXSIZE - sizeof(unsigned short)];
} __attribute__((aligned(_K_SS_ALIGNSIZE)));
#endif
