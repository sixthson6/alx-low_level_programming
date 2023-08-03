#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - len of string
 * @s: str
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - reverse string
 * @s: string
 * Return: reversed string
 */

char *rev_string(char *s)
{
	char *res;
	int len;

	if (*s == '\0')
		return (s);

	res = rev_string(s + 1);
	len = _strlen(res);
	res = malloc(sizeof(char) * (len + 1));
	res[len] = *s;
	res[len + 1] = '\0';
	return (res);
}

/**
 * is_palindrome - check whether a string is a palindrome
 * @s: string
 * Return: 1 (palindrome), 0 (not palindrome)
 */

int is_palindrome(char *s)
{
	char *res;

	if (*s == '\0')
		return (1);

	res = rev_string(s);

	if (strcmp(s, res) == 0)
		return (1);
	else
		return (0);
}
