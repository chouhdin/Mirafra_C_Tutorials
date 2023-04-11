// C Program to check whether a given no is Armstrong no or not

#include <stdio.h>

int check_armstrong(int num)
{
    int rem = 0, cube = 0, temp;
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        cube = (rem * rem * rem) + cube;
        num = num / 10;
    }

    printf("\nThe cube value is : %d", cube);
    if (temp == cube)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int data, result;

    printf("Enter the no : ");
    scanf("%d", &data);

    if (check_armstrong(data))
    {
        printf("\nThe Entered no is Armstrong no!");
    }
    else
    {
        printf("\nThe Entered no is not Armstrong no !");
    }

    return 0;
}