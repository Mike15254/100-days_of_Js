#include "main.h"

/**
 * _isuper - Checks for the uppercase character 
 * 
 * @c: the letter to check if it's uppercase or not
 * 
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    return (0);
}