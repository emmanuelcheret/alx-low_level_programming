#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a callback function to format the output
 * @name: the name to print
 * @f: the callback function to use for formatting
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
