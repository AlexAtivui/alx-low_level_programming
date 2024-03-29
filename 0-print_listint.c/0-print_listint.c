#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the elements in a lintint_t list
 * @h: head node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);

		count++;
		h = h->next;
	}

	return (count);
}
