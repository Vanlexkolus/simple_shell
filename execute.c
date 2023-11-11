#include "shell.h"

/**
 * execute_command - This is a function that executes commands
 * @command: a constant char data-type that takes in the commands
 * from the standard out
 * Return: void
 */

void execute_command(const char *command)
{
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		/* Child process */
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		/* Parent process */
		wait(NULL);
	}
}

