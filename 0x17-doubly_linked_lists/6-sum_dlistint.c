#include "lists.h"

/**
 * sum_dlistint - sums all of the data in a linked list
 * @head: ptr to the head of the linked list
 * Return: sum of all nodes or 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
