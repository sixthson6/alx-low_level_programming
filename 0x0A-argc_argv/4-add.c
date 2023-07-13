#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - running sum
 * @argc: argument count
 * @argv: argument vector (holds integers to be added)
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, result, opr;

	result = 0;

	if (argc == 1)
	{
		printf("%d\n", result);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			opr = atoi(argv[i]);
			result += opr;
		}
		}
		}
		printf("%d\n", result);
	}
	return (0);
}
