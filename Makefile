.SUFFIXES:
#---------------------------------------------------------------------------------

ifeq ($(strip $(DEVKITPRO)),)
$(error "Please set DEVKITPRO in your environment. export DEVKITPRO=<path to>devkitpro")
endif

ifeq ($(strip $(DEVKITSH4)),)
$(error "Please set DEVKITSH4 in your environment. export DEVKITSH4=<path to>devkitSH4")
endif

include $(DEVKITSH4)/exword_rules


TARGET		:= libdataplus

INCLUDES	:= -I../include

VPATH :=	../src \
		../src/syscall \
		../src/libc

OBJECTS :=	file.o string.o misc.o sbrk.o _exit.o system.o malloc.o console.o fs.o

CFLAGS  :=	$(INCLUDES) -O2

.PHONY: clean library install

library:
	@[ -d build ] || mkdir -p build
	$(MAKE) $(TARGET).a -C build -f $(CURDIR)/Makefile

$(TARGET).a: $(OBJECTS)

install:
	@mkdir -p $(DEVKITPRO)/$(TARGET)/lib
	@cp -frv include $(DEVKITPRO)/$(TARGET)
	@cp -frv build/$(TARGET).a $(DEVKITPRO)/$(TARGET)/lib

clean:
	@echo clean ...
	@rm -fr build

