// C Program to swap two variables without using 3rd variable

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two no's : ");
    scanf("%d %d ", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nThe no's after swapping are : %d %d ", a, b);
    return 0;
}