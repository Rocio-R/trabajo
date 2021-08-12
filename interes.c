
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
 double P = atoi(argv[1]);
 double t = atoi(argv[2]);
 double r = atoi(argv[3]);
 printf("%.2f\n", P * exp(r * t));
 return 0;
}
