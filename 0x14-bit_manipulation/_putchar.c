#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single character to standard output
 *
 * @c: the character to be written
 *
 * Return: On success, the character written.
 * On error, -1 is returned and errno is set appropriately.
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
