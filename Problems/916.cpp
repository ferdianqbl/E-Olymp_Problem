// nfpurnama
// https://github.com/napurnama ( maestro )
#include <stdio.h>
int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (a > b)
  {
    a += b;
    b = a - b;
    a -= b;
  }

  if (c > d)
  {
    c += d;
    d = c - d;
    c -= d;
  }

  int arr[101];
  for (int i = 1; i <= 100; i++)
  {
    arr[i] = 0;
  }

  for (int i = a; i <= b; i++)
  {
    for (int j = c; j <= d; j++)
    {
      if (!arr[i * j])
        arr[i * j]++;
    }
  }

  int total = 0;
  for (int i = 1; i <= 100; i++)
    total += arr[i];
  printf("%d\n", total);
}