#include "holberton.h"

/**
 *times_table - A function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
int num, multiplier, product;

for (num = 0; num <= 9; num++)
{
_putchar('0');
for (multiplier = 1; multiplier <= 9; multiplier++)
{
_putchar(',');
_putchar(' ');

product = num * multiplier;

if (product <= 9)
_putchar(' ');
else
_putchar((product / 10) + '0');

_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
