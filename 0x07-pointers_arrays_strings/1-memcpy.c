#include "main.h"
#include <stddef.h>
/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination
 * @src: source bytes
 * @n: number of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
