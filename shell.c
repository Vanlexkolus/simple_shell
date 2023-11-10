#include "shell.h"
/**
 * main - create simple shell
 * Return: 0 if successful
 */
int main(void)
{
	char command[128];

	while (1)
	{
		display_prompt();
		read_command(command, sizeof(command));
		execute_command(command);
	}
	return (0);
}
