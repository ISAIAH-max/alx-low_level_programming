#include "holberton.h"

/**
 *print_last_digit - function that prints the last digit
 *@n: The number used
 *Return: Always zero 0
 */

int print_last_digit(int n)
{
int l;
l = n % 10;

if (n < 0)
{
l = ((n % 10) * -1);
return (l);
}
else
{
l = (n % 10);
return (l);
}
_putchar('\n');

return (l);
}
