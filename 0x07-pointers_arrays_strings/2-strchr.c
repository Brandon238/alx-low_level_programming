#include "main.h"

/**
 * _strchr - function to be tested
 * @s: input
 * @c: input
 *
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
