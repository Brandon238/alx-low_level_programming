#include "main.h"
#include <stdio.h>

/**
 * print_array - function to be tested
 *
 * @a: array name
 * @n: number of elements of array
 *
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
