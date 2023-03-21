#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
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
