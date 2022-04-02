#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 on success, less than 0 if s1 compares less than s2, and greater than 0 if s1 compares greater than s2.
 */
int _strcmp(const char *s1, const char *s2)
{
	unsigned int i = 0, result;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}

