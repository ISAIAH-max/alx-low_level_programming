#include "holberton.h"

/**
 *print_line - A function that draws a straight line in the terminal
 *@n: The number to be used
 *Return: Always zero (success)
 */

void print_line(int n)
{
int x;

x = 0;
while (x < n)
{
_putchar('_');

x++;
}
_putchar('\n');
}
