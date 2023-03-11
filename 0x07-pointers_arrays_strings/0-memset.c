#include "main.h"
/**
 * _memset - takes array, character and the size of the array
 * @b: the character place holder
 * @n: n bytes of memory pointed by the string s
 * Return: address of the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
