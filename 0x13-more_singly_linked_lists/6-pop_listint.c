#include "lists.h"

/**
 * pop_listint - remove head node
 * @head: head node
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}

