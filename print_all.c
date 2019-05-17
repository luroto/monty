#include "monty.h"

/**
 * print_all - Prints the elements of a stack
 *@stack: Double pointer to the head of a stack
 *@line_number: Number of the line which contains the order
*/
void print_all(stack_t **stack, unsigned int line_number)
{
	int iteranodo = 0;
	stack_t *iterante;

	(void) line_number;
	iterante = malloc(sizeof(iterante));
	if (iterante == NULL)
	{
		free(iterante);
	}
	iterante = *stack;
	while (iterante != NULL)
	{
		printf("%d\n", iterante->n);
		iterante = iterante->next;
		iteranodo++;
	}
	printf("%d", iteranodo);
	free(iterante);
}
