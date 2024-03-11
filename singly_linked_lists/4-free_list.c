#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: head of linked list
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *curr_node;

	while ((curr_node = head) != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
