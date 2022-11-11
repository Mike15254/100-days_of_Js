#include "project.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * table_space - Prints a 2d table ont the console
 * with memory management.
 *
 * @n - Its an argument integer
 *
 * Return: Always (0) success
 */
void table(int n)
{
    char *s, *first;
    s = (char *)malloc((5 * n + 3) * sizeof(char));
    first = s;

    for (int i = 0; i < 2 * n + 1; i++)
    {
        for (int j = 0; j < 3 * n + 1; j++)
        {
            if (i % 2 == 0 && j % 3 == 0)
            {
                *s = ' ';
                s++;
            }
            else if (i % 2 == 0 && j % 3 != 0)
            {
                *s = '-';
                s++;
            }
            else if (i % 2 == 1 && j % 3 == 0)
            {
                *s = '|';
                s++;
            }
            else if (i % 2 == 1 && j % 3 != 0)
            {
                *s = ' ';
                s++;
            }
        }
        *s = '\n';
        s++;
    }
    *s = '\0';
    printf("%s", first);
    free(s);
}