#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 *two diagonals of a square matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{
int x, sum1, sum2;
sum1 = 0;
sum2 = 0;

for (x = 0; x < size; x++)
{
sum1 += a[x];
a += size;
}
a -= size;

for (x = 0; x < size; x++)
{
sum2 += a[x];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
