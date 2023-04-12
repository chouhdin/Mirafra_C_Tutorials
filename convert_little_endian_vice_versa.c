// C Program to convert Little endian to big endian and vice-versa

#include <stdio.h>

int swap_Endians(int num)
{
    int byte_0, byte_1, byte_2, byte_3, result;

    byte_0 = (num & 0x000000FF) >> 0;
    byte_1 = (num & 0x0000FF00) >> 8;
    byte_2 = (num & 0x00FF0000) >> 16;
    byte_3 = (num & 0xFF000000) >> 24;
    result = (byte_0 << 24) | (byte_1 << 16) | (byte_2 << 8) | (byte_3 << 0);

    return result;
}

int main()
{
    int big_endian = 0x12345678;
    int little_endian = 0x78563412;
    int result1, result2;
    result1 = swap_Endians(big_endian);
    result2 = swap_Endians(little_endian);
    printf("Big endian to Little endian is 0x%x", result1);
    printf("\nLittle endian to Big endian is 0x%x", result2);

    return 0;
}