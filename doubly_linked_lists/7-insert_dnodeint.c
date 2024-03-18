#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: double pointer to head of lsit
 * @idx: index of list where new node should be added and index starts at 0
 * @n: struct int
 *
 *Return: address of new node of NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int count = 0;

	if (h == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (current)
	{
		if (current->next == NULL && count == (idx - 1))
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if ((idx - 1) == count)
		{
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
