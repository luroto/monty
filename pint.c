#include "monty.h"
/**
 *pint - prints the value at the top of the stack, followed by a newline
 *@stack: Double pointer to the stack
 *@line_number: Number of the line in the source file which provides the order
 */
void pint(stack_t **stack, unsigned int line_number)
{
	int a;

	if (stack != NULL)
	{
		a = (*stack)->n;
		printf("%d", a);
	}
	else
	{
		fprintf(stderr, "L%u, can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
