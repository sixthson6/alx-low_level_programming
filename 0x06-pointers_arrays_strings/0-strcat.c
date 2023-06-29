#include "main.h"
/**
 * _strcat - contcatenate two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = src[0]; src[i] < '\0'; i++)
	{
		*dest = src[i];
	}
	return (dest);
}
