/**
 * rev_string - Reverses a string
 *
 * @s: The string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i; // Declare i outside of the loop

	/* Find length of string */
	while (s[length] != '\0')
	length++;

	/* Swap characters from both ends until middle is reached */
	for (i = 0; i < length / 2; i++) // Move the loop declaration outside of the block
	{
	temp = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
	}
}
