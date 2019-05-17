#include "monty.h"
/**
 *swap_stack - Swaps the top elements of the stack
 *@stack: Double pointer to the struct of the stack
 *@line_number: Number of the lines which contains the original order
 */
void swap_stack(stack_t **stack, unsigned int line_number)
{
	int i = 0, numsta = 0, temp = 0;

	while (stack[numsta] != NULL)
	{
		numsta++;
	}
	if (numsta < 1)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (stack != NULL)
	{
		if (i == 0)
		{
			temp = (*stack)->n;
			(*stack)->n = (*stack)->next->n;
		}
		if (i == 1)
		{
			(*stack)->n = temp;
		}
		i++;
	}
}
