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

/**
 * struct list - linked list
 * @dir: directory
 * @next: next link
 * Description: singly linked list node structure
 */
typedef struct list
{
	char *dir;
	struct list *next;
} list;

extern char **environ;
char *read_line(void);
char **split_str(char *line);
char **split_path(char *path);
int execute_arg(char **args, char **env);
char *_getenv(const char *name);
char *_strstr(char *haystack, const char *needle);
void print_env(void);
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
char *parse_path(char *firstArg);
list *pathToSLL(char *path);
list *add_node(list *head, char *str);

#endif
