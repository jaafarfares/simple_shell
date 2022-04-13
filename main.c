#include "main.h"
/**
 * main-simple_shell
 * @unused: unused argc
 * @unused: unused argv
 * Return: Nothing.
 */

int main(int ac unused, char **av unused)
{
	char *cmd;
	char *path;
	char **splitcmd;
	char **splitpath;

	path = _getenv();
	if (path == NULL)
		return (0);
	splitpath = splitstr(path, ":\n");
	while (1)
	{
		prompt();

		cmd = read_line();
		splitcmd = splitstr(cmd, " \t\r\n");
		if (splitcmd == NULL)
		return (1);
		execute(splitcmd, splitpath, cmd);

		free(cmd);
		free(splitcmd);

		}

	free(splitpath);
	return (0);
}
