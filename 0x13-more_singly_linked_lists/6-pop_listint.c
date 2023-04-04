#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to pointer of head node in a listint_t list
 *
 * Return: data in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	size_t n;


	if (!(*head))
	{
	return (0);
	}

	temp = *head;

	*head = (*head)->next;
	n = temp->n;

	free(temp);

	return (n);
}
