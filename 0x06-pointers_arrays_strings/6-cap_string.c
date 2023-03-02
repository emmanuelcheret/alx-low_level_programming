#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to be capitalized
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1; /* Capitalize next character */

	while (*ptr)
	{
		if (cap_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32; /* Convert lowercase letter to uppercase */
			cap_next = 0; /* Don't capitalize next character */
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
			 *ptr == ',' || *ptr == ';' || *ptr == '.' ||
			 *ptr == '!' || *ptr == '?' || *ptr == '"' ||
			 *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap_next = 1; /* Capitalize next character */
		}
		else
		{
			cap_next = 0; /* Don't capitalize next character */
		}

		ptr++;
	}

	return (str);
}
