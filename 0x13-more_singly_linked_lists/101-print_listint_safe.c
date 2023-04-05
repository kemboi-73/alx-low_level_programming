#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeptr - add an element at the beginning of a list of pointers
 * @head: a pointer to a pointer to the first node
 * @p: the element to add
 *
 * Return: If memory allocation fails or head is NULL, return NULL.
 * Otherwise, return the address of the new node.
 */
listptr_t *add_nodeptr(listptr_t **head, const listint_t *p)
{
	listptr_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listptr_t));
	if (!new)
		return (NULL);

	new->p = p;
	new->next = *head;
	*head = new;

	return (new);
}


/**
 * listptr_contains - check if a list of pointers contains an element
 * @head: a pointer to the first node
 * @p: the element to find
 *
 * Return: 1 if p is in the list, otherwise 0
 */
int listptr_contains(const listptr_t *head, const listint_t *p)
{
	if (!head)
		return (0);

	return (p == head->p || listptr_contains(head->next, p));

}


/**
 * free_listptr - free a linked list of pointers
 * @head: a pointer to the first node
 */
void free_listptr(listptr_t *head)
{
	if (head)
	{
		free_listptr(head->next);
		free(head);
	}
}


/**

