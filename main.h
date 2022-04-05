#ifndef HEADER_FILE
#define HEADER_FILE

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

extern char **environ;
char *_getenv(const char *name);
char *_strstr(char *haystack, const char *needle);
char *_strcat(char *s1, char *s2);
int _strcmp(const char *s1, const char *s2);
char *_strstr(char *haystack, const char *needle);
void print_env(void);
int _strlen(const char *s);
char *check_path(char *firstArg, char **splitPath);
int execute_arg(char **args, char **splitPath);
void print_env(void);
char *read_line(void);
char **split_str(char *input, char *delimiter);
int _putchar(char c);
void handler (int num);

#endif
