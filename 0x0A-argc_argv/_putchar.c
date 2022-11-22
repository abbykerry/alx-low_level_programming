#include <unistd.h>

/**
 * _putchar - writes the chararcter to stdout
 * @c - the character to print
 *
 * Return : 1 ( success)
 * Return : -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
