// C Program to reverse a given no

#include <stdio.h>

int reverse_no(int num)
{
    int rev = 0, rem = 0;
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int data;
    printf("Enter the no to be reversed : ");
    scanf("%d", &data);
    printf("\nThe no after reversing is : %d", reverse_no(data));

    return 0;
}