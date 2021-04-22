#include "search_algos.h"

/**
 *binary_search- A function that searches for a value in a
 *sorted array of integers using the Binary search algorithm
 *@array: A pointer to the first element of the array to search in.
 *@size: The number of elements in array
 *@value: The value to search for
 *
 *Return: The index where value is located otherwise
 *-1 If value is not present in array or if array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int first, middle, last, x = 0;

	first = 0;
	last = size - 1;

	while (first <= last)
	{
		printf("Searching in array: ");

		x = first;

		while (x <= last)
		{
			if (x == last)
			{
				printf("%d\n", array[x]);
			}
			else
			{
				printf("%d, ", array[x]);
			}
			x++;
		}
		middle = first + (last - first) / 2;
		if (value == array[middle])
			return (middle);
		if (value > array[middle])
			first = middle + 1;
		else
			last = middle - 1;
	}
	return (-1);
}
