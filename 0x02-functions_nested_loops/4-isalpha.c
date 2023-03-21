#include "main.h"

/**
 * _isalpha - function to print uppercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 if it is an uppercase
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
