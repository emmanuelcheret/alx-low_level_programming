#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 * @str: function to be returned
 * Return: The length of @str
 */

int _strlen(char *str)
{
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
return (length);
}
