#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector (mulitplication operands)
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result, opr1, opr2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		opr1 = atoi(argv[1]);
		opr2 = atoi(argv[2]);
		result = opr1 * opr2;
		printf("%d\n", result);
	}
	return (0);
}
