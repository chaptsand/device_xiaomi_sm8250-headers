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
#ifndef _LINUX_EVENTPOLL_H
#define _LINUX_EVENTPOLL_H
#include <linux/fcntl.h>
#include <linux/types.h>
#define EPOLL_CLOEXEC O_CLOEXEC
#define EPOLL_CTL_ADD 1
#define EPOLL_CTL_DEL 2
#define EPOLL_CTL_MOD 3
#define EPOLLIN (__poll_t) 0x00000001
#define EPOLLPRI (__poll_t) 0x00000002
#define EPOLLOUT (__poll_t) 0x00000004
#define EPOLLERR (__poll_t) 0x00000008
#define EPOLLHUP (__poll_t) 0x00000010
#define EPOLLNVAL (__poll_t) 0x00000020
#define EPOLLRDNORM (__poll_t) 0x00000040
#define EPOLLRDBAND (__poll_t) 0x00000080
#define EPOLLWRNORM (__poll_t) 0x00000100
#define EPOLLWRBAND (__poll_t) 0x00000200
#define EPOLLMSG (__poll_t) 0x00000400
#define EPOLLRDHUP (__poll_t) 0x00002000
#define EPOLLEXCLUSIVE ((__poll_t) (1U << 28))
#define EPOLLWAKEUP ((__poll_t) (1U << 29))
#define EPOLLONESHOT ((__poll_t) (1U << 30))
#define EPOLLET ((__poll_t) (1U << 31))
#ifdef __x86_64__
#define EPOLL_PACKED __attribute__((packed))
#else
#define EPOLL_PACKED
#endif
#endif
