#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0, j = 0;

	while (n1[len1])
	len1++;
	while (n2[len2])
	len2++;

	if (len1 > size_r || len2 > size_r)
	return (0);

	r[size_r - 1] = '\0';
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
	sum = carry;
	if (i >= 0)
	sum += n1[i] - '0';
	if (j >= 0)
	sum += n2[j] - '0';

	if (sum > 9)
	carry = 1;
	else
	carry = 0;

	r[size_r - 2 - (i > j ? i : j)] = (sum % 10) + '0';
	}

	if (carry)
	{
	if (size_r == len1 + 1 || size_r == len2 + 1)
	{
	r[size_r - 2 - (i > j ? i : j)] = '1';
	return (r + size_r - 1 - (i > j ? i : j));
	}
	else
	return (0);
	}

	return (r + size_r - 1 - (i > j ? i : j));
}
