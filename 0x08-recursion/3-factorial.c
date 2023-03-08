#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: Number given
 * Return: returns the factorial of a given number
 */

int factorial(int n)
{
int factor;
if (n < 0)
return (-1);
if (n <= 1)
return (1);
factor = n * factorial(n - 1);
return (factor);
}
