#include "lists.h"

/**
 * sum_listint - sum of all data (n) of a listint_t linked list
 * @head: first node pointer
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
