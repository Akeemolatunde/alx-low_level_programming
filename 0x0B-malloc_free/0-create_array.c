#include "main.h"
#include <stdlib.h>
/**
 * craete_array - create an array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: a pointer to array, NULL if fail
 */
char *craete_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
