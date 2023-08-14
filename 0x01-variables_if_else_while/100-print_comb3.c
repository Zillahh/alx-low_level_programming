#include <stdio.h>
/**
 * main - a program that prints different combinations of two digits
 *
 * Return: (0) success
 */
int main(void)
{
	int f;
	int s;

	for (f = '0'; f <= '9'; f++)
	{
		for (s = '0'; s <= '9'; s++)
		{
		if (f < s)
		{
			putchar(f);
			putchar(s);
			if (f != '8' || f == '8' && s != '9')
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
