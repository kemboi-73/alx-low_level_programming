#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: head node
 * @n: new node data
 * Return: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

if (!head)
return (0);
node = malloc(sizeof(listint_t));

if (!node)
	return (0);

node->n = n;
node->next = *head;
*head = node;

return (node);
}

