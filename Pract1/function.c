#include <stdio.h>
#include <math.h>

 float funcF(int x)
{
  float f = exp(-abs(x))*sin(x);
  return f;
}

 float funcG(int x)
{ 
  float g = exp(-abs(x))*cos(x);
  return g;
}

  int main (){
  float x;
  printf("Enter x:  ");
  scanf ("%f", &x);
  printf( "Function F(x) = %f\n", funcF(x));
  printf( "Function G(x) = %f\n", funcG(x));
  return 0;
}
