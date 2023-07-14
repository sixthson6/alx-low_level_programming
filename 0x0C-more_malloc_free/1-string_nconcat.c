#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	size_t i, j, s1_len, s2_len, result_len;

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}

	result_len = s1_len + n;

	result = malloc(result_len * 4);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
