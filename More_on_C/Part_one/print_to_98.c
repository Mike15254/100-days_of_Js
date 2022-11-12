#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * number should be printed in order the first number 
 * should be the number passsed to the function
 * 
 * @n: This in an integer to input
 * 
 * Return: Always (0) success
 */
void print_to_98(int n)
{
    if (n > 98)
    {
        for (; n > 98; n--)
        {
            printf("%d, ", n);
        }
    }
    else if (n < 98)
    {
        for (; n < 98; n++)
        {
            printf("%d, ",n);
        }
    }
    printf("%d\n",n);
}