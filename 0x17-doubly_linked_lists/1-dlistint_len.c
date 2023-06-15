#include "lists.h"
/**
 * dlistint_len - calculate number of elements in a linked list
 * @h: pointer to the head node
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
