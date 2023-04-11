// C Program to change entered decimal no to binary

#include <stdio.h>

void decimal_to_binary(int data)
{
    int bin[100], i = 0;
    while (data)
    {
        bin[i] = data % 2;
        data = data / 2;
        i++;
    }
    while (i--)
    {
        printf("%d", bin[i]);
    }
}

int main()
{
    unsigned int num;
    printf("Enter the decimal no. ");
    scanf("%d", &num);
    decimal_to_binary(num);

    return 0;
}