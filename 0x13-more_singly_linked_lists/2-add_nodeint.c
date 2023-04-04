#include "lists.h"

/**
 * add_nodeint - adds a new node at begining of a linkedlist
 * @head: pointer to a listint_t list
 * @n: an int
 * Return: address of the added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
