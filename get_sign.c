#include "stdio.h"

int get_sign(int x) {
  printf("in get_sing \n");
  if (x == 0)
    return 0;
  if (x < 0)
    return -1;
  else
    return 1;
}

int main() {
  int a;
  klee_make_symbolic(&a, sizeof(a), "a");
  return get_sign(a);
}
