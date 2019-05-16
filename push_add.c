#include "monty.h"

/**
 * push_stack - Add a stack at the beginning.
 *@n: Data for the node
 *@head: Pointer to a pointer (nodes)
 * Return: the address of the new node or NULL if it fails.
 */
void push_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *nuevonodo;
	(void) line_number;

	nuevonodo = malloc(sizeof(stack_t));
	if (nuevonodo == NULL)
	{
		free(nuevonodo);
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	/*checkd = malloc(sizeof(tokens[1]));
	if (checkd == NULL)
	{
		malloc_failed(checkd);
	}
	while(checkd[contad] != '\0')
	{
		if (*(checkd)[contad] >= 48 && *(checkd)[contad] <=57)
		{
			contad++;
		}
		else
		{
			fprintf(stderr, "L%u:  usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
			}*/
	nuevonodo->n = value;
	nuevonodo->next = *stack;
	nuevonodo->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = nuevonodo;
	*stack = nuevonodo;
}
