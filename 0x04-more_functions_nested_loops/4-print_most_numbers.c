#include "holberton.h"

/**
 *print_most_numbers - A function that prints the numbers from 0 to 9
 *except 2 and 4
 *
 *Return: Always Zero (success)
 */

void print_most_numbers(void)
{
int x;

x = 0;
while (x <= 9)
{
if (x != 2 && x != 4)

_putchar(x + '0');

x++;
}
_putchar('\n');
}
