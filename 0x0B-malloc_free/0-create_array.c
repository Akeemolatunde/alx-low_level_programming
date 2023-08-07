#include "main.h"
#include <stdlib.h>
/**
 * craete_array - create an array of characters
 * @size: an input for base of the array int
 * @c: store character strings
 * Return: a pointer to base character c
 */
char *craete_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
