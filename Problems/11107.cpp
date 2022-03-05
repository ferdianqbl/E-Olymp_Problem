#include <stdio.h>
#include <algorithm>
int main()
{
  int z, n, res = 0, gcd, x0r;
  scanf("%d", &z);
  for (int a = 0; a < z; a++)
  {
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &num[i]);
    for (int i = 0; i < (n - 1); i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        gcd = std::__gcd(num[i], num[j]);
        x0r = num[i] ^ num[j];
        if (gcd == x0r)
          res++;
      }
    }
    printf("%d\n", res);
    res = 0;
  }
}