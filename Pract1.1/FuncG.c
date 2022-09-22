#include <stdio.h>
#include <math.h>

float funcG(int x)
{ 
  float g = exp(-abs(x))*cos(x);
  return g;
}
