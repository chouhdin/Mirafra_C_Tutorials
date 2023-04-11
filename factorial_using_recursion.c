// C Program to print the factorial using Recursion

#include <stdio.h>

int fact(int num)
{
    if (num == 1)    //hard coded: to check for going out of the loop
    {
        return 1;
    }
    else
    {
        num = num * fact(num -1 );
        return num;
    }
}

int main()
{
    int data, result = 0;
    printf("Enter the no to find the factorial : ");
    scanf("%d", &data);

    result = fact(data);
    printf("\nThe factorial of the entered data is : %d", result);
    return 0;
}
