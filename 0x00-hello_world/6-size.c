#include <stdio.h>
/**
 * main -displays size of data types
 *
 * Return: (0) always
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int c;
	float d;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(S)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)", sizeof(e));
	return (0);
}