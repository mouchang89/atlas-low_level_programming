#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len;
	int i;
	int temp;

	if (i < len)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		i++;
		len --;
		reverse(s, len, i, temp);
	}
}
