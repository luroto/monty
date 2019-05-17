#include "monty.h"
/**
 *add_stacks - adds the values of the top 2 stacks
 *@stack: Double pointer to the head of the stack
 *@line_number: Number of the line which stores the order
 */
void add_stacks(stack_t **stack, unsigned int line_number)
{
	int i = 0, a = 0, b = 0, c, iteranod;
	while (stack[iteranod] != NULL)
	{
		iteranod++;
	}
	if (iteranod < 1)
	{
		fprintf(stderr, "L%u: can't add, stack too short", line_number);
	}
	while (*stack != NULL && i < 2)
	{
		if (i == 0)
		{
			a = (*stack)->n;
		}
		if (i == 1)
		{
			b = (*stack)->n;
		}
		i++;
		*stack = (*stack)->next;
	}
	c = a + b;
	printf("%d", c);
}
