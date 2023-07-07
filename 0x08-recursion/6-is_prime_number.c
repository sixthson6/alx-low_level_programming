#include "main.h"
/**
 * is_prime_helper - recursive helper function for is_prime_number
 * @n: the number to check
 * @divisor: the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
if (divisor >= n)
{
return (1);
}
else if (n % divisor == 0)
{
return (0);
}
else
{
return (is_prime_helper(n, divisor + 1));
}
}
/**
 * is_prime_number - checks if a number is prime using recursion
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (is_prime_helper(n, 2));
}
}
