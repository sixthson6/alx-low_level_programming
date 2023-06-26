#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate passwords for 101-crackme
 * Return: 0 (Success)
 */
int main(void)
{
	int i, sum, diff;

	char key[88];

	srand((unsigned int) time(NULL));

	for (i = 0, sum = 0; sum < 2772 -122; i++)
	{
		key[i] = rand() % 94 + 33;
		sum = sum + key[i];
	}
	diff = sum - 2772 + 122;
	key[i] = diff;
	printf("%s", key);
	return (0);
}
