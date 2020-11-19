#include <stdio.h>
#include <unistd.h>

/**
 *main- A function that prints a given string
 *Return: 1
 */

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, c, sizeof(c) - 1);
	return (1);
}
