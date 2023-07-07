#include "main.h"
/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 *
 * Return: the natural square root of the number, or -1 if
 * it does not have a natural square root
 */
int _sqrt_helper(int n, int low, int high)
{
int mid, square;

if (low > high)
{
return (-1);
}
mid = (low + high) / 2;
square = mid *mid;
if (square == n)
{
return (mid);
}
else if (square > n)
{
return (_sqrt_helper(n, low, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, high));
}
}


/**
 * _sqrt_recursion - calculate the natural square root of
 * a number using recursion
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of the number, or -1 if
 * it does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, 1, n));
}
}
