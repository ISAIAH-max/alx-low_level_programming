#include "holberton.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: The string used
 * Return: Encoded string
 */

char *leet(char *s)
{
int x = 0;
int x2;

char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (s[x])
{
for (x2 = 0; x2 <= 7; x2++)
{
if (s[x] == leet[x2] || s[x] - 32 == leet[x2])
s[x] = x2 + '0';
}
x++;
}
return (s);
}
