#include "main.h"
/**
 * parse_path - parses the path to find executable
 * @firstArg: executable name or path to executable
 * Return: executable location if found
 */
char *parse_path(char *firstArg)
{
	char *path, **splitPath, *newPath;
	int i = 0;
	struct stat st;

	path = _getenv("PATH");
	if (path)
	{
		splitPath = split_path(path);
	}

	if (stat(firstArg, &st) == 0)
	{
		return (firstArg);
	}
	else
	{
		while (splitPath[i] != NULL)
		{
			newPath = _strcat(splitPath[i], "/");
			newPath = _strcat(splitPath[i], firstArg);
			if (stat(newPath, &st) == 0)
			{
				return (newPath);
			}
			else
			{
				newPath = NULL;
				i++;
			}
		}
	}
	return (NULL);
}
