#include "holberton.h"

/**
 *puts_half - function that prints half of a string, followed by a new lin
 *@str:String used
 *
 */

void puts_half(char *str)
{
int n, m;
for (m = 0; str[m]; m++)
{
}
for (n = m / 2; str[n]; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
