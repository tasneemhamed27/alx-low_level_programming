/**
 * _strncat - concatenates two string using
 * at most an inputted number of bytes from src
 * @dest: the string to be append upon
 * @src: the string to be append to dest
 * @n: the num of bytes from src to be append to dest
 *
 * Return:  Apointer to a resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
