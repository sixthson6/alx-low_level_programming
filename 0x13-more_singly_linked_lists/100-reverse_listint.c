#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: head node
 *
 * Return: addr of first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;
	listint_t *previous;

	current = *head;
	next = NULL;
	previous = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;

	return (previous);
}
