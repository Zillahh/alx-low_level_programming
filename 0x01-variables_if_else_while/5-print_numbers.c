#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10
 *
 * Return: (0) Success
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
