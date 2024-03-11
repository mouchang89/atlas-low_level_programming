#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_int list
 * @h: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
