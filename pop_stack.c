#include "monty.h"
/**
 *pop_stack - removes the top element of the stack
 *@stack: Double pointer to the stack as a whole
 *@line_number: Number of the line that
 */
void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *siguiente;
	int itera = 0 ;

	while (stack[itera] != NULL)
	{
		itera++;
	}
	if (itera == 0)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	siguiente = malloc(sizeof(siguiente));
	if (siguiente == NULL)
	{
		free(siguiente);
		fprintf(stderr, "Error: can't malloc");
		exit(EXIT_FAILURE);
	}
	siguiente = (*stack)->next;
	if (siguiente != NULL)
	{
		siguiente->prev = NULL;
		*stack = siguiente;
	}
	free(siguiente);
}
