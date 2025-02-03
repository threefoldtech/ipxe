#undef NET_PROTO_IPV6          /* IPv6 protocol */
#define DOWNLOAD_PROTO_HTTPS   /* Secure Hypertext Transfer Protocol */

#undef CRYPTO_80211_WEP        /* WEP encryption (deprecated and insecure!) */
#undef CRYPTO_80211_WPA        /* WPA Personal, authenticating with passphrase */
#undef CRYPTO_80211_WPA2       /* Add support for stronger WPA cryptography */

#define NSLOOKUP_CMD           /* DNS resolving command */
#define REBOOT_CMD             /* Reboot command */
#define PING_CMD               /* Ping command */
#define CONSOLE_CMD            /* Console command */
#define NTP_CMD                /* NTP commands */
#define CERT_CMD               /* Certificate management commands */
