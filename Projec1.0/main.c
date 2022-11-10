#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* 2D array declaration*/
    char arr[][] = {
        {' ', 'Monthly', ' ', 'Total', 'Total', 'Budget', 'Budget'},
        {' ', 'Budget', 'January', 'February', 'January', 'January', 'January'}};
    int disp[2][3] = {
        {10, 11, 12},
        {14, 15, 16}};

    int i, j;
    int k, n;
    printf("Two Dimensional array elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", disp[i][j]);
            printf("|");
            if (j == 2)
            {
                printf("\n");
            }
        }
    }

    print("Personal Budget to the user");
    for (k = 0; k < 2; k++)
    {
        for (n = 0; n < 8; n++)
        {
            printf("%d", arr[k][n]);
            print("|");
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}