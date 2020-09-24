#include "holberton.h"

/**
 *print_diagonal - function that draws a diagonal ine on the terminal
 *@n: he number of times the character\should be printed
 *Return: Always zero (success)
 */

void print_diagonal(int n)
{
int x, y;

x = 0;

while (n > 0)
{
y = x;
while (y > 0)
{
_putchar(' ');
y--;
}
_putchar('\\');
_putchar('\n');
x++;
n--;
}
if (x < 1)
_putchar('\n');
}
