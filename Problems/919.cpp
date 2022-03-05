#include <stdio.h>
int main()
{
  int n, count = 0;
  float a, sum = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%f", &a);
    if (i % 3 == 0 && a > 0)
      sum += a, count++;
  }
  printf("%d %.2f", count, sum);
}