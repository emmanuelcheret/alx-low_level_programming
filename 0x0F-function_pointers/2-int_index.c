#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function
 *
 * Return: the index of the first matching element, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}

	return (-1);
}
