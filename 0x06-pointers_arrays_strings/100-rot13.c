#include "main.h"

/**
 * rot13 - encode a string using rot13 cipher
 * @str: the string to be encoded
 * Return: the encoded string
 */

char *rot13(char *str)
{
int i, j;
char *result = str;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'); j++)
{
if ((str[i] >= 'A' && str[i] <= 'Z') && str[i] + 13 > 'Z')
{
result[i] = 'A' + ((str[i] + 12) - 'Z');
}
else if ((str[i] >= 'a' && str[i] <= 'z') && str[i] + 13 > 'z')
{
result[i] = 'a' + ((str[i] + 12) - 'z');
}
else
{
	result[i] = str[i] + 13;
}
str[i] = result[i];
}
}

return (result);
}
