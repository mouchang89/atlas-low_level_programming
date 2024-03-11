#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to list
 * @idx: where new node is added
 * @n: integer
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
i}
