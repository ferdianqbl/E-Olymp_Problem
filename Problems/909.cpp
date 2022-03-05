#include <cstdio>
int main()
{
  int count = 1;
  char words[251];
  gets(words);
  for (int i = 0; words[i] != '\0'; ++i)
  {
    if (words[i] == ' ' && words[i + 1] != ' ')
      count++;
  }
  printf("%d", count);
}