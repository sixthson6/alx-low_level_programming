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
		if (h->len == 0)
			(void)h->len;

		printf("[%d] %s\n", h->len, (h->str == NULL) ? "[0] (nil)" : h->str);
		
		h = h->next;
		count++;
	}

	return (count);
}
