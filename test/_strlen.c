#include "main.h"
/**
 * _strlen - counts string length of s
 * @s: parameter
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
