#include "main.h"

/**
 * _puts - prints a string to stdout.
 * @str: string to print
 * _putcher prints a  new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
