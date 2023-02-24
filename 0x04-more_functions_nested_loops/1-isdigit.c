#include "main.h"

/**
 * _isdigit - checks for lowercase character.
 * @c: caracter recibo por main.
 * Return: 1 if c is uppercase
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
