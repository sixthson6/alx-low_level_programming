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
 * add_nodeint - add node at beginning of list
 * @head: head node
 * @n: data value in newly created node
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeint = creatNew(n);
	if (nodeint == NULL)
		return (NULL);

	nodeint->next = *head;
	*head = nodeint;

	return (nodeint);
}
