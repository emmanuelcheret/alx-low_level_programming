#include "main.h"

/**
 * _strncpy - Copies a string, up to n bytes
 * @dest: The destination string to copy to
 * @src: The source string to copy from
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy the characters from src to dest, up to n bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If n is greater than the length of src, pad dest with null bytes */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	/* Return a pointer to the resulting string */
	return (dest);
}
