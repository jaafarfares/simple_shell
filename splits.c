#include "main.h"
/**
 * splitstr - function that split the command into array
 *@input: commend that read.
 *@delimiter: begin of array.
 *Return: ...
 */

char **splitstr(char *input, char *delimiter)
{
	char *token;
	char **toks;
	int count = 0;

	toks = malloc(sizeof(char *) * 30);

	token = strtok(input, delimiter);
	while (token != NULL)
	{

		toks[count] = token;
		token = strtok(NULL, delimiter);
		count++;
	}
	toks[count] = token;

	free(toks);
	return (toks);

}
