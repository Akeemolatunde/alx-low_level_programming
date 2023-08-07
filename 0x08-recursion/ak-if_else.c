#include <stdio.h>

/**
 * main - print values base on defferent conditions
 * Return: 0
 */

int main(void)
{
	int a = 3;
	int b = 4;

	if (a < b)
	{
		printf("%d is less than %d\n", a, b);
	}
	else
	{
		printf("%d not less than %d\n", a, b);
	}
	return (0);
}
