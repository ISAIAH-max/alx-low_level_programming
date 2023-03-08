#include "main.h"

/**
 *  _pow_recursion -A function that returns the value
 *of x raised to the power of y
 * @x: Number being raised to
 * @y: The power
 * Return: return value of power of x
 */

int _pow_recursion(int x, int y)
{
int p;
p = x;
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (y == 1)
return (x);
p *= _pow_recursion(x, y - 1);
return (p);
}
