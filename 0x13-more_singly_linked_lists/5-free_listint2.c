#include "lists.h"

/**
 * free_listint2 - it frees a linked list
 * @head: pointing to the listint_t list freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
