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
#ifndef _LINUX_BATMAN_ADV_H_
#define _LINUX_BATMAN_ADV_H_
#define BATADV_NL_NAME "batadv"
#define BATADV_NL_MCAST_GROUP_TPMETER "tpmeter"
enum batadv_tt_client_flags {
  BATADV_TT_CLIENT_DEL = (1 << 0),
  BATADV_TT_CLIENT_ROAM = (1 << 1),
  BATADV_TT_CLIENT_WIFI = (1 << 4),
  BATADV_TT_CLIENT_ISOLA = (1 << 5),
  BATADV_TT_CLIENT_NOPURGE = (1 << 8),
  BATADV_TT_CLIENT_NEW = (1 << 9),
  BATADV_TT_CLIENT_PENDING = (1 << 10),
  BATADV_TT_CLIENT_TEMP = (1 << 11),
};
enum batadv_mcast_flags_priv {
  BATADV_MCAST_FLAGS_BRIDGED = (1 << 0),
  BATADV_MCAST_FLAGS_QUERIER_IPV4_EXISTS = (1 << 1),
  BATADV_MCAST_FLAGS_QUERIER_IPV6_EXISTS = (1 << 2),
  BATADV_MCAST_FLAGS_QUERIER_IPV4_SHADOWING = (1 << 3),
  BATADV_MCAST_FLAGS_QUERIER_IPV6_SHADOWING = (1 << 4),
};
enum batadv_nl_attrs {
  BATADV_ATTR_UNSPEC,
  BATADV_ATTR_VERSION,
  BATADV_ATTR_ALGO_NAME,
  BATADV_ATTR_MESH_IFINDEX,
  BATADV_ATTR_MESH_IFNAME,
  BATADV_ATTR_MESH_ADDRESS,
  BATADV_ATTR_HARD_IFINDEX,
  BATADV_ATTR_HARD_IFNAME,
  BATADV_ATTR_HARD_ADDRESS,
  BATADV_ATTR_ORIG_ADDRESS,
  BATADV_ATTR_TPMETER_RESULT,
  BATADV_ATTR_TPMETER_TEST_TIME,
  BATADV_ATTR_TPMETER_BYTES,
  BATADV_ATTR_TPMETER_COOKIE,
  BATADV_ATTR_PAD,
  BATADV_ATTR_ACTIVE,
  BATADV_ATTR_TT_ADDRESS,
  BATADV_ATTR_TT_TTVN,
  BATADV_ATTR_TT_LAST_TTVN,
  BATADV_ATTR_TT_CRC32,
  BATADV_ATTR_TT_VID,
  BATADV_ATTR_TT_FLAGS,
  BATADV_ATTR_FLAG_BEST,
  BATADV_ATTR_LAST_SEEN_MSECS,
  BATADV_ATTR_NEIGH_ADDRESS,
  BATADV_ATTR_TQ,
  BATADV_ATTR_THROUGHPUT,
  BATADV_ATTR_BANDWIDTH_UP,
  BATADV_ATTR_BANDWIDTH_DOWN,
  BATADV_ATTR_ROUTER,
  BATADV_ATTR_BLA_OWN,
  BATADV_ATTR_BLA_ADDRESS,
  BATADV_ATTR_BLA_VID,
  BATADV_ATTR_BLA_BACKBONE,
  BATADV_ATTR_BLA_CRC,
  BATADV_ATTR_DAT_CACHE_IP4ADDRESS,
  BATADV_ATTR_DAT_CACHE_HWADDRESS,
  BATADV_ATTR_DAT_CACHE_VID,
  BATADV_ATTR_MCAST_FLAGS,
  BATADV_ATTR_MCAST_FLAGS_PRIV,
  __BATADV_ATTR_AFTER_LAST,
  NUM_BATADV_ATTR = __BATADV_ATTR_AFTER_LAST,
  BATADV_ATTR_MAX = __BATADV_ATTR_AFTER_LAST - 1
};
enum batadv_nl_commands {
  BATADV_CMD_UNSPEC,
  BATADV_CMD_GET_MESH_INFO,
  BATADV_CMD_TP_METER,
  BATADV_CMD_TP_METER_CANCEL,
  BATADV_CMD_GET_ROUTING_ALGOS,
  BATADV_CMD_GET_HARDIFS,
  BATADV_CMD_GET_TRANSTABLE_LOCAL,
  BATADV_CMD_GET_TRANSTABLE_GLOBAL,
  BATADV_CMD_GET_ORIGINATORS,
  BATADV_CMD_GET_NEIGHBORS,
  BATADV_CMD_GET_GATEWAYS,
  BATADV_CMD_GET_BLA_CLAIM,
  BATADV_CMD_GET_BLA_BACKBONE,
  BATADV_CMD_GET_DAT_CACHE,
  BATADV_CMD_GET_MCAST_FLAGS,
  __BATADV_CMD_AFTER_LAST,
  BATADV_CMD_MAX = __BATADV_CMD_AFTER_LAST - 1
};
enum batadv_tp_meter_reason {
  BATADV_TP_REASON_COMPLETE = 3,
  BATADV_TP_REASON_CANCEL = 4,
  BATADV_TP_REASON_DST_UNREACHABLE = 128,
  BATADV_TP_REASON_RESEND_LIMIT = 129,
  BATADV_TP_REASON_ALREADY_ONGOING = 130,
  BATADV_TP_REASON_MEMORY_ERROR = 131,
  BATADV_TP_REASON_CANT_SEND = 132,
  BATADV_TP_REASON_TOO_MANY = 133,
};
#endif
