#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: functions to be printed
 */

void _puts(char *str)
{
	int putchar(int c);
	int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
