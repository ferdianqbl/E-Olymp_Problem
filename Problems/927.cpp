#include <stdio.h>
int main()
{
  float b;
  int n, a, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %f", &a, &b);
    if (b < 50)
      count += a;
  }
  printf("%d", count);
}