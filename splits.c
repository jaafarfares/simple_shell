#include "main.h"
/**
 *splitstr-function that split the command into array 
 *@input:commend that read
 *@delmiter:begin of array
 */

char **splitstr(char *input, char *delimiter)
{
	char *token;
	char **toks;
	int count = 0;

	toks = malloc(sizeof(char *) * count);
	
	token = strtok(input, delimiter);
	while (token != NULL)
	{

		toks[count] = token;
		token = strtok(NULL, delimiter);
		count++;
	}
	toks [count] = token;

	return (toks);
}
