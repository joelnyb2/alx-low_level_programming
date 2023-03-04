#include "main.h"
/**
 * _isupper - takes a character checks upper or lower case
 * @c: the character taken as an argument
 * Return: 1 if uppercase and 0 is otherwise
 */
int _isupper(char c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else
		i = 0;
	return (i);

}
