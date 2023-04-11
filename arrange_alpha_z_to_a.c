// C Program to arrange alphabets from z to a

#include <stdio.h>
#include <string.h>

int main()
{
  // Enter the alphabets to be arranged
  char str[] = "abcdefghijklmnopqrstuvwxyz";
  int i = 0, j = 0;
  char temp;

  for (i = 0; (i < strlen(str) - 1); i++)
  {
    for (j = i + 1; j < strlen(str); j++)
    {
      if (str[i] < str[j])
      {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
  printf("%s", str);
  return 0;
}
