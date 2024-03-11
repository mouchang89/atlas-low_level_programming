#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of listint_t linked list
 * @head: pointer to head of list
 *
 * Return: sum of all data otherwise 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}	
