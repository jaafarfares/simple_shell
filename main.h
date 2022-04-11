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
void exit(char **args);


#endif
