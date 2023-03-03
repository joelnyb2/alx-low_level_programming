#include "main.h"
/**
 * _strlen - determine the lenght of a string
 * @str: the string passed to the function
 * Return: an integer value
 */
int _strlen(char str[])
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
