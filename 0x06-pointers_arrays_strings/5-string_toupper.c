#include "holberton.h"

/**
 * string_toupper - unction that changes all lowercase
 * letters of a string to uppercase
 * @c: String to be changed to uppercase
 * Return: string in uppercase
 */

char *string_toupper(char *c)
{
int x;
for (x = 0; c[x] != '\0'; x++)
{
if (c[x] >= 95 && c[x] <= 122)
{
c[x] -= 32;
}
}
return (c);
}
