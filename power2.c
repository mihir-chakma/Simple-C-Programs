#include <stdio.h>
#define N 16

int main(void) {
  int n;
  int val = 1;

  printf("\t  n  \t    2^n\n");
  printf("\t================\n");
  for (n = 0; n <= N; n++) {
    printf("\t%3d \t %6d\n", n, val); 
    val = 2 * val;
  }
  return 0;
}
