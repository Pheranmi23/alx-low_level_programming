#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: returns new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
