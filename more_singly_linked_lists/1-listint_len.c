#include "lists.h"

/**
 * listint_len - returns number of elements in linked listint_t list
 *  @h: pointer to head of list
 *
 *  Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
