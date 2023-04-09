#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @bi: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *bi)
{
	unsigned int total, power;
	int l;

	if (bi == NULL)
		return (0);

	for (l = 0; bi[l]; l++)
	{
		if (bi[l] != '0' && bi[l] != '1')
			return (0);
	}

	for (power = 1, total = 0, l--; l >= 0; l--, power *= 2)
	{
		if (bi[l] == '1')
			total += power;
	}

	return (total);
}
