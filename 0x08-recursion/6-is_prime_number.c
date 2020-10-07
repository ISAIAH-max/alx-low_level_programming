#include "holberton.h"

int is_divisible(int num, int div);

/**
 * is_prime_number - a function that checks for Prime number
 * @n: Integer given
 * Return: returns 1 if the input integer is a prime number
 *otherwise return 0
 */

int is_prime_number(int n)
{
int div = 2;

if (n <= 1)
return (0);

if (n >= 2 && n <= 3)
return (1);

return (is_divisible(n, div));
}

/**
 * is_divisible -Check for divisible number
 * @num: Number checked
 * @div: Divisor
 * Return: returns 1  if divisible and 0 if indivisible
 */

int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);

if (div == num / 2)
return (1);

return (is_divisible(num, div + 1));
}
