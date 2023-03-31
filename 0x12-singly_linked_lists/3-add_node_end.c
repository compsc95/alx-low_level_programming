#include "lists.h"

/**
 * add_node_end - adds a node at the begining of a list
 * @head: pointer to pointers of first elem in list_t list
 * @str: pointer to new elem to be added
 *
 * Return: new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next)
	{
		ptr->next = new;
	}
	ptr->next = new;
	return (new);
}
