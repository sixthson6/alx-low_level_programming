#include "main.h"
/**
 * factorial - find factorial of a num
 * @n: num
 * Return: result of factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
