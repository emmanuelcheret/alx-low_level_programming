#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 * 
 * @str: function to be returned
 * Return: The length of @str
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
