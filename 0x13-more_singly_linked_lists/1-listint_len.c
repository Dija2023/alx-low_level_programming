#include "lists.h"

/**
 * listint_len - Returns number of elem in a linked lists
 * @h: Linked List of type listint_t to traverse.
 *
 * Return: How many nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
