#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - find first matching string
 * @s: text(string to be searched)
 * @accept: search string
 * Return: first byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *dest[98];

	size_t i, j;

	int x;

	if (s == NULL || *s == '\0')
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x = i;
				*dest = &s[x];
				return (*dest);
			}
		}
	}
	return (NULL);
}
