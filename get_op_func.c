#include "monty.h"

int get_op_func(char **tokens, stack_t **stack, unsigned int line_number)
{
	int conta = 0;
	instruction_t listcode[] = {
		{"push", push_stack},
		{"pall", print_all},
		{"pint", pint},
		{"pop", pop_stack},
		{"swap", swap_stack},
		{"add", add_stacks},
		{"nop", nop},
		{NULL, NULL}
		};
	while (conta < 7)
	{
		if (strcmp(*tokens, *(listcode[i].opcode)) == 0)
			   {
				   return (listcode[i].f);
			   }
		conta++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, *tokens);
	exit(EXIT_FAILURE);
	}
}
