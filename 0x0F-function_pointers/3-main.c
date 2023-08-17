#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: count
 * @argv:  vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operation;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = argv[2];

	f = get_op_func(operation);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(num1, num2);

	printf("%d\n", result);

	return (0);
}
