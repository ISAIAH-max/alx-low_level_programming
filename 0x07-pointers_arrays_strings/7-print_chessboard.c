#include "holberton.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: The chaseboard to be printed
 *
 */

void print_chessboard(char (*a)[8])
{
int x, x2;

for (x = 0; a[x][7]; x++)
{
for (x2 = 0; x2 < 8; x2++)
_putchar(a[x][x2]);
_putchar('\n');
}
}
