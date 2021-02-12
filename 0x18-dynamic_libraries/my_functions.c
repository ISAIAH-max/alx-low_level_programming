#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 *add- Function that finds the product of two integers
 *@a: First integer
 *@b: Second integer
 *
 *Return: Product of the two integers
 */
int add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 *sub- Function that finds the difference of two integers
 *@a: First integer
 *@b: Second integer
 *
 *Return: Difference of the two integers
 */
int sub(int a, int b)
{
	int dif = 0;

	dif = a - b;
	return (dif);
}

/**
 *mul- Function that finds the product of two integers
 *@a: First integer
 *@b: Second integer
 *
 *Return: Product of the two integers
 */
int mul(int a, int b)
{
	int pro = 0;

	pro = a * b;
	return (pro);
}

/**
 *div- Function that finds the Quotient of two integers
 *@a: First integer
 *@b: Second integer
 *
 *Return: Quotient of the two integers
 */
int div(int a, int b)
{
	int quo = 0;

	quo = a / b;
	return (quo);
}

/**
 *mod- Function that finds the Modulus/Remender of two integers
 *@a: First integer
 *@b: Second integer
 *
 *Return: Modulus of the two integers
 */
int mod(int a, int b)
{
	int rem = 0;

	rem = a % b;
	return (rem);
}
