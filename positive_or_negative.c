#include "main.h"
/**
 * positive_or_negative - tests function that prints
 *  if integer is positive or negative
 *
 * @n: print postive if n greater than 1,
 *     zero if equal 0, else =ngative
 * Return: 0
 */
int positive_or_negative(int n)
{
if (n > 0)
printf("%i is postive\n", n);
else if (n == 0)
printf("%i is zero\n", n);
else
printf("%i is negative\n", n);
}
