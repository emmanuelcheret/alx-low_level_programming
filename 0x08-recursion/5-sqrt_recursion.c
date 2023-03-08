#include "main.h"

/**
 * sqrt_helper - Finds the natural square root of a number.
 * @n: The number to calculate the square root of.
 * @i: The integer to test as a possible square root.
 *
 * Return: The natural square root of n.
 *         -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);
	return (sqrt_helper(n, i + 1));
}
