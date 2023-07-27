/**
 * _strcmp - compare pointers to two string
 * @s1: A pointer to first string to be copared
 * @s2: A pointer to second string to be compared
 * Return: if str1 < str2 , the negative differance of
 *           first unmatched character
 * if str1 == str2 0
 * if str1 > str2 , the positive differance of first unmatched character
 */
int _strcmp(char *s1, char *s2)
{
int equal = 0;
while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}

