#include "main.h"

/**
 * is_prime_helper - find prime number helper function
 * @n: number
 * @i: helper input
 * Return: 1 (Success)
 */

int is_prime_helper(int n, int i)
{
	if (n <= 2)
		return (n == 2);
	if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - find prime number
 * @n: number
 * Return: 1 for prime number, 0 for non prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_helper(n, 2));
}
