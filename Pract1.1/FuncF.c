#include <stdio.h>
#include <math.h>

 float funcF(int x)
{
  float f = exp(-abs(x))*sin(x);
  return f;
}
