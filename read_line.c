#include "shell.h"

/**
 * read_line - Reads a line of input from the user
 *
 * Return: Returns the input line
 */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
