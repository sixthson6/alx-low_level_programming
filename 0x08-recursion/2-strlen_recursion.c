#include "main.h"

/**
 * _strlen_recursion - find length of string 
 * @s: string
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
