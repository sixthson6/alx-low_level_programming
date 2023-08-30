#include "lists.h"

/**
 * sum_listint - sum all data points of nodes
 * @head: head node
 *
 * Return: sum of data points
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;
	       
	current	= head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

