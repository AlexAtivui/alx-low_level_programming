#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free a listint node
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temporal;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temporal;
	}

	*head = NULL;
}
