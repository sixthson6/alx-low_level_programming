#include <stdio.h>
#include <stdlib.h>

/**
 * minimum_coins - calc min amount of coins
 * @amount: amount
 * Return: num of coins
 */

int minimum_coins(int amount)
{
	int num_coins, count, i;
	int coins[] = {25, 10, 5, 2, 1};

	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < num_coins; i++)
	{
		count += amount / coins[i];
		amount %= coins[i];
	}
	return (count);
}

/**
 * main - Entry
 * @argc: arg count
 * @argv: arg vector
 * Return: num of chage
 */

int main(int argc, char *argv[])
{
	int num, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
		printf("0\n");

	result = minimum_coins(num);
	printf("%d\n", result);
	return (0);
}
