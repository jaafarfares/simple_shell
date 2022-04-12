#include "main.h"
/**
 * printenv - prints environment
 * Return: none
 */

int printenv(void)
{
	unsigned int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}
	return (1);
}
