#include "shell.h"

/**
 * prompt - Displays the shell prompt
 */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		printf("($) ");
	}
}
