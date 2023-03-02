#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to the string to be converted
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32; /* Convert lowercase letter to uppercase */
		}
		ptr++;
	}

	return (str);
}
