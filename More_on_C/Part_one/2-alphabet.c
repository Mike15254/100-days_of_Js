#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints lowercase aplhabets in reverse
 * Return - Always (0) success
 */
int main(void)
{
    int i;
    for (i = 122 ; i > 96; i--)
    {
        if (i != 101 && i != 113)
        {
            putchar(i);
        }
    }
    putchar('\n');
    return (0);
}
