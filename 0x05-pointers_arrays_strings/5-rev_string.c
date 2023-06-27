#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse print string
 * @s: input param
 * Return: void
 */
void rev_string(char *s)
{
	size_t i, len;

	if (s == NULL || *s == '\0')
	{
		return;
	}
	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
