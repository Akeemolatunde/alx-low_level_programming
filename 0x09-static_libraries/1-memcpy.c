#include "main.c"

/**
 * _memcpy - this coppies memory area
 * @dest: memory where it's stored
 * @src: memory where is's stored
 * @n: bytes number
 * Return: coppied memory with changed n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k;
	int i;

	k = 0;
	i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
