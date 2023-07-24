#include "main.h"

/**
 * swap _int - Swaps the values of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to swap to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
