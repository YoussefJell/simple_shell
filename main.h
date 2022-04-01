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

char *read_line(void);
char **split_str(char *line);
int execute_arg(char **args, char **env);
char *_getenv(const char *name);
char *_strstr(char *haystack, const char *needle);
void print_env(char **env);

#endif
