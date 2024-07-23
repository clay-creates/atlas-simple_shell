#include "shell.h"

/**
 * shell_loop - Main loop of the shell
 */

void shell_loop(void)
{
	/**
	 * Params:
	 * *line: A character pointer to hold the user entry line after using read_ling method
	 * **args: A character pointer to hold the tokenized line after using split_line method
	 * status: Holds a default status code for error handling
	 *
	 * A Do / While loop is created to be the main loop of the console
	 * Methods are called incrementally down the loop:
	 * 1. The user is prompted for input.
	 * 2. Store the user input line in the line var using read_line.
	 * 3. If the input is null, check if the input is from a terminal, print a newline, and exit.
	 * 4. The input line is tokenized and stored in the args array using split_line.
	 * 5. If the first token is null, free the allocated memory for line and args and continue the loop.
	 * 6. If the command is "exit", handle the exit process.
	 * 7. If the command is "env", handle displaying the environment variables.
	 * 8. For any other command, execute it and store the status.
	 * 9. Free the allocated memory for line and args before the next iteration.
	 */
	char *line;
	char **args;
	int status = 1;

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
			free(line);
			handle_exit(args);
		}
		else if (_strcmp(args[0], "env") == 0)
		{
			handle_env(args);
			free(line);
			free(args);
		}
		else
		{
			status = execute(args);
			free(line);
			free(args);
		}
	} while (status);

	if (line)
	{
		free(line);
		line = NULL;
	}
	if (args)
	{
		free(args);
		args = NULL;
	}
}
