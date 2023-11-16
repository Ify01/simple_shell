#ifndef SHELL_H
#define SHELL_H
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

#define DELIM " \t\n"

char *read_line(void);

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(const char *str);
int _execute(char **command, char **argv);
char **tokenizer(char *line);
void freearray2D(char **arr);
extern char **environ;
char *_getenv(char *var);
char *_getpath(char *command);
#endif
