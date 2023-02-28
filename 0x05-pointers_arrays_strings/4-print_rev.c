#include "main.h"

/**
 * print_rev - prints a string, followed by a new line.
 *
 * @s: input string to print.
 */

void print_rev(char *s)
{
	int i;

	char len;
       
	len = _strlen(*s);

	for (i = len; i >= 0; i--)
		_putchar(*s[i]);

	_putchar('\n');
}
