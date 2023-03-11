#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination array passed as an argument
 * @src: source array passed as an argument
 * @n: number of byte to be allocated and copied
 * Return: address of the copied 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int unsigned i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
