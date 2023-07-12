#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
