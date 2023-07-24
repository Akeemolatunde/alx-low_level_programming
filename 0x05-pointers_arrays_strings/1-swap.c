#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *function takes two integer pointers, 'a' and 'b', as input and swaps
 * values point to. The original values of 'a' and 'b' will be exchanged.
 *
 * @a: Pointer to the first integer to be swapped.
 * @b: Pointer to the second integer to be swapped.
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
