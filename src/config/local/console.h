/* Increase log level on screen console */
// #undef LOG_LEVEL
// #define LOG_LEVEL LOG_ALL

#undef CONSOLE_PCBIOS
#define CONSOLE_PCBIOS CONSOLE_USAGE_ALL

#undef CONSOLE_EFI
#define CONSOLE_EFI CONSOLE_USAGE_ALL

/* Enable Serial Console port (useful with IPMI, etc. with console redirection) */
#define CONSOLE_SERIAL
