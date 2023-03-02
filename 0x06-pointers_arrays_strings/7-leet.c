#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the resulting string
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_chars[] = {'4', '3', '0', '7', '1'};
	char vowels[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int i, j;

	while (*ptr)
	{
		i = 0;
		j = 0;
		while (j < 10)
		{
			if (*ptr == vowels[j])
			{
				*ptr = leet_chars[i / 2];
				break;
			}
			i++;
			j++;
		}
		ptr++;
	}

	return (str);
}
