#include "monty.h"

char * _strtok (char *pritok)
{
	char *toks;
	unsigned int conta;

	toks = malloc(sizeof(char) * strlen(pritok));
	if (toks == NULL)
	{
		free(toks);
		exit(EXIT_FAILURE);
	}
	for (conta = 0; pritok[conta] != '\0'; conta++)
	{
		toks[conta] = strtok(pritok, " ");
		pritok = strtok(NULL, " ");
	}
	return(toks);
}
