#include "lists.h"

/**
 * free_listint2 - function to free a list.
 * @head: a pointer to the head of a list.
 *
 * Description: sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
