#include <asm/ioctl.h>

#define TEST_IOCTL _IOR('T', 1, int )

int main(int argc, char **argv) {
	switch (argc) { case TEST_IOCTL: return 1; }
	return 0;
}
