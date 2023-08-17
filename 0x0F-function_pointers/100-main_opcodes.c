#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes in hexadecimal
 * @num_bytes: number of bytes
 * Return: Nothing
 */

void print_opcodes(int num_bytes)
{
	char *ptr;
	int i;

	if (num_bytes == 0)
	{
		return;
	}

	ptr = (char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}

/**
 * main - Entry
 * @argc: count
 * @argv: vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	for (i = 0; i < argc; i++)
	{
		if (argv[i] == NULL)
			return;
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num_bytes);

	return (0);
}
