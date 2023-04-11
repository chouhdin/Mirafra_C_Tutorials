// To check whether a given no is power of 2
//We are using bit wise AND operator to find whether the no is power of 2

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the no : ");
    scanf("%d", &num);
    if ((num & (num - 1)) == 0)
    {
        printf("\nThe no is power of 2 ");
    }
    else
    {
        printf("\nThe no is not power of 2");
    }

    return 0;
}