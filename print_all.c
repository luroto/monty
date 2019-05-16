#include "monty.h"

/**
 * print_dlistint - Prints the elements of a list
 *@h: Pointer from another function
 * Return: the number of nodes
 */
void print_all(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	size_t iteranodo = 0;

	h = *stack;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		iteranodo++;
	}
}
