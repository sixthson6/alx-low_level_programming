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
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;

while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
dest[i + j] = '\0';

return (dest);
}
