#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: (0) success
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
