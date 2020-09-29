#include "holberton.h"

/**
 *puts2 - A function that prints every other character
 *of a string, starting with the first character,
 *followed by a new line
 *@str: String used
 *
 */

void puts2(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
if (x % 2 == 0)
_putchar(str[x]);
}
_putchar('\n');
}
