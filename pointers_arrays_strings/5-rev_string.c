#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length = for (i = 0; s[i] != '\0'; i++);
	int middle = length / 2;
	char temp;

	for (int i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
