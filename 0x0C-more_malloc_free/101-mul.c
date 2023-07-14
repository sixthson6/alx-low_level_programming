#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int *result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	if (!(isdigit(*argv[1])) || !(isdigit(*argv[2])))
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = malloc(sizeof(int) * 98);
	*result = num1 * num2;
	printf("%d\n", *result);
	free(result);
	return (0);
}
