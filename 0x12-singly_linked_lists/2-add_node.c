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
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
		if (temp == NULL)
		return (NULL);

			while (str[length])
				length++;
	temp->len = length++;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

