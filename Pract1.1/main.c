#include <stdio.h>
#include <math.h>
#include "funchA.h"
int main (){
  float x;
  printf("Enter x:  ");
  scanf ("%f", &x);
  printf( "Function F(x) = %f\n", funcF(x));
  printf( "Function G(x) = %f\n", funcG(x));
  return 0;
}

