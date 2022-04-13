#include "main.h"

/**
 * fun_builtin - check if the command passed is a builtin
 * @command: string to check
 *Return: -1 on failure 1 on success
 */

int fun_builtin(char **command)
{
	int i = 0;

	if (_strcmp(command[0], "exit") == 0)
	{
		if (command[1] == NULL)
		{
			free(command);
			exit(0);
		}
	}
	if (_strcmp(command[0], "env") == 0)
	{
		i = printenv();
		free(command);
		return (i);
	}
	free(command);
	return (0);
}
