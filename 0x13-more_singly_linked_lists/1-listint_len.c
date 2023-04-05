#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

while (h)
{
len++;
h = h->next;
}
return (len);
}
