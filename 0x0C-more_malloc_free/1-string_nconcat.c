#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate 2 strings with n
 * @s1: string 1
 * @s2: string 2
 * @n: num of chars of s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2, copylen;
	char *concatenate;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	copylen = (n >= len2) ? len2 : n;

	concatenate = malloc((len1 + copylen + 1) * sizeof(char));

	if (concatenate == NULL)
		return (NULL);

	strcpy(concatenate, s1);
	strncat(concatenate, s2, copylen);

	return (concatenate);
}
