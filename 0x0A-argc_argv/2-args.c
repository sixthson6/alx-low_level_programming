#include <stdio.h>

/**
 * main - Entry
 * @argc: arg count
 * @argv: arg vector
 * Return: arg names
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
