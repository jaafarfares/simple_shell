#include "main.h"
/**
 * getpath - find if command is executable
 * @firstcmd: command
 * @splitPath: path
 * Return: Executable cmd
 */
char *getpath(char *firstcmd, char **splitpath)
{

	char *cmd;
	int i = 0;
	struct stat st;

	if (firstcmd [0]== '.' || firstcmd [0]== '/')
	{		
		if (stat(firstcmd, &st) ==0)
			return (firstcmd);
			
	}
	else
	{
		while (splitpath[i])
		{
			cmd = formsh(splitpath[i], firstcmd);
			
			if (stat(cmd, &st) == 0)
				return (cmd);
			i++;
		}
	}
	return (NULL);
	free(cmd);
}
