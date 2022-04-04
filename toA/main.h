#ifndef HEADER_FILE
#define HEADER_FILE
#define UNUSEDVAR __attribute__((unused))

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
int _strlen(const char *s);
char *_strcat(char *dest, char *src);
int _strcmp(const char *s1, const char *s2);
char *_strdup(char *src);
char *to_read(void);
char **checker(char *toCheck);
char *_getenv(const char *name);
int execute_arg(char **toExec);
char **split_path(char *path);
void print_env(void);
char **find_dir(char **toExec);
char *_strstr(char *haystack, const char *needle);
list *add_node(list *head, char *str);
list *pathToSLL(void);

#endif
