#include <stdio.h>

#include "main.h"


/**
 * print_numbers - func that print all numbers from 0 to 9
 *
 * Return: returns 0-9 plus a new line
 *
 */

void print_numbers(void)

{
	int j;

	for (j = 0; j <= 9; j++)
		_putchar(j + '0');
	_putchar('\n');
}
