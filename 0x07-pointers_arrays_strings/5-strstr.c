#include "main.h"
#include <stddef.h>
/**
 * _strstr - find a string in a bigger string
 * @needle: string to be found
 * @haystack: larger string to be searched
 * Return: found string
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
