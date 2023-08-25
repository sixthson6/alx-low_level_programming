#include "lists.h"

/**
 * add_node_end - appends node to end of list
 * @head: pointer to the node to be added
 * @str: new string
 * Return: addr of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;

	list_t *end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = end_node;
	}

	return (end_node);

	if (end_node->str != NULL)
	{
		free(end_node->str);
	}

	free(end_node);
	return (NULL);
}
