#include <stdio.h>

/*
 * main - Prints numberof arguments passed
 * @argc: An array that prints arguments passed
 * @argv: directional array to be ignored
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
