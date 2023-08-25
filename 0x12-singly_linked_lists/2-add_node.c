#include "lists.h"

/**
 * add_node - append note to linked list
 * @head: pointer to the current head
 * @str: value of new head
 * Return: addr of new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;

	return (temp);
}
