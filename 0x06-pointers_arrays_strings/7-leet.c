#include "main.h"

/**
 *
 * leet - Encodes a string to 1337.
 *
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 *
 */

char *leet(char *str)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
