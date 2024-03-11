#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at end of list_t list
 * @head: head of linked list
 * @str: string to store in list
 *
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr_node;
	size_t i;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	for (i = 0; str[i];)
	{
		i++;
	}
	
	new_node->len = i;
	new_node->next = NULL;
	curr_node = *head;

	if (curr_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new_node;
	}
	return (*head);
}
