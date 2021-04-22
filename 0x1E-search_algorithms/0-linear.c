#include "search_algos.h"

/**
 *linear_search- A function that searches for a value in an
 *array of integers using the Linear search algorithm
 *@array: A pointer to the first element of the array to search in
 *@size: The number of elements in array
 *@value: The value to search for
 *
 *Return: The first index where value is located otherwise
 *-1 If value is not present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
