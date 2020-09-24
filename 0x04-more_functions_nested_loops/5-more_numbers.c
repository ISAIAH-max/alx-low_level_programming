#include "holberton.h"

/**
 *more_numbers - Function that prints 10 times nuumbers from 0 to 14
 *
 *Return: Always zero (success)
 */

void more_numbers(void)
{
int x, y;

x = 0;
while (x < 10)
{
y = 0;
while (y <= 14)
{
if (y > 9)
_putchar(y / 10 + '0');

_putchar(y % 10 + '0');

y++;
}
x++;
_putchar('\n');
}
}
