#include "main.h"
/**
 * _isdigit - checks wether it is a digit or not
 * @c: character taken as an argument
 * Return: 1 if c is a digit and 0 of otherwise
 */
int _isdigit(char c)
{
	int i;

	if (c >= '0' && c <= '9')
	{
		i = 1;
	}
	else
		i = 0;
	return (i);

}
