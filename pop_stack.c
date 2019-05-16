#include "monty.h"

void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		malloc_failed(temp);
	}
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->prev != NULL && temp->next == NULL)
		{
			temp->prev->next = NULL;
		}
		else if (curr->prev != NULL)
	}
}
