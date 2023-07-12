#include <limits.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - convert string to number(int)
 * @s: string to be converted
 * Return: int value
 */
int _atoi(char *s)
{
	char *p = s;

	int result;

	int sign = 1;

	while (*p == '-' || *p == '+')
	{
		if (*p == '-')
		{
			sign = -sign;
		}
		p++;
	}
	result = atoi(s);

	if (strnlen(s, INT_MAX) == 0)
	{
		return (0);
	}
	else
	{
		result *= sign;
		return (result);
	}
}
