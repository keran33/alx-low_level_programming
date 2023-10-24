#include "lists.h"

/**
 * pop_listint - function to delete the head node
 * of a list.
 * @head: pointer to the first element in the list
 *
 * Return: data inside deleted element, or 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
