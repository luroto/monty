#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of the list.
 *@n: Data for the node
 *@head: Pointer to a pointer (nodes)
 * Return: the address of the new node or NULL if it fails.
 */
stack_t *add_stack(stack_t **head, const int n)
{
	stack_t *nuevonodo;

	nuevonodo = malloc(sizeof(stack_t));
	if (nuevonodo == NULL)
	{
		free(nuevonodo);
		return (NULL);
	}
	nuevonodo->n = n;
	nuevonodo->next = *head;
	nuevonodo->prev = NULL;
	if (*head != NULL)
		(*head)->prev = nuevonodo;
	*head = nuevonodo;
	return (nuevonodo);
}
