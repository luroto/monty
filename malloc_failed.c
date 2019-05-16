#include "monty.h"
void malloc_failed(char **variable)
{
	free(variable);
	fprintf(stderr, " Error, malloc failed");
	exit(EXIT_FAILURE);
}
