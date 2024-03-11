#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to head of list
 *
 * Return: head node's data (n) or 0 if linked list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *str;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	str = (*head)->next;
	free(*head);
	*head = str;
	return (num);
}
