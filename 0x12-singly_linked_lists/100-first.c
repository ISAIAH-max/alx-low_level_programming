#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 *hare -A function that prints You're beat! and yet, you must
 *allow,\nI bore my house upon my back!\n before the main function
 *is executed
 */

void hare(void)
{
printf("You're beat! and yet, you must allow,\n"
	 "I bore my house upon my back!\n");
}
