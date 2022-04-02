#include "main.h"

char *parse_path(char *firstArg)
{
	list *head;
	char *path;
	struct stat st;

	path = _getenv("PATH");
	head = pathToSLL(path);

	while (head != NULL)
	{
		if (chdir(head->dir) == 0)
		{
			if (stat(firstArg, &st) == 0)
			{
				head->dir = _strcat(head->dir, "/");
				head->dir = _strcat(head->dir, firstArg);
			}
		}
		else
		{
			head = head->next;
		}
	}
	return (NULL);
}
