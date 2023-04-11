// C Program to swap two arrays

#include <stdio.h>

void swap_array(int *arr1, int *arr2)
{
    // int len1 = sizeof(arr1) / sizeof(int), len2 = sizeof(arr2) / sizeof(int), temp;
    // int len = len1 > len2 ? len1 : len2;
    int temp;

    for (int i = 0; i < 5; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    printf("Arrays after swapping : ARR1 :- ");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", arr1[j]);
    }
    printf("\n ARR2 :- ");
    for (int k = 0; k < 5; k++)
    {
        printf("%d\t", arr2[k]);
    }
}

int main()
{
    int arr1[] = {13, 34, 54, 67, 78};
    int arr2[] = {11, 12, 13, 14, 15};

    swap_array(arr1, arr2);
}