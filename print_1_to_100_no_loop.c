// C Program to print the number 1 to 100 without using loop

#include <stdio.h>

void print(int n)
{
    if (n == 100)
    {
        printf(" %d ", n);
    }
    else if (n < 100)
    {
        printf(" %d ", n);
        print(n + 1);
    }
}
int main()
{
    print(1);

    return 0;
}