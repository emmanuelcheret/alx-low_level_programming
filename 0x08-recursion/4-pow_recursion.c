#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base integer.
 * @y: The exponent integer.
 *
 * Return: The integer value of x raised to the power of y.
 *         -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	if (y == 1)
	return (x);
	return (x * _pow_recursion(x, y - 1));
}
