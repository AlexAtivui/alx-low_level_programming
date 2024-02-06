#include <stdlib.h>
#include "lists.h"


/**
  * delete_nodeint_at_index - delete node
  * @head: pointer to head
  * @index: node to be deleted
  * Return: 1 on success, -1 for failure
  */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store_node, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	store_node = *head;

	if (index == i)
	{
		*head = store_node->next;
		free(store_node);

		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (store_node == NULL || store_node->next == NULL)
			return (-1);

		store_node = store_node->next;
	}

	temp = store_node->next;
	if (temp == NULL)
		return (-1);

	store_node->next = temp->next;
	free(temp);

	return (1);
}
