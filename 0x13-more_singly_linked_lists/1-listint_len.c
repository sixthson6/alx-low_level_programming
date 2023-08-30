#include "lists.h"

/**
 * listint_len - find length of linked list
 * @h: head node
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *New = h;

	while (New != NULL)
	{
		New = New->next;
		count++;
	}
	return (count);
}
