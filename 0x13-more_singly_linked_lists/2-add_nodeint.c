#include "lists.h"

/**
 * add_nodeint - Adding  new node at beginning of linked list
 * @head: THE pointer to first node in the list
 * @n: The Data to insert in that new node.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
