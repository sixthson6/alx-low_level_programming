#include "lists.h"

/**
 * print_list - print contents of input struct
 * @h: pointer to strut
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[%u] (nil)\n", 0);
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		
		h = h->next;
		count++;
	}

	return (count);
}
