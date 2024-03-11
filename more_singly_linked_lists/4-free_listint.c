#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to head of list
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *str;

	while (head)
	{
		str = head->next;
		free(head);
		head = str;
	}
}
