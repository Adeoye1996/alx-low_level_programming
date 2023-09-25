#include "lists.h"

/**
 * listint_len - the number of elements returns in a linked lists
 * @h: the linked list of types listint_t to traverse
 *
 * Return: success number of nodes
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
