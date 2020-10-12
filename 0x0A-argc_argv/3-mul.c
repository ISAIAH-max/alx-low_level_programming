#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point. Multiplies passed arguments
 * @argc: Size of array argv
 * @argv: Array pointer to arguments
 * Return: Always (0), Success.
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
puts("Error");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
