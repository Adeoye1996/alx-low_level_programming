#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - The numbers of unique nodes counted
 * in a looped listint_t linked list.
 * @head: Check a pointer to the head of the listint_t.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - numbers of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *rabbits;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	rabbits = (head->next)->next;

	while (rabbits)
	{
		if (tortoise == rabbits)
		{
			tortoise = head;
			while (tortoise != rabbits)
			{
				nodes++;
				tortoise = tortoise->next;
				rabbits = rabbits->next;
			}

			tortoise = tortoise->next;
			while (tortoise != rabbits)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		rabbits = (rabbits->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

