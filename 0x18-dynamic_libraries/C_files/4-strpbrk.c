#include "main.h"

/**
 * _strpbrk - function that searches a string for
 *any of a set of bytes.
 * @s: String used
 * @accept: first occurrence in the string s
 * Return: pointer to the byte in s that matches
 *one of the bytes in accept, or NULL if no such
 *byte is found
 */

char *_strpbrk(char *s, char *accept)
{
int x, y;
char *z;

x = 0;
while (s[x] != '\0')
{
y = 0;
while (accept[y] != '\0')
{
if (accept[y] == s[x])
{
z = &s[x];
return (z);
}
y++;
}
x++;
}
return (0);
}
