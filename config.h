/* linux */
#define VERSION		"0.7.4"
#define PREFIX		"/usr/local"
#define SYSCONFDIR	"/usr/local/etc"
#define BINDIR		"/usr/local/bin"
#define ICONDIR		"/usr/local/share/dhcpcd/icons"
#define HAS_GETTEXT
#define strlcpy(dst, src, n)  ((size_t)snprintf(dst, n, "%s", src))
#define HAVE_STRVERSCMP
