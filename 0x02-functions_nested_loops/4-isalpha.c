#include "main.h"
/**
 * _isalpha - checks if character is a letter
 *
 * @c: takes input from other functions
 * Return: return 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
