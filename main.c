#include "monty.h"

int main(char **av, int ac)
{
	char *commandline = NULL, tokens;
	int fdopfile;
	int countlines = 0;
	size_t commlinsize;
	FILE *file;

	if (ac != 2)
	{
		write(STDERR, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	*commandline = getline(&commandline, &commlinsize, stdin);
	if (commandline == NULL)
	{
		free(commandline);
		exit(EXIT_FAILURE);
	}
	file = fopen(commandline[1], "r");
	if (file == NULL)
	{
		write(STDOUT_FILEN0, "Error, Can't open file" 23);
		exit(EXIT_FAILURE);
	}
	countlines++;
	tokens = strtok(file, " ");
}
