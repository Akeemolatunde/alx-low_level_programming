#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments received
 * *@argc: arguments munber
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);

	return (0);
}
