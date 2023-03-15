#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the code
 *
 * @argc: An array to be printed on command-line
 * @argv: A vector to be printed on command-line
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)

	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
