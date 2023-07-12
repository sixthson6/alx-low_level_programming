#include <unistd.h>
#include "main.h"
/**
 * _isupper - print uppercase char
 * @c: input
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
