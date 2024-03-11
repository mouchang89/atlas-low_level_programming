#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of listint_t list
 * @head: pointer to head of list
 * @n: integer
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while ( last->next != NULL)
		{
			last = last->next;
		}
		lat->next = new;
	}
	return (*head);
}
