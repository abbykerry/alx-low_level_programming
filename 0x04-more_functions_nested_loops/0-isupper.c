#include "main.h"


/**
 * _isupper - func that checks if a  character is uppercase or not
 *
 * @c: character in test
 *
 * Return: 1 whether it is, 0 otherwise
 *
 */



int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	else
		return (0);


}
