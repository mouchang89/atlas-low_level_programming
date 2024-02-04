#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to string.
 *
 * Return: String words capitalized.
 */
char *cap_string(char *str)
{
	int a, b;
	char sep[50] = {' ', '\n', '\t', ',', ';' , '.', '!', '?', '"', '(', ')', '{', '}', };
	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; sep[b] != '\0'; b++)
		{
			if (a == 0)
			{
				if (str[a] >= 'a' && str[a] <= 'z')
				{
					str[a] = str[a] - 32;
				}
			}
			if (str[a] == sep[b])
			{
				if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
				{
					str[a + 1] = str[a + 1] - 32;
				}
			}
		}
	}
	return (str);
}
