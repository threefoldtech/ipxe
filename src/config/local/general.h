/*
 * These settings are relevant only with our
 * autoboot script. This release is intended to be used
 * only with the Zero OS Bootstrap boot script and nothing else,
 * thus, we can disable all commands and protocols not used
 * by that script.
 */

/* For now, we only support IPv4 bootstrapping */
#undef NET_PROTO_IPV6       /* IPv6 protocol */

/* Disable protocols we don't use */
#undef NET_PROTO_FCOE       /* Fibre Channel over Ethernet protocol */
#undef NET_PROTO_EAPOL      /* EAP over LAN protocol */

/* Enable HTTPS protocol which is the only one we really use */
#define DOWNLOAD_PROTO_HTTPS

/* Disable SAN boot protocols */
#undef SANBOOT_PROTO_ISCSI	/* iSCSI protocol */
#undef SANBOOT_PROTO_AOE	/* AoE protocol */
#undef SANBOOT_PROTO_IB_SRP	/* Infiniband SCSI RDMA protocol */
#undef SANBOOT_PROTO_FCP	/* Fibre Channel protocol */
#undef SANBOOT_PROTO_HTTP	/* HTTP SAN protocol */

/* Disable Wireless encryption, we don't support wireless devices */
#undef CRYPTO_80211_WEP
#undef CRYPTO_80211_WPA
#undef CRYPTO_80211_WPA2
#undef EAP_METHOD_MD5

/* Disable Etherboot Images support */
#undef IMAGE_PNG
#undef IMAGE_DER
#undef IMAGE_PEM

/* Disable commands we don't need */
#undef IWMGMT_CMD           /* Wireless interface management commands */
#undef IBMGMT_CMD           /* Infiniband management commands */
#undef FCMGMT_CMD           /* Fibre Channel management commands */
#undef SANBOOT_CMD          /* SAN boot commands */
//#undef MENU_CMD
#undef FORM_CMD
#undef LOGIN_CMD
#undef SYNC_CMD
#undef IMAGE_ARCHIVE_CMD    /* Archive image management commands */
#undef SHIM_CMD             /* EFI shim command (or dummy command) */

/* Enable extra commands not enabled by default */
/* We mostly use them to provide debug information */
#define NSLOOKUP_CMD        /* DNS resolving command */
#define TIME_CMD            /* Show current local time (useful for HTTPS) */
#define REBOOT_CMD          /* Reboot if the script fails */
#define PING_CMD            /* We may send an initial ping request */
#define NTP_CMD             /* We do time syncronization during boot */
#define CERT_CMD

#define BUILD_ID "24.11.12"
