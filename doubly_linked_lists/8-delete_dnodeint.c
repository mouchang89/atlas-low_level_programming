#include "lists.h"

/**
 *  delete_dnodeint_at_index - deletes node at index index of a linked list
 *  @head: double pointer to head of list
 *  @index: index of node that should be deleted and starts at 0
 *
 *  Return: 1 if successful and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
		{
			node->next->prev = NULL;
		}
		free(node);
		return (1);
	}
	for (count = 0; node != NULL && count < (index - 1); count++)
	{
		node = node->next;
	}
	if (node == NULL || node->next == NULL)
	{
		return (-1);
	}
	if (node->next->next != NULL)
	{
		node->next = node->next->next;
		free(node->next->prev);
		node->next->prev = node;
		return (1);
	}
	else
	{
		free(node->next);
		node->next = NULL;
		return (1);
	}
	return (-1);
}
