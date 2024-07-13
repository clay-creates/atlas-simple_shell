#include "shell.h"

/**
 * shell_loop - Main loop of the shell
 */

void shell_loop(void)
{
	char *line;
	char **args;
	int status = -1;

	do
	{
		prompt();
		line = read_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
			{
				printf("\n");
			}
			exit(0);
		}
		args = split_line(line);
		if (args[0] == NULL)
		{
			free(line);
			free(args);
			continue;
		}
		if (_strcmp(args[0], "exit") == 0)
		{
			handle_exit(args);
		}
		else if (_strcmp(args[0], "env") == 0)
		{
			handle_env(args);
		}
		else
		{
			status = execute(args);
		}

		free(line);
		free(args);
	} while (status);
}
