#include "main.h"

/**
 * set_bit - sets a bit at given index to 1
 * @n: pointer to the changing number
 * @index: the bit to set index
 * Return: 1 for success and -1 if failes
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
