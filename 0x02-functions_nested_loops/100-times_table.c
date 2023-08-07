
/*
#include "main.h"
#include <stdio.h>

 * print_times_table - Prints a times table  n x n, start from 0 to n times n.
 *
 * function takes an integer 'n' as input and prints a times table of  'n x n'
 * this  displays result of multiplying each row index by each column index,
 * ranging from 0 to 'n' times 'n'. and includes special formatting to align .
 *
 * @n: The size of the times table to be printed. between 0 and 15.
 */

#include "main.h"
#include <stdio.h>

// Function declaration
void print_times_table(int n);

int main() {
    int size;

    printf("Testing with n = 4:\n");
    size = 4;
    print_times_table(size);

    printf("\nTesting with n = 6:\n");
    size = 6;
    print_times_table(size);

    printf("\nTesting with n = 12:\n");
    size = 12;
    print_times_table(size);

    return 0;
}




/*
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
/*
