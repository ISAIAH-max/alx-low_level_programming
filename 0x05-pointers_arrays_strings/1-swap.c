#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 *@a: First interger
 *@b: Second interger
 */

void swap_int(int *a, int *b)
{
int x;
x = *b;
*b = *a;
*a = x;
}
