#include "holberton.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @n: the number used
 * Return: Always 0(success)
 */

int print_last_digit(int n)
{
int l;
if (n < 0)
{
n = n * -1;
{
l = n % 10;
return (l);
}
}
else if (n > 0)
{
l = n % 10;
return (l);
}
else if (n == 0)
{
return (0);
}
return (0);
}
