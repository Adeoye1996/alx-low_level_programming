#include "lists.h"

/**
 * pop_listint - the head nodes of a linked list deleted
 * @head: pointing to the first element in the linked list
 *
 * Return: success, data inside the elements that was deleted,
 * or returns 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
