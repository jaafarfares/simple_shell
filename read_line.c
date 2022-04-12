#include "main.h"
/**
 * read_line - reads line from input
 * Return: string
 */
char *read_line(void)
{
	char *string;
	int input;
	size_t size = 0;

	string = malloc(sizeof(char*) * size);
	if (string == NULL)
	{
		perror("Error");
	}

	input = getline(&string, &size, stdin);

	if (input == -1)
	{
		exit(0);
	}

	return (string);
	free(string);
}
