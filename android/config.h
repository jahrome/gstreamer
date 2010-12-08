/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* gettext package name */
#define GETTEXT_PACKAGE "gstreamer-0.10"

/* data dir */
#define GST_DATADIR ""

/* Define if option parsing is disabled */
/* #undef GST_DISABLE_OPTION_PARSING */

/* Define if pipeline parsing code is disabled */
/* #undef GST_DISABLE_PARSE */

/* Extra platform specific plugin suffix */
/* #undef GST_EXTRA_MODULE_SUFFIX */

/* macro to use to show function name */
#define GST_FUNCTION __PRETTY_FUNCTION__

/* Defined if gcov is enabled to force a rebuild due to config.h changing */
/* #undef GST_GCOV_ENABLED */

/* Defined when registry scanning through fork is unsafe */
/* #undef GST_HAVE_UNSAFE_FORK */

/* Default errorlevel to use */
#define GST_LEVEL_DEFAULT GST_LEVEL_NONE

/* GStreamer license */
#define GST_LICENSE "LGPL"

/* library major.minor version */
#define GST_MAJORMINOR "0.10"

/* package name in plugins */
#define GST_PACKAGE_NAME "GStreamer source release"

/* package origin */
#define GST_PACKAGE_ORIGIN "Unknown package origin"

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define if the host CPU is an Alpha */
/* #undef HAVE_CPU_ALPHA */

/* Define if the host CPU is an ARM */
#define HAVE_CPU_ARM 1

/* Define if the host CPU is a CRIS */
/* #undef HAVE_CPU_CRIS */

/* Define if the host CPU is a CRISv32 */
/* #undef HAVE_CPU_CRISV32 */

/* Define if the host CPU is a HPPA */
/* #undef HAVE_CPU_HPPA */

/* Define if the host CPU is an x86 */
/* #undef HAVE_CPU_I386 */

/* Define if the host CPU is a IA64 */
/* #undef HAVE_CPU_IA64 */

/* Define if the host CPU is a M68K */
/* #undef HAVE_CPU_M68K */

/* Define if the host CPU is a MIPS */
/* #undef HAVE_CPU_MIPS */

/* Define if the host CPU is a PowerPC */
/* #undef HAVE_CPU_PPC */

/* Define if the host CPU is a 64 bit PowerPC */
/* #undef HAVE_CPU_PPC64 */

/* Define if the host CPU is a S390 */
/* #undef HAVE_CPU_S390 */

/* Define if the host CPU is a SPARC */
/* #undef HAVE_CPU_SPARC */

/* Define if the host CPU is a x86_64 */
/* #undef HAVE_CPU_X86_64 */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#undef HAVE_DCGETTEXT

/* Defined if we have dladdr () */
#undef HAVE_DLADDR

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `fgetpos' function. */
#define HAVE_FGETPOS 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fsetpos' function. */
#define HAVE_FSETPOS 1

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* defined if the compiler implements __func__ */
#define HAVE_FUNC 1

/* defined if the compiler implements __FUNCTION__ */
#define HAVE_FUNCTION 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `nsl' library (-lnsl). */
/* #undef HAVE_LIBNSL */

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define if libxml2 is available */
/* #undef HAVE_LIBXML2 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Have a monotonic clock */
#define HAVE_MONOTONIC_CLOCK 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Have posix timers */
#define HAVE_POSIX_TIMERS 1

/* Define to 1 if you have the `ppoll' function. */
/* #undef HAVE_PPOLL */

/* defined if the compiler implements __PRETTY_FUNCTION__ */
#define HAVE_PRETTY_FUNCTION 1

/* Defined if we have register_printf_function () */
#undef HAVE_PRINTF_EXTENSION

/* Define to 1 if you have the <process.h> header file. */
/* #undef HAVE_PROCESS_H */

/* Define to 1 if you have the `pselect' function. */
#define HAVE_PSELECT 1

/* Define if RDTSC is available */
/* #undef HAVE_RDTSC */

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
#undef HAVE_STDIO_EXT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <ucontext.h> header file. */
#define HAVE_UCONTEXT_H 1

/* defined if unaligned memory access works correctly */
/* #undef HAVE_UNALIGNED_ACCESS */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if valgrind should be used */
/* #define HAVE_VALGRIND 1 */

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
/* #define HAVE_VALGRIND_VALGRIND_H 1 */

/* Defined if compiling for Windows */
/* #undef HAVE_WIN32 */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* the host CPU */
#define HOST_CPU "arm"

/* library dir */
#define LIBDIR ""

/* gettext locale dir */
#define LOCALEDIR ""

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define if you have no native inet_aton() function. */
/* #undef NO_INET_ATON */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "gstreamer"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=GStreamer"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GStreamer"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GStreamer 0.10.22"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gstreamer"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.10.22"

/* directory where plugins are located */
#define PLUGINDIR ""

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if we should use binary registry instead xml registry */
#define USE_BINARY_REGISTRY 1

/* Define if we should poison deallocated memory */
/* #undef USE_POISONING */

/* Define if we build this package in Android */
#define BUILD_WITH_ANDROID 1

/* Version number of package */
#define VERSION "0.10.22"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
#define _LARGEFILE_SOURCE 1

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

#define GST_PLUGIN_SCANNER_INSTALLED "/usr/local/libexec/gstreamer-0.10/gst-plugin-scanner"
