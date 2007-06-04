TESTS = $(patsubst %.c,%.o,$(wildcard *.c))
TESTS_295 = $(patsubst %,295-%,$(TESTS))

# Filter out tests which no one tries to use -ansi; not worth fixing.
NON_ANSI = videodev.o videodev-time.o cdrom.o
TESTS_ANSI = $(patsubst %,ansi-%,$(filter-out $(NON_ANSI),$(TESTS)))

# Similarly for C++.
NON_CXX = netlink.o
TESTS_CXX = $(patsubst %,cc-%,$(filter-out $(NON_CXX),$(TESTS)))

NON_CXX_ANSI = $(filter-out cdrom.o,$(NON_CXX) $(NON_ANSI))
TESTS_CXX_ANSI = $(patsubst %,cc-ansi-%,$(filter-out $(NON_CXX_ANSI),$(TESTS)))

ALL_TESTS = $(TESTS) $(TESTS_295) $(TESTS_ANSI) $(TESTS_CXX) $(TESTS_CXX_ANSI)

LOCAL_CFLAGS = -I $(shell pwd)/../debian/linux-kernel-headers/usr/include -I $(shell pwd)/../include
WARN = -Wall -Werror -W
THIS_CFLAGS =
TEST_CFLAGS = $(WARN) $(LOCAL_CFLAGS) $(THIS_CFLAGS) $(CFLAGS)

all: $(ALL_TESTS)

clean:
	rm -f $(ALL_TESTS)

%.o: %.c
	$(CC) $(TEST_CFLAGS) -o $@ -c $<

cc-%.o: %.c
	$(CXX) $(TEST_CFLAGS) -o $@ -c -x c++ $<

cc-ansi-%.o: %.c
	$(CXX) $(TEST_CFLAGS) -ansi -pedantic -o $@ -c -x c++ $<

295-%.o: %.c
	if test -x /usr/bin/gcc-2.95; then \
	  gcc-2.95 $(TEST_CFLAGS) -o $@ -c $<; \
	fi

ansi-%.o: %.c
	$(CC) $(TEST_CFLAGS) -ansi -pedantic -o $@ -c $<
