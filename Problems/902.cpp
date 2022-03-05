#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  if (n >= 1 && n <= 3)
    printf("Initial");
  if (n >= 4 && n <= 6)
    printf("Average");
  if (n >= 7 && n <= 9)
    printf("Sufficient");
  if (n >= 10 && n <= 12)
    printf("High");
}