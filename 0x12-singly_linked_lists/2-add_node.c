#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to asdd in the node
 *
 * Return: the address of the new element, or NULL IF IT FALLS
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL || (new_node->str = strdup(str)) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
