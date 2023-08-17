#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all nums
 * @n: count
 * Return: sum of nums
 */

int sum_them_all(const unsigned int n, ...)
{
	int num, sum;
	unsigned int i;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
	num = va_arg(arg, int);
	sum += num;
	}

	va_end(arg);

	return (sum);
}
