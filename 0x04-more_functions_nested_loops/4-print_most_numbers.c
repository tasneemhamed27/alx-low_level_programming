#include "main.h"

/**
 * print_most_numbers - prints an numb since 0 to 9
 * Description: print the numbers excluding 2,4
 * Return: the numbers since 0 to 9
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
