#include "monty.h"
int value = 0;
int main(int argc, char **argv)
{
	char *gettingopcodes = NULL;
	char **tokens, *filename, **checkd;
	unsigned int line_number = 0;
	size_t filelize = 0;
	ssize_t fdgetline;
	stack_t *stack;
	FILE *file;
	int i = 0, contad = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error, Can't open %s", filename);
		exit(EXIT_FAILURE);
	}
	while ((fdgetline = getline(&gettingopcodes, &filelize, file) != EOF))
		{
			line_number++;
			tokens = malloc(sizeof(tokens));
			if (tokens == NULL)
			{
				malloc_failed(tokens);
			}
			tokens[i] = strtok(gettingopcodes, " ");
			do{
				i++;
				tokens[i] = strtok(NULL, " ");
			} while (tokens[i] != NULL);
			checkd = malloc(sizeof(tokens[1]));
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
                                }
			}
			stack = NULL;
			get_op_func(tokens, &stack, line_number);
		}
	free(tokens);
	free(checkd);
	return (0);
}
