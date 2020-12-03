#include "holberton.h"

/**
 *get_endianness -A function that checks the endianness
 *Return:0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int dig;
	char *endian;

	dig = 1;
	endian = (char *)&dig;

	if (*endian == 1)
		return (1);

	return (0);
}
