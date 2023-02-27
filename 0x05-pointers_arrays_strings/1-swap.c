#include "main.h"

/**
 * swap_int - function that swaps integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0 on success
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

