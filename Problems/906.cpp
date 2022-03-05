#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a = n / 100;
  int b = n % 100 / 10;
  int c = n % 100 % 10;
  printf("%d", a * b * c);
}