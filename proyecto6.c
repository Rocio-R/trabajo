#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
  srand(time(NULL));
  int b = (rand() % 6) + 1;
  int c = (rand() % 6) + 1;
  int q = b + c;
  printf("La suma entre %d y %d es %d\n", b, c, q);
  return 0;
}
