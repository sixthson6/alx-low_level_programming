#include "lists.h"

/**
 * creatNew - create new node
 * @n: head node
 *
 * Return: created node
 */

listint_t *creatNew(int n)
{
	listint_t *creatNew = malloc(sizeof(listint_t));
	if (creatNew == NULL)
		return (NULL);

	creatNew->n = n;
	creatNew->next = NULL;

	return (creatNew);
}

/**
 * add_nodeint_end - add node at end of list
 * @head: head node
 * @n: value of node
 *
 * Return: address to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node;

	listint_t *nodeint_end = creatNew(n);
	if (nodeint_end == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = nodeint_end;
		return (NULL);
	}
	
	current_node = *head;

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	
	current_node->next = nodeint_end;

	return (nodeint_end);
}
