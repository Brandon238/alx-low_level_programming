#include "main.h"

/**
 * _puts - parameter to be tested
 * @str: string to print
 *
 * Return: 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
