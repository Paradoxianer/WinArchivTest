NAME= WinArchiveTest
TYPE= APP
SRCS= WinArchiveTest.cpp
RSRCS=
LIBS= /boot/system/lib/libroot.so /boot/system/lib/libbe.so
LIBPATHS=
SYSTEM_INCLUDE_PATHS= /boot/develop/headers/be /boot/develop/headers/cpp /boot/develop/headers/posix /boot/home/config/include
LOCAL_INCLUDE_PATHS=
OPTIMIZE=NONE
#	specify any preprocessor symbols to be defined.  The symbols will not
#	have their values set automatically; you must supply the value (if any)
#	to use.  For example, setting DEFINES to "DEBUG=1" will cause the
#	compiler option "-DDEBUG=1" to be used.  Setting DEFINES to "DEBUG"
#	would pass "-DDEBUG" on the compiler's command line.
DEFINES= DEBUG=1
#	specify special warning levels
#	if unspecified default warnings will be used
#	NONE = supress all warnings
#	ALL = enable all warnings
WARNINGS = ALL
# Build with debugging symbols if set to TRUE
SYMBOLS= TRUE
COMPILER_FLAGS=
LINKER_FLAGS=
DEBUGGER = TRUE

## include the makefile-engine
include $(BUILDHOME)/etc/makefile-engine
