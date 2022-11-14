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
    int i;
    int expense;
    printf("Input the expense for January\n");
    for (i = 0; i <= 6; i++)
    {
        printf("Rent:");
        scanf("%d",&expense);
    }
}