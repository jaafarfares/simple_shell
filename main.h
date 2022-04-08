#ifndef MAIN_H
#define MAIN_H
#define unused  __attribute__((unused))
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
extern char **environ;
int printenv(char **arg);
char *_getenv(void);
char **splitstr(char *input, char *delimiter);
int prompt(void);
char *read_line(void);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t size);
#endif
