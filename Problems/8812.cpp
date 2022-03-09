#include <stdio.h>
int main()
{
  long long a, b;
  scanf("%lld %lld", &a, &b);
  printf("%lld %lld", 2 * (a + b), a * b);
}