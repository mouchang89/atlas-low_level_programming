#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of linked list
 * @head: pointer to list
 * @index: where node will be deleted
 *
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *str, *temp = *head;
	unsigned int node;

	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	str = temp->next;
	temp->next = str->next;
	free(str)
	return (1);
}
