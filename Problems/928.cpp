#include <stdio.h>
int main()
{
  int n, a, max = 0, min = 0;
  scanf("%d", &n);
  scanf("%d", &a);
  max = a;
  min = a;
  for (int i = 0; i < n - 1; i++)
  {
    scanf("%d", &a);
    if (a > max)
      max = a;
    if (a < min)
      min = a;
  }
  printf("%d", min + max);
}