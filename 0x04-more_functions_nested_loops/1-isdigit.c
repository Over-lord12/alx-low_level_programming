#include "main.h"

/**
 * _isdigit - checks digit
 * @c: parameter
 * Return: Alway return 1 if digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
