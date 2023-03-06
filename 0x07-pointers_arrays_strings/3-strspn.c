#include "main.h"

/**
 * _strspn - function that gets the length of
 *a prefix substring
 * @s: The string
 * @accept: sub string
 * Return:number of bytes in the initial segment
 *of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int x, y, z;

x = 0;
z = 0;

while (s[x] != '\0')
{
y = 0;
while (accept[y] != '\0')
{
if (s[x] == accept[y])
{
z++;
break;
}
y++;
}
if (accept[y] == '\0')
break;
x++;
}
return (z);
}
