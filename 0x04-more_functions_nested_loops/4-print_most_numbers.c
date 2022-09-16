#include <stdio.h>

#include "main.h"

/**
 * prints_numbers - func prints numbers from 0 to 9
 *
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: returns 0 to 9, followed by a new line
 *
 */

void print_most_numbers(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2) || (n == 4))

			continue;
		else
			_putchar('0');
	}
	_putchar('\n');
}
