#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 * Description: 'prints 10 times the alphabet, in lowercase'
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
