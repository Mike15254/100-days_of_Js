#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * if n is greater than 15 or less than 0 the function should
 * print anything
 * 
 * @n: input integer 
 * 
 * Return: Always (0) success
 */
void print_times_table(int n)
{
    int a, b, op;

    if (n >= 0 && n <= 15)
    {
       for (a = 0; a <= n; a++)
    {
        _putchar(48);
        for (b = 0; b <= n; b++)
        {
            op = a * b;
            _putchar(44);
            _putchar(32);
            if (op <= 9)
            {
                _putchar(32);
                _putchar(op + 48);
            }
            else
            {
                _putchar((op / 10) + 48);
                _putchar((op % 10) + 48);
            }
        }
        _putchar('\n');
    }
    }
}