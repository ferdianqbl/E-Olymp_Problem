#include <stdio.h>
int main()
{
  int n;
  float min = 105, in;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%f", &in);
    if (in < min)
      min = in;
  }
  printf("%.2f", min * 2);
}