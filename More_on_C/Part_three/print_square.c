#include "main.h"
#include <stdio.h>

/**
 * print_square - A function that prints a square followed
 * by a new line
 *
 * @size: the size of the square
 *
 * Return: none
 */
void print_square(int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        _putchar('#');
        if ( i == (size - 1))
        {
            for (j = 0; j < i; j++)
            {
                _putchar('\n');
                _putchar('#');
            }
        }
    }
    _putchar('\n');
}

int main(void)
{
    print_square(3);
}