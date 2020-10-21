#include "function_pointers.h"

/**
 *array_iterator- A function that executes a function given as
 *a parameter on each element of an array.
 *@array: the array used
 *@size: Size of the array
 *@action: A pointer to the function to use
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t z;

if (array != NULL && action != NULL)
{
for (z = 0; z < size; z++)
{
action(array[z]);
}
}
}
