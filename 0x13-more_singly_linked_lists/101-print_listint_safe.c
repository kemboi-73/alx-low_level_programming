#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current, *loop_node;

current = head;
while (current != NULL)
{
count++;
printf("[%p] %d\n", (void *)current, current->n);

if (current->next >= current)
{
loop_node = current->next;
while (loop_node != current)
{
count++;
printf("[%p] %d\n", (void *)loop_node, loop_node->n);
loop_node = loop_node->next;
	}
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}

current = current->next;
	}

if (current == NULL)
return (count);
else
exit(98);
}

