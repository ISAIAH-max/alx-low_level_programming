#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array used
 * @size: size of the array
 * @cmp: function used to compare
 * Return:returns the index of the first element for
 *which the cmp function does not return 0
 *If no element matches, return -1
 *If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x, tmp;

if (size > 0 && array && cmp)
{
for (x = 0; x < size; x++)
{
tmp = cmp(array[x]);
if (tmp)
break;
}
if (x < size)
return (x);
}
return (-1);
}
