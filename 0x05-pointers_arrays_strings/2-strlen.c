#include "main.h"

/**
 * function_strlen - function that returns the lenght of a string
 * @s: function to be returned
 * Return: 0 on success
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
