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
	char leet_chars[5] = {'4', '3', '0', '7', '1'};
	char vowels[5] = {'a', 'e', 'o', 't', 'l'};
	int i, j;

	while (*ptr)
	{
		i = 0;
		while (i < 5)
		{
			if (*ptr == vowels[i] || *ptr == vowels[i] - 32)
			{
				*ptr = leet_chars[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}
