#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = i; j < 100; j++)
		{
			int digit1_1 = i / 10;

			int digit1_2 = i % 10;

			int digit2_1 = j / 10;

			int digit2_2 = j % 10;

			putchar('0' + digit1_1);
			putchar('0' + digit1_2);
			putchar(' ');
			putchar('0' + digit2_1);
			putchar('0' + digit2_2);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
