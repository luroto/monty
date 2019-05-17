#include "monty.h"
/**
 *nop_nada - does nothing
 *@stack: double pointer to the struct of the stack
 *@line_number: Number of line in the source which takes the order
 */
void nop_nada(stack_t **stack, unsigned int line_number)
{
	(void) **stack;
	(void)line_number;
}
