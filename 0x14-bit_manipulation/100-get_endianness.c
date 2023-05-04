#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *)&num;

	if (*c)
		return (1); /* little endian */
	else
		return (0); /* big endian */
}
