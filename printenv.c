#include "main.h"
/**
 * printenv - prints environment
 * Return: none
 */

int printenv(char **arg unused)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}
	return (1);
}
