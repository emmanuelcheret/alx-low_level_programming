#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination string to append to
 * @src: The source string to append
 * @n: The maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	/* Find the end of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the source string to the end of the destination string */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add a null terminator to the end of the concatenated string */
	*dest = '\0';

	/* Return a pointer to the resulting string */
	return (result);
}
