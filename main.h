#ifndef MAIN_H
#define MAIN_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void free_memo(char **argv);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _putchar(char c);
void my_ppid(char **argv);
extern char **environ;
void env(void);
int in_built_cmd(char **argv);
char **token_func(char *line_read);
char *read_lineptr(void);

#endif
