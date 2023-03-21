#include "main.h"

/**
 * print_last_digit - function to print last digit
 *
 * @r: parameter to be printed
 *
 * Return: always k
 */

int print_last_digit(int r)
{
	int k;

	k = r % 10;
	if (r < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
