include ../include/init.mk
include ../include/name.mk

SRCS := $(shell sh ../script/get-source.sh)
OBJS := $(SRCS:.c=.o)

CFLAGS += -I../../include

TARGET := $(NAME)

all: $(TARGET)
.PHONY: all

$(TARGET): $(OBJS)
	rm -f $@ $@.tmp
	$(AR) cr $@.tmp $^
	mv $@.tmp $@

%.o: ../../src/%.c
	mkdir -p $$(dirname "$@")
	rm -f $@ $@.tmp
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@.tmp $<
	mv $@.tmp $@

.PHONY: clean
clean:
	rm -f $(NAME)
	find . -name "*.d" -delete
	find . -name "*.o" -delete
	find . -name "*.tmp" -delete

.PHONY: init
init:

.PHONY: init_compile_commands
init: init_compile_commands
init_compile_commands:
	sh ../misc/compile_commands.json.init.sh
.PHONY: clean_compile_commands
clean: clean_compile_commands
clean_compile_commands:
	sh ../misc/compile_commands.json.clean.sh
