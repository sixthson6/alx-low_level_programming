#include "main.h"
#include <stddef.h>
/**
 * _strchr - find a char in a string
 * @s: string
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char *dest[98];

	size_t i;

	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			x = i;
			*dest = &s[x];
			return (*dest);

		}
	}
	return (NULL);
}
