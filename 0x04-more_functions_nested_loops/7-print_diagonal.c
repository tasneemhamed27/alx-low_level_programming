#include "main.h"

/**
 * print_diagonal -  draws a diagonal line
 * @n: is the number of times the / character
 *		should be printed
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				if (y == x)
					_putchar(32);
				else if (y < x)
					_putchar(92);
			}
			_putchar('\n');
		}
	}
}
