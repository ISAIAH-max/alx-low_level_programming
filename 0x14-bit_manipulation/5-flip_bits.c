#include "holberton.h"

/**
 *flip_bits-A function that returns the number of bits you
 *would need to flip to get from one number to another
 *@n:First number
 *@m:Second number
 *Return:the number of bits you would need to flip to get
 *from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, bits;

	flip = n ^ m;
	bits = 0;
	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}
	return (bits);
}
