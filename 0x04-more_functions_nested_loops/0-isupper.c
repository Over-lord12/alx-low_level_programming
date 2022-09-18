#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: parameter
 * Return: Alway return 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
