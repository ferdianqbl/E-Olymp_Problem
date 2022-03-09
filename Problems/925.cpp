#include <stdio.h>
#include <math.h>
float getArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float area = abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2);
  return area;
}
float getPerimeter(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float perimeter = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)) + sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
  return perimeter;
}
int main()
{
  float x1, y1, x2, y2, x3, y3;
  scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
  printf("%f ", getPerimeter(x1, y1, x2, y2, x3, y3));
  printf("%f", getArea(x1, y1, x2, y2, x3, y3));
}