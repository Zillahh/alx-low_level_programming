#include <stdio.h>
/**
 * main -  a program that prints combinations of single-digit numbers
 *
 * Return: (0) success
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
