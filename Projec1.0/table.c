#include "project.h"
#include <stdio.h>

/**
 * draw_table - It displays a budget table for the program
 * int the console
 *
 * Return: Always (0) success
 */
void draw_table(void)
{
    int i, j;
    int arr[9][10] = {
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        { 1, 2,  3, 4, 5, 6, 1, 2, 3, 4},
        
    };

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf(" %d ", arr[i][j]);
            if (j == 9)
            {
                printf("\n");
            }
        }
    }
}

