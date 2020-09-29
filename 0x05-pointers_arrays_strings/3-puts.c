#include "holberton.h"

/**
 *_puts - A function that prints a string, followed by a new line
 *@str: The string to be printed
 *Return: Always zero (success)
 */

void _puts(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
