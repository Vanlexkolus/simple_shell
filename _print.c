#include "shell.h"
/**
 * _print - print to the standard ouput
 * @str: pointer to the arguement
 * Return: void
 */
void _print(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
