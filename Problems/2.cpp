#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  if (n < 10)
    printf("1");
  else if (n < 100)
    printf("2");
  else if (n < 1000)
    printf("3");
  else if (n < 10000)
    printf("4");
  else if (n < 100000)
    printf("5");
  else if (n < 1000000)
    printf("6");
  else if (n < 10000000)
    printf("7");
  else if (n < 100000000)
    printf("8");
  else if (n < 1000000000)
    printf("9");
  else if (n < 10000000000)
    printf("10");
}
