#include "holberton.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: The String used
 * @needle: Substring located
 * Return: A function that locates a substring
 */

char *_strstr(char *haystack, char *needle)
{
int x, y, z;

for (x = 0; haystack[x] != '\0'; x++)
{
for (z = x, y = 0; needle[y] != '\0'; y++, z++)
{
if (needle[y] != haystack[z] || haystack[z] == '\0')
{
break;
}
}
if (needle[y] == '\0')
{
return (haystack + x);
}
}
return (0);
}
