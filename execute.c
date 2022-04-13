#include "main.h"
/**
 *execute- ....
 *@splitcmd: ....
 *@splitpath: ...
 *@unused: ....
 *Return: ....
 */

int execute(char **splitcmd, char **splitpath, char *cmd unused)
{
	pid_t child;
	int i;

	if (splitcmd[0] == NULL)
		return (1);
	if (fun_builtin(splitcmd))
		return (1);
	splitcmd[0] = getpath(splitcmd[0], splitpath);

	if (splitcmd[0] != NULL)
	{
		child = fork();

		if (child < 0)
		{
			perror("error in forking");
			free(splitcmd[0]);

		}
		else if (child == 0)
		{
			if (execve(splitcmd[0], splitcmd, environ) == -1)
			{
				perror("./hsh");
				free(splitcmd[0]);
			}
			exit(1);
		}
		else
		{
			wait(&i);
		}
	}
	else
	{
		perror("./hsh");
	}
	return (1);
}
