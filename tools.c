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
