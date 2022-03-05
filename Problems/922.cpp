#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &num[i]);
  printf("%d ", num[n - 1]);
  for (int i = 0; i < n - 1; i++)
    printf("%d ", num[i]);
}