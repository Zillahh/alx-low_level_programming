#include "main.h"
/**
 * main - Determine if a number is positive, zero or negative
 *
 * 0: is the nujmber to be checked
 * Return: (0) success
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else 
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
