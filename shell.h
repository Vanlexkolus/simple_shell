#ifndef SHELL_H
#define SHELL_H

/**
 * header files
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Functions prototypes
 */
void _print(const char *string);
void display_prompt(void);
void execute_command(const char *command);

#endif

