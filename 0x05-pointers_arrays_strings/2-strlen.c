#include "main.h"

/**
 * _strlen - return the length of string
 * @s: string parameter input
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

