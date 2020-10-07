#include "holberton.h"

int s_qrt(int x, int r);

/**
 * _sqrt_recursion -function that returns the natural
 *square root of a number
 * @n: Number given
 * Return: return -1 If n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
int r = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);
return (s_qrt(n, r));
}


/**
 * sqrt - A function that calculates for a squareroot
 *of a given number
 * @x: Number to determine a square root
 * @r: Root tested
 * Return: return -1 If n does not have a natural square root
 */

int s_qrt(int x, int r)
{
if ((r * r) == x)
return (r);

if (r == x / 2)
return (-1);

return (s_qrt(x, r + 1));
}
