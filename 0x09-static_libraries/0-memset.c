#include "main.h"
/**
 * _memset - fills a bock of memory a specivic value
 * @s: state address of memory to be filled
 * @b: the desired value
 * @n: number of bites to be changed
 * Return: chnge array with a new value for n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k;

	k = 0;
	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
