#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function to be tested
 * @dest: destination array
 * @src: source array
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}