#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry
 * @argc: arg count
 * @argv: arg vector
 * Return: running sum
 */

int main(int argc, char *argv[])
{
	int i, j, num, result;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; (arg[j] != '\0'); j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
