#include <unistd.h>
#include "main.h"
/**
 * _isdigit - print num btwn 0 and 9
 * @c: input
 * Return: 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
