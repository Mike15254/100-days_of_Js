#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char arr1[20][20] = {{'a', 'b', 'c', 'd', 'e', 'f'},
                     {'t', 'r', 'n', 'm', 'b', 'v', '\0'}};

    printf("%s\n", arr1);
    exit(EXIT_SUCCESS);
}