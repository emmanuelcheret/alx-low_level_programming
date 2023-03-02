/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to append to
 * @src: The source string to append
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	/* Find the end of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the source string to the end of the destination string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add a null terminator to the end of the concatenated string */
	*dest = '\0';

	/* Return a pointer to the resulting string */
	return (result);
}
