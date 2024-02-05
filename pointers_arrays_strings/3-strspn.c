#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *@s: Pointer to string.
 *@accept: Pointer to string.

*Return: Number of bytes in initial segment of s which
*consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if s[a] == accept[b]
			{
				break;
			}
		}
			if (!(accept[b]))
			{
				break;
			}
	}
	return (a);
}	
