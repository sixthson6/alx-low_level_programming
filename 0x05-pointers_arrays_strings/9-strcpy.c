#include <unistd.h>
#include "main.h"
/**
 * _strcpy - copy source string to dest
 * @src: string to be copied
 * @dest: copied string
 * Return: dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	char *dest_start = dest;

	if (src == NULL || *src[0] == '\0')
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest_start);
}
