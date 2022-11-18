#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * 
 * @a: First integer 
 * @b: Second integer
 * 
 * Return: no return
 */
void swap_int(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}