#include "holberton.h"

/**
 *_strncat - function that concatinate two strings
 *@dest:First string
 *@src: second string
 *@n: maximum bytes to be used from x
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int x, y;

x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (src[y] != 0 && y < n)
{
dest[x] = src[y];
y++;
x++;
}
dest[x] = '\0';
return (dest);
}
