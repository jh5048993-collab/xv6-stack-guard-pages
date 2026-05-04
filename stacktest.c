#include "types.h"
#include "stat.h"
#include "user.h"

void overflow(int n)
{
  char big[4096];
  printf(1, "Level: %d\n", n);
  big[0] = n;
  overflow(n + 1);
}

int main(void)
{
  printf(1, "Starting stack overflow test...\n");
  overflow(1);
  exit();
}