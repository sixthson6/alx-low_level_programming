#include "main.h"
#include <string.h>
/**
 * _strncat - contacatenate two strings
 * @src: source string
 * @dest: destination string
 * @n: number of src to concatenate
 * Return: return pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;

while (src[j] != '\0' && j < n)
{
dest[i + j] = src[j];
j++;
}
dest[i + j] = '\0';

return (dest);
}
