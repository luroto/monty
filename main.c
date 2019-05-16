#include "monty.h"
int value = 0;
int main(int argc, char **argv)
{
	char *gettingopcodes = NULL;
	char **pritok, *filename;
	unsigned int countlines = 0;
	size_t filelize = 0;
	ssize_t fdgetline;
	stack_t *stack;
	FILE *file;
	int i = 0;

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
			countlines++;
			printf("So far.\n # of lines: %u\n", countlines);
			i = 0;
			pritok = malloc(sizeof(pritok));
			pritok[i] = strtok(gettingopcodes, " ");
			do{
				i++;
				pritok[i] = strtok(NULL, " ");
				printf("%s,  %i\n", pritok[i-1], i-1 );
			} while (pritok[i] != NULL);
			value = atoi(pritok[1]);
			stack = NULL;
			get_op_func(pritok, &stack, countlines);
		}
	return(0);
}
