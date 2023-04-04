#include "lists.h"

/**
 * free_listint - frees memory of a linkedlist
 * @head: pointer to 1st elem of a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		head = temp;
		temp = temp->next;
		free(head);
	}
}
