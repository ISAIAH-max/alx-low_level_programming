#include "holberton.h"

/**
 *_strncpy - A function that copies a string
 *@dest: Copied String
 *@src: The String to be copied
 *@n: Iterator
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; src[x] != '\0' && x < n; x++)
{
dest[x] = src[x];
}
for (; x < n; x++)
dest[x] = '\0';

return (dest);
}
