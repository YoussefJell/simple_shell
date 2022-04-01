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

#endif
