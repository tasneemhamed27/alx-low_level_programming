/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i;
while (dest[len])
{
len++;
}

for (i = 0 ; src[i] != 0; i++)
{
dest[len] = src[i];
len++;
}
dest[len] = '\0';
return (dest);
}

