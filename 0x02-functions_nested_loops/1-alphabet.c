#include "main.h"
/**
 * main - Entry point
 * Description: 'prints the alphabet, in lowercase'
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
