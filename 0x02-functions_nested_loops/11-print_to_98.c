#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - fuction that prints natural numbers from n to 98
 *@n: my number
 *Return: Always 0 (success)
 */

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
