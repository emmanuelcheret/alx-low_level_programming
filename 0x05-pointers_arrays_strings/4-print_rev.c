#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string to be printed in reverse
 * Return: 0 on success
 */

void print_rev(char *s)
{
int i;
int putchar(int c);
for (i = 0; s[i] != '\0'; i++);
for (i--; i >= 0; i--)
{
	putchar(s[i]);
}
putchar('\n');
}
