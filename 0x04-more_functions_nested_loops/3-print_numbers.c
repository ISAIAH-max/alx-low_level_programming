#include "main.h"

/**
 *print_numbers - A function that prints the numbers from 0 to 9
 *
 *Return: Always zero (success)
 */

void print_numbers(void)
{
int x;

x = 0;
while (x <= 9)
{
_putchar(x + '0');

x++;
}
_putchar('\n');
}
