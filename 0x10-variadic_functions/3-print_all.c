#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c, *s;
	int i, j = 0;
	float f;

	va_start(args, format);

	while (format && format[j])
	{
	switch (format[j])
	{
	case 'c':
	c = va_arg(args, int);
	printf("%c", c);
	break;

	case 'i':
	i = va_arg(args, int);
	printf("%d", i);
	break;

	case 'f':
	f = va_arg(args, double);
	printf("%f", f);
	break;

	case 's':
	s = va_arg(args, char *);
	if (s == NULL)
	printf("(nil)");
	else
	printf("%s", s);
	break;

	default:
	j++;
	continue;
	}

	j++;
	if (format[j])
	printf(", ");
	}

	printf("\n");

	va_end(args);
}
