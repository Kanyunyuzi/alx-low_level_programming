#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase followed by a new line
 * Return 0
 */

void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
