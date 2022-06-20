#include "main.h"

/**
 * _memset() - fills string with constant char b up to n bytes
 * b: constant char
 * s: input pointer to string
 * n: number of bytes
 * Return: pointer to s string
 */

char *_memset(unsigned int n, char *s, char b,)
{
    unsigned int i;
    i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
