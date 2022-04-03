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
/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 on success.
 */
int _strcmp(const char *s1, const char *s2)
{
	unsigned int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: (pointer to dest)
 */
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
