#include "monty.h"
/**
 * push_stack - Add a stack at the beginning.
 *@stack: Double pointer to the head of the stack
 *@line_number: number of the line in the source file which contains the order
 * Return: the address of the new node or NULL if it fails.
 */
void push_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *nuevonodo;
	(void) line_number;

	nuevonodo = malloc(sizeof(nuevonodo));
	if (nuevonodo == NULL)
	{
		free(nuevonodo);
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	nuevonodo->n = value;
	nuevonodo->next = *stack;
	nuevonodo->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = nuevonodo;
	*stack = nuevonodo;
}
