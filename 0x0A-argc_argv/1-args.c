#include <stdio.h>
#include "main.h"

/**
 * main - writes a program that prints the number of arguments passed into it
 * @args: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 *
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;

	return (0);
}
