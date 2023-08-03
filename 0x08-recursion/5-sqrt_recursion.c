#include "main.h"

/**
 * sqrt_helper - find square root of a number
 * @n: number
 * @guess: initial guess(Newton-Raphson method)
 * @tolerance: tolerance level
 * Return: sqrt
 */

int sqrt_helper(int n, double guess, double tolerance)
{
	double next_guess, diff;

	next_guess = (guess + n/guess) / 2;
	diff = next_guess - guess;

	if (n == 0 || n == 1)
		return (n);
	if (diff < 0)
		diff = -diff;
	if (diff < tolerance)
		return ((int)(next_guess));
	else
		return (sqrt_helper(n, next_guess, tolerance));
}

/**
 * _sqrt_recursion - sqrt main recursive function
 * @n: number
 * Return: ans
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (sqrt_helper(n, n/2, 0.01));
}
