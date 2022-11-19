#include "main.h"
#include <stdio.h>

/**
 * main - check the code 2-strlen.c if is correct
 *
 * Return: Always 0.
 */
int main(void)
{
     char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}