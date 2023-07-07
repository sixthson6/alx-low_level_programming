#include "main.h"
/**
 * is_palindrome - check if string is palindrome using recursoin
 * @s: string
 * Return: 1 (Success)
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}
	else if (*s == *(s + len - 1))
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}
	else
	{
		return (0);
	}
}
#include "main.h"
/**
 * _strlen_recursion - strlen using recursion
 * @s: input string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
