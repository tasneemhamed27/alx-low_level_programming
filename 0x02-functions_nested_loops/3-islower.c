#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: checks input of function
 * Return: return 1 if true, 0 otherwise
 */

int _islower(int c)

{
if (c >= 97 && c <= 122)
return (1);
return (0);
}

