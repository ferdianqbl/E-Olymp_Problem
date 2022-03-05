#include <stdio.h>
#include <algorithm>
int main()
{
  float x, y, z;
  scanf("%f %f %f", &x, &y, &z);
  printf("%.2f", std::min((std::max(x, y), std::max(y, z)), x + y + z));
}