#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
