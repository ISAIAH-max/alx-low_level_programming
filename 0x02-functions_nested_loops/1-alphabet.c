#include "holberton.h"

/**
 *print_alphabet - function that prints the alphabets in lowercase
 */

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
