#include "main.h"

/**
 * _memcpy - function to be tested
 * @dest: memory area where copied
 * @src: memory area where stored
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		src[r] = dest[r];
		n--;
	}
	return (dest);
}
