#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: pointer to the string to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	last = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (new);
}

