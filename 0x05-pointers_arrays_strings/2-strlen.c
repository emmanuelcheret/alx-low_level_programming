#include "main.h"

/**
 * int_strlen - function that returns the lenght of a string
 * function _strlen: function to be returned
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
