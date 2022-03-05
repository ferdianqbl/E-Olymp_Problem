#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int first = n / 100;
  int last = n % 100 % 10;
  if (first > last)
    printf("%d", first);
  else if (last > first)
    printf("%d", last);
  else
    printf("=");
}