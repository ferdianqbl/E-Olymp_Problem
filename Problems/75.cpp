#include <stdio.h>
int main()
{
  int a, m, count = 0;
  scanf("%d %d", &a, &m);
  int sub = a;
  while (m > 0 && m >= a)
  {
    count++;
    m -= sub;
    sub++;
  }
  printf("%d", count - 1);
}