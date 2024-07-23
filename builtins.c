#include "shell.h"

/**
 * handle_exit - Handles the exit command
 * @args: The arguments for the command
 */
void handle_exit(char **args)
{
	if (args)
	{
		free(args);
		args = NULL;
	}
	exit(0);
}

/**
 * handle_env - Handles the env command
 * @args: The arguments for the command
 */
void handle_env(char **args)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}

	if (args)
	{
		free(args);
		args = NULL;
	}
}
