#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("a: %d b: %d\n",a, b);
  int temp = b;
  b = a;
  a = temp;
  printf("variables cambiadas\n");
  printf("a: %d, b: %d\n",a, b);
  return 0;
 }
