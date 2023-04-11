#include <stdio.h>

int main()
{
  int a;
  printf("Enter the no to check for even or odd : ");
  scanf("%d", &a);
  if (a & 1)
    printf("The no is odd");
  else
    printf("\nThe no is Even");

  return 0;
}