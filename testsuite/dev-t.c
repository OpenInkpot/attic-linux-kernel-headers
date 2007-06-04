#include <linux/types.h>

int main()
{
  __kernel_dev_t foo = 1;
  return foo - 1;
}
