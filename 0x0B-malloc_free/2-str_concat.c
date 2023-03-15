#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: allocated space in memory containing the concatenated strings,
 * or NULL if memory allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
	len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	concat[i] = s1[i];

	for (j = 0; j <= len2; j++)
	concat[i + j] = s2[j];

	return (concat);
}
