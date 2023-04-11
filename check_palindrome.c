// C program to check whether a given no is Palindrome or not
//  The reverse of the input no is equal to the original no

#include <stdio.h>

int check_palindrome(int num)
{
    int rem = 0, rev = 0, temp;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    if (temp == rev)
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
    int num;
    printf("Enter the no to check the number :");
    scanf("%d", &num);
    if (check_palindrome(num))
    {
        printf("\nThe given no is Palindrome");
    }
    else
    {
        printf("\nThe given no is not Palindrome");
    }

    return 0;
}
