#include "main.h"

/**
 *_strlen - pointer s
 *@s: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int len = 0;

	while  (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 *_strcmp - comparition
 *@s1:pointer
 *@s2:pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}

/**
 * _strncmp - compare two strings
 * @s1: string to be compare with str2
 * @s2: string to be compare with str1
 * @size: size of s2
 * Return: if equals return 0, -1 if don't
 */
int _strncmp(char *s1, char *s2, size_t size)
{
	unsigned int i, count = 0;

	for (i = 0; i < size; i++)
	{
		if (s1[i] != s2[i])
		{
			count++;
		}
	}
	if (count != 0)
		return (-1);
	else
		return (0);
}
/**
 * formsh - concatenate two string
 * @ar1: concatenate
 * @ar2: concatenate
 * Return: if equals return 0, -1 if don't
 */
char *formsh(char *ar1, char *ar2)
{
	int a, b, i;
	char *string;

	a = _strlen(ar1);
	b = _strlen(ar2);

	string = malloc(sizeof(char) * (a + b + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0 ; i < (a + b + 1) ; i++)
	{
		if (i < a)
			string[i] = ar1[i];
		else if (i == a)
			string[i] = '/';
		else
			string[i] = ar2[i - i - 1];
	}
	return (string);
}
/**
 *free_array - free an array
 *@str : an array of pointrs
 *Return: void
 */
void free_array(char **str)
{
	int i = 0;

	while (str[i] != NULL)
	{
		free(str[i]);
	}
	free(str);
}
