#include <unistd.h>
#include "main.h"
/**
 * _islower - checks whether a char is lowercase
 * @c: input
 * Return: 1 or 0
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
