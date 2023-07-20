#include "main.h"
/**
 * print_square -  function that prints a square
 * @size: is the number of squares/number of times
 *Return: empty
 */
void print_square(int size)
{
int row, colum;
for (row = 0; row <= size; row++)
{
for (colum = 0; colum <= size; colum++)
_putchar('#');
putchar('\n');
}
}
