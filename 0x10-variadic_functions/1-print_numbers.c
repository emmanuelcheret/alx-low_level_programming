#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a list of integers separated by a string
 * @separator: The separator string
 * @n: The number of integers to print
 * @...: The list of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	num = va_arg(args, int);
	printf("%d", num);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
