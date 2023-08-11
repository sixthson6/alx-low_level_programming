#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply_numbers - multiply nums
 * @num1: num 1
 * @num2: num 2
 * Return: result
 */

void multiply_numbers(const char *num1, const char *num2)
{
	int len1, len2, result_len, i, j, k, digit1, digit2, pos1, pos2, sum, product;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	result_len = len1 + len2 + 1;
	result = calloc(result_len, sizeof(int));

	if (result == NULL)
		exit(1);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] += sum % 10;
		}
	}

	/* find first non zero digit position */

	k = 0;

	while (k < result_len && result[k] == 0)
	{
		k++;
	}

	if (k == result_len)
	{
		printf("0");
	}
	else
	{
		for (; k < result_len; k++)
		{
			printf("%d", result[k]);
		}
	}
	printf("\n");

	free(result);
}

/**main - Entry
 * @argc - count
 * @argv - vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	const char *num1, *num2;
	int i, len1, len2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	len1 = strlen(num1);
	len2 = strlen(num2);

	for (i = 0; i < len1; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; i < len2; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	multiply_numbers(num1, num2);
	return (0);
}
