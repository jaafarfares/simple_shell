#include "main.h"
/**
 *p_prompt - print the prompt
 *Return: 0 on succes 1 if failed
 */

int prompt(void)
{
	ssize_t w = 0;

	if (isatty(STDIN_FILENO) == 1)
	{
		w = write(1, "$ ", 2);
		if (w == -1)
			return (1);
	}
	return (0);
}
