// C Program to swap nibble

#include <stdio.h>
#include <stdint.h>

void swap_nibble(uint8_t num)
{
    int swap;
    swap = (((num >> 4) & 0x0F) | ((num << 4) & 0xF0));
    printf("The data after swapping is : %x", swap);
    // return swap;
}
int main()
{
    uint8_t data = 0x43; // ,swap_data;
    // printf("Enter the data to be swapped : ");
    // scanf("%d",data);

    swap_nibble(data);

    return 0;
}