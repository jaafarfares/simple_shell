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

void exit(char **args);
extern char **environ;
int printenv(void);
int fun_builtin(char **command);
void free_array(char **str);
char *_getenv(void);
char **splitstr(char *input, char *delimiter);
int prompt(void);
char *read_line(void);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t size);
char *formsh(char *ar1, char *ar2);
char *getpath(char *firstcmd, char **splitPath);
int execute(char **splitcmd, char **splitpath, char *cmd);
#endif
