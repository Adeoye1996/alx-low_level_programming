#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)

		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)

	{
		*head = new;
		new->prev = NULL;
	}

	else

	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)

			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}

	return (new);
}

