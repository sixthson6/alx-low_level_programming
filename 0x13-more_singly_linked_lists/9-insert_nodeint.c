#include "lists.h"

/**
 * insert_nodeint_at_index - exactly <-
 * @head: head node
 * @idx: index to insert node
 * @n: data point
 *
 * Return: addr of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current;
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			newNode = malloc(sizeof(listint_t));
			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
