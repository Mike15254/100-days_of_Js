#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * input_expence - Promts the user to input actual expenses
 * for each month of above items
 *
 * Return: no return value
 */
void input_expence(void)
{
    int j;
    char month[] = {'a', 'b', 'c', 'd', '\0'};
    int expense[6];

    for (char i = 0; i < 4; i++)
    {
        printf("Input the expenses for %c : \n", month[i]);

        for (j = 0; j < 6; j++)
        {
            scanf("%d", & expense[j]);
        }
    }
    
}