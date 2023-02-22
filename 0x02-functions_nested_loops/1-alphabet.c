#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char CHAR = 97;

	for (CHAR = 97; CHAR < 123; CHAR++)
	{
		_putchar(CHAR);
	}
	_putchar('\n');
}
