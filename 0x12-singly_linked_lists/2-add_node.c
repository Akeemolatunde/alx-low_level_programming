#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new note at the beginning of a list
 * @head: the original linked list
 * @str: the string to be added
 * Return: the address of the new list or NULL if failled
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		return (NULL);

		if (*head == NULL)
			new_node->next = NULL;
		else
		{
			new_node->next = *head;
			new_node->str = strdup(str);
			new_node->len = len(str);
			*head = new_node;
		}
		return (*head);
}
/**
 * len - get the length of str (string)
 * @str: the string to get it length
 * Return: length of the string
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
