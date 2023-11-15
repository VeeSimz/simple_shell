#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stddef.h>

void exec(char *token, char **input, char **env);
int myExit(char **cmd);
char *_strtok(char *input, char *delimiter);

#endif
