#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of listint_t list
 * @head: pointer to head of list
 * @n: integer
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);;
}
