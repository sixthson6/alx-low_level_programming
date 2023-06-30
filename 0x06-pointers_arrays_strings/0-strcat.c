#include "main.h"
#include <string.h>
/**
 * _strcat - contacatenate two strings
 * @src: source string
 * @dest: destination string
 * Return: return pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = src[0]; src[i] < '\0'; i++)
	{
		dest[strlen(dest) + i] = src[i];
	}
	return (dest);
}
