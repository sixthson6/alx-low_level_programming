#include "main.h"
/**
 * _strncpy - copy a string with a maximum length
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
