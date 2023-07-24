#include "main.h"

/**
 * puts2 - print every character of the string
 * @str: input
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
putchar(str[i]);
else
continue;
}
putchar('\n');
}
