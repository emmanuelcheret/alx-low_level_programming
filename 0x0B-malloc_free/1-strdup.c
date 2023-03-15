#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string in memory
 * @str: the string to duplicate
 *
 * Return: NULL if str is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	dup[i] = str[i];

	return (dup);
}
