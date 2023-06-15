#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements in a linked list
 * @h: pointer to the head node
 * Return: count of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}

