// C Program to reverse a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "DINESH";
    int len = 0, j = 0;

    //printf("Enter a string :");
    //fgets(str, 20, stdin);
    printf("\n %d \n", strlen(str));
    // len = strlen(str) - 1;

    for (int i = strlen(str) - 1; i >= (strlen(str)/2); i--)
    {
        str[j] = str[i];
        j++;
        //printf("%c", str[j]);
    }
    // puts(str);
    printf("\nThe Reversed string is : %s", str);

    return 0;
}