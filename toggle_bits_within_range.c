// C Program to toggle bits within a given range

#include <stdio.h>

int main()
{
    // C Program to toggle bits within a given range
    unsigned int data = 17;
    int l = 2, r = 3;
    data ^= ((1 << 3) - 1) ^ (1 << (2 - 1) - 1); // n = ((1<<l)-1) ^ (1<<(r-1)-1)
                                                 // num = num^n;

    printf("%d", data);

    return 0;
}
