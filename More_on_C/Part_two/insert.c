#include <stdio.h>

/**
 * main - computes a created array of size 5
 * user should input t the array and result be printed
 *
 * Return: Always (0) success
 */
int main(void)
{
    int arr[5];
    int i, j;
    printf("Input 3 elemets to store in the array\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
     for (i = 0; i < 3; i++)
    {
        printf("The elements in arr[%d]=%d\n", i, arr[i]);
    }
}
