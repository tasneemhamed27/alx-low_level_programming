/**
 * _strncpy - function that copies a string
 * @src: the source string
 * @dest: the buffer storing the string copy
 * @n:  the max number of bytes to copied from src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
