#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    long double a, b;
    scanf("%Lf %Lf", &a, &b);
    printf("%.4Lf %.4Lf\n", a + b, a * b);
  }
}