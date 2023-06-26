#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate passwords for 101-crackme
 * Return: 0 (Success)
 */
int main(void)
{
	int i, key;

	srand((unsigned int) time(NULL));

	for (i = 1000; i < 10000; i++)
	{
		key = rand();
		printf("%d", key);
		printf("\n");
	}
	printf("\n");
	return (0);
}
