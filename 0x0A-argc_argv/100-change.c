#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	// check that the program was called with exactly one argument
	if (argc != 2) {
	printf("Error\n");
	return 1;
	}

	// convert the input argument to an integer
	int cents = atoi(argv[1]);

	// if the input argument is negative, print 0 and return
	if (cents < 0) {
	printf("0\n");
	return 0;
	}

	// calculate the number of coins needed for each denomination
	int quarters = cents / 25;
	cents %= 25;
	int dimes = cents / 10;
	cents %= 10;
	int nickels = cents / 5;
	cents %= 5;
	int twos = cents / 2;
	cents %= 2;

	// the remaining cents are pennies
	int pennies = cents;

	// print the total number of coins
	int total = quarters + dimes + nickels + twos + pennies;
	printf("%d\n", total);

	return 0;
}
