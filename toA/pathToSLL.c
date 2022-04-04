#include "main.h"
/**
 * add_node - adds a node
 * @head: first node
 * @str: string
 * Return: new node
 */
list *add_node(list *head, char *str)
{
	list *new, *ptr;

	new = malloc(sizeof(list));
	if (new == NULL)
		return (NULL);

	new->dir = str;
	new->next = NULL;

	ptr = head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;

	return (new);
}
/**
 * linked_list_of_path - adds a node
 * @path: path variable
 * Return: linked list of path
 */
list *pathToSLL(void)
{
	list *head;
	char *str, *delimit = ":";
	char *path;

	path = _getenv("PATH");

	head = malloc(sizeof(list));

	if (head == NULL)
		return (NULL);

	str = strtok(path, delimit);

	head->dir = str;
	head->next = NULL;

	while (str != NULL)
	{
		str = strtok(NULL, delimit);

		if (str == NULL)
			break;

		add_node(head, str);
	}
	return (head);
}
