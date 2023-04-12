// C Program to set/unset 17th and 18th bit of a number

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0xAAAAAAAA;
    num |= (3 << 17);
    printf("The no after setting is %x", num);

    return 0;
}