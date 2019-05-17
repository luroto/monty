#include "monty.h"
/**
 *get_op_func - Finds the matching function given the command provided
 *by the source file
 *@tokens: Double pointer to the tokenized arguments
 *@stack: Double pointer to the struct of the stack
 *@line_number: Number of the line in the original file which provided command
 * Return: 0 if it's sucessful
 */
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
		{"nop", nop_nada},
		{NULL, NULL}
		};
	while (listcode[conta].opcode != NULL)
	{
		if (strcmp(tokens[0], listcode[conta].opcode) == 0)
		{
			listcode[conta].f(stack, line_number);
		}
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, *tokens);
			exit(EXIT_FAILURE);
		}
		conta++;
	}
return (0);
}
