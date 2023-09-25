#include "lists.h"

/**
 * add_nodeint - it add a new node at the beginning of a linked list
 * @head: it is pointing to the first node in the list
 * @n: the data to be inserted in the new node
 *
 * Return: success pointing to the new node, or NULL it if fails
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
