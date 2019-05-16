#include "monty.h"

/**
 * push_stack - Add a stack at the beginning.
 *@n: Data for the node
 *@head: Pointer to a pointer (nodes)
 * Return: the address of the new node or NULL if it fails.
 */
void *push_stack(stack_t **stack, unsigned int line_number)
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
}
