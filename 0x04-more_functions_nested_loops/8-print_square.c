#include "holberton.h"

/**
 *print_square - function that prints a square
 *@size: the size of the square
 *Return: Always zero (success)
 */

void print_square(int size)
{
int x, y;

y = 0;

if (size < 1)
_putchar('\n');

while (y < size)
{
x = 0;
while (x < size)
{
_putchar('#');
x++;
}
_putchar('\n');
y++;
}
}
