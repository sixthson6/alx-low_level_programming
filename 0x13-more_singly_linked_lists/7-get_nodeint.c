#include "lists.h"

/**
 * get_nodeint_at_index - find nth node of index in list
 * @head: head node
 * @index: n
 *
 * Return: address of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
