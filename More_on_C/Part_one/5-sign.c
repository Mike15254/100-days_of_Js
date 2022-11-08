#include "main.h"
/**
 * print_sign - It checks for a sign of a number
 * if n is  greater than 0 it returns 1 and prints +
 * if n is 0 it prints 0 and returns 0
 * otherwise it returns -1 and prints -
 * 
 * @n - The input number as an integer
 * 
 * Return: 1 if greater than 0 , -1 if less than 0 and 0 if value is 0
*/
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43);
        return (1);
    }
    else if ( n == 0)
    {
        _putchar(48);
        return (0);
    }
    else 
    {
        _putchar(45);
        return(-1);
    }
    _putchar('\n');
}