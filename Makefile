OS=linux
VERSION=7.5

##########

PINDIR=../../..
INCDIR=$(PINDIR)/PortalDevKit/include
LIBDIR=$(PINDIR)/lib

##########
CC_solaris = cc
CC_hpux = cc
CC_hpux_ia64 = cc
CC_aix = xlc_r
CC_linux = gcc
CC = $(CC_$(OS))

C++_solaris = CC
C++_hpux = cc
C++_hpux_ia64 = aCC
C++_aix = xlC
C++_linux = gcc
C++ = $(C++_$(OS))

###########

CFLAGS_solaris= -g
CFLAGS_hpux= -g -Ae +Z +DAportable
CFLAGS_hpux_ia64= -g -Ae +Z
CFLAGS_aix= -g -Drs6000 -D__aix -Dunix -D__unix
CFLAGS_linux= -m32 -fPIC
CFLAGS= $(CFLAGS_$(OS)) -DFOR_CM -DFM_CUST_POL_DLL

C++FLAGS_solaris= -g -library=%none -DPIN_NOT_USING_OSTREAM
C++FLAGS_hpux= -g -AA +Z +DAportable +nostl -DPIN_NOT_USING_OSTREAM -I/usr/include -I/opt/aCC/include -I/usr
C++FLAGS_hpux_ia64= -g -AA +Z +nostl -DPIN_NOT_USING_OSTREAM -I/usr/include -I/opt/aCC/include -I/usr
C++FLAGS_aix= -g -Drs6000 -D__aix -Dunix -D__unix
C++FLAGS_linux = -x c++ -m32 -DPIN_NOT_USING_OSTREAM
C++FLAGS= $(C++FLAGS_$(OS)) -DPCMCPP_CONST_SAFE

CPPFLAGS = -I$(INCDIR) -DPCMCPP_CONST_SAFE -DFOR_CM -DFM_CUST_POL_DLL

LDFLAGS_solaris= -G
LDFLAGS_hpux= -b
LDFLAGS_hpux_ia64= -b
LDFLAGS_aix= -G -bnoentry -bexpall -brtl -lc
LDFLAGS_linux= -m elf_i386 -shared -L/usr/lib
LDFLAGS = $(LDFLAGS_$(OS)) -L$(LIBDIR)

SL_EXT_solaris= so
SL_EXT_hpux= sl
SL_EXT_hpux_ia64= so
SL_EXT_aix= a
SL_EXT_linux= so
SL_EXT= $(SL_EXT_$(OS))

##########

INCFILES= $(INCDIR)/pin_cust.h $(INCDIR)/pcm.h \
        $(INCDIR)/pin_errs.h $(INCDIR)/pinlog.h \
        $(INCDIR)/pin_act.h $(INCDIR)/pin_bill.h \
        $(INCDIR)/pin_flds.h $(INCDIR)/pin_currency.h \
        $(INCDIR)/pcm_ops.h

#
FILES= fm_mks_pol_config.c \
        fm_mks_pol.c



OBJECTS= fm_mks_pol_config.o \
        fm_mks_pol.o

#

LIBCUST=${PIN_HOME}/source/sys/fm_mks_pol/.$(SL_EXT)

###########

all: $(LIBCUST)

clean:
        rm -f $(OBJECTS) core

clobber: clean
        rm -f $(LIBCUST)

lint:
        lint $(CPPFLAGS) $(FILES)

tags: FRC


###########

$(LIBCUST): $(OBJECTS) $(INCFILES) Makefile
        $(LD) -o $(LIBCUST) $(LDFLAGS) $(OBJECTS) -lpin_cc -lm -lpsiu_for_cm -lregex

$(OBJECTS): $(INCFILES) Makefile
        $(CC) -c $(CFLAGS) $(CPPFLAGS) $(FILES)

$(C++_OBJECTS): $(INCFILES) Makefile $(C++_FI
        $(C++) -c $(C++FLAGS) $(CPPFLAGS) $(C++_FILES)
#
#
FRC:
                 
