#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to
 * flip from one number to another.
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 *
 * Return: The number of bits needed to flip.
 * zillahh_of_ai
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
