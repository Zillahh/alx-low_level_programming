#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  a function that returns the
 * natural square root of a number.
 *
 * @n: number to calculate the natural square root
 *
 * Return: the natural number
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt - calculate natural square root
 * @n: number to calculate the square root
 * @i: iterative number
 *
 * Return: the natural square root 
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
