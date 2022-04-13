#include "main.h"
/**
 *_getenv- .....
 *
 *
 *Return: ....
 */



char *_getenv(void)
{
	unsigned int i = 0;
	char *pat = NULL, *_path = "PATH=";

	while (environ[i] != NULL)
	{
		if (!_strncmp(environ[i], _path, 5))
		{
			pat = environ[i] + 7;
		}
		i++;
	}
	return (pat);
}

