#include <stdio.h>
int main()
{
  int n, count = 0;
  scanf("%d", &n);
  float num, sum = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%f", &num);
    if (num < 0)
    {
      sum += num;
      count++;
    }
  }
  printf("%d %.2f", count, sum);
}