#include "main.h"

/**
 * print_diagonal- print space and slash symbol in configuration with int n
 *
 * Return - return 0
 */

void print_diagonal(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

