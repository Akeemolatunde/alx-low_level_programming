#include <stdio.h>

/**
 * main - print number 1 - 10
 * Return: 0
 */

int main(void)
{
	int count = 1;
	int number = 5;

	while (count <= 10)
	{
		int product = number * count;

		printf("%d\n", product);
		count++;
	}
	return (0);
}
