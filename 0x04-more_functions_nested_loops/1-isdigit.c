#include "main.h"
/**
 * _isdigit - this checks if parameter is a digit or a character
 *
 * @c: parameter
 * Return: 1 if its number and 0 if it is otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
