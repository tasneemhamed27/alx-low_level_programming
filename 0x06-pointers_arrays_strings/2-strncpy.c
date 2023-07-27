/**
 * _strncpy - function that copies a string
 * @src: the source string
 * @dest: the buffer storing the string copy
 * @n:  the max number of bytes to copied from src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int index, src_len = 0;
while (src[index++])
src_len++;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = '\n';

return (dest);
}

