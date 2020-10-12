#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point. Prints the name of a program.
 * @argc: Number of arguments to be passed
 * @argv: Array of pointers to arguments
 * Return: Always 0, Success
 */

int main(int argc, char **argv)
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}
