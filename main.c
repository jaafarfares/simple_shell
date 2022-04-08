#include "main.h"


int main(int ac unused, char **av unused)
{
	char *cmd;
	char *path;
	char **splitcmd;
	char **splitpath;
	int i;

	path = _getenv();
	splitpath = splitstr(path, ":");

	while(i)
	{	
		prompt();

		cmd = read_line();
		splitcmd = splitstr(cmd, " \t");
		i = execute(splitcmd, splitpath);

		free(cmd);
		free(splitcmd);
	}

	free(splitpath);

	return (0);
}
