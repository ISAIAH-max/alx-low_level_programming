#include "main.h"

/**
 *clear_bit-function that sets the value of a bit to 0 at a given index
 *@n:Pointer to the bit
 *@index:index of the bit set
 *Return:1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
