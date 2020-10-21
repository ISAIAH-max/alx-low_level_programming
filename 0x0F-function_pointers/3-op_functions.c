#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add -A fuction that add two integers
 *@a: First interger
 *@b: Second integer
 *Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}


/**
 *op_sub-A function that finds the difference of two integers
 *@a:First integer
 *@b:Second integer
 *Return: Difference
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul-multiplies two intergers
 *@a: First integer
 *@b: Second Integer
 *Return: Product
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div- Product of two integer
 *@a:First integer
 *@b:Second Integer
 *Return: Quotient
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}


/**
 *op_mod- Finds the remind
 *@a:First Integer
 *@b:Second Integer
 *Return:Reminder
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
