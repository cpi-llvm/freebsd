# $FreeBSD$
#
# Machine dependent definitions for the amd64 architecture.
#

# Long double is 80 bits
CFLAGS+=-fno-safe-stack
GDTOASRCS+=strtorx.c
MDSRCS+=machdep_ldisx.c
SYM_MAPS+=${LIBC_SRCTOP}/amd64/Symbol.map
