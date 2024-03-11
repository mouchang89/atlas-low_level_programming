#include "lists.h"

/**
 * free_listint2 - function that frees listint_t list
 * @head: pointer to list
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *str;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		str = (*head)->next;
		free(*head);
		*head = str;
	}
	head = NULL;
}
