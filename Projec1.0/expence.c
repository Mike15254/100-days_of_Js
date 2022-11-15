#include "project.h"
#include <stdio.h>


/**
 * input_expence - Promts the user to input actual expenses
 * for each month of above items
 * 
 * Return: no return value
 */
void input_expence(void)
{
    int i, j;
    char month[5] = {'a', 'b', 'c', 'd', '\0'};
    int expense[6];

    for (i = 0; i < 4; i++)
    {
        printf("Input the expenses for %c : ",month[i]);

        for (j = 0; j < 6; j++)
        {
            scanf("%d",&expense[j]);
        }
        
    }
    for (int k = 0; k < 6; k++)
    {
        printf("The expences of month %c are : %d", month[k], expense[k]);
    }
}