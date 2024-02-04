#include "main.h"

/**
 * leet - Encodeds a string into 1337.
 * @str: Pointer to string.
 *
 * Return: String.
 */
char *leet(char *str)
{
	int a, b;

	char alpha[80] = "aAeEoOtTlL";
	char numbers[80] = "43071";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; alpha[b] != '\0'; b++)
		{
			if (str[a] == alpha[b])
			{
				str[a] = numbers[b / 2];
			}
		}
	}
	return (str);
}
