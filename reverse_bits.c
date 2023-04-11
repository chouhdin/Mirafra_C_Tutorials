// To reverse  bits
#include <stdio.h>
#include <stdint.h>

// #define NO_OF_BITS(x)    sizeof(x)*8

int reverse_bits(uint8_t data)
{
    uint8_t reverse_bits = 0;
    // unsigned int NO_OF_BITS = sizeof(data) * 8;
    for (int i = 0; i < 8; i++)
    {
        if (data & (1 << i))
        {
            reverse_bits |= 1 << (7 - i);
        }
    }
    return reverse_bits;
}

int main()
{
    uint8_t x = 43;
    printf(" After reversing : %d", reverse_bits(x));

    return 0;
}