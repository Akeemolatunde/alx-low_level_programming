#include <stdio.h>
/**
 * main - prints all the number of base 16 in lowercase
 * folowed by a new line
 * Return: Always 0
 */

int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
