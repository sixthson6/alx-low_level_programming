#include <unistd.h>
#include "main.h"
/**
 * _isalpha - alphabets
 * @c: input
 * Return: 1 or 0
 */
int _isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
