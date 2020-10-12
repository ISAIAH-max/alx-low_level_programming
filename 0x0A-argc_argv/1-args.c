#include <stdio.h>

/**
 * main - Entry Point. Prints # of arguments passed
 * @argc: Number of Aguments
 * @argv: Array pointer to string
 * Return: Returns Always (0), Success
 */

int main(int argc, __attribute__((unused))char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
