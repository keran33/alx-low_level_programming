#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 * @head: pointer to the first node.
 *
 * Return: pointer to the first node in new list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = next;
	}

	*head = first;

	return (*head);
}
