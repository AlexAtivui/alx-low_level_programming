#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		char *p = h->str;

		if (p == NULL)
			printf("[o] (nil)\n");
		else
			printf("[%d] %s\n", h->len, p);

		count++;
		h = h->next;
	}

	return (count);
}
