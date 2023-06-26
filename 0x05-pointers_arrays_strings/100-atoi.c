#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - convert string to number(int)
 * @s: string to be converted
 * Return: int value
 */
int _atoi(char *s)
{
	int result = atoi(s);

	if (strlen(s) == 0)
	{
		return (0);
	}
	else
	{
		return (result);
	}
}
