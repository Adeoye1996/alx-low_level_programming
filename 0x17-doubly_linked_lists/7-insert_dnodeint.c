#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *head = *h;

	unsigned int i = 1;

	if (idx == 0)

	{
		new = add_dnodeint(h, n);
	}

	else

	{
		while (head != NULL && i < idx)

		{
			head = head->next;
			i++;
		}

		if (head != NULL || (head == NULL && idx == i))

		{
			new = malloc(sizeof(dlistint_t));

			if (new != NULL)

			{
				new->n = n;
				new->prev = (idx == i) ? head : NULL;
				new->next = (head != NULL) ? head->next : NULL;

				if (head != NULL)

					head->next = new;

				if (new->next != NULL)

					new->next->prev = new;
			}
		}
	}

	return (new);
}
